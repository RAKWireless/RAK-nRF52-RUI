# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
# 1 "/home/eddieho/tmp/phase2_release/rui-v3//"
# 1 "<built-in>"
#define __STDC__ 1
#define __STDC_VERSION__ 199901L
#define __STDC_HOSTED__ 1
#define __GNUC__ 10
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __VERSION__ "10.2.1 20201103 (release)"
#define __ATOMIC_RELAXED 0
#define __ATOMIC_SEQ_CST 5
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __OPTIMIZE_SIZE__ 1
#define __OPTIMIZE__ 1
#define __FINITE_MATH_ONLY__ 0
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG__ 4
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_SIZE_T__ 4
#define __CHAR_BIT__ 8
#define __BIGGEST_ALIGNMENT__ 8
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_PDP_ENDIAN__ 3412
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __SIZEOF_POINTER__ 4
#define __SIZE_TYPE__ unsigned int
#define __PTRDIFF_TYPE__ int
#define __WCHAR_TYPE__ unsigned int
#define __WINT_TYPE__ unsigned int
#define __INTMAX_TYPE__ long long int
#define __UINTMAX_TYPE__ long long unsigned int
#define __CHAR16_TYPE__ short unsigned int
#define __CHAR32_TYPE__ long unsigned int
#define __SIG_ATOMIC_TYPE__ int
#define __INT8_TYPE__ signed char
#define __INT16_TYPE__ short int
#define __INT32_TYPE__ long int
#define __INT64_TYPE__ long long int
#define __UINT8_TYPE__ unsigned char
#define __UINT16_TYPE__ short unsigned int
#define __UINT32_TYPE__ long unsigned int
#define __UINT64_TYPE__ long long unsigned int
#define __INT_LEAST8_TYPE__ signed char
#define __INT_LEAST16_TYPE__ short int
#define __INT_LEAST32_TYPE__ long int
#define __INT_LEAST64_TYPE__ long long int
#define __UINT_LEAST8_TYPE__ unsigned char
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __UINT_LEAST32_TYPE__ long unsigned int
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __INT_FAST8_TYPE__ int
#define __INT_FAST16_TYPE__ int
#define __INT_FAST32_TYPE__ int
#define __INT_FAST64_TYPE__ long long int
#define __UINT_FAST8_TYPE__ unsigned int
#define __UINT_FAST16_TYPE__ unsigned int
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __INTPTR_TYPE__ int
#define __UINTPTR_TYPE__ unsigned int
#define __GXX_ABI_VERSION 1014
#define __SCHAR_MAX__ 0x7f
#define __SHRT_MAX__ 0x7fff
#define __INT_MAX__ 0x7fffffff
#define __LONG_MAX__ 0x7fffffffL
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __WCHAR_MAX__ 0xffffffffU
#define __WCHAR_MIN__ 0U
#define __WINT_MAX__ 0xffffffffU
#define __WINT_MIN__ 0U
#define __PTRDIFF_MAX__ 0x7fffffff
#define __SIZE_MAX__ 0xffffffffU
#define __SCHAR_WIDTH__ 8
#define __SHRT_WIDTH__ 16
#define __INT_WIDTH__ 32
#define __LONG_WIDTH__ 32
#define __LONG_LONG_WIDTH__ 64
#define __WCHAR_WIDTH__ 32
#define __WINT_WIDTH__ 32
#define __PTRDIFF_WIDTH__ 32
#define __SIZE_WIDTH__ 32
#define __INTMAX_MAX__ 0x7fffffffffffffffLL
#define __INTMAX_C(c) c ## LL
#define __UINTMAX_MAX__ 0xffffffffffffffffULL
#define __UINTMAX_C(c) c ## ULL
#define __INTMAX_WIDTH__ 64
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __SIG_ATOMIC_WIDTH__ 32
#define __INT8_MAX__ 0x7f
#define __INT16_MAX__ 0x7fff
#define __INT32_MAX__ 0x7fffffffL
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __UINT8_MAX__ 0xff
#define __UINT16_MAX__ 0xffff
#define __UINT32_MAX__ 0xffffffffUL
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __INT_LEAST8_MAX__ 0x7f
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __INT_LEAST16_MAX__ 0x7fff
#define __INT16_C(c) c
#define __INT_LEAST16_WIDTH__ 16
#define __INT_LEAST32_MAX__ 0x7fffffffL
#define __INT32_C(c) c ## L
#define __INT_LEAST32_WIDTH__ 32
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __INT64_C(c) c ## LL
#define __INT_LEAST64_WIDTH__ 64
#define __UINT_LEAST8_MAX__ 0xff
#define __UINT8_C(c) c
#define __UINT_LEAST16_MAX__ 0xffff
#define __UINT16_C(c) c
#define __UINT_LEAST32_MAX__ 0xffffffffUL
#define __UINT32_C(c) c ## UL
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __UINT64_C(c) c ## ULL
#define __INT_FAST8_MAX__ 0x7fffffff
#define __INT_FAST8_WIDTH__ 32
#define __INT_FAST16_MAX__ 0x7fffffff
#define __INT_FAST16_WIDTH__ 32
#define __INT_FAST32_MAX__ 0x7fffffff
#define __INT_FAST32_WIDTH__ 32
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT_FAST64_WIDTH__ 64
#define __UINT_FAST8_MAX__ 0xffffffffU
#define __UINT_FAST16_MAX__ 0xffffffffU
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __INTPTR_MAX__ 0x7fffffff
#define __INTPTR_WIDTH__ 32
#define __UINTPTR_MAX__ 0xffffffffU
#define __GCC_IEC_559 0
#define __GCC_IEC_559_COMPLEX 0
#define __FLT_EVAL_METHOD__ 0
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __DEC_EVAL_METHOD__ 2
#define __FLT_RADIX__ 2
#define __FLT_MANT_DIG__ 24
#define __FLT_DIG__ 6
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX_10_EXP__ 38
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_MAX__ 3.4028234663852886e+38F
#define __FLT_NORM_MAX__ 3.4028234663852886e+38F
#define __FLT_MIN__ 1.1754943508222875e-38F
#define __FLT_EPSILON__ 1.1920928955078125e-7F
#define __FLT_DENORM_MIN__ 1.4012984643248171e-45F
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF 1
#define __DBL_MANT_DIG__ 53
#define __DBL_DIG__ 15
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX_10_EXP__ 308
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_NORM_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_MIN__ ((double)2.2250738585072014e-308L)
#define __DBL_EPSILON__ ((double)2.2204460492503131e-16L)
#define __DBL_DENORM_MIN__ ((double)4.9406564584124654e-324L)
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_DIG__ 15
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX_10_EXP__ 308
#define __DECIMAL_DIG__ 17
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_NORM_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __FLT32_MANT_DIG__ 24
#define __FLT32_DIG__ 6
#define __FLT32_MIN_EXP__ (-125)
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32_MAX_EXP__ 128
#define __FLT32_MAX_10_EXP__ 38
#define __FLT32_DECIMAL_DIG__ 9
#define __FLT32_MAX__ 3.4028234663852886e+38F32
#define __FLT32_NORM_MAX__ 3.4028234663852886e+38F32
#define __FLT32_MIN__ 1.1754943508222875e-38F32
#define __FLT32_EPSILON__ 1.1920928955078125e-7F32
#define __FLT32_DENORM_MIN__ 1.4012984643248171e-45F32
#define __FLT32_HAS_DENORM__ 1
#define __FLT32_HAS_INFINITY__ 1
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF32 1
#define __FLT64_MANT_DIG__ 53
#define __FLT64_DIG__ 15
#define __FLT64_MIN_EXP__ (-1021)
#define __FLT64_MIN_10_EXP__ (-307)
#define __FLT64_MAX_EXP__ 1024
#define __FLT64_MAX_10_EXP__ 308
#define __FLT64_DECIMAL_DIG__ 17
#define __FLT64_MAX__ 1.7976931348623157e+308F64
#define __FLT64_NORM_MAX__ 1.7976931348623157e+308F64
#define __FLT64_MIN__ 2.2250738585072014e-308F64
#define __FLT64_EPSILON__ 2.2204460492503131e-16F64
#define __FLT64_DENORM_MIN__ 4.9406564584124654e-324F64
#define __FLT64_HAS_DENORM__ 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __FLT32X_MANT_DIG__ 53
#define __FLT32X_DIG__ 15
#define __FLT32X_MIN_EXP__ (-1021)
#define __FLT32X_MIN_10_EXP__ (-307)
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32X_MAX_10_EXP__ 308
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT32X_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_NORM_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_MIN__ 2.2250738585072014e-308F32x
#define __FLT32X_EPSILON__ 2.2204460492503131e-16F32x
#define __FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x
#define __FLT32X_HAS_DENORM__ 1
#define __FLT32X_HAS_INFINITY__ 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __SFRACT_FBIT__ 7
#define __SFRACT_IBIT__ 0
#define __SFRACT_MIN__ (-0.5HR-0.5HR)
#define __SFRACT_MAX__ 0X7FP-7HR
#define __SFRACT_EPSILON__ 0x1P-7HR
#define __USFRACT_FBIT__ 8
#define __USFRACT_IBIT__ 0
#define __USFRACT_MIN__ 0.0UHR
#define __USFRACT_MAX__ 0XFFP-8UHR
#define __USFRACT_EPSILON__ 0x1P-8UHR
#define __FRACT_FBIT__ 15
#define __FRACT_IBIT__ 0
#define __FRACT_MIN__ (-0.5R-0.5R)
#define __FRACT_MAX__ 0X7FFFP-15R
#define __FRACT_EPSILON__ 0x1P-15R
#define __UFRACT_FBIT__ 16
#define __UFRACT_IBIT__ 0
#define __UFRACT_MIN__ 0.0UR
#define __UFRACT_MAX__ 0XFFFFP-16UR
#define __UFRACT_EPSILON__ 0x1P-16UR
#define __LFRACT_FBIT__ 31
#define __LFRACT_IBIT__ 0
#define __LFRACT_MIN__ (-0.5LR-0.5LR)
#define __LFRACT_MAX__ 0X7FFFFFFFP-31LR
#define __LFRACT_EPSILON__ 0x1P-31LR
#define __ULFRACT_FBIT__ 32
#define __ULFRACT_IBIT__ 0
#define __ULFRACT_MIN__ 0.0ULR
#define __ULFRACT_MAX__ 0XFFFFFFFFP-32ULR
#define __ULFRACT_EPSILON__ 0x1P-32ULR
#define __LLFRACT_FBIT__ 63
#define __LLFRACT_IBIT__ 0
#define __LLFRACT_MIN__ (-0.5LLR-0.5LLR)
#define __LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR
#define __LLFRACT_EPSILON__ 0x1P-63LLR
#define __ULLFRACT_FBIT__ 64
#define __ULLFRACT_IBIT__ 0
#define __ULLFRACT_MIN__ 0.0ULLR
#define __ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR
#define __ULLFRACT_EPSILON__ 0x1P-64ULLR
#define __SACCUM_FBIT__ 7
#define __SACCUM_IBIT__ 8
#define __SACCUM_MIN__ (-0X1P7HK-0X1P7HK)
#define __SACCUM_MAX__ 0X7FFFP-7HK
#define __SACCUM_EPSILON__ 0x1P-7HK
#define __USACCUM_FBIT__ 8
#define __USACCUM_IBIT__ 8
#define __USACCUM_MIN__ 0.0UHK
#define __USACCUM_MAX__ 0XFFFFP-8UHK
#define __USACCUM_EPSILON__ 0x1P-8UHK
#define __ACCUM_FBIT__ 15
#define __ACCUM_IBIT__ 16
#define __ACCUM_MIN__ (-0X1P15K-0X1P15K)
#define __ACCUM_MAX__ 0X7FFFFFFFP-15K
#define __ACCUM_EPSILON__ 0x1P-15K
#define __UACCUM_FBIT__ 16
#define __UACCUM_IBIT__ 16
#define __UACCUM_MIN__ 0.0UK
#define __UACCUM_MAX__ 0XFFFFFFFFP-16UK
#define __UACCUM_EPSILON__ 0x1P-16UK
#define __LACCUM_FBIT__ 31
#define __LACCUM_IBIT__ 32
#define __LACCUM_MIN__ (-0X1P31LK-0X1P31LK)
#define __LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK
#define __LACCUM_EPSILON__ 0x1P-31LK
#define __ULACCUM_FBIT__ 32
#define __ULACCUM_IBIT__ 32
#define __ULACCUM_MIN__ 0.0ULK
#define __ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK
#define __ULACCUM_EPSILON__ 0x1P-32ULK
#define __LLACCUM_FBIT__ 31
#define __LLACCUM_IBIT__ 32
#define __LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)
#define __LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK
#define __LLACCUM_EPSILON__ 0x1P-31LLK
#define __ULLACCUM_FBIT__ 32
#define __ULLACCUM_IBIT__ 32
#define __ULLACCUM_MIN__ 0.0ULLK
#define __ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK
#define __ULLACCUM_EPSILON__ 0x1P-32ULLK
#define __QQ_FBIT__ 7
#define __QQ_IBIT__ 0
#define __HQ_FBIT__ 15
#define __HQ_IBIT__ 0
#define __SQ_FBIT__ 31
#define __SQ_IBIT__ 0
#define __DQ_FBIT__ 63
#define __DQ_IBIT__ 0
#define __TQ_FBIT__ 127
#define __TQ_IBIT__ 0
#define __UQQ_FBIT__ 8
#define __UQQ_IBIT__ 0
#define __UHQ_FBIT__ 16
#define __UHQ_IBIT__ 0
#define __USQ_FBIT__ 32
#define __USQ_IBIT__ 0
#define __UDQ_FBIT__ 64
#define __UDQ_IBIT__ 0
#define __UTQ_FBIT__ 128
#define __UTQ_IBIT__ 0
#define __HA_FBIT__ 7
#define __HA_IBIT__ 8
#define __SA_FBIT__ 15
#define __SA_IBIT__ 16
#define __DA_FBIT__ 31
#define __DA_IBIT__ 32
#define __TA_FBIT__ 63
#define __TA_IBIT__ 64
#define __UHA_FBIT__ 8
#define __UHA_IBIT__ 8
#define __USA_FBIT__ 16
#define __USA_IBIT__ 16
#define __UDA_FBIT__ 32
#define __UDA_IBIT__ 32
#define __UTA_FBIT__ 64
#define __UTA_IBIT__ 64
#define __REGISTER_PREFIX__ 
#define __USER_LABEL_PREFIX__ 
#define __GNUC_STDC_INLINE__ 1
#define __STRICT_ANSI__ 1
#define __CHAR_UNSIGNED__ 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZEOF_PTRDIFF_T__ 4
#define __ARM_FEATURE_DSP 1
#define __ARM_FEATURE_QBIT 1
#define __ARM_FEATURE_SAT 1
#undef __ARM_FEATURE_CRYPTO
# 1 "<built-in>"
#define __ARM_FEATURE_UNALIGNED 1
#undef __ARM_FEATURE_QRDMX
# 1 "<built-in>"
#undef __ARM_FEATURE_CRC32
# 1 "<built-in>"
#undef __ARM_FEATURE_DOTPROD
# 1 "<built-in>"
#undef __ARM_FEATURE_COMPLEX
# 1 "<built-in>"
#define __ARM_32BIT_STATE 1
#undef __ARM_FEATURE_MVE
# 1 "<built-in>"
#undef __ARM_FEATURE_CMSE
# 1 "<built-in>"
#undef __ARM_FEATURE_LDREX
# 1 "<built-in>"
#define __ARM_FEATURE_LDREX 7
#define __ARM_FEATURE_CLZ 1
#undef __ARM_FEATURE_NUMERIC_MAXMIN
# 1 "<built-in>"
#define __ARM_FEATURE_SIMD32 1
#define __ARM_SIZEOF_MINIMAL_ENUM 1
#define __ARM_SIZEOF_WCHAR_T 4
#undef __ARM_ARCH_PROFILE
# 1 "<built-in>"
#define __ARM_ARCH_PROFILE 77
#define __arm__ 1
#undef __ARM_ARCH
# 1 "<built-in>"
#define __ARM_ARCH 7
#define __APCS_32__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __thumb__ 1
#define __thumb2__ 1
#define __THUMBEL__ 1
#undef __ARM_ARCH_ISA_THUMB
# 1 "<built-in>"
#define __ARM_ARCH_ISA_THUMB 2
#define __ARMEL__ 1
#define __VFP_FP__ 1
#undef __ARM_FP
# 1 "<built-in>"
#define __ARM_FP 4
#undef __ARM_FP16_FORMAT_IEEE
# 1 "<built-in>"
#undef __ARM_FP16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#undef __ARM_FP16_ARGS
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_FML
# 1 "<built-in>"
#define __ARM_FEATURE_FMA 1
#undef __ARM_NEON__
# 1 "<built-in>"
#undef __ARM_NEON
# 1 "<built-in>"
#undef __ARM_NEON_FP
# 1 "<built-in>"
#define __THUMB_INTERWORK__ 1
#define __ARM_ARCH_7EM__ 1
#define __ARM_PCS_VFP 1
#define __ARM_EABI__ 1
#undef __FDPIC__
# 1 "<built-in>"
#define __ARM_ARCH_EXT_IDIV__ 1
#define __ARM_FEATURE_IDIV 1
#define __ARM_ASM_SYNTAX_UNIFIED__ 1
#undef __ARM_FEATURE_COPROC
# 1 "<built-in>"
#define __ARM_FEATURE_COPROC 15
#undef __ARM_FEATURE_CDE
# 1 "<built-in>"
#undef __ARM_FEATURE_CDE_COPROC
# 1 "<built-in>"
#undef __ARM_FEATURE_MATMUL_INT8
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_BF16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#define __GXX_TYPEINFO_EQUALITY_INLINE 0
#define __ELF__ 1
# 1 "<command-line>"
#define __USES_INITFINI__ 1
#define nrf52840 1
#define SUPPORT_LORA 1
#define LORA_IO_SPI_PORT 2
#define SYS_RTC_COUNTER_PORT 2
#define ATCMD_CUST_TABLE_SIZE 64
#define WAN_TYPE 0
#define LORA_STACK_VER 0x040407
#define RAK4631_V2 .0+RAK5005-O_V1.0 1
#define rak4630 1
#define BATTERY_LEVEL_SUPPORT 1
#define BLE_CENTRAL_SUPPORT 1
#define APP_TIMER_V2 1
#define APP_TIMER_V2_RTC1_ENABLED 1
#define BOARD_PCA10056 1
#define S140 1
#define CONFIG_GPIO_AS_PINRESET 1
#define FLOAT_ABI_HARD 1
#define NRF52840_XXAA 1
#define NRF_SD_BLE_API_VERSION 6
#define USER_UART 1
#define USBD_CDC 1
#define BLE_SUPPORT 1
#define DFU_SUPPORT 1
#define BL_SETTINGS_ACCESS_ONLY 1
#define NRF_DFU_SVCI_ENABLED 1
#define NRF_DFU_TRANSPORT_BLE 1
#define REGION_AS923 1
#define REGION_AU915 1
#define REGION_CN470 1
#define REGION_CN779 1
#define REGION_EU433 1
#define REGION_EU868 1
#define REGION_KR920 1
#define REGION_IN865 1
#define REGION_US915 1
#define REGION_RU864 1
#define SOFT_SE 1
#define SECURE_ELEMENT_PRE_PROVISIONED 1
#define LORAMAC_CLASSB_ENABLED 1
#define SOFTDEVICE_PRESENT 1
#define SWI_DISABLE0 1
#define __HEAP_SIZE 7168
#define __STACK_SIZE 7168
#define DEBUG 1
#define WISBLOCK_BASE_5005_O 1
#define SUPPORT_USB 1
#define SUPPORT_BLE 1
#define SUPPORT_NFC 1
#define SUPPORT_SPI 1
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
# 23 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define __UTILITIES_H__ 






# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 1 3 4
# 9 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 3 4
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 1 3 4
# 10 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define _STDINT_H 

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3 4





#define _MACHINE__DEFAULT_TYPES_H 

# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 1 3 4
# 22 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define _SYS_FEATURES_H 





# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3 4



#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.3.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 3
#define __NEWLIB_PATCHLEVEL__ 0
# 29 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 2 3 4




#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))






#define __GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)
# 249 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __ATFILE_VISIBLE 0





#define __BSD_VISIBLE 0





#define __GNU_VISIBLE 0







#define __ISO_C_VISIBLE 1999







#define __LARGEFILE_VISIBLE 0





#define __MISC_VISIBLE 0
# 299 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __POSIX_VISIBLE 0





#define __SVID_VISIBLE 0
# 319 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __XSI_VISIBLE 0
# 330 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __SSP_FORTIFY_LEVEL 0
# 9 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 2 3 4






#define __EXP(x) __ ##x ##__
# 26 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#define __have_longlong64 1






#define __have_long32 1








# 41 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;



#define ___int8_t_defined 1







typedef short int __int16_t;

typedef short unsigned int __uint16_t;



#define ___int16_t_defined 1
# 77 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;



#define ___int32_t_defined 1
# 103 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;



#define ___int64_t_defined 1
# 134 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;



#define ___int_least8_t_defined 1
# 160 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;



#define ___int_least16_t_defined 1
# 182 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;



#define ___int_least32_t_defined 1
# 200 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;



#define ___int_least64_t_defined 1







typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 244 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#undef __EXP
# 13 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 10 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _SYS__INTSUP_H 





#define __STDINT_EXP(x) __ ##x ##__
# 35 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef __int20
#undef __int20__
#undef long
#define signed +0
#define unsigned +0
#define char +0
#define short +1
#define __int20 +2
#define __int20__ +2
#define int +2
#define long +4
# 67 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _INTPTR_EQ_INT 






#define _INT32_EQ_LONG 







#define __INT8 "hh"
# 93 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT16 "h"
# 104 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT32 "l"
# 113 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT64 "ll"






#define __FAST8 
# 129 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST16 






#define __FAST32 
# 147 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST64 "ll"



#define __LEAST8 "hh"
# 162 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST16 "h"
# 173 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST32 "l"
# 182 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST64 "ll"

#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef long
       
       
       
       
       
# 194 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20
       
# 195 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20__
       
       
# 14 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 10 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
#define _SYS__STDINT_H 
# 20 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;
#define _INT8_T_DECLARED 


typedef __uint8_t uint8_t ;
#define _UINT8_T_DECLARED 

#define __int8_t_defined 1




typedef __int16_t int16_t ;
#define _INT16_T_DECLARED 


typedef __uint16_t uint16_t ;
#define _UINT16_T_DECLARED 

#define __int16_t_defined 1




typedef __int32_t int32_t ;
#define _INT32_T_DECLARED 


typedef __uint32_t uint32_t ;
#define _UINT32_T_DECLARED 

#define __int32_t_defined 1




typedef __int64_t int64_t ;
#define _INT64_T_DECLARED 


typedef __uint64_t uint64_t ;
#define _UINT64_T_DECLARED 

#define __int64_t_defined 1



typedef __intmax_t intmax_t;
#define _INTMAX_T_DECLARED 



typedef __uintmax_t uintmax_t;
#define _UINTMAX_T_DECLARED 



typedef __intptr_t intptr_t;
#define _INTPTR_T_DECLARED 



typedef __uintptr_t uintptr_t;
#define _UINTPTR_T_DECLARED 
# 15 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
#define __int_least8_t_defined 1



typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
#define __int_least16_t_defined 1



typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
#define __int_least32_t_defined 1



typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
#define __int_least64_t_defined 1
# 51 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
#define __int_fast8_t_defined 1







  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
#define __int_fast16_t_defined 1







  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
#define __int_fast32_t_defined 1







  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
#define __int_fast64_t_defined 1
# 128 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTPTR_MIN (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX (__INTPTR_MAX__)
#define UINTPTR_MAX (__UINTPTR_MAX__)
# 152 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT8_MIN (-__INT8_MAX__ - 1)
#define INT8_MAX (__INT8_MAX__)
#define UINT8_MAX (__UINT8_MAX__)







#define INT_LEAST8_MIN (-__INT_LEAST8_MAX__ - 1)
#define INT_LEAST8_MAX (__INT_LEAST8_MAX__)
#define UINT_LEAST8_MAX (__UINT_LEAST8_MAX__)
# 174 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_MIN (-__INT16_MAX__ - 1)
#define INT16_MAX (__INT16_MAX__)
#define UINT16_MAX (__UINT16_MAX__)







#define INT_LEAST16_MIN (-__INT_LEAST16_MAX__ - 1)
#define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
#define UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)
# 196 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_MIN (-__INT32_MAX__ - 1)
#define INT32_MAX (__INT32_MAX__)
#define UINT32_MAX (__UINT32_MAX__)
# 212 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST32_MIN (-__INT_LEAST32_MAX__ - 1)
#define INT_LEAST32_MAX (__INT_LEAST32_MAX__)
#define UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)
# 230 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_MIN (-__INT64_MAX__ - 1)
#define INT64_MAX (__INT64_MAX__)
#define UINT64_MAX (__UINT64_MAX__)
# 246 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST64_MIN (-__INT_LEAST64_MAX__ - 1)
#define INT_LEAST64_MAX (__INT_LEAST64_MAX__)
#define UINT_LEAST64_MAX (__UINT_LEAST64_MAX__)
# 262 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX (__INT_FAST8_MAX__)
#define UINT_FAST8_MAX (__UINT_FAST8_MAX__)
# 278 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX (__INT_FAST16_MAX__)
#define UINT_FAST16_MAX (__UINT_FAST16_MAX__)
# 294 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX (__INT_FAST32_MAX__)
#define UINT_FAST32_MAX (__UINT_FAST32_MAX__)
# 310 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX (__INT_FAST64_MAX__)
#define UINT_FAST64_MAX (__UINT_FAST64_MAX__)
# 326 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_MAX (__INTMAX_MAX__)
#define INTMAX_MIN (-INTMAX_MAX - 1)







#define UINTMAX_MAX (__UINTMAX_MAX__)







#define SIZE_MAX (__SIZE_MAX__)





#define SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)
#define SIG_ATOMIC_MAX (__STDINT_EXP(INT_MAX))



#define PTRDIFF_MAX (__PTRDIFF_MAX__)



#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)




#define WCHAR_MIN (__WCHAR_MIN__)
# 374 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WCHAR_MAX (__WCHAR_MAX__)
# 384 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WINT_MAX (__WINT_MAX__)




#define WINT_MIN (__WINT_MIN__)






#define INT8_C(x) __INT8_C(x)
#define UINT8_C(x) __UINT8_C(x)
# 408 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_C(x) __INT16_C(x)
#define UINT16_C(x) __UINT16_C(x)
# 420 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_C(x) __INT32_C(x)
#define UINT32_C(x) __UINT32_C(x)
# 433 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_C(x) __INT64_C(x)
#define UINT64_C(x) __UINT64_C(x)
# 449 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_C(x) __INTMAX_C(x)
#define UINTMAX_C(x) __UINTMAX_C(x)
# 10 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 2 3 4



#define _GCC_WRAP_STDINT_H 
# 32 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h" 2





#define SUCCESS 1



#define FAIL 0
# 52 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define MIN(a,b) ( ( ( a ) < ( b ) ) ? ( a ) : ( b ) )
# 63 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define MAX(a,b) ( ( ( a ) > ( b ) ) ? ( a ) : ( b ) )
# 72 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define POW2(n) ( 1 << n )





# 77 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
typedef union Version_u
{
    struct Version_s
    {
        uint8_t Revision;
        uint8_t Patch;
        uint8_t Minor;
        uint8_t Major;
    }Fields;
    uint32_t Value;
}Version_t;






void srand1( uint32_t seed );
# 103 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
int32_t randr( int32_t min, int32_t max );
# 114 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void memcpy1( uint8_t *dst, const uint8_t *src, uint16_t size );
# 123 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void memcpyr( uint8_t *dst, const uint8_t *src, uint16_t size );
# 134 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void memset1( uint8_t *dst, uint8_t value, uint16_t size );







int8_t Nibble2HexChar( uint8_t a );
# 152 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
uint32_t Crc32( uint8_t *buffer, uint16_t length );







uint32_t Crc32Init( void );
# 171 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
uint32_t Crc32Update( uint32_t crcInit, uint8_t *buffer, uint16_t length );
# 180 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
uint32_t Crc32Finalize( uint32_t crc );




#define CRITICAL_SECTION_BEGIN() uint32_t mask; BoardCriticalSectionBegin( &mask )




#define CRITICAL_SECTION_END() BoardCriticalSectionEnd( &mask )
# 203 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void BoardCriticalSectionBegin( uint32_t *mask );






void BoardCriticalSectionEnd( uint32_t *mask );
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/board.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/board.h"
#define __BOARD_H__ 
# 36 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/board.h"
enum BoardPowerSources
{
    USB_POWER = 0,
    BATTERY_POWER,
};




void BoardInitMcu( void );




void BoardResetMcu( void );




void BoardInitPeriph( void );





void BoardDeInitMcu( void );






uint8_t BoardGetPotiLevel( void );






uint32_t BoardGetBatteryVoltage( void );
# 86 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/board.h"
uint8_t BoardGetBatteryLevel( void );






uint32_t BoardGetRandomSeed( void );






void BoardGetUniqueId( uint8_t *id );




void BoardLowPowerHandler( void );






uint8_t GetBoardPowerSource( void );






Version_t BoardGetVersion( void );
# 25 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h"
#define __RTC_BOARD_H__ 







# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 1 3 4
# 29 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define _STDBOOL_H 



#define bool _Bool
#define true 1
#define false 0
# 52 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 33 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 1
# 24 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
#define __TIMER_H__ 






# 1 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 39 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _STDDEF_H 
#define _STDDEF_H_ 

#define _ANSI_STDDEF_H 
# 131 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _PTRDIFF_T 
#define _T_PTRDIFF_ 
#define _T_PTRDIFF 
#define __PTRDIFF_T 
#define _PTRDIFF_T_ 
#define _BSD_PTRDIFF_T_ 
#define ___int_ptrdiff_t_h 
#define _GCC_PTRDIFF_T 
#define _PTRDIFF_T_DECLARED 




# 143 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 155 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 181 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define __size_t__ 
#define __SIZE_T__ 
#define _SIZE_T 
#define _SYS_SIZE_T_H 
#define _T_SIZE_ 
#define _T_SIZE 
#define __SIZE_T 
#define _SIZE_T_ 
#define _BSD_SIZE_T_ 
#define _SIZE_T_DEFINED_ 
#define _SIZE_T_DEFINED 
#define _BSD_SIZE_T_DEFINED_ 
#define _SIZE_T_DECLARED 
#define ___int_size_t_h 
#define _GCC_SIZE_T 
#define _SIZET_ 






#define __size_t 





typedef unsigned int size_t;
# 231 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 260 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define __wchar_t__ 
#define __WCHAR_T__ 
#define _WCHAR_T 
#define _T_WCHAR_ 
#define _T_WCHAR 
#define __WCHAR_T 
#define _WCHAR_T_ 
#define _BSD_WCHAR_T_ 
#define _WCHAR_T_DEFINED_ 
#define _WCHAR_T_DEFINED 
#define _WCHAR_T_H 
#define ___int_wchar_t_h 
#define __INT_WCHAR_T_H 
#define _GCC_WCHAR_T 
#define _WCHAR_T_DECLARED 
# 287 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef _BSD_WCHAR_T_
# 321 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 340 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/home/eddieho/tool/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 32 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 2







# 38 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
typedef struct TimerEvent_s
{
    uint32_t Timestamp;
    uint32_t ReloadValue;
    
# 42 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 42 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsStarted;
    
# 43 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 43 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsNext2Expire;
    void ( *Callback )( void* context );
    void *Context;
    struct TimerEvent_s *Next;
}TimerEvent_t;





typedef uint32_t TimerTime_t;
#define TIMERTIME_T_MAX ( ( uint32_t )~0 )
# 66 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
void TimerInit( TimerEvent_t *obj, void ( *callback )( void *context ) );







void TimerSetContext( TimerEvent_t *obj, void* context );




void TimerIrqHandler( void );






void TimerStart( TimerEvent_t *obj );
# 96 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"

# 96 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
_Bool 
# 96 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
    TimerIsStarted( TimerEvent_t *obj );






void TimerStop( TimerEvent_t *obj );






void TimerReset( TimerEvent_t *obj );







void TimerSetValue( TimerEvent_t *obj, uint32_t value );






TimerTime_t TimerGetCurrentTime( void );
# 135 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerGetElapsedTime( TimerTime_t past );
# 146 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerTempCompensation( TimerTime_t period, float temperature );




void TimerProcess( void );
# 34 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h" 2




#define RTC_TEMP_COEFFICIENT ( -0.035f )




#define RTC_TEMP_DEV_COEFFICIENT ( 0.0035f )




#define RTC_TEMP_TURNOVER ( 25.0f )




#define RTC_TEMP_DEV_TURNOVER ( 5.0f )






void RtcInit( void );






uint32_t RtcGetMinimumTimeout( void );







uint32_t RtcMs2Tick( TimerTime_t milliseconds );







TimerTime_t RtcTick2Ms( uint32_t tick );






void RtcDelayMs( TimerTime_t milliseconds );






void RtcSetMcuWakeUpTime( void );






int16_t RtcGetMcuWakeUpTime( void );
# 113 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h"
void RtcSetAlarm( uint32_t timeout );




void RtcStopAlarm( void );
# 127 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h"
void RtcStartAlarm( uint32_t timeout );






uint32_t RtcSetTimerContext( void );






uint32_t RtcGetTimerContext( void );







uint32_t RtcGetCalendarTime( uint16_t *milliseconds );






uint32_t RtcGetTimerValue( void );






uint32_t RtcGetTimerElapsedTime( void );







void RtcBkupWrite( uint32_t data0, uint32_t data1 );







void RtcBkupRead( uint32_t* data0, uint32_t* data1 );




void RtcProcess( void );
# 195 "/home/eddieho/tmp/phase2_release/rui-v3/component/core/board/rak4630/rtc-board.h"
TimerTime_t RtcTempCompensation( TimerTime_t period, float temperature );
# 26 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 2
# 1 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 1
# 27 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 2




#define ExecuteCallBack(_callback_,context) do { if( _callback_ == NULL ) { while( 1 ); } else { _callback_( context ); } }while( 0 );
# 47 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
static TimerEvent_t *TimerListHead = 
# 47 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                    ((void *)0)
# 47 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                        ;
# 58 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
static void TimerInsertNewHeadTimer( TimerEvent_t *obj );
# 69 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
static void TimerInsertTimer( TimerEvent_t *obj );






static void TimerSetTimeout( TimerEvent_t *obj );







static 
# 84 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
      _Bool 
# 84 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
           TimerExists( TimerEvent_t *obj );

void TimerInit( TimerEvent_t *obj, void ( *callback )( void *context ) )
{
    obj->Timestamp = 0;
    obj->ReloadValue = 0;
    obj->IsStarted = 
# 90 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                    0
# 90 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                         ;
    obj->IsNext2Expire = 
# 91 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                        0
# 91 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                             ;
    obj->Callback = callback;
    obj->Context = 
# 93 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                  ((void *)0)
# 93 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                      ;
    obj->Next = 
# 94 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
               ((void *)0)
# 94 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                   ;
}

void TimerSetContext( TimerEvent_t *obj, void* context )
{
    obj->Context = context;
}

void TimerStart( TimerEvent_t *obj )
{
    uint32_t elapsedTime = 0;

    uint32_t mask; BoardCriticalSectionBegin( &mask );

    if( ( obj == 
# 108 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                ((void *)0) 
# 108 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                     ) || ( TimerExists( obj ) == 
# 108 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                                  1 
# 108 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                                       ) )
    {
        BoardCriticalSectionEnd( &mask );
        return;
    }

    obj->Timestamp = obj->ReloadValue;
    obj->IsStarted = 
# 115 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                    1
# 115 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                        ;
    obj->IsNext2Expire = 
# 116 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                        0
# 116 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                             ;

    if( TimerListHead == 
# 118 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                        ((void *)0) 
# 118 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                             )
    {
        RtcSetTimerContext( );

        TimerInsertNewHeadTimer( obj );
    }
    else
    {
        elapsedTime = RtcGetTimerElapsedTime( );

        if( obj->Timestamp < (TimerListHead->Timestamp - elapsedTime) )
        {
            TimerInsertNewHeadTimer( obj );
        }
        else
        {
            obj->Timestamp += elapsedTime;
            TimerInsertTimer( obj );
        }
    }
    BoardCriticalSectionEnd( &mask );
}

static void TimerInsertTimer( TimerEvent_t *obj )
{
    TimerEvent_t* cur = TimerListHead;
    TimerEvent_t* next = TimerListHead->Next;

    while( cur->Next != 
# 146 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                       ((void *)0) 
# 146 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                            )
    {
        if( obj->Timestamp > next->Timestamp )
        {
            cur = next;
            next = next->Next;
        }
        else
        {
            cur->Next = obj;
            obj->Next = next;
            return;
        }
    }
    cur->Next = obj;
    obj->Next = 
# 161 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
               ((void *)0)
# 161 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                   ;
}

static void TimerInsertNewHeadTimer( TimerEvent_t *obj )
{
    TimerEvent_t* cur = TimerListHead;

    if( cur != 
# 168 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
              ((void *)0) 
# 168 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                   )
    {
        cur->IsNext2Expire = 
# 170 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                            0
# 170 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                 ;
    }

    obj->Next = cur;
    TimerListHead = obj;
    TimerSetTimeout( TimerListHead );
}


# 178 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
_Bool 
# 178 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
    TimerIsStarted( TimerEvent_t *obj )
{
    return obj->IsStarted;
}

void TimerIrqHandler( void )
{
    TimerEvent_t* cur;
    TimerEvent_t* next;

    uint32_t old = RtcGetTimerContext( );
    uint32_t now = RtcSetTimerContext( );
    uint32_t deltaContext = now - old;



    if( TimerListHead != 
# 194 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                        ((void *)0) 
# 194 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                             )
    {
        for( cur = TimerListHead; cur->Next != 
# 196 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                              ((void *)0)
# 196 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                                  ; cur = cur->Next )
        {
            next = cur->Next;
            if( next->Timestamp > deltaContext )
            {
                next->Timestamp -= deltaContext;
            }
            else
            {
                next->Timestamp = 0;
            }
        }
    }


    if ( TimerListHead != 
# 211 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                         ((void *)0) 
# 211 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                              )
    {
        cur = TimerListHead;
        TimerListHead = TimerListHead->Next;
        cur->IsStarted = 
# 215 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                        0
# 215 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                             ;
        do { if( cur->Callback == 
# 216 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
       ((void *)0) 
# 216 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
       ) { while( 1 ); } else { cur->Callback( cur->Context ); } }while( 0 );;
    }


    while( ( TimerListHead != 
# 220 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                             ((void *)0) 
# 220 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                  ) && ( TimerListHead->Timestamp < RtcGetTimerElapsedTime( ) ) )
    {
        cur = TimerListHead;
        TimerListHead = TimerListHead->Next;
        cur->IsStarted = 
# 224 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                        0
# 224 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                             ;
        do { if( cur->Callback == 
# 225 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
       ((void *)0) 
# 225 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
       ) { while( 1 ); } else { cur->Callback( cur->Context ); } }while( 0 );;
    }


    if( ( TimerListHead != 
# 229 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                          ((void *)0) 
# 229 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                               ) && ( TimerListHead->IsNext2Expire == 
# 229 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                                                      0 
# 229 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                                                            ) )
    {
        TimerSetTimeout( TimerListHead );
    }
}

void TimerStop( TimerEvent_t *obj )
{
    uint32_t mask; BoardCriticalSectionBegin( &mask );

    TimerEvent_t* prev = TimerListHead;
    TimerEvent_t* cur = TimerListHead;


    if( ( TimerListHead == 
# 243 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                          ((void *)0) 
# 243 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                               ) || ( obj == 
# 243 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                             ((void *)0) 
# 243 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                                  ) )
    {
        BoardCriticalSectionEnd( &mask );
        return;
    }

    obj->IsStarted = 
# 249 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                    0
# 249 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                         ;

    if( TimerListHead == obj )
    {
        if( TimerListHead->IsNext2Expire == 
# 253 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                           1 
# 253 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                                )
        {
            TimerListHead->IsNext2Expire = 
# 255 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                          0
# 255 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                               ;
            if( TimerListHead->Next != 
# 256 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                      ((void *)0) 
# 256 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                           )
            {
                TimerListHead = TimerListHead->Next;
                TimerSetTimeout( TimerListHead );
            }
            else
            {
                RtcStopAlarm( );
                TimerListHead = 
# 264 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                               ((void *)0)
# 264 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                   ;
            }
        }
        else
        {
            if( TimerListHead->Next != 
# 269 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                      ((void *)0) 
# 269 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                           )
            {
                TimerListHead = TimerListHead->Next;
            }
            else
            {
                TimerListHead = 
# 275 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                               ((void *)0)
# 275 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                   ;
            }
        }
    }
    else
    {
        while( cur != 
# 281 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                     ((void *)0) 
# 281 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                          )
        {
            if( cur == obj )
            {
                if( cur->Next != 
# 285 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                                ((void *)0) 
# 285 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                                     )
                {
                    cur = cur->Next;
                    prev->Next = cur;
                }
                else
                {
                    cur = 
# 292 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                         ((void *)0)
# 292 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                             ;
                    prev->Next = cur;
                }
                break;
            }
            else
            {
                prev = cur;
                cur = cur->Next;
            }
        }
    }
    BoardCriticalSectionEnd( &mask );
}

static 
# 307 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
      _Bool 
# 307 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
           TimerExists( TimerEvent_t *obj )
{
    TimerEvent_t* cur = TimerListHead;

    while( cur != 
# 311 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                 ((void *)0) 
# 311 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                      )
    {
        if( cur == obj )
        {
            return 
# 315 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                  1
# 315 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                      ;
        }
        cur = cur->Next;
    }
    return 
# 319 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
          0
# 319 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
               ;
}

void TimerReset( TimerEvent_t *obj )
{
    TimerStop( obj );
    TimerStart( obj );
}

void TimerSetValue( TimerEvent_t *obj, uint32_t value )
{
    uint32_t minValue = 0;
    uint32_t ticks = RtcMs2Tick( value );

    TimerStop( obj );

    minValue = RtcGetMinimumTimeout( );

    if( ticks < minValue )
    {
        ticks = minValue;
    }

    obj->Timestamp = ticks;
    obj->ReloadValue = ticks;
}

TimerTime_t TimerGetCurrentTime( void )
{
    uint32_t now = RtcGetTimerValue( );
    return RtcTick2Ms( now );
}

TimerTime_t TimerGetElapsedTime( TimerTime_t past )
{
    if ( past == 0 )
    {
        return 0;
    }
    uint32_t nowInTicks = RtcGetTimerValue( );
    uint32_t pastInTicks = RtcMs2Tick( past );


    return RtcTick2Ms( nowInTicks - pastInTicks );
}

static void TimerSetTimeout( TimerEvent_t *obj )
{
    int32_t minTicks= RtcGetMinimumTimeout( );
    obj->IsNext2Expire = 
# 368 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c" 3 4
                        1
# 368 "/home/eddieho/tmp/phase2_release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.c"
                            ;


    if( obj->Timestamp < ( RtcGetTimerElapsedTime( ) + minTicks ) )
    {
        obj->Timestamp = RtcGetTimerElapsedTime( ) + minTicks;
    }
    RtcSetAlarm( obj->Timestamp );
}

TimerTime_t TimerTempCompensation( TimerTime_t period, float temperature )
{
    return RtcTempCompensation( period, temperature );
}

void TimerProcess( void )
{
    RtcProcess( );
}
