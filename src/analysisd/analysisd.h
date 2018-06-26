/* Copyright (C) 2009 Trend Micro Inc.
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

#ifndef _LOGAUDIT__H
#define _LOGAUDIT__H

#include <sys/types.h>

#include "decoders/decoder.h"

/* Time structures */
extern int today;
extern int thishour;
extern int prev_year;
extern char prev_month[4];

extern int __crt_hour;
extern int __crt_wday;

extern struct timespec c_timespec; /* Current time of event. Used everywhere */
#define c_time c_timespec.tv_sec

/* Local host name */
extern char __shost[512];

extern OSDecoderInfo *NULL_Decoder;

#define WM_SYS_LOGTAG ARGV0 ":syscollector" // Tag for log messages

typedef struct cpu_info {
    char *cpu_name;
    int cpu_cores;
    double cpu_MHz;
} cpu_info;

void w_get_queues_size();
void w_get_initial_queues_size();

#define OSSEC_SERVER    "ossec-server"
#define MAX_DECODER_ORDER_SIZE  1024

#endif /* _LOGAUDIT__H */
