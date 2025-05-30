/*-
 * Copyright (c) 2012 Semihalf
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
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
 * $FreeBSD: releng/11.4/sys/fs/nandfs/bmap.h 235537 2012-05-17 10:11:18Z gber $
 */

#ifndef _BMAP_H
#define _BMAP_H

#include "nandfs_fs.h"

int bmap_lookup(struct nandfs_node *, nandfs_lbn_t, nandfs_daddr_t *);
int bmap_insert_block(struct nandfs_node *, nandfs_lbn_t, nandfs_daddr_t);
int bmap_truncate_mapping(struct nandfs_node *, nandfs_lbn_t, nandfs_lbn_t);
int bmap_dirty_meta(struct nandfs_node *, nandfs_lbn_t, int);

nandfs_lbn_t get_maxfilesize(struct nandfs_device *);

#endif /* _BMAP_H */
