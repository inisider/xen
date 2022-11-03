#ifndef __RISCV_SETUP_H_
#define __RISCV_SETUP_H_

#include <public/version.h>

extern domid_t max_init_domid;

paddr_t next_module(paddr_t s, paddr_t *end);
void fw_unreserved_regions(paddr_t s, paddr_t e,
                           void (*cb)(paddr_t, paddr_t), int first);

#define NR_VCPUS 2

/* Devices */
#define PLIC_BASE  0xc000000
#define PLIC_SIZE  0x0210000
#define PLIC_END (PLIC_BASE + PLIC_SIZE)

#endif /* __RISCV_SETUP_H_ */
/*
 * Local variables:
 * mode: C
 * c-file-style: "BSD"
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */
