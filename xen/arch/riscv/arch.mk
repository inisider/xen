########################################
# RISCV-specific definitions

$(call cc-options-add,CFLAGS,CC,$(EMBEDDED_EXTRA_CFLAGS))
$(call cc-option-add,CFLAGS,CC,-Wnested-externs)
$(call cc-option-add,CFLAGS,CC,-mstrict-align)
$(call cc-option-add,CFLAGS,CC,-mtune=size)

CFLAGS-$(CONFIG_RISCV_64) += -mabi=lp64

riscv-march-$(CONFIG_RISCV_ISA_RV64IMA) := rv64ima
riscv-march-$(CONFIG_RISCV_ISA_C)       := $(riscv-march-y)c

# Newer binutils versions default to ISA spec version 20191213 which moves some
# instructions from the I extension to the Zicsr and Zifencei extensions.
riscv-march-y := $(firstword $(subst -march=,, $(call cc-option,$(CC),\
                                  -march=$(riscv-march-y)_zicsr_zifencei,\
                                  -march=$(riscv-march-y))))

# Note that -mcmodel=medany is used so that Xen can be mapped
# into the upper half _or_ the lower half of the address space.
# -mcmodel=medlow would force Xen into the lower half.

CFLAGS += -march=$(riscv-march-y) -mstrict-align -mcmodel=medany
