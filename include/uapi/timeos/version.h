/* include/uapi/timeos/version.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef INCLUDE_UAPI_TIMEOS_VERSION_H_
#define INCLUDE_UAPI_TIMEOS_VERSION_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_version_value_t;
typedef struct timeos_version_state {
    uint64_t value;
    uint32_t flags;
} timeos_version_state_t;

static inline timeos_version_value_t timeos_version_read(const timeos_version_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* INCLUDE_UAPI_TIMEOS_VERSION_H_ */
