/*
 * Copyright (C) 2013-2021 Canonical, Ltd.
 * Copyright (C) 2022-2025 Colin Ian King
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#define _GNU_SOURCE

#include <sys/types.h>
#include <sys/uio.h>

int main(void)
{
	pid_t pid = 0;
	struct iovec local_iov = { 0 };
	struct iovec remote_iov = { 0 };
	unsigned long int liovcnt = 1;
	unsigned long int riovcnt = 1;
	unsigned long int flags = 0;

	return process_vm_writev(pid, &local_iov, liovcnt, &remote_iov, riovcnt, flags);
}
