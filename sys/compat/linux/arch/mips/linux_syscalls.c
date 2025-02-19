/* $NetBSD: linux_syscalls.c,v 1.91 2024/07/01 01:36:19 christos Exp $ */

/*
 * System call names.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	NetBSD: syscalls.master,v 1.81 2024/07/01 01:35:53 christos Exp  
 */

#include <sys/cdefs.h>
__KERNEL_RCSID(0, "$NetBSD: linux_syscalls.c,v 1.91 2024/07/01 01:36:19 christos Exp $");

#if defined(_KERNEL_OPT)
#include <sys/param.h>
#include <sys/poll.h>
#include <sys/systm.h>
#include <sys/signal.h>
#include <sys/mount.h>
#include <sys/syscallargs.h>
#include <compat/linux/common/linux_types.h>
#include <compat/linux/common/linux_signal.h>
#include <compat/linux/common/linux_siginfo.h>
#include <compat/linux/common/linux_machdep.h>
#include <compat/linux/common/linux_mmap.h>
#include <compat/linux/common/linux_mqueue.h>
#include <compat/linux/common/linux_socketcall.h>
#include <compat/linux/common/linux_sched.h>
#include <compat/linux/linux_syscallargs.h>
#define linux_sys_mmap2_args linux_sys_mmap_args
#else /* _KERNEL_OPT */
#include <sys/null.h>
#endif /* _KERNEL_OPT */

const char *const linux_syscallnames[] = {
	/*   0 */	"syscall",
	/*   1 */	"exit",
	/*   2 */	"fork",
	/*   3 */	"read",
	/*   4 */	"write",
	/*   5 */	"open",
	/*   6 */	"close",
	/*   7 */	"waitpid",
	/*   8 */	"creat",
	/*   9 */	"link",
	/*  10 */	"unlink",
	/*  11 */	"execve",
	/*  12 */	"chdir",
	/*  13 */	"time",
	/*  14 */	"mknod",
	/*  15 */	"chmod",
	/*  16 */	"__posix_lchown",
	/*  17 */	"#17 (unimplemented)",
	/*  18 */	"#18 (obsolete ostat)",
	/*  19 */	"lseek",
	/*  20 */	"getpid",
	/*  21 */	"#21 (unimplemented mount)",
	/*  22 */	"#22 (obsolete umount)",
	/*  23 */	"setuid",
	/*  24 */	"getuid",
	/*  25 */	"stime",
	/*  26 */	"ptrace",
	/*  27 */	"alarm",
	/*  28 */	"#28 (obsolete ofstat)",
	/*  29 */	"pause",
	/*  30 */	"utime",
	/*  31 */	"#31 (unimplemented)",
	/*  32 */	"#32 (unimplemented)",
	/*  33 */	"access",
	/*  34 */	"nice",
	/*  35 */	"#35 (unimplemented)",
	/*  36 */	"sync",
	/*  37 */	"kill",
	/*  38 */	"__posix_rename",
	/*  39 */	"mkdir",
	/*  40 */	"rmdir",
	/*  41 */	"dup",
	/*  42 */	"pipe",
	/*  43 */	"times",
	/*  44 */	"#44 (unimplemented)",
	/*  45 */	"brk",
	/*  46 */	"setgid",
	/*  47 */	"getgid",
	/*  48 */	"signal",
	/*  49 */	"geteuid",
	/*  50 */	"getegid",
	/*  51 */	"acct",
	/*  52 */	"#52 (unimplemented umount)",
	/*  53 */	"#53 (unimplemented)",
	/*  54 */	"ioctl",
	/*  55 */	"fcntl",
	/*  56 */	"#56 (obsolete mpx)",
	/*  57 */	"setpgid",
	/*  58 */	"#58 (unimplemented)",
	/*  59 */	"olduname",
	/*  60 */	"umask",
	/*  61 */	"chroot",
	/*  62 */	"#62 (unimplemented ustat)",
	/*  63 */	"dup2",
	/*  64 */	"getppid",
	/*  65 */	"getpgrp",
	/*  66 */	"setsid",
	/*  67 */	"sigaction",
	/*  68 */	"siggetmask",
	/*  69 */	"sigsetmask",
	/*  70 */	"setreuid",
	/*  71 */	"setregid",
	/*  72 */	"sigsuspend",
	/*  73 */	"sigpending",
	/*  74 */	"sethostname",
	/*  75 */	"setrlimit",
	/*  76 */	"getrlimit",
	/*  77 */	"getrusage",
	/*  78 */	"gettimeofday",
	/*  79 */	"settimeofday",
	/*  80 */	"getgroups",
	/*  81 */	"setgroups",
	/*  82 */	"#82 (unimplemented old_select)",
	/*  83 */	"symlink",
	/*  84 */	"oolstat",
	/*  85 */	"readlink",
	/*  86 */	"#86 (unimplemented uselib)",
	/*  87 */	"swapon",
	/*  88 */	"reboot",
	/*  89 */	"readdir",
	/*  90 */	"mmap",
	/*  91 */	"munmap",
	/*  92 */	"truncate",
	/*  93 */	"ftruncate",
	/*  94 */	"fchmod",
	/*  95 */	"__posix_fchown",
	/*  96 */	"getpriority",
	/*  97 */	"setpriority",
	/*  98 */	"#98 (unimplemented)",
	/*  99 */	"statfs",
	/* 100 */	"fstatfs",
	/* 101 */	"ioperm",
	/* 102 */	"socketcall",
	/* 103 */	"#103 (unimplemented syslog)",
	/* 104 */	"setitimer",
	/* 105 */	"getitimer",
	/* 106 */	"stat",
	/* 107 */	"lstat",
	/* 108 */	"fstat",
	/* 109 */	"uname",
	/* 110 */	"#110 (unimplemented iopl)",
	/* 111 */	"#111 (unimplemented vhangup)",
	/* 112 */	"#112 (unimplemented idle)",
	/* 113 */	"#113 (unimplemented vm86old)",
	/* 114 */	"wait4",
	/* 115 */	"swapoff",
	/* 116 */	"sysinfo",
	/* 117 */	"ipc",
	/* 118 */	"fsync",
	/* 119 */	"sigreturn",
	/* 120 */	"clone",
	/* 121 */	"setdomainname",
	/* 122 */	"new_uname",
	/* 123 */	"#123 (unimplemented modify_ldt)",
	/* 124 */	"#124 (unimplemented adjtimex)",
	/* 125 */	"mprotect",
	/* 126 */	"sigprocmask",
	/* 127 */	"#127 (unimplemented create_module)",
	/* 128 */	"#128 (unimplemented init_module)",
	/* 129 */	"#129 (unimplemented delete_module)",
	/* 130 */	"#130 (unimplemented get_kernel_syms)",
	/* 131 */	"#131 (unimplemented quotactl)",
	/* 132 */	"getpgid",
	/* 133 */	"fchdir",
	/* 134 */	"#134 (unimplemented bdflush)",
	/* 135 */	"#135 (unimplemented sysfs)",
	/* 136 */	"personality",
	/* 137 */	"#137 (unimplemented afs_syscall)",
	/* 138 */	"setfsuid",
	/* 139 */	"setfsgid",
	/* 140 */	"llseek",
	/* 141 */	"getdents",
	/* 142 */	"select",
	/* 143 */	"flock",
	/* 144 */	"__msync13",
	/* 145 */	"readv",
	/* 146 */	"writev",
	/* 147 */	"cacheflush",
	/* 148 */	"#148 (unimplemented cachectl)",
	/* 149 */	"sysmips",
	/* 150 */	"#150 (unimplemented)",
	/* 151 */	"getsid",
	/* 152 */	"fdatasync",
	/* 153 */	"__sysctl",
	/* 154 */	"mlock",
	/* 155 */	"munlock",
	/* 156 */	"mlockall",
	/* 157 */	"munlockall",
	/* 158 */	"sched_setparam",
	/* 159 */	"sched_getparam",
	/* 160 */	"sched_setscheduler",
	/* 161 */	"sched_getscheduler",
	/* 162 */	"sched_yield",
	/* 163 */	"sched_get_priority_max",
	/* 164 */	"sched_get_priority_min",
	/* 165 */	"#165 (unimplemented sched_rr_get_interval)",
	/* 166 */	"nanosleep",
	/* 167 */	"mremap",
	/* 168 */	"accept",
	/* 169 */	"bind",
	/* 170 */	"connect",
	/* 171 */	"getpeername",
	/* 172 */	"getsockname",
	/* 173 */	"getsockopt",
	/* 174 */	"listen",
	/* 175 */	"recv",
	/* 176 */	"recvfrom",
	/* 177 */	"recvmsg",
	/* 178 */	"send",
	/* 179 */	"sendmsg",
	/* 180 */	"sendto",
	/* 181 */	"setsockopt",
	/* 182 */	"#182 (unimplemented shutdown)",
	/* 183 */	"socket",
	/* 184 */	"socketpair",
	/* 185 */	"setresuid",
	/* 186 */	"getresuid",
	/* 187 */	"#187 (unimplemented query_module)",
	/* 188 */	"poll",
	/* 189 */	"#189 (unimplemented nfsservctl)",
	/* 190 */	"setresgid",
	/* 191 */	"getresgid",
	/* 192 */	"#192 (unimplemented prctl)",
	/* 193 */	"rt_sigreturn",
	/* 194 */	"rt_sigaction",
	/* 195 */	"rt_sigprocmask",
	/* 196 */	"rt_sigpending",
	/* 197 */	"rt_sigtimedwait",
	/* 198 */	"rt_queueinfo",
	/* 199 */	"rt_sigsuspend",
	/* 200 */	"pread",
	/* 201 */	"pwrite",
	/* 202 */	"__posix_chown",
	/* 203 */	"__getcwd",
	/* 204 */	"#204 (unimplemented capget)",
	/* 205 */	"#205 (unimplemented capset)",
	/* 206 */	"sigaltstack",
	/* 207 */	"#207 (unimplemented sendfile)",
	/* 208 */	"#208 (unimplemented)",
	/* 209 */	"#209 (unimplemented)",
	/* 210 */	"mmap2",
	/* 211 */	"truncate64",
	/* 212 */	"ftruncate64",
	/* 213 */	"stat64",
	/* 214 */	"lstat64",
	/* 215 */	"fstat64",
	/* 216 */	"#216 (unimplemented pivot_root)",
	/* 217 */	"mincore",
	/* 218 */	"madvise",
	/* 219 */	"getdents64",
	/* 220 */	"fcntl64",
	/* 221 */	"#221 (unimplemented / * reserved * /)",
	/* 222 */	"gettid",
	/* 223 */	"readahead",
	/* 224 */	"setxattr",
	/* 225 */	"lsetxattr",
	/* 226 */	"fsetxattr",
	/* 227 */	"getxattr",
	/* 228 */	"lgetxattr",
	/* 229 */	"fgetxattr",
	/* 230 */	"listxattr",
	/* 231 */	"llistxattr",
	/* 232 */	"flistxattr",
	/* 233 */	"removexattr",
	/* 234 */	"lremovexattr",
	/* 235 */	"fremovexattr",
	/* 236 */	"tkill",
	/* 237 */	"#237 (unimplemented sendfile64)",
	/* 238 */	"futex",
	/* 239 */	"sched_setaffinity",
	/* 240 */	"sched_getaffinity",
	/* 241 */	"#241 (unimplemented io_setup)",
	/* 242 */	"#242 (unimplemented io_destroy)",
	/* 243 */	"#243 (unimplemented io_getevents)",
	/* 244 */	"#244 (unimplemented io_submit)",
	/* 245 */	"#245 (unimplemented io_cancel)",
	/* 246 */	"exit_group",
	/* 247 */	"#247 (unimplemented lookup_dcookie)",
	/* 248 */	"epoll_create",
	/* 249 */	"epoll_ctl",
	/* 250 */	"epoll_wait",
	/* 251 */	"#251 (unimplemented remap_file_pages)",
	/* 252 */	"set_tid_address",
	/* 253 */	"#253 (unimplemented restart_syscall)",
	/* 254 */	"fadvise64",
	/* 255 */	"statfs64",
	/* 256 */	"fstatfs64",
	/* 257 */	"timer_create",
	/* 258 */	"timer_settime",
	/* 259 */	"timer_gettime",
	/* 260 */	"timer_getoverrun",
	/* 261 */	"timer_delete",
	/* 262 */	"clock_settime",
	/* 263 */	"clock_gettime",
	/* 264 */	"clock_getres",
	/* 265 */	"clock_nanosleep",
	/* 266 */	"tgkill",
	/* 267 */	"utimes",
	/* 268 */	"#268 (unimplemented mbind)",
	/* 269 */	"#269 (unimplemented get_mempolicy)",
	/* 270 */	"#270 (unimplemented set_mempolicy)",
	/* 271 */	"mq_open",
	/* 272 */	"mq_unlink",
	/* 273 */	"mq_timedsend",
	/* 274 */	"mq_timedreceive",
	/* 275 */	"mq_notify",
	/* 276 */	"mq_getsetattr",
	/* 277 */	"#277 (unimplemented vserve)",
	/* 278 */	"waitid",
	/* 279 */	"#279 (unimplemented setaltroot)",
	/* 280 */	"#280 (unimplemented add_key)",
	/* 281 */	"#281 (unimplemented request_key)",
	/* 282 */	"#282 (unimplemented keyctl)",
	/* 283 */	"set_thread_area",
	/* 284 */	"inotify_init",
	/* 285 */	"inotify_add_watch",
	/* 286 */	"inotify_rm_watch",
	/* 287 */	"#287 (unimplemented migrate_pages)",
	/* 288 */	"openat",
	/* 289 */	"mkdirat",
	/* 290 */	"mknodat",
	/* 291 */	"fchownat",
	/* 292 */	"#292 (unimplemented futimesat)",
	/* 293 */	"fstatat64",
	/* 294 */	"unlinkat",
	/* 295 */	"renameat",
	/* 296 */	"linkat",
	/* 297 */	"symlinkat",
	/* 298 */	"readlinkat",
	/* 299 */	"fchmodat",
	/* 300 */	"faccessat",
	/* 301 */	"pselect6",
	/* 302 */	"ppoll",
	/* 303 */	"#303 (unimplemented unshare)",
	/* 304 */	"#304 (unimplemented splice)",
	/* 305 */	"#305 (unimplemented sync_file_range)",
	/* 306 */	"#306 (unimplemented tee)",
	/* 307 */	"#307 (unimplemented vmsplice)",
	/* 308 */	"#308 (unimplemented move_pages)",
	/* 309 */	"__futex_set_robust_list",
	/* 310 */	"__futex_get_robust_list",
	/* 311 */	"#311 (unimplemented kexec_load)",
	/* 312 */	"getcpu",
	/* 313 */	"epoll_pwait",
	/* 314 */	"#314 (unimplemented ioprio_set)",
	/* 315 */	"#315 (unimplemented ioprio_get)",
	/* 316 */	"utimensat",
	/* 317 */	"#317 (unimplemented signalfd)",
	/* 318 */	"#318 (unimplemented timerfd)",
	/* 319 */	"eventfd",
	/* 320 */	"fallocate",
	/* 321 */	"timerfd_create",
	/* 322 */	"timerfd_gettime",
	/* 323 */	"timerfd_settime",
	/* 324 */	"#324 (unimplemented signalfd4)",
	/* 325 */	"eventfd2",
	/* 326 */	"epoll_create1",
	/* 327 */	"dup3",
	/* 328 */	"pipe2",
	/* 329 */	"inotify_init1",
	/* 330 */	"preadv",
	/* 331 */	"pwritev",
	/* 332 */	"#332 (unimplemented rt_tgsigqueueinfo)",
	/* 333 */	"#333 (unimplemented perf_event_open)",
	/* 334 */	"accept4",
	/* 335 */	"recvmmsg",
	/* 336 */	"#336 (unimplemented getdents64)",
	/* 337 */	"#337 (unimplemented fanotify_init)",
	/* 338 */	"#338 (unimplemented fanotify_mark)",
	/* 339 */	"prlimit64",
	/* 340 */	"#340 (unimplemented name_to_handle_at)",
	/* 341 */	"#341 (unimplemented open_by_handle_at)",
	/* 342 */	"#342 (unimplemented clock_adjtime)",
	/* 343 */	"#343 (unimplemented syncfs)",
	/* 344 */	"sendmmsg",
	/* 345 */	"#345 (unimplemented setns)",
	/* 346 */	"#346 (unimplemented process_vm_readv)",
	/* 347 */	"#347 (unimplemented process_vm_writev)",
	/* 348 */	"#348 (unimplemented kcmp)",
	/* 349 */	"#349 (unimplemented finit_module)",
	/* 350 */	"#350 (unimplemented sched_setattr)",
	/* 351 */	"#351 (unimplemented sched_getattr)",
	/* 352 */	"#352 (unimplemented renameat2)",
	/* 353 */	"getrandom",
	/* 354 */	"memfd_create",
	/* 355 */	"#355 (unimplemented bpf)",
	/* 356 */	"#356 (unimplemented execveat)",
	/* 357 */	"#357 (unimplemented userfaultfd)",
	/* 358 */	"#358 (unimplemented membarrier)",
	/* 359 */	"#359 (unimplemented mlock2)",
	/* 360 */	"#360 (unimplemented copy_file_range)",
	/* 361 */	"#361 (unimplemented preadv2)",
	/* 362 */	"#362 (unimplemented pwritev2)",
	/* 363 */	"#363 (unimplemented pkey_mprotect)",
	/* 364 */	"#364 (unimplemented pkey_alloc)",
	/* 365 */	"#365 (unimplemented pkey_free)",
	/* 366 */	"statx",
	/* 367 */	"#367 (unimplemented)",
	/* 368 */	"#368 (unimplemented)",
	/* 369 */	"#369 (unimplemented)",
	/* 370 */	"#370 (unimplemented)",
	/* 371 */	"#371 (unimplemented)",
	/* 372 */	"#372 (unimplemented)",
	/* 373 */	"#373 (unimplemented)",
	/* 374 */	"#374 (unimplemented)",
	/* 375 */	"#375 (unimplemented)",
	/* 376 */	"#376 (unimplemented)",
	/* 377 */	"#377 (unimplemented)",
	/* 378 */	"#378 (unimplemented)",
	/* 379 */	"#379 (unimplemented)",
	/* 380 */	"#380 (unimplemented)",
	/* 381 */	"#381 (unimplemented)",
	/* 382 */	"#382 (unimplemented)",
	/* 383 */	"#383 (unimplemented)",
	/* 384 */	"#384 (unimplemented)",
	/* 385 */	"#385 (unimplemented)",
	/* 386 */	"#386 (unimplemented)",
	/* 387 */	"#387 (unimplemented)",
	/* 388 */	"#388 (unimplemented)",
	/* 389 */	"#389 (unimplemented)",
	/* 390 */	"#390 (unimplemented)",
	/* 391 */	"#391 (unimplemented)",
	/* 392 */	"#392 (unimplemented)",
	/* 393 */	"#393 (unimplemented)",
	/* 394 */	"#394 (unimplemented)",
	/* 395 */	"#395 (unimplemented)",
	/* 396 */	"#396 (unimplemented)",
	/* 397 */	"#397 (unimplemented)",
	/* 398 */	"#398 (unimplemented)",
	/* 399 */	"#399 (unimplemented)",
	/* 400 */	"#400 (unimplemented)",
	/* 401 */	"#401 (unimplemented)",
	/* 402 */	"#402 (unimplemented)",
	/* 403 */	"#403 (unimplemented)",
	/* 404 */	"#404 (unimplemented)",
	/* 405 */	"#405 (unimplemented)",
	/* 406 */	"#406 (unimplemented)",
	/* 407 */	"#407 (unimplemented)",
	/* 408 */	"#408 (unimplemented)",
	/* 409 */	"#409 (unimplemented)",
	/* 410 */	"#410 (unimplemented)",
	/* 411 */	"#411 (unimplemented)",
	/* 412 */	"#412 (unimplemented)",
	/* 413 */	"#413 (unimplemented)",
	/* 414 */	"#414 (unimplemented)",
	/* 415 */	"#415 (unimplemented)",
	/* 416 */	"#416 (unimplemented)",
	/* 417 */	"#417 (unimplemented)",
	/* 418 */	"#418 (unimplemented)",
	/* 419 */	"#419 (unimplemented)",
	/* 420 */	"#420 (unimplemented)",
	/* 421 */	"#421 (unimplemented)",
	/* 422 */	"#422 (unimplemented)",
	/* 423 */	"#423 (unimplemented)",
	/* 424 */	"#424 (unimplemented)",
	/* 425 */	"#425 (unimplemented)",
	/* 426 */	"#426 (unimplemented)",
	/* 427 */	"#427 (unimplemented)",
	/* 428 */	"#428 (unimplemented)",
	/* 429 */	"#429 (unimplemented)",
	/* 430 */	"#430 (unimplemented)",
	/* 431 */	"#431 (unimplemented)",
	/* 432 */	"#432 (unimplemented)",
	/* 433 */	"#433 (unimplemented)",
	/* 434 */	"#434 (unimplemented)",
	/* 435 */	"#435 (unimplemented)",
	/* 436 */	"close_range",
	/* 437 */	"#437 (unimplemented)",
	/* 438 */	"#438 (unimplemented)",
	/* 439 */	"#439 (unimplemented)",
	/* 440 */	"#440 (unimplemented)",
	/* 441 */	"epoll_pwait2",
	/* 442 */	"# filler",
	/* 443 */	"# filler",
	/* 444 */	"# filler",
	/* 445 */	"# filler",
	/* 446 */	"# filler",
	/* 447 */	"# filler",
	/* 448 */	"# filler",
	/* 449 */	"# filler",
	/* 450 */	"# filler",
	/* 451 */	"# filler",
	/* 452 */	"# filler",
	/* 453 */	"# filler",
	/* 454 */	"# filler",
	/* 455 */	"# filler",
	/* 456 */	"# filler",
	/* 457 */	"# filler",
	/* 458 */	"# filler",
	/* 459 */	"# filler",
	/* 460 */	"# filler",
	/* 461 */	"# filler",
	/* 462 */	"# filler",
	/* 463 */	"# filler",
	/* 464 */	"# filler",
	/* 465 */	"# filler",
	/* 466 */	"# filler",
	/* 467 */	"# filler",
	/* 468 */	"# filler",
	/* 469 */	"# filler",
	/* 470 */	"# filler",
	/* 471 */	"# filler",
	/* 472 */	"# filler",
	/* 473 */	"# filler",
	/* 474 */	"# filler",
	/* 475 */	"# filler",
	/* 476 */	"# filler",
	/* 477 */	"# filler",
	/* 478 */	"# filler",
	/* 479 */	"# filler",
	/* 480 */	"# filler",
	/* 481 */	"# filler",
	/* 482 */	"# filler",
	/* 483 */	"# filler",
	/* 484 */	"# filler",
	/* 485 */	"# filler",
	/* 486 */	"# filler",
	/* 487 */	"# filler",
	/* 488 */	"# filler",
	/* 489 */	"# filler",
	/* 490 */	"# filler",
	/* 491 */	"# filler",
	/* 492 */	"# filler",
	/* 493 */	"# filler",
	/* 494 */	"# filler",
	/* 495 */	"# filler",
	/* 496 */	"# filler",
	/* 497 */	"# filler",
	/* 498 */	"# filler",
	/* 499 */	"# filler",
	/* 500 */	"# filler",
	/* 501 */	"# filler",
	/* 502 */	"# filler",
	/* 503 */	"# filler",
	/* 504 */	"# filler",
	/* 505 */	"# filler",
	/* 506 */	"# filler",
	/* 507 */	"# filler",
	/* 508 */	"# filler",
	/* 509 */	"# filler",
	/* 510 */	"# filler",
	/* 511 */	"# filler",
};


/* libc style syscall names */
const char *const altlinux_syscallnames[] = {
	/*   0 */	"nosys",
	/*   1 */	NULL, /* exit */
	/*   2 */	NULL, /* fork */
	/*   3 */	NULL, /* read */
	/*   4 */	NULL, /* write */
	/*   5 */	NULL, /* open */
	/*   6 */	NULL, /* close */
	/*   7 */	NULL, /* waitpid */
	/*   8 */	NULL, /* creat */
	/*   9 */	NULL, /* link */
	/*  10 */	NULL, /* unlink */
	/*  11 */	NULL, /* execve */
	/*  12 */	NULL, /* chdir */
	/*  13 */	NULL, /* time */
	/*  14 */	NULL, /* mknod */
	/*  15 */	NULL, /* chmod */
	/*  16 */	NULL, /* __posix_lchown */
	/*  17 */	NULL, /* unimplemented */
	/*  18 */	NULL, /* obsolete ostat */
	/*  19 */	NULL, /* lseek */
	/*  20 */	NULL, /* getpid */
	/*  21 */	NULL, /* unimplemented mount */
	/*  22 */	NULL, /* obsolete umount */
	/*  23 */	NULL, /* setuid */
	/*  24 */	NULL, /* getuid */
	/*  25 */	NULL, /* stime */
	/*  26 */	NULL, /* ptrace */
	/*  27 */	NULL, /* alarm */
	/*  28 */	NULL, /* obsolete ofstat */
	/*  29 */	NULL, /* pause */
	/*  30 */	NULL, /* utime */
	/*  31 */	NULL, /* unimplemented */
	/*  32 */	NULL, /* unimplemented */
	/*  33 */	NULL, /* access */
	/*  34 */	NULL, /* nice */
	/*  35 */	NULL, /* unimplemented */
	/*  36 */	NULL, /* sync */
	/*  37 */	NULL, /* kill */
	/*  38 */	NULL, /* __posix_rename */
	/*  39 */	NULL, /* mkdir */
	/*  40 */	NULL, /* rmdir */
	/*  41 */	NULL, /* dup */
	/*  42 */	NULL, /* pipe */
	/*  43 */	NULL, /* times */
	/*  44 */	NULL, /* unimplemented */
	/*  45 */	NULL, /* brk */
	/*  46 */	NULL, /* setgid */
	/*  47 */	NULL, /* getgid */
	/*  48 */	NULL, /* signal */
	/*  49 */	NULL, /* geteuid */
	/*  50 */	NULL, /* getegid */
	/*  51 */	NULL, /* acct */
	/*  52 */	NULL, /* unimplemented umount */
	/*  53 */	NULL, /* unimplemented */
	/*  54 */	NULL, /* ioctl */
	/*  55 */	NULL, /* fcntl */
	/*  56 */	NULL, /* obsolete mpx */
	/*  57 */	NULL, /* setpgid */
	/*  58 */	NULL, /* unimplemented */
	/*  59 */	NULL, /* olduname */
	/*  60 */	NULL, /* umask */
	/*  61 */	NULL, /* chroot */
	/*  62 */	NULL, /* unimplemented ustat */
	/*  63 */	NULL, /* dup2 */
	/*  64 */	NULL, /* getppid */
	/*  65 */	NULL, /* getpgrp */
	/*  66 */	NULL, /* setsid */
	/*  67 */	NULL, /* sigaction */
	/*  68 */	NULL, /* siggetmask */
	/*  69 */	NULL, /* sigsetmask */
	/*  70 */	NULL, /* setreuid */
	/*  71 */	NULL, /* setregid */
	/*  72 */	NULL, /* sigsuspend */
	/*  73 */	NULL, /* sigpending */
	/*  74 */	NULL, /* sethostname */
	/*  75 */	NULL, /* setrlimit */
	/*  76 */	NULL, /* getrlimit */
	/*  77 */	NULL, /* getrusage */
	/*  78 */	NULL, /* gettimeofday */
	/*  79 */	NULL, /* settimeofday */
	/*  80 */	NULL, /* getgroups */
	/*  81 */	NULL, /* setgroups */
	/*  82 */	NULL, /* unimplemented old_select */
	/*  83 */	NULL, /* symlink */
	/*  84 */	"lstat",
	/*  85 */	NULL, /* readlink */
	/*  86 */	NULL, /* unimplemented uselib */
	/*  87 */	NULL, /* swapon */
	/*  88 */	NULL, /* reboot */
	/*  89 */	NULL, /* readdir */
	/*  90 */	NULL, /* mmap */
	/*  91 */	NULL, /* munmap */
	/*  92 */	NULL, /* truncate */
	/*  93 */	NULL, /* ftruncate */
	/*  94 */	NULL, /* fchmod */
	/*  95 */	NULL, /* __posix_fchown */
	/*  96 */	NULL, /* getpriority */
	/*  97 */	NULL, /* setpriority */
	/*  98 */	NULL, /* unimplemented */
	/*  99 */	NULL, /* statfs */
	/* 100 */	NULL, /* fstatfs */
	/* 101 */	NULL, /* ioperm */
	/* 102 */	NULL, /* socketcall */
	/* 103 */	NULL, /* unimplemented syslog */
	/* 104 */	NULL, /* setitimer */
	/* 105 */	NULL, /* getitimer */
	/* 106 */	NULL, /* stat */
	/* 107 */	NULL, /* lstat */
	/* 108 */	NULL, /* fstat */
	/* 109 */	NULL, /* uname */
	/* 110 */	NULL, /* unimplemented iopl */
	/* 111 */	NULL, /* unimplemented vhangup */
	/* 112 */	NULL, /* unimplemented idle */
	/* 113 */	NULL, /* unimplemented vm86old */
	/* 114 */	NULL, /* wait4 */
	/* 115 */	NULL, /* swapoff */
	/* 116 */	NULL, /* sysinfo */
	/* 117 */	NULL, /* ipc */
	/* 118 */	NULL, /* fsync */
	/* 119 */	NULL, /* sigreturn */
	/* 120 */	NULL, /* clone */
	/* 121 */	NULL, /* setdomainname */
	/* 122 */	NULL, /* new_uname */
	/* 123 */	NULL, /* unimplemented modify_ldt */
	/* 124 */	NULL, /* unimplemented adjtimex */
	/* 125 */	NULL, /* mprotect */
	/* 126 */	NULL, /* sigprocmask */
	/* 127 */	NULL, /* unimplemented create_module */
	/* 128 */	NULL, /* unimplemented init_module */
	/* 129 */	NULL, /* unimplemented delete_module */
	/* 130 */	NULL, /* unimplemented get_kernel_syms */
	/* 131 */	NULL, /* unimplemented quotactl */
	/* 132 */	NULL, /* getpgid */
	/* 133 */	NULL, /* fchdir */
	/* 134 */	NULL, /* unimplemented bdflush */
	/* 135 */	NULL, /* unimplemented sysfs */
	/* 136 */	NULL, /* personality */
	/* 137 */	NULL, /* unimplemented afs_syscall */
	/* 138 */	NULL, /* setfsuid */
	/* 139 */	NULL, /* setfsgid */
	/* 140 */	NULL, /* llseek */
	/* 141 */	NULL, /* getdents */
	/* 142 */	NULL, /* select */
	/* 143 */	NULL, /* flock */
	/* 144 */	"msync",
	/* 145 */	NULL, /* readv */
	/* 146 */	NULL, /* writev */
	/* 147 */	NULL, /* cacheflush */
	/* 148 */	NULL, /* unimplemented cachectl */
	/* 149 */	NULL, /* sysmips */
	/* 150 */	NULL, /* unimplemented */
	/* 151 */	NULL, /* getsid */
	/* 152 */	NULL, /* fdatasync */
	/* 153 */	NULL, /* __sysctl */
	/* 154 */	NULL, /* mlock */
	/* 155 */	NULL, /* munlock */
	/* 156 */	NULL, /* mlockall */
	/* 157 */	NULL, /* munlockall */
	/* 158 */	NULL, /* sched_setparam */
	/* 159 */	NULL, /* sched_getparam */
	/* 160 */	NULL, /* sched_setscheduler */
	/* 161 */	NULL, /* sched_getscheduler */
	/* 162 */	NULL, /* sched_yield */
	/* 163 */	NULL, /* sched_get_priority_max */
	/* 164 */	NULL, /* sched_get_priority_min */
	/* 165 */	NULL, /* unimplemented sched_rr_get_interval */
	/* 166 */	NULL, /* nanosleep */
	/* 167 */	NULL, /* mremap */
	/* 168 */	NULL, /* accept */
	/* 169 */	NULL, /* bind */
	/* 170 */	NULL, /* connect */
	/* 171 */	NULL, /* getpeername */
	/* 172 */	NULL, /* getsockname */
	/* 173 */	NULL, /* getsockopt */
	/* 174 */	NULL, /* listen */
	/* 175 */	NULL, /* recv */
	/* 176 */	NULL, /* recvfrom */
	/* 177 */	NULL, /* recvmsg */
	/* 178 */	NULL, /* send */
	/* 179 */	NULL, /* sendmsg */
	/* 180 */	NULL, /* sendto */
	/* 181 */	NULL, /* setsockopt */
	/* 182 */	NULL, /* unimplemented shutdown */
	/* 183 */	NULL, /* socket */
	/* 184 */	NULL, /* socketpair */
	/* 185 */	NULL, /* setresuid */
	/* 186 */	NULL, /* getresuid */
	/* 187 */	NULL, /* unimplemented query_module */
	/* 188 */	NULL, /* poll */
	/* 189 */	NULL, /* unimplemented nfsservctl */
	/* 190 */	NULL, /* setresgid */
	/* 191 */	NULL, /* getresgid */
	/* 192 */	NULL, /* unimplemented prctl */
	/* 193 */	NULL, /* rt_sigreturn */
	/* 194 */	NULL, /* rt_sigaction */
	/* 195 */	NULL, /* rt_sigprocmask */
	/* 196 */	NULL, /* rt_sigpending */
	/* 197 */	NULL, /* rt_sigtimedwait */
	/* 198 */	NULL, /* rt_queueinfo */
	/* 199 */	NULL, /* rt_sigsuspend */
	/* 200 */	NULL, /* pread */
	/* 201 */	NULL, /* pwrite */
	/* 202 */	NULL, /* __posix_chown */
	/* 203 */	NULL, /* __getcwd */
	/* 204 */	NULL, /* unimplemented capget */
	/* 205 */	NULL, /* unimplemented capset */
	/* 206 */	NULL, /* sigaltstack */
	/* 207 */	NULL, /* unimplemented sendfile */
	/* 208 */	NULL, /* unimplemented */
	/* 209 */	NULL, /* unimplemented */
	/* 210 */	NULL, /* mmap2 */
	/* 211 */	NULL, /* truncate64 */
	/* 212 */	NULL, /* ftruncate64 */
	/* 213 */	NULL, /* stat64 */
	/* 214 */	NULL, /* lstat64 */
	/* 215 */	NULL, /* fstat64 */
	/* 216 */	NULL, /* unimplemented pivot_root */
	/* 217 */	NULL, /* mincore */
	/* 218 */	NULL, /* madvise */
	/* 219 */	NULL, /* getdents64 */
	/* 220 */	NULL, /* fcntl64 */
	/* 221 */	NULL, /* unimplemented / * reserved * / */
	/* 222 */	NULL, /* gettid */
	/* 223 */	NULL, /* readahead */
	/* 224 */	NULL, /* setxattr */
	/* 225 */	NULL, /* lsetxattr */
	/* 226 */	NULL, /* fsetxattr */
	/* 227 */	NULL, /* getxattr */
	/* 228 */	NULL, /* lgetxattr */
	/* 229 */	NULL, /* fgetxattr */
	/* 230 */	NULL, /* listxattr */
	/* 231 */	NULL, /* llistxattr */
	/* 232 */	NULL, /* flistxattr */
	/* 233 */	NULL, /* removexattr */
	/* 234 */	NULL, /* lremovexattr */
	/* 235 */	NULL, /* fremovexattr */
	/* 236 */	NULL, /* tkill */
	/* 237 */	NULL, /* unimplemented sendfile64 */
	/* 238 */	NULL, /* futex */
	/* 239 */	NULL, /* sched_setaffinity */
	/* 240 */	NULL, /* sched_getaffinity */
	/* 241 */	NULL, /* unimplemented io_setup */
	/* 242 */	NULL, /* unimplemented io_destroy */
	/* 243 */	NULL, /* unimplemented io_getevents */
	/* 244 */	NULL, /* unimplemented io_submit */
	/* 245 */	NULL, /* unimplemented io_cancel */
	/* 246 */	NULL, /* exit_group */
	/* 247 */	NULL, /* unimplemented lookup_dcookie */
	/* 248 */	NULL, /* epoll_create */
	/* 249 */	NULL, /* epoll_ctl */
	/* 250 */	NULL, /* epoll_wait */
	/* 251 */	NULL, /* unimplemented remap_file_pages */
	/* 252 */	NULL, /* set_tid_address */
	/* 253 */	NULL, /* unimplemented restart_syscall */
	/* 254 */	NULL, /* fadvise64 */
	/* 255 */	NULL, /* statfs64 */
	/* 256 */	NULL, /* fstatfs64 */
	/* 257 */	NULL, /* timer_create */
	/* 258 */	NULL, /* timer_settime */
	/* 259 */	NULL, /* timer_gettime */
	/* 260 */	NULL, /* timer_getoverrun */
	/* 261 */	NULL, /* timer_delete */
	/* 262 */	NULL, /* clock_settime */
	/* 263 */	NULL, /* clock_gettime */
	/* 264 */	NULL, /* clock_getres */
	/* 265 */	NULL, /* clock_nanosleep */
	/* 266 */	NULL, /* tgkill */
	/* 267 */	NULL, /* utimes */
	/* 268 */	NULL, /* unimplemented mbind */
	/* 269 */	NULL, /* unimplemented get_mempolicy */
	/* 270 */	NULL, /* unimplemented set_mempolicy */
	/* 271 */	NULL, /* mq_open */
	/* 272 */	NULL, /* mq_unlink */
	/* 273 */	NULL, /* mq_timedsend */
	/* 274 */	NULL, /* mq_timedreceive */
	/* 275 */	NULL, /* mq_notify */
	/* 276 */	NULL, /* mq_getsetattr */
	/* 277 */	NULL, /* unimplemented vserve */
	/* 278 */	NULL, /* waitid */
	/* 279 */	NULL, /* unimplemented setaltroot */
	/* 280 */	NULL, /* unimplemented add_key */
	/* 281 */	NULL, /* unimplemented request_key */
	/* 282 */	NULL, /* unimplemented keyctl */
	/* 283 */	NULL, /* set_thread_area */
	/* 284 */	NULL, /* inotify_init */
	/* 285 */	NULL, /* inotify_add_watch */
	/* 286 */	NULL, /* inotify_rm_watch */
	/* 287 */	NULL, /* unimplemented migrate_pages */
	/* 288 */	NULL, /* openat */
	/* 289 */	NULL, /* mkdirat */
	/* 290 */	NULL, /* mknodat */
	/* 291 */	NULL, /* fchownat */
	/* 292 */	NULL, /* unimplemented futimesat */
	/* 293 */	NULL, /* fstatat64 */
	/* 294 */	NULL, /* unlinkat */
	/* 295 */	NULL, /* renameat */
	/* 296 */	NULL, /* linkat */
	/* 297 */	NULL, /* symlinkat */
	/* 298 */	NULL, /* readlinkat */
	/* 299 */	NULL, /* fchmodat */
	/* 300 */	NULL, /* faccessat */
	/* 301 */	NULL, /* pselect6 */
	/* 302 */	NULL, /* ppoll */
	/* 303 */	NULL, /* unimplemented unshare */
	/* 304 */	NULL, /* unimplemented splice */
	/* 305 */	NULL, /* unimplemented sync_file_range */
	/* 306 */	NULL, /* unimplemented tee */
	/* 307 */	NULL, /* unimplemented vmsplice */
	/* 308 */	NULL, /* unimplemented move_pages */
	/* 309 */	NULL, /* __futex_set_robust_list */
	/* 310 */	NULL, /* __futex_get_robust_list */
	/* 311 */	NULL, /* unimplemented kexec_load */
	/* 312 */	NULL, /* getcpu */
	/* 313 */	NULL, /* epoll_pwait */
	/* 314 */	NULL, /* unimplemented ioprio_set */
	/* 315 */	NULL, /* unimplemented ioprio_get */
	/* 316 */	NULL, /* utimensat */
	/* 317 */	NULL, /* unimplemented signalfd */
	/* 318 */	NULL, /* unimplemented timerfd */
	/* 319 */	NULL, /* eventfd */
	/* 320 */	NULL, /* fallocate */
	/* 321 */	NULL, /* timerfd_create */
	/* 322 */	NULL, /* timerfd_gettime */
	/* 323 */	NULL, /* timerfd_settime */
	/* 324 */	NULL, /* unimplemented signalfd4 */
	/* 325 */	NULL, /* eventfd2 */
	/* 326 */	NULL, /* epoll_create1 */
	/* 327 */	NULL, /* dup3 */
	/* 328 */	NULL, /* pipe2 */
	/* 329 */	NULL, /* inotify_init1 */
	/* 330 */	NULL, /* preadv */
	/* 331 */	NULL, /* pwritev */
	/* 332 */	NULL, /* unimplemented rt_tgsigqueueinfo */
	/* 333 */	NULL, /* unimplemented perf_event_open */
	/* 334 */	NULL, /* accept4 */
	/* 335 */	NULL, /* recvmmsg */
	/* 336 */	NULL, /* unimplemented getdents64 */
	/* 337 */	NULL, /* unimplemented fanotify_init */
	/* 338 */	NULL, /* unimplemented fanotify_mark */
	/* 339 */	NULL, /* prlimit64 */
	/* 340 */	NULL, /* unimplemented name_to_handle_at */
	/* 341 */	NULL, /* unimplemented open_by_handle_at */
	/* 342 */	NULL, /* unimplemented clock_adjtime */
	/* 343 */	NULL, /* unimplemented syncfs */
	/* 344 */	NULL, /* sendmmsg */
	/* 345 */	NULL, /* unimplemented setns */
	/* 346 */	NULL, /* unimplemented process_vm_readv */
	/* 347 */	NULL, /* unimplemented process_vm_writev */
	/* 348 */	NULL, /* unimplemented kcmp */
	/* 349 */	NULL, /* unimplemented finit_module */
	/* 350 */	NULL, /* unimplemented sched_setattr */
	/* 351 */	NULL, /* unimplemented sched_getattr */
	/* 352 */	NULL, /* unimplemented renameat2 */
	/* 353 */	NULL, /* getrandom */
	/* 354 */	NULL, /* memfd_create */
	/* 355 */	NULL, /* unimplemented bpf */
	/* 356 */	NULL, /* unimplemented execveat */
	/* 357 */	NULL, /* unimplemented userfaultfd */
	/* 358 */	NULL, /* unimplemented membarrier */
	/* 359 */	NULL, /* unimplemented mlock2 */
	/* 360 */	NULL, /* unimplemented copy_file_range */
	/* 361 */	NULL, /* unimplemented preadv2 */
	/* 362 */	NULL, /* unimplemented pwritev2 */
	/* 363 */	NULL, /* unimplemented pkey_mprotect */
	/* 364 */	NULL, /* unimplemented pkey_alloc */
	/* 365 */	NULL, /* unimplemented pkey_free */
	/* 366 */	NULL, /* statx */
	/* 367 */	NULL, /* unimplemented */
	/* 368 */	NULL, /* unimplemented */
	/* 369 */	NULL, /* unimplemented */
	/* 370 */	NULL, /* unimplemented */
	/* 371 */	NULL, /* unimplemented */
	/* 372 */	NULL, /* unimplemented */
	/* 373 */	NULL, /* unimplemented */
	/* 374 */	NULL, /* unimplemented */
	/* 375 */	NULL, /* unimplemented */
	/* 376 */	NULL, /* unimplemented */
	/* 377 */	NULL, /* unimplemented */
	/* 378 */	NULL, /* unimplemented */
	/* 379 */	NULL, /* unimplemented */
	/* 380 */	NULL, /* unimplemented */
	/* 381 */	NULL, /* unimplemented */
	/* 382 */	NULL, /* unimplemented */
	/* 383 */	NULL, /* unimplemented */
	/* 384 */	NULL, /* unimplemented */
	/* 385 */	NULL, /* unimplemented */
	/* 386 */	NULL, /* unimplemented */
	/* 387 */	NULL, /* unimplemented */
	/* 388 */	NULL, /* unimplemented */
	/* 389 */	NULL, /* unimplemented */
	/* 390 */	NULL, /* unimplemented */
	/* 391 */	NULL, /* unimplemented */
	/* 392 */	NULL, /* unimplemented */
	/* 393 */	NULL, /* unimplemented */
	/* 394 */	NULL, /* unimplemented */
	/* 395 */	NULL, /* unimplemented */
	/* 396 */	NULL, /* unimplemented */
	/* 397 */	NULL, /* unimplemented */
	/* 398 */	NULL, /* unimplemented */
	/* 399 */	NULL, /* unimplemented */
	/* 400 */	NULL, /* unimplemented */
	/* 401 */	NULL, /* unimplemented */
	/* 402 */	NULL, /* unimplemented */
	/* 403 */	NULL, /* unimplemented */
	/* 404 */	NULL, /* unimplemented */
	/* 405 */	NULL, /* unimplemented */
	/* 406 */	NULL, /* unimplemented */
	/* 407 */	NULL, /* unimplemented */
	/* 408 */	NULL, /* unimplemented */
	/* 409 */	NULL, /* unimplemented */
	/* 410 */	NULL, /* unimplemented */
	/* 411 */	NULL, /* unimplemented */
	/* 412 */	NULL, /* unimplemented */
	/* 413 */	NULL, /* unimplemented */
	/* 414 */	NULL, /* unimplemented */
	/* 415 */	NULL, /* unimplemented */
	/* 416 */	NULL, /* unimplemented */
	/* 417 */	NULL, /* unimplemented */
	/* 418 */	NULL, /* unimplemented */
	/* 419 */	NULL, /* unimplemented */
	/* 420 */	NULL, /* unimplemented */
	/* 421 */	NULL, /* unimplemented */
	/* 422 */	NULL, /* unimplemented */
	/* 423 */	NULL, /* unimplemented */
	/* 424 */	NULL, /* unimplemented */
	/* 425 */	NULL, /* unimplemented */
	/* 426 */	NULL, /* unimplemented */
	/* 427 */	NULL, /* unimplemented */
	/* 428 */	NULL, /* unimplemented */
	/* 429 */	NULL, /* unimplemented */
	/* 430 */	NULL, /* unimplemented */
	/* 431 */	NULL, /* unimplemented */
	/* 432 */	NULL, /* unimplemented */
	/* 433 */	NULL, /* unimplemented */
	/* 434 */	NULL, /* unimplemented */
	/* 435 */	NULL, /* unimplemented */
	/* 436 */	NULL, /* close_range */
	/* 437 */	NULL, /* unimplemented */
	/* 438 */	NULL, /* unimplemented */
	/* 439 */	NULL, /* unimplemented */
	/* 440 */	NULL, /* unimplemented */
	/* 441 */	NULL, /* epoll_pwait2 */
	/* 442 */	NULL, /* filler */
	/* 443 */	NULL, /* filler */
	/* 444 */	NULL, /* filler */
	/* 445 */	NULL, /* filler */
	/* 446 */	NULL, /* filler */
	/* 447 */	NULL, /* filler */
	/* 448 */	NULL, /* filler */
	/* 449 */	NULL, /* filler */
	/* 450 */	NULL, /* filler */
	/* 451 */	NULL, /* filler */
	/* 452 */	NULL, /* filler */
	/* 453 */	NULL, /* filler */
	/* 454 */	NULL, /* filler */
	/* 455 */	NULL, /* filler */
	/* 456 */	NULL, /* filler */
	/* 457 */	NULL, /* filler */
	/* 458 */	NULL, /* filler */
	/* 459 */	NULL, /* filler */
	/* 460 */	NULL, /* filler */
	/* 461 */	NULL, /* filler */
	/* 462 */	NULL, /* filler */
	/* 463 */	NULL, /* filler */
	/* 464 */	NULL, /* filler */
	/* 465 */	NULL, /* filler */
	/* 466 */	NULL, /* filler */
	/* 467 */	NULL, /* filler */
	/* 468 */	NULL, /* filler */
	/* 469 */	NULL, /* filler */
	/* 470 */	NULL, /* filler */
	/* 471 */	NULL, /* filler */
	/* 472 */	NULL, /* filler */
	/* 473 */	NULL, /* filler */
	/* 474 */	NULL, /* filler */
	/* 475 */	NULL, /* filler */
	/* 476 */	NULL, /* filler */
	/* 477 */	NULL, /* filler */
	/* 478 */	NULL, /* filler */
	/* 479 */	NULL, /* filler */
	/* 480 */	NULL, /* filler */
	/* 481 */	NULL, /* filler */
	/* 482 */	NULL, /* filler */
	/* 483 */	NULL, /* filler */
	/* 484 */	NULL, /* filler */
	/* 485 */	NULL, /* filler */
	/* 486 */	NULL, /* filler */
	/* 487 */	NULL, /* filler */
	/* 488 */	NULL, /* filler */
	/* 489 */	NULL, /* filler */
	/* 490 */	NULL, /* filler */
	/* 491 */	NULL, /* filler */
	/* 492 */	NULL, /* filler */
	/* 493 */	NULL, /* filler */
	/* 494 */	NULL, /* filler */
	/* 495 */	NULL, /* filler */
	/* 496 */	NULL, /* filler */
	/* 497 */	NULL, /* filler */
	/* 498 */	NULL, /* filler */
	/* 499 */	NULL, /* filler */
	/* 500 */	NULL, /* filler */
	/* 501 */	NULL, /* filler */
	/* 502 */	NULL, /* filler */
	/* 503 */	NULL, /* filler */
	/* 504 */	NULL, /* filler */
	/* 505 */	NULL, /* filler */
	/* 506 */	NULL, /* filler */
	/* 507 */	NULL, /* filler */
	/* 508 */	NULL, /* filler */
	/* 509 */	NULL, /* filler */
	/* 510 */	NULL, /* filler */
	/* 511 */	NULL, /* filler */
};
