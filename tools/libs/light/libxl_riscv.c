#include "libxl_internal.h"
#include "libxl_arch.h"
#include "libxl_libfdt_compat.h"
#include "libxl_arm.h"

#include <stdbool.h>
#include <libfdt.h>
#include <assert.h>
#include <xen/device_tree_defs.h>

int libxl__arch_domain_prepare_config(libxl__gc *gc,
                                      libxl_domain_config *d_config,
                                      struct xen_domctl_createdomain *config)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return ERROR_FAIL;
}

int libxl__arch_domain_save_config(libxl__gc *gc,
                                   libxl_domain_config *d_config,
                                   libxl__domain_build_state *state,
                                   const struct xen_domctl_createdomain *config)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return ERROR_FAIL;
}

int libxl__arch_domain_create(libxl__gc *gc,
                              libxl_domain_config *d_config,
                              libxl__domain_build_state *state,
                              uint32_t domid)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return 0;
}

int libxl__arch_extra_memory(libxl__gc *gc,
                             const libxl_domain_build_info *info,
                             uint64_t *out)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return ERROR_FAIL;
}

int libxl__arch_domain_init_hw_description(libxl__gc *gc,
                                           libxl_domain_config *d_config,
                                           libxl__domain_build_state *state,
                                           struct xc_dom_image *dom)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return ERROR_FAIL;
}

int libxl__arch_domain_finalise_hw_description(libxl__gc *gc,
                                               uint32_t domid,
                                               libxl_domain_config *d_config,
                                               struct xc_dom_image *dom)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return ERROR_FAIL;
}

int libxl__arch_build_dom_finish(libxl__gc *gc,
                                 libxl_domain_build_info *info,
                                 struct xc_dom_image *dom,
                                 libxl__domain_build_state *state)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return ERROR_FAIL;
}

int libxl__arch_vnuma_build_vmemrange(libxl__gc *gc,
                                      uint32_t domid,
                                      libxl_domain_build_info *info,
                                      libxl__domain_build_state *state)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return ERROR_FAIL;
}

int libxl__arch_domain_map_irq(libxl__gc *gc, uint32_t domid, int irq)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return ERROR_FAIL;
}

void libxl__arch_domain_create_info_setdefault(libxl__gc *gc,
                                               libxl_domain_create_info *c_info)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
}

void libxl__arch_domain_build_info_setdefault(libxl__gc *gc,
                                              libxl_domain_build_info *b_info)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
}

int libxl__arch_passthrough_mode_setdefault(libxl__gc *gc,
                                            uint32_t domid,
                                            libxl_domain_config *d_config,
                                            const libxl_physinfo *physinfo)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
    return ERROR_INVAL;
}

void libxl__arch_update_domain_config(libxl__gc *gc,
                                      libxl_domain_config *dst,
                                      const libxl_domain_config *src)
{
    LOG(ERROR, "TODO: add support of %s", __func__);
}

/*
 * Local variables:
 * mode: C
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */