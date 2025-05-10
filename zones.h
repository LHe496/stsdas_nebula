include <mach.h>
#  zones.h --	Definition of zones data structure		25-Aug-2008

#  Symbolics
define	N_ZONES		3		# Number of ionization zones
define	LOW		1		# index of low I.P. zone
define	MED		2		# index of medium I.P. zone
define	HI		3		# index of high I.P. zone

#  Structure for nebular stratification
define	Z_ATL		Memi[($1+0)]	# Atomic data object list
define	Ne_Ciii		Memr[NBITS_INT/32*($1+1)]	# Density for med ionization region
define	Ne_Oii		Memr[NBITS_INT/32*($1+2)]	# Density for low ionization region
#define	Ne_NEii		Memr[NBITS_INT/32*($1+3)]	# Density for low ionization region
define	Ne_NEiv		Memr[NBITS_INT/32*($1+4)]	# Density high low ionization region
define	Ne_Sii		Memr[NBITS_INT/32*($1+5)]	# Density for low ionization region
define	Ne_CLiii	Memr[NBITS_INT/32*($1+6)]	# Density med low ionization region
#define	Ne_ARii		Memr[NBITS_INT/32*($1+7)]	# Density for low ionization region
define	Ne_ARiv		Memr[NBITS_INT/32*($1+8)]	# Density for med ionization region
define	Te_Nii		Memr[NBITS_INT/32*($1+9)]	# Temperature for low ionization region
define	Te_Oii		Memr[NBITS_INT/32*($1+10)]	# Temperature for low ionization region
define	Te_Oiii		Memr[NBITS_INT/32*($1+11)]	# Temperature for med ionization region
define	Te_NEiii	Memr[NBITS_INT/32*($1+12)]	# Temperature for med ionization region
#define	Te_NEiv		Memr[NBITS_INT/32*($1+13)]	# Temperature for high ionization region
define	Te_NEv		Memr[NBITS_INT/32*($1+14)]	# Temperature for high ionization region
define	Te_Sii		Memr[NBITS_INT/32*($1+15)]	# Temperature for low ionization region
define	Te_Siii		Memr[NBITS_INT/32*($1+16)]	# Temperature for med ionization region
define	Te_ARiii	Memr[NBITS_INT/32*($1+17)]	# Temperature for med ionization region
define	Te_ARiv		Memr[NBITS_INT/32*($1+18)]	# Temperature for med ionization region
define	Te_ARv		Memr[NBITS_INT/32*($1+19)]	# Temperature for high ionization region

define	Ne_Low		Memr[NBITS_INT/32*($1+20)]	# Density for low ionization region
define	Ne_Med		Memr[NBITS_INT/32*($1+21)]	# Density for medium ionization region
define	Ne_Hi		Memr[NBITS_INT/32*($1+22)]	# Density for high ionization region
define	Te_Low		Memr[NBITS_INT/32*($1+23)]	# Temperature for low ionization region
define	Te_Med		Memr[NBITS_INT/32*($1+24)]	# Temp. for medium ionization region
define	Te_Hi		Memr[NBITS_INT/32*($1+25)]	# Temperature for high ionization region
define	LEN_ZONES	26		# size of ZONES structure

