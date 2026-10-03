/* include/uapi/timeos/time.h | Copyright (c) 2026 Codetable Software | SPDX-License-Identifier: MIT */
#ifndef INCLUDE_UAPI_TIMEOS_TIME_H_
#define INCLUDE_UAPI_TIMEOS_TIME_H_

#include <stdint.h>
#include <stddef.h>

typedef uint64_t timeos_time_value_t;
typedef struct timeos_time_state {
    uint64_t value;
    uint32_t flags;
} timeos_time_state_t;

static inline timeos_time_value_t timeos_time_read(const timeos_time_state_t *state) {
    return state ? state->value : 0u;
}

#endif /* INCLUDE_UAPI_TIMEOS_TIME_H_ */
