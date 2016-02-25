#ifndef HANAFUDA_H
#define HANAFUDA_H

#define LH_MONTHS 12
/* Days?? */
#define LH_DAYS 4

	/*
	 * 0:1 day
	 * 2:5 month
	 */
	typedef enum {
		LH_FUDA_1_1 = ((0 << 2) | 0), LH_FUDA_1_2 = ((0 << 2) | 1), LH_FUDA_1_3 = ((0 << 2) | 2), LH_FUDA_1_4 = ((0 << 2) | 3),
		LH_FUDA_2_1 = ((1 << 2) | 0), LH_FUDA_2_2 = ((1 << 2) | 1), LH_FUDA_2_3 = ((1 << 2) | 2), LH_FUDA_2_4 = ((1 << 2) | 3),
		LH_FUDA_3_1 = ((2 << 2) | 0), LH_FUDA_3_2 = ((2 << 2) | 1), LH_FUDA_3_3 = ((2 << 2) | 2), LH_FUDA_3_4 = ((2 << 2) | 3),
		LH_FUDA_4_1 = ((3 << 2) | 0), LH_FUDA_4_2 = ((3 << 2) | 1), LH_FUDA_4_3 = ((3 << 2) | 2), LH_FUDA_4_4 = ((3 << 2) | 3),
		LH_FUDA_5_1 = ((4 << 2) | 0), LH_FUDA_5_2 = ((4 << 2) | 1), LH_FUDA_5_3 = ((4 << 2) | 2), LH_FUDA_5_4 = ((4 << 2) | 3),
		LH_FUDA_6_1 = ((5 << 2) | 0), LH_FUDA_6_2 = ((5 << 2) | 1), LH_FUDA_6_3 = ((5 << 2) | 2), LH_FUDA_6_4 = ((5 << 2) | 3),
		LH_FUDA_7_1 = ((6 << 2) | 0), LH_FUDA_7_2 = ((6 << 2) | 1), LH_FUDA_7_3 = ((6 << 2) | 2), LH_FUDA_7_4 = ((6 << 2) | 3),
		LH_FUDA_8_1 = ((7 << 2) | 0), LH_FUDA_8_2 = ((7 << 2) | 1), LH_FUDA_8_3 = ((7 << 2) | 2), LH_FUDA_8_4 = ((7 << 2) | 3),
		LH_FUDA_9_1 = ((8 << 2) | 0), LH_FUDA_9_2 = ((8 << 2) | 1), LH_FUDA_9_3 = ((8 << 2) | 2), LH_FUDA_9_4 = ((8 << 2) | 3),
		LH_FUDA_10_1 = ((9 << 2) | 0), LH_FUDA_10_2 = ((9 << 2) | 1), LH_FUDA_10_3 = ((9 << 2) | 2), LH_FUDA_10_4 = ((9 << 2) | 3),
		LH_FUDA_11_1 = ((10 << 2) | 0), LH_FUDA_11_2 = ((10 << 2) | 1), LH_FUDA_11_3 = ((10 << 2) | 2), LH_FUDA_11_4 = ((10 << 2) | 3),
		LH_FUDA_12_1 = ((11 << 2) | 0), LH_FUDA_12_2 = ((11 << 2) | 1), LH_FUDA_12_3 = ((11 << 2) | 2), LH_FUDA_12_4 = ((11 << 2) | 3),
		LH_FUDA_INVALID
	} LH_FUDA_T;

#define lh_int_to_fuda_t(i) (((LH_FUDA_T) ((i))))

#define lh_month(fuda) ((((int)((fuda)) & 0x3c) >> 2))
#define lh_day(fuda)   ((((int)((fuda)) & 0x03) >> 0))

#endif /* HANAFUDA_H */
