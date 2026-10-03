/* kernel/drivers/pci/pci.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef KERNEL_DRIVERS_PCI_PCI_H_
#define KERNEL_DRIVERS_PCI_PCI_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_pci_value_t;
typedef struct timeos_pci_state {
    uint64_t value;
    uint32_t flags;
} timeos_pci_state_t;

static inline timeos_pci_value_t timeos_pci_read(const timeos_pci_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* KERNEL_DRIVERS_PCI_PCI_H_ */
