/*-
 * Copyright (c) 2004 Marcel Moolenaar
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * $FreeBSD: releng/11.4/sys/amd64/include/gdb_machdep.h 331722 2018-03-29 02:50:57Z eadler $
 */

#ifndef _MACHINE_GDB_MACHDEP_H_
#define	_MACHINE_GDB_MACHDEP_H_

#define	GDB_BUFSZ	(GDB_NREGS * 16)
#define	GDB_NREGS	56
#define	GDB_REG_PC	16

static __inline size_t
gdb_cpu_regsz(int regnum)
{
	return ((regnum > 16 && regnum < 24) ? 4 : 8);
}

static __inline int
gdb_cpu_query(void)
{
	return (0);
}

void *gdb_cpu_getreg(int, size_t *);
void gdb_cpu_setreg(int, void *);
int gdb_cpu_signal(int, int);

#endif /* !_MACHINE_GDB_MACHDEP_H_ */
