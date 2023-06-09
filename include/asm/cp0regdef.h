#ifndef _cp0regdef_h_
#define _cp0regdef_h_

#define CP0_INDEX $0
#define CP0_RANDOM $1
#define CP0_ENTRYLO0 $2
#define CP0_ENTRYLO1 $3
#define CP0_CONTEXT $4
#define CP0_PAGEMASK $5
#define CP0_WIRED $6
#define CP0_BADVADDR $8
#define CP0_COUNT $9
#define CP0_ENTRYHI $10
#define CP0_COMPARE $11
#define CP0_STATUS $12
#define CP0_CAUSE $13
#define CP0_EPC $14
#define CP0_PRID $15
#define CP0_CONFIG $16
#define CP0_LLADDR $17
#define CP0_WATCHLO $18
#define CP0_WATCHHI $19
#define CP0_XCONTEXT $20
#define CP0_FRAMEMASK $21
#define CP0_DIAGNOSTIC $22
#define CP0_PERFORMANCE $25
#define CP0_ECC $26
#define CP0_CACHEERR $27
#define CP0_TAGLO $28
#define CP0_TAGHI $29
#define CP0_ERROREPC $30

#define STATUS_CU0 0x10000000
#define STATUS_IM4 0x1000
#define STATUS_KUp 0x8
#define STATUS_IEp 0x4
#define STATUS_KUc 0x2
#define STATUS_IEc 0x1
/*
#define WR_CP0(value,reg)					\
do {										\
	register unsigned int _v = value;		\
	asm  ("mtc0 %0,"__ASM_STR(reg)		\
			:: "r"(_v)						\
			: "memory");					\
	} while (0)			
*/
#endif
