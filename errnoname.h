/*
 * Copyright 2021 Skycharge GmbH
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met: 1. Redistributions of source code must retain the above
 * copyright notice, this list of conditions and the following
 * disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided
 * with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef ERRNONAME_H
#define ERRNONAME_H

#include <errno.h>

const char *errnoname(int errno_, char *buf, size_t len)
{
	switch(errno_) {
        case 0: return "SUCCESS";
#ifdef E2BIG
        case E2BIG: return "E2BIG";
#endif
#ifdef EACCES
        case EACCES: return "EACCES";
#endif
#ifdef EADDRINUSE
        case EADDRINUSE: return "EADDRINUSE";
#endif
#ifdef EADDRNOTAVAIL
        case EADDRNOTAVAIL: return "EADDRNOTAVAIL";
#endif
#ifdef EADI
        case EADI: return "EADI";
#endif
#ifdef EADV
        case EADV: return "EADV";
#endif
#ifdef EAFNOSUPPORT
        case EAFNOSUPPORT: return "EAFNOSUPPORT";
#endif
#ifdef EAGAIN
        case EAGAIN: return "EAGAIN";
#endif
#ifdef EAIO
        case EAIO: return "EAIO";
#endif
#ifdef EALIGN
        case EALIGN: return "EALIGN";
#endif
#ifdef EALREADY
        case EALREADY: return "EALREADY";
#endif
#ifdef EASYNC
        case EASYNC: return "EASYNC";
#endif
#ifdef EAUTH
        case EAUTH: return "EAUTH";
#endif
#ifdef EBADARCH
        case EBADARCH: return "EBADARCH";
#endif
#ifdef EBADE
        case EBADE: return "EBADE";
#endif
#ifdef EBADEXEC
        case EBADEXEC: return "EBADEXEC";
#endif
#ifdef EBADF
        case EBADF: return "EBADF";
#endif
#ifdef EBADFD
        case EBADFD: return "EBADFD";
#endif
#ifdef EBADMACHO
        case EBADMACHO: return "EBADMACHO";
#endif
#ifdef EBADMSG
        case EBADMSG: return "EBADMSG";
#endif
#ifdef EBADR
        case EBADR: return "EBADR";
#endif
#ifdef EBADRPC
        case EBADRPC: return "EBADRPC";
#endif
#ifdef EBADRQC
        case EBADRQC: return "EBADRQC";
#endif
#ifdef EBADSLT
        case EBADSLT: return "EBADSLT";
#endif
#ifdef EBADVER
        case EBADVER: return "EBADVER";
#endif
#ifdef EBFONT
        case EBFONT: return "EBFONT";
#endif
#ifdef EBUSY
        case EBUSY: return "EBUSY";
#endif
#ifdef ECANCELED
        case ECANCELED: return "ECANCELED";
#endif
#ifdef ECANCELLED
#if !defined(ECANCELED) || ECANCELLED != ECANCELED
        case ECANCELLED: return "ECANCELLED";
#endif
#endif
#ifdef ECAPMODE
        case ECAPMODE: return "ECAPMODE";
#endif
#ifdef ECASECLASH
        case ECASECLASH: return "ECASECLASH";
#endif
#ifdef ECHILD
        case ECHILD: return "ECHILD";
#endif
#ifdef ECHRNG
        case ECHRNG: return "ECHRNG";
#endif
#ifdef ECICS
        case ECICS: return "ECICS";
#endif
#ifdef ECKPT
        case ECKPT: return "ECKPT";
#endif
#ifdef ECLONEME
        case ECLONEME: return "ECLONEME";
#endif
#ifdef ECOMM
        case ECOMM: return "ECOMM";
#endif
#ifdef ECONFIG
        case ECONFIG: return "ECONFIG";
#endif
#ifdef ECONNABORTED
        case ECONNABORTED: return "ECONNABORTED";
#endif
#ifdef ECONNREFUSED
        case ECONNREFUSED: return "ECONNREFUSED";
#endif
#ifdef ECONNRESET
        case ECONNRESET: return "ECONNRESET";
#endif
#ifdef ECORRUPT
        case ECORRUPT: return "ECORRUPT";
#endif
#ifdef ECVCERORR
        case ECVCERORR: return "ECVCERORR";
#endif
#ifdef ECVPERORR
        case ECVPERORR: return "ECVPERORR";
#endif
#ifdef EDEADLK
        case EDEADLK: return "EDEADLK";
#endif
#ifdef EDEADLOCK
#if !defined(EDEADLK) || EDEADLOCK != EDEADLK
        case EDEADLOCK: return "EDEADLOCK";
#endif
#endif
#ifdef EDESTADDREQ
        case EDESTADDREQ: return "EDESTADDREQ";
#endif
#ifdef EDESTADDRREQ
        case EDESTADDRREQ: return "EDESTADDRREQ";
#endif
#ifdef EDEVERR
        case EDEVERR: return "EDEVERR";
#endif
#ifdef EDIRIOCTL
        case EDIRIOCTL: return "EDIRIOCTL";
#endif
#ifdef EDIRTY
        case EDIRTY: return "EDIRTY";
#endif
#ifdef EDIST
        case EDIST: return "EDIST";
#endif
#ifdef EDOM
        case EDOM: return "EDOM";
#endif
#ifdef EDOOFUS
        case EDOOFUS: return "EDOOFUS";
#endif
#ifdef EDOTDOT
        case EDOTDOT: return "EDOTDOT";
#endif
#ifdef EDQUOT
        case EDQUOT: return "EDQUOT";
#endif
#ifdef EDUPFD
        case EDUPFD: return "EDUPFD";
#endif
#ifdef EDUPPKG
        case EDUPPKG: return "EDUPPKG";
#endif
#ifdef EEXIST
        case EEXIST: return "EEXIST";
#endif
#ifdef EFAIL
        case EFAIL: return "EFAIL";
#endif
#ifdef EFAULT
        case EFAULT: return "EFAULT";
#endif
#ifdef EFBIG
        case EFBIG: return "EFBIG";
#endif
#ifdef EFORMAT
        case EFORMAT: return "EFORMAT";
#endif
#ifdef EFSCORRUPTED
        case EFSCORRUPTED: return "EFSCORRUPTED";
#endif
#ifdef EFTYPE
        case EFTYPE: return "EFTYPE";
#endif
#ifdef EHOSTDOWN
        case EHOSTDOWN: return "EHOSTDOWN";
#endif
#ifdef EHOSTUNREACH
        case EHOSTUNREACH: return "EHOSTUNREACH";
#endif
#ifdef EHWPOISON
        case EHWPOISON: return "EHWPOISON";
#endif
#ifdef EIBMBADCALL
        case EIBMBADCALL: return "EIBMBADCALL";
#endif
#ifdef EIBMBADPARM
        case EIBMBADPARM: return "EIBMBADPARM";
#endif
#ifdef EIBMCANCELLED
        case EIBMCANCELLED: return "EIBMCANCELLED";
#endif
#ifdef EIBMCONFLICT
        case EIBMCONFLICT: return "EIBMCONFLICT";
#endif
#ifdef EIBMIUCVERR
        case EIBMIUCVERR: return "EIBMIUCVERR";
#endif
#ifdef EIBMSOCKINUSE
        case EIBMSOCKINUSE: return "EIBMSOCKINUSE";
#endif
#ifdef EIBMSOCKOUTOFRANGE
        case EIBMSOCKOUTOFRANGE: return "EIBMSOCKOUTOFRANGE";
#endif
#ifdef EIDRM
        case EIDRM: return "EIDRM";
#endif
#ifdef EILSEQ
        case EILSEQ: return "EILSEQ";
#endif
#ifdef EINIT
        case EINIT: return "EINIT";
#endif
#ifdef EINPROG
        case EINPROG: return "EINPROG";
#endif
#ifdef EINPROGRESS
        case EINPROGRESS: return "EINPROGRESS";
#endif
#ifdef EINTEGRITY
        case EINTEGRITY: return "EINTEGRITY";
#endif
#ifdef EINTR
        case EINTR: return "EINTR";
#endif
#ifdef EINTRNODATA
        case EINTRNODATA: return "EINTRNODATA";
#endif
#ifdef EINVAL
        case EINVAL: return "EINVAL";
#endif
#ifdef EIO
        case EIO: return "EIO";
#endif
#ifdef EIPSEC
        case EIPSEC: return "EIPSEC";
#endif
#ifdef EISCONN
        case EISCONN: return "EISCONN";
#endif
#ifdef EISDIR
        case EISDIR: return "EISDIR";
#endif
#ifdef EISNAM
        case EISNAM: return "EISNAM";
#endif
#ifdef EJUSTRETURN
        case EJUSTRETURN: return "EJUSTRETURN";
#endif
#ifdef EKEEPLOOKING
        case EKEEPLOOKING: return "EKEEPLOOKING";
#endif
#ifdef EKEYEXPIRED
        case EKEYEXPIRED: return "EKEYEXPIRED";
#endif
#ifdef EKEYREJECTED
        case EKEYREJECTED: return "EKEYREJECTED";
#endif
#ifdef EKEYREVOKED
        case EKEYREVOKED: return "EKEYREVOKED";
#endif
#ifdef EL2HLT
        case EL2HLT: return "EL2HLT";
#endif
#ifdef EL2NSYNC
        case EL2NSYNC: return "EL2NSYNC";
#endif
#ifdef EL3HLT
        case EL3HLT: return "EL3HLT";
#endif
#ifdef EL3RST
        case EL3RST: return "EL3RST";
#endif
#ifdef ELBIN
        case ELBIN: return "ELBIN";
#endif
#ifdef ELEMSGERR
        case ELEMSGERR: return "ELEMSGERR";
#endif
#ifdef ELEMULTITHREAD
        case ELEMULTITHREAD: return "ELEMULTITHREAD";
#endif
#ifdef ELEMULTITHREADFORK
        case ELEMULTITHREADFORK: return "ELEMULTITHREADFORK";
#endif
#ifdef ELENOFORK
        case ELENOFORK: return "ELENOFORK";
#endif
#ifdef ELIBACC
        case ELIBACC: return "ELIBACC";
#endif
#ifdef ELIBBAD
        case ELIBBAD: return "ELIBBAD";
#endif
#ifdef ELIBEXEC
        case ELIBEXEC: return "ELIBEXEC";
#endif
#ifdef ELIBMAX
        case ELIBMAX: return "ELIBMAX";
#endif
#ifdef ELIBSCN
        case ELIBSCN: return "ELIBSCN";
#endif
#ifdef ELNRNG
        case ELNRNG: return "ELNRNG";
#endif
#ifdef ELOCKUNMAPPED
        case ELOCKUNMAPPED: return "ELOCKUNMAPPED";
#endif
#ifdef ELOOP
        case ELOOP: return "ELOOP";
#endif
#ifdef EMEDIA
        case EMEDIA: return "EMEDIA";
#endif
#ifdef EMEDIUMTYPE
        case EMEDIUMTYPE: return "EMEDIUMTYPE";
#endif
#ifdef EMFILE
        case EMFILE: return "EMFILE";
#endif
#ifdef EMLINK
        case EMLINK: return "EMLINK";
#endif
#ifdef EMOUNTEXIT
        case EMOUNTEXIT: return "EMOUNTEXIT";
#endif
#ifdef EMOVEFD
        case EMOVEFD: return "EMOVEFD";
#endif
#ifdef EMSGSIZE
        case EMSGSIZE: return "EMSGSIZE";
#endif
#ifdef EMTIMERS
        case EMTIMERS: return "EMTIMERS";
#endif
#ifdef EMULTIHOP
        case EMULTIHOP: return "EMULTIHOP";
#endif
#ifdef EMVSBADCHAR
        case EMVSBADCHAR: return "EMVSBADCHAR";
#endif
#ifdef EMVSCATLG
        case EMVSCATLG: return "EMVSCATLG";
#endif
#ifdef EMVSCPLERROR
        case EMVSCPLERROR: return "EMVSCPLERROR";
#endif
#ifdef EMVSCVAF
        case EMVSCVAF: return "EMVSCVAF";
#endif
#ifdef EMVSDYNALC
        case EMVSDYNALC: return "EMVSDYNALC";
#endif
#ifdef EMVSERR
        case EMVSERR: return "EMVSERR";
#endif
#ifdef EMVSEXPIRE
        case EMVSEXPIRE: return "EMVSEXPIRE";
#endif
#ifdef EMVSINITIAL
        case EMVSINITIAL: return "EMVSINITIAL";
#endif
#ifdef EMVSNORTL
        case EMVSNORTL: return "EMVSNORTL";
#endif
#ifdef EMVSNOTXP
        case EMVSNOTXP: return "EMVSNOTXP";
#endif
#ifdef EMVSPARM
        case EMVSPARM: return "EMVSPARM";
#endif
#ifdef EMVSPASSWORD
        case EMVSPASSWORD: return "EMVSPASSWORD";
#endif
#ifdef EMVSPATHOPTS
        case EMVSPATHOPTS: return "EMVSPATHOPTS";
#endif
#ifdef EMVSPFSFILE
        case EMVSPFSFILE: return "EMVSPFSFILE";
#endif
#ifdef EMVSPFSPERM
        case EMVSPFSPERM: return "EMVSPFSPERM";
#endif
#ifdef EMVSSAF2ERR
        case EMVSSAF2ERR: return "EMVSSAF2ERR";
#endif
#ifdef EMVSSAFEXTRERR
        case EMVSSAFEXTRERR: return "EMVSSAFEXTRERR";
#endif
#ifdef EMVSTODNOTSET
        case EMVSTODNOTSET: return "EMVSTODNOTSET";
#endif
#ifdef ENAMETOOLONG
        case ENAMETOOLONG: return "ENAMETOOLONG";
#endif
#ifdef ENAVAIL
        case ENAVAIL: return "ENAVAIL";
#endif
#ifdef ENEEDAUTH
        case ENEEDAUTH: return "ENEEDAUTH";
#endif
#ifdef ENETDOWN
        case ENETDOWN: return "ENETDOWN";
#endif
#ifdef ENETRESET
        case ENETRESET: return "ENETRESET";
#endif
#ifdef ENETUNREACH
        case ENETUNREACH: return "ENETUNREACH";
#endif
#ifdef ENFILE
        case ENFILE: return "ENFILE";
#endif
#ifdef ENFSREMOTE
        case ENFSREMOTE: return "ENFSREMOTE";
#endif
#ifdef ENMFILE
        case ENMFILE: return "ENMFILE";
#endif
#ifdef ENOANO
        case ENOANO: return "ENOANO";
#endif
#ifdef ENOATTR
        case ENOATTR: return "ENOATTR";
#endif
#ifdef ENOBUFS
        case ENOBUFS: return "ENOBUFS";
#endif
#ifdef ENOCONNECT
        case ENOCONNECT: return "ENOCONNECT";
#endif
#ifdef ENOCSI
        case ENOCSI: return "ENOCSI";
#endif
#ifdef ENODATA
        case ENODATA: return "ENODATA";
#endif
#ifdef ENODEV
        case ENODEV: return "ENODEV";
#endif
#ifdef ENOENT
        case ENOENT: return "ENOENT";
#endif
#ifdef ENOEXEC
        case ENOEXEC: return "ENOEXEC";
#endif
#ifdef ENOIOCTL
        case ENOIOCTL: return "ENOIOCTL";
#endif
#ifdef ENOKEY
        case ENOKEY: return "ENOKEY";
#endif
#ifdef ENOLCK
        case ENOLCK: return "ENOLCK";
#endif
#ifdef ENOLINK
        case ENOLINK: return "ENOLINK";
#endif
#ifdef ENOLOAD
        case ENOLOAD: return "ENOLOAD";
#endif
#ifdef ENOMATCH
        case ENOMATCH: return "ENOMATCH";
#endif
#ifdef ENOMEDIUM
        case ENOMEDIUM: return "ENOMEDIUM";
#endif
#ifdef ENOMEM
        case ENOMEM: return "ENOMEM";
#endif
#ifdef ENOMSG
        case ENOMSG: return "ENOMSG";
#endif
#ifdef ENONET
        case ENONET: return "ENONET";
#endif
#ifdef ENOPKG
        case ENOPKG: return "ENOPKG";
#endif
#ifdef ENOPOLICY
        case ENOPOLICY: return "ENOPOLICY";
#endif
#ifdef ENOPROTOOPT
        case ENOPROTOOPT: return "ENOPROTOOPT";
#endif
#ifdef ENOREG
        case ENOREG: return "ENOREG";
#endif
#ifdef ENOREUSE
        case ENOREUSE: return "ENOREUSE";
#endif
#ifdef ENOSHARE
        case ENOSHARE: return "ENOSHARE";
#endif
#ifdef ENOSPC
        case ENOSPC: return "ENOSPC";
#endif
#ifdef ENOSR
        case ENOSR: return "ENOSR";
#endif
#ifdef ENOSTR
        case ENOSTR: return "ENOSTR";
#endif
#ifdef ENOSYM
        case ENOSYM: return "ENOSYM";
#endif
#ifdef ENOSYS
        case ENOSYS: return "ENOSYS";
#endif
#ifdef ENOTACTIVE
        case ENOTACTIVE: return "ENOTACTIVE";
#endif
#ifdef ENOTBLK
        case ENOTBLK: return "ENOTBLK";
#endif
#ifdef ENOTCAPABLE
        case ENOTCAPABLE: return "ENOTCAPABLE";
#endif
#ifdef ENOTCONN
        case ENOTCONN: return "ENOTCONN";
#endif
#ifdef ENOTDIR
        case ENOTDIR: return "ENOTDIR";
#endif
#ifdef ENOTEMPTY
        case ENOTEMPTY: return "ENOTEMPTY";
#endif
#ifdef ENOTNAM
        case ENOTNAM: return "ENOTNAM";
#endif
#ifdef ENOTREADY
        case ENOTREADY: return "ENOTREADY";
#endif
#ifdef ENOTRECOVERABLE
        case ENOTRECOVERABLE: return "ENOTRECOVERABLE";
#endif
#ifdef ENOTRUST
        case ENOTRUST: return "ENOTRUST";
#endif
#ifdef ENOTSOCK
        case ENOTSOCK: return "ENOTSOCK";
#endif
#ifdef EOPNOTSUPP
        case EOPNOTSUPP: return "EOPNOTSUPP";
#endif
#ifdef ENOTTY
        case ENOTTY: return "ENOTTY";
#endif
#ifdef ENOTUNIQ
        case ENOTUNIQ: return "ENOTUNIQ";
#endif
#ifdef ENOUNLD
        case ENOUNLD: return "ENOUNLD";
#endif
#ifdef ENOUNREG
        case ENOUNREG: return "ENOUNREG";
#endif
#ifdef ENXIO
        case ENXIO: return "ENXIO";
#endif
#ifdef EOFFLOADboxDOWN
        case EOFFLOADboxDOWN: return "EOFFLOADboxDOWN";
#endif
#ifdef EOFFLOADboxERROR
        case EOFFLOADboxERROR: return "EOFFLOADboxERROR";
#endif
#ifdef EOFFLOADboxRESTART
        case EOFFLOADboxRESTART: return "EOFFLOADboxRESTART";
#endif
#ifdef EOPCOMPLETE
        case EOPCOMPLETE: return "EOPCOMPLETE";
#endif
#ifdef ENOTSUP
#if EOPNOTSUPP != ENOTSUP
        case ENOTSUP: return "ENOTSUP";
#endif
#endif
#ifdef EOVERFLOW
        case EOVERFLOW: return "EOVERFLOW";
#endif
#ifdef EOWNERDEAD
        case EOWNERDEAD: return "EOWNERDEAD";
#endif
#ifdef EPASSTHROUGH
        case EPASSTHROUGH: return "EPASSTHROUGH";
#endif
#ifdef EPATHREMOTE
        case EPATHREMOTE: return "EPATHREMOTE";
#endif
#ifdef EPERM
        case EPERM: return "EPERM";
#endif
#ifdef EPFNOSUPPORT
        case EPFNOSUPPORT: return "EPFNOSUPPORT";
#endif
#ifdef EPIPE
        case EPIPE: return "EPIPE";
#endif
#ifdef EPOWERF
        case EPOWERF: return "EPOWERF";
#endif
#ifdef EPROCLIM
        case EPROCLIM: return "EPROCLIM";
#endif
#ifdef EPROCUNAVAIL
        case EPROCUNAVAIL: return "EPROCUNAVAIL";
#endif
#ifdef EPROGMISMATCH
        case EPROGMISMATCH: return "EPROGMISMATCH";
#endif
#ifdef EPROGUNAVAIL
        case EPROGUNAVAIL: return "EPROGUNAVAIL";
#endif
#ifdef EPROTO
        case EPROTO: return "EPROTO";
#endif
#ifdef EPROTONOSUPPORT
        case EPROTONOSUPPORT: return "EPROTONOSUPPORT";
#endif
#ifdef EPROTOTYPE
        case EPROTOTYPE: return "EPROTOTYPE";
#endif
#ifdef EPWROFF
        case EPWROFF: return "EPWROFF";
#endif
#ifdef EQFULL
        case EQFULL: return "EQFULL";
#endif
#ifdef EQSUSPENDED
        case EQSUSPENDED: return "EQSUSPENDED";
#endif
#ifdef ERANGE
        case ERANGE: return "ERANGE";
#endif
#ifdef ERECYCLE
        case ERECYCLE: return "ERECYCLE";
#endif
#ifdef EREDRIVEOPEN
        case EREDRIVEOPEN: return "EREDRIVEOPEN";
#endif
#ifdef EREFUSED
        case EREFUSED: return "EREFUSED";
#endif
#ifdef ERELOC
        case ERELOC: return "ERELOC";
#endif
#ifdef ERELOCATED
        case ERELOCATED: return "ERELOCATED";
#endif
#ifdef ERELOOKUP
        case ERELOOKUP: return "ERELOOKUP";
#endif
#ifdef EREMCHG
        case EREMCHG: return "EREMCHG";
#endif
#ifdef EREMDEV
        case EREMDEV: return "EREMDEV";
#endif
#ifdef EREMOTE
        case EREMOTE: return "EREMOTE";
#endif
#ifdef EREMOTEIO
        case EREMOTEIO: return "EREMOTEIO";
#endif
#ifdef EREMOTERELEASE
        case EREMOTERELEASE: return "EREMOTERELEASE";
#endif
#ifdef ERESTART
        case ERESTART: return "ERESTART";
#endif
#ifdef ERFKILL
        case ERFKILL: return "ERFKILL";
#endif
#ifdef EROFS
        case EROFS: return "EROFS";
#endif
#ifdef ERPCMISMATCH
        case ERPCMISMATCH: return "ERPCMISMATCH";
#endif
#ifdef ERREMOTE
        case ERREMOTE: return "ERREMOTE";
#endif
#ifdef ESAD
        case ESAD: return "ESAD";
#endif
#ifdef ESHLIBVERS
        case ESHLIBVERS: return "ESHLIBVERS";
#endif
#ifdef ESHUTDOWN
        case ESHUTDOWN: return "ESHUTDOWN";
#endif
#ifdef ESOCKTNOSUPPORT
        case ESOCKTNOSUPPORT: return "ESOCKTNOSUPPORT";
#endif
#ifdef ESOFT
        case ESOFT: return "ESOFT";
#endif
#ifdef ESPIPE
        case ESPIPE: return "ESPIPE";
#endif
#ifdef ESRCH
        case ESRCH: return "ESRCH";
#endif
#ifdef ESRMNT
        case ESRMNT: return "ESRMNT";
#endif
#ifdef ESTALE
        case ESTALE: return "ESTALE";
#endif
#ifdef ESTART
        case ESTART: return "ESTART";
#endif
#ifdef ESTRPIPE
        case ESTRPIPE: return "ESTRPIPE";
#endif
#ifdef ESYSERROR
        case ESYSERROR: return "ESYSERROR";
#endif
#ifdef ETIME
        case ETIME: return "ETIME";
#endif
#ifdef ETIMEDOUT
        case ETIMEDOUT: return "ETIMEDOUT";
#endif
#ifdef ETOOMANYREFS
        case ETOOMANYREFS: return "ETOOMANYREFS";
#endif
#ifdef ETXTBSY
        case ETXTBSY: return "ETXTBSY";
#endif
#ifdef EUCLEAN
        case EUCLEAN: return "EUCLEAN";
#endif
#ifdef EUNATCH
        case EUNATCH: return "EUNATCH";
#endif
#ifdef EUSERS
        case EUSERS: return "EUSERS";
#endif
#ifdef EVERSION
        case EVERSION: return "EVERSION";
#endif
#ifdef EWOULDBLOCK
#if !defined(EAGAIN) || EWOULDBLOCK != EAGAIN
        case EWOULDBLOCK: return "EWOULDBLOCK";
#endif
#endif
#ifdef EWRONGFS
        case EWRONGFS: return "EWRONGFS";
#endif
#ifdef EWRPROTECT
        case EWRPROTECT: return "EWRPROTECT";
#endif
#ifdef EXDEV
        case EXDEV: return "EXDEV";
#endif
#ifdef EXFULL
        case EXFULL: return "EXFULL";
#endif
	}
	snprintf(buf, len, "Unknown error %d", errno_);
	return buf;
}

const char *errnoname_unsafe(int errno_)
{
	static char buf[32];

	return errnoname(errno_, buf, sizeof(buf));
}

#endif /* ERRNONAME_H */
