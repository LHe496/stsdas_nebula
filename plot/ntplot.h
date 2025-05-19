include <iraf.h>
#  ntplot.h --	Structure for plot attributes			9-Jul-97

#-------------------------------------------------------------------------------
#  Plot types: 
define	PLOT_TYPE	"|TN|IN|IT"
define	TE_VS_NE	1
define	INTENS_VS_NE	2
define	INTENS_VS_TE	3

define	MIN_PTS		10		# Minimum useful curve resolution
define	KEYHELP		"flbin$ntcontour.key"
#define	KEYHELP		"nebular$ntcontour.key"
define	PROMPT		"ntcontour cursor options"

#-------------------------------------------------------------------------------
# Plot structure.
define	PL_TYPE		Memi[P2I($1+0)]	# plot type: Te-Ne|I-Ne|I-Te
define	PL_DIAG_TYPE	Memi[P2I($1+1)]	# curve diagnostic type: Ne, Te, I
define	PL_GP		Memi[P2I($1+2)]	# plot graphics descriptor
define	PL_AT		Memi[P2I($1+3)]	# atomic data object
define	PL_APPEND	Memb[P2B($1+4)]	# append to existing plot?

#  Plot limits
define	HI_NE		Memr[P2R($1+6)]	# upper density limit
define	LO_NE		Memr[P2R($1+7)]	# lower density limit
define	PLOT_LOG_NE	Memb[P2B($1+8)]	# plot log density?
define	HI_TE		Memr[P2R($1+9)]	# upper temperature limit
define	LO_TE		Memr[P2R($1+10)]	# lower temperature limit
define	PLOT_LOG_TE	Memb[P2B($1+11)]	# plot log temperature?
define	HI_INTENS	Memr[P2R($1+12)]	# upper intensity limit
define	LO_INTENS	Memr[P2R($1+13)]	# lower intensity limit
define	PLOT_LOG_INTENS	Memb[P2B($1+14)]	# plot log intensity?
#
define	PL_LIST_PTR	Memi[P2I($1+15)]	# list of contours to plot
define	PL_NCONTOUR	Memi[P2I($1+16)]	# number of contours above/below ref
define	PL_REF_COLOR	Memi[P2I($1+17)]	# color of reference contour
define	PL_DELTA_COLOR	Memi[P2I($1+18)]	# color of delta contours
define	PL_NPTS		Memi[P2I($1+19)]	# size of reference arrays
define	PL_RATIO	Memr[P2R($1+20)]	# reference contour
define	PL_DELTA	Memr[P2R($1+21)]	# interval between contours

#  Array pointers
define	NE_PTR		Memi[P2I($1+24)]	# working density array
define	TE_PTR		Memi[P2I($1+25)]	# working temperature array
define	INT_PTR		Memi[P2I($1+26)]	# working intensity array
define	NE_REF_PTR	Memi[P2I($1+27)]	# reference density array
define	TE_REF_PTR	Memi[P2I($1+28)]	# reference temperature array
define	INT_REF_PTR	Memi[P2I($1+29)]	# reference intensity array
define	X_LABEL_PTR	Memi[P2I($1+30)]	# X-axis label
define	Y_LABEL_PTR	Memi[P2I($1+31)]	# Y-axis label
define	TITLE_PTR	Memi[P2I($1+32)]	# plot title
define	USER_TITLE_PTR	Memi[P2I($1+33)]	# user plot title
define	DIAG_EXPR_PTR	Memi[P2I($1+34)]	# transition description
define	USER_TRANS_PTR	Memi[P2I($1+35)]	# user transition description
define	PL_TABLE_PTR	Memi[P2I($1+36)]	# name of output table

define	LEN_PLT		40		# Size of plot structure

#  Memory management
define	PL_NE		Memr[NE_PTR($1)]
define	PL_TE		Memr[TE_PTR($1)]
define	PL_INT		Memr[INT_PTR($1)]
define	NE_REF		Memr[NE_REF_PTR($1)]
define	TE_REF		Memr[TE_REF_PTR($1)]
define	INT_REF		Memr[INT_REF_PTR($1)]

define	PL_LIST		Memc[PL_LIST_PTR($1)]
define	XLABEL		Memc[X_LABEL_PTR($1)]
define	YLABEL		Memc[Y_LABEL_PTR($1)]
define	TITLE		Memc[TITLE_PTR($1)]
define	USER_TITLE	Memc[USER_TITLE_PTR($1)]
define	DIAG_EXPR	Memc[DIAG_EXPR_PTR($1)]
define	USER_TRANSITION	Memc[USER_TRANS_PTR($1)]
define	PL_TABLE	Memc[PL_TABLE_PTR($1)]
