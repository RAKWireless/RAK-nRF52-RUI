# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3//"
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
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.c"
# 40 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.h" 1
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.h"
#define NRF_ASSERT_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 1 3 4
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define _STDINT_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3 4





#define _MACHINE__DEFAULT_TYPES_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 1 3 4
# 22 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define _SYS_FEATURES_H 





# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3 4



#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.3.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 3
#define __NEWLIB_PATCHLEVEL__ 0
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 2 3 4




#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))






#define __GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)
# 249 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __ATFILE_VISIBLE 0





#define __BSD_VISIBLE 0





#define __GNU_VISIBLE 0







#define __ISO_C_VISIBLE 1999







#define __LARGEFILE_VISIBLE 0





#define __MISC_VISIBLE 0
# 299 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __POSIX_VISIBLE 0





#define __SVID_VISIBLE 0
# 319 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __XSI_VISIBLE 0
# 330 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __SSP_FORTIFY_LEVEL 0
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 2 3 4






#define __EXP(x) __ ##x ##__
# 26 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#define __have_longlong64 1






#define __have_long32 1








# 41 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;



#define ___int8_t_defined 1







typedef short int __int16_t;

typedef short unsigned int __uint16_t;



#define ___int16_t_defined 1
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;



#define ___int32_t_defined 1
# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;



#define ___int64_t_defined 1
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;



#define ___int_least8_t_defined 1
# 160 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;



#define ___int_least16_t_defined 1
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;



#define ___int_least32_t_defined 1
# 200 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;



#define ___int_least64_t_defined 1







typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 244 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#undef __EXP
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _SYS__INTSUP_H 





#define __STDINT_EXP(x) __ ##x ##__
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
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
# 67 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _INTPTR_EQ_INT 






#define _INT32_EQ_LONG 







#define __INT8 "hh"
# 93 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT16 "h"
# 104 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT32 "l"
# 113 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT64 "ll"






#define __FAST8 
# 129 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST16 






#define __FAST32 
# 147 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST64 "ll"



#define __LEAST8 "hh"
# 162 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST16 "h"
# 173 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST32 "l"
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST64 "ll"

#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef long
       
       
       
       
       
# 194 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20
       
# 195 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20__
       
       
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
#define _SYS__STDINT_H 
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
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
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4






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
# 51 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
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
# 128 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTPTR_MIN (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX (__INTPTR_MAX__)
#define UINTPTR_MAX (__UINTPTR_MAX__)
# 152 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT8_MIN (-__INT8_MAX__ - 1)
#define INT8_MAX (__INT8_MAX__)
#define UINT8_MAX (__UINT8_MAX__)







#define INT_LEAST8_MIN (-__INT_LEAST8_MAX__ - 1)
#define INT_LEAST8_MAX (__INT_LEAST8_MAX__)
#define UINT_LEAST8_MAX (__UINT_LEAST8_MAX__)
# 174 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_MIN (-__INT16_MAX__ - 1)
#define INT16_MAX (__INT16_MAX__)
#define UINT16_MAX (__UINT16_MAX__)







#define INT_LEAST16_MIN (-__INT_LEAST16_MAX__ - 1)
#define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
#define UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)
# 196 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_MIN (-__INT32_MAX__ - 1)
#define INT32_MAX (__INT32_MAX__)
#define UINT32_MAX (__UINT32_MAX__)
# 212 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST32_MIN (-__INT_LEAST32_MAX__ - 1)
#define INT_LEAST32_MAX (__INT_LEAST32_MAX__)
#define UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)
# 230 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_MIN (-__INT64_MAX__ - 1)
#define INT64_MAX (__INT64_MAX__)
#define UINT64_MAX (__UINT64_MAX__)
# 246 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST64_MIN (-__INT_LEAST64_MAX__ - 1)
#define INT_LEAST64_MAX (__INT_LEAST64_MAX__)
#define UINT_LEAST64_MAX (__UINT_LEAST64_MAX__)
# 262 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX (__INT_FAST8_MAX__)
#define UINT_FAST8_MAX (__UINT_FAST8_MAX__)
# 278 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX (__INT_FAST16_MAX__)
#define UINT_FAST16_MAX (__UINT_FAST16_MAX__)
# 294 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX (__INT_FAST32_MAX__)
#define UINT_FAST32_MAX (__UINT_FAST32_MAX__)
# 310 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX (__INT_FAST64_MAX__)
#define UINT_FAST64_MAX (__UINT_FAST64_MAX__)
# 326 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_MAX (__INTMAX_MAX__)
#define INTMAX_MIN (-INTMAX_MAX - 1)







#define UINTMAX_MAX (__UINTMAX_MAX__)







#define SIZE_MAX (__SIZE_MAX__)





#define SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)
#define SIG_ATOMIC_MAX (__STDINT_EXP(INT_MAX))



#define PTRDIFF_MAX (__PTRDIFF_MAX__)



#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)




#define WCHAR_MIN (__WCHAR_MIN__)
# 374 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WCHAR_MAX (__WCHAR_MAX__)
# 384 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WINT_MAX (__WINT_MAX__)




#define WINT_MIN (__WINT_MIN__)






#define INT8_C(x) __INT8_C(x)
#define UINT8_C(x) __UINT8_C(x)
# 408 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_C(x) __INT16_C(x)
#define UINT16_C(x) __UINT16_C(x)
# 420 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_C(x) __INT32_C(x)
#define UINT32_C(x) __UINT32_C(x)
# 433 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_C(x) __INT64_C(x)
#define UINT64_C(x) __UINT64_C(x)
# 449 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_C(x) __INTMAX_C(x)
#define UINTMAX_C(x) __UINTMAX_C(x)
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 2 3 4



#define _GCC_WRAP_STDINT_H 
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h" 1
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h"
#define NRF_H 


#define MDK_MAJOR_VERSION 8
#define MDK_MINOR_VERSION 35
#define MDK_MICRO_VERSION 0
# 79 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h"
#define NRF52_SERIES 
# 169 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h" 1
# 61 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
#define NRF52840_H 
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"

# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef enum {

  Reset_IRQn = -15,
  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,

  BusFault_IRQn = -11,

  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  POWER_CLOCK_IRQn = 0,
  RADIO_IRQn = 1,
  UARTE0_UART0_IRQn = 2,
  SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQn= 3,
  SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQn= 4,
  NFCT_IRQn = 5,
  GPIOTE_IRQn = 6,
  SAADC_IRQn = 7,
  TIMER0_IRQn = 8,
  TIMER1_IRQn = 9,
  TIMER2_IRQn = 10,
  RTC0_IRQn = 11,
  TEMP_IRQn = 12,
  RNG_IRQn = 13,
  ECB_IRQn = 14,
  CCM_AAR_IRQn = 15,
  WDT_IRQn = 16,
  RTC1_IRQn = 17,
  QDEC_IRQn = 18,
  COMP_LPCOMP_IRQn = 19,
  SWI0_EGU0_IRQn = 20,
  SWI1_EGU1_IRQn = 21,
  SWI2_EGU2_IRQn = 22,
  SWI3_EGU3_IRQn = 23,
  SWI4_EGU4_IRQn = 24,
  SWI5_EGU5_IRQn = 25,
  TIMER3_IRQn = 26,
  TIMER4_IRQn = 27,
  PWM0_IRQn = 28,
  PDM_IRQn = 29,
  MWU_IRQn = 32,
  PWM1_IRQn = 33,
  PWM2_IRQn = 34,
  SPIM2_SPIS2_SPI2_IRQn = 35,
  RTC2_IRQn = 36,
  I2S_IRQn = 37,
  FPU_IRQn = 38,
  USBD_IRQn = 39,
  UARTE1_IRQn = 40,
  QSPI_IRQn = 41,
  CRYPTOCELL_IRQn = 42,
  PWM3_IRQn = 45,
  SPIM3_IRQn = 47
} IRQn_Type;
# 145 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
#define __CM4_REV 0x0001U
#define __DSP_PRESENT 1
#define __VTOR_PRESENT 1
#define __NVIC_PRIO_BITS 3
#define __Vendor_SysTickConfig 0
#define __MPU_PRESENT 1
#define __FPU_PRESENT 1




# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h" 1
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
#define __CORE_CM4_H_GENERIC 
# 63 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_version.h" 1
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_version.h"
#define __CMSIS_VERSION_H 


#define __CM_CMSIS_VERSION_MAIN ( 5U)
#define __CM_CMSIS_VERSION_SUB ( 3U)
#define __CM_CMSIS_VERSION ((__CM_CMSIS_VERSION_MAIN << 16U) | __CM_CMSIS_VERSION_SUB )
# 64 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h" 2


#define __CM4_CMSIS_VERSION_MAIN (__CM_CMSIS_VERSION_MAIN)
#define __CM4_CMSIS_VERSION_SUB (__CM_CMSIS_VERSION_SUB)
#define __CM4_CMSIS_VERSION ((__CM4_CMSIS_VERSION_MAIN << 16U) | __CM4_CMSIS_VERSION_SUB )


#define __CORTEX_M (4U)
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
#define __FPU_USED 1U
# 162 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_compiler.h" 1
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_compiler.h"
#define __CMSIS_COMPILER_H 
# 54 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_compiler.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h" 1
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
#define __CMSIS_GCC_H 


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
#define __ASM __asm


#define __INLINE inline


#define __STATIC_INLINE static inline


#define __STATIC_FORCEINLINE __attribute__((always_inline)) static inline


#define __NO_RETURN __attribute__((__noreturn__))


#define __USED __attribute__((used))


#define __WEAK __attribute__((weak))


#define __PACKED __attribute__((packed, aligned(1)))


#define __PACKED_STRUCT struct __attribute__((packed, aligned(1)))


#define __PACKED_UNION union __attribute__((packed, aligned(1)))


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed)) T_UINT32 { uint32_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT32(x) (((struct T_UINT32 *)(x))->v)


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_WRITE { uint16_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT16_WRITE(addr,val) (void)((((struct T_UINT16_WRITE *)(void *)(addr))->v) = (val))


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT16_READ { uint16_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT16_READ(addr) (((const struct T_UINT16_READ *)(const void *)(addr))->v)


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_WRITE { uint32_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT32_WRITE(addr,val) (void)((((struct T_UINT32_WRITE *)(void *)(addr))->v) = (val))


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpacked"
#pragma GCC diagnostic ignored "-Wattributes"
  struct __attribute__((packed, aligned(1))) T_UINT32_READ { uint32_t v; };
#pragma GCC diagnostic pop
#define __UNALIGNED_UINT32_READ(addr) (((const struct T_UINT32_READ *)(const void *)(addr))->v)


#define __ALIGNED(x) __attribute__((aligned(x)))


#define __RESTRICT __restrict


#define __COMPILER_BARRIER() __ASM volatile("":::"memory")
# 131 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline __attribute__((__noreturn__)) void __cmsis_start(void)
{
  extern void _start(void) __attribute__((__noreturn__));

  typedef struct {
    uint32_t const* src;
    uint32_t* dest;
    uint32_t wlen;
  } __copy_table_t;

  typedef struct {
    uint32_t* dest;
    uint32_t wlen;
  } __zero_table_t;

  extern const __copy_table_t __copy_table_start__;
  extern const __copy_table_t __copy_table_end__;
  extern const __zero_table_t __zero_table_start__;
  extern const __zero_table_t __zero_table_end__;

  for (__copy_table_t const* pTable = &__copy_table_start__; pTable < &__copy_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = pTable->src[i];
    }
  }

  for (__zero_table_t const* pTable = &__zero_table_start__; pTable < &__zero_table_end__; ++pTable) {
    for(uint32_t i=0u; i<pTable->wlen; ++i) {
      pTable->dest[i] = 0u;
    }
  }

  _start();
}

#define __PROGRAM_START __cmsis_start



#define __INITIAL_SP __StackTop



#define __STACK_LIMIT __StackLimit



#define __VECTOR_TABLE __Vectors



#define __VECTOR_TABLE_ATTRIBUTE __attribute((used, section(".vectors")))
# 196 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}
# 272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__((always_inline)) static inline uint32_t __get_PSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, psp" : "=r" (result) );
  return(result);
}
# 344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0" : : "r" (topOfProcStack) : );
}
# 368 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_MSP(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, msp" : "=r" (result) );
  return(result);
}
# 398 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0" : : "r" (topOfMainStack) : );
}
# 449 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) :: "memory");
  return(result);
}
# 479 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 506 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__((always_inline)) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}
# 558 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI(uint32_t basePri)
{
  __asm volatile ("MSR basepri, %0" : : "r" (basePri) : "memory");
}
# 583 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_BASEPRI_MAX(uint32_t basePri)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (basePri) : "memory");
}







__attribute__((always_inline)) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}
# 624 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 833 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __get_FPSCR(void)
{






  return __builtin_arm_get_fpscr();
# 851 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
}







__attribute__((always_inline)) static inline void __set_FPSCR(uint32_t fpscr)
{






  __builtin_arm_set_fpscr(fpscr);






}
# 894 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
#define __CMSIS_GCC_OUT_REG(r) "=r" (r)
#define __CMSIS_GCC_RW_REG(r) "+r" (r)
#define __CMSIS_GCC_USE_REG(r) "r" (r)






#define __NOP() __ASM volatile ("nop")





#define __WFI() __ASM volatile ("wfi")







#define __WFE() __ASM volatile ("wfe")






#define __SEV() __ASM volatile ("sev")
# 933 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 967 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 986 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return result;
}
# 1001 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int16_t __REVSH(int16_t value)
{

  return (int16_t)__builtin_bswap16(value);






}
# 1021 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  op2 %= 32U;
  if (op2 == 0U)
  {
    return op1;
  }
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 1039 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
#define __BKPT(value) __ASM volatile ("bkpt "#value)
# 1048 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;




   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 1068 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
  return result;
}
# 1078 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __CLZ(uint32_t value)
{
# 1089 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
  if (value == 0U)
  {
    return 32U;
  }
  return __builtin_clz(value);
}
# 1107 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 1129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 1151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 1168 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1185 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 1202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 1236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
#define __SSAT(ARG1,ARG2) __extension__ ({ int32_t __RES, __ARG1 = (ARG1); __ASM ("ssat %0, %1, %2" : "=r" (__RES) : "I" (ARG2), "r" (__ARG1) ); __RES; })
# 1252 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
#define __USAT(ARG1,ARG2) __extension__ ({ uint32_t __RES, __ARG1 = (ARG1); __ASM ("usat %0, %1, %2" : "=r" (__RES) : "I" (ARG2), "r" (__ARG1) ); __RES; })
# 1268 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 1283 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint8_t) result);
}
# 1305 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *ptr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*ptr) );






   return ((uint16_t) result);
}
# 1327 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *ptr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*ptr) );
   return(result);
}
# 1342 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *ptr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1354 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *ptr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*ptr) : "r" ((uint32_t)value) );
}
# 1366 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *ptr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*ptr) : "r" (value) );
}
# 1621 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__((always_inline)) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

#define __SSAT16(ARG1,ARG2) ({ int32_t __RES, __ARG1 = (ARG1); __ASM ("ssat16 %0, %1, %2" : "=r" (__RES) : "I" (ARG2), "r" (__ARG1) ); __RES; })






#define __USAT16(ARG1,ARG2) ({ uint32_t __RES, __ARG1 = (ARG1); __ASM ("usat16 %0, %1, %2" : "=r" (__RES) : "I" (ARG2), "r" (__ARG1) ); __RES; })






__attribute__((always_inline)) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__((always_inline)) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__((always_inline)) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 2148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_gcc.h"
#define __PKHBT(ARG1,ARG2,ARG3) ( ((((uint32_t)(ARG1)) ) & 0x0000FFFFUL) | ((((uint32_t)(ARG2)) << (ARG3)) & 0xFFFF0000UL) )


#define __PKHTB(ARG1,ARG2,ARG3) ( ((((uint32_t)(ARG1)) ) & 0xFFFF0000UL) | ((((uint32_t)(ARG2)) >> (ARG3)) & 0x0000FFFFUL) )


__attribute__((always_inline)) static inline int32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}





#pragma GCC diagnostic pop
# 55 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/cmsis_compiler.h" 2
# 163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h" 2
# 174 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
#define __CORE_CM4_H_DEPENDANT 
# 219 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
#define __I volatile const

#define __O volatile
#define __IO volatile


#define __IM volatile const
#define __OM volatile
#define __IOM volatile
# 259 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;


#define APSR_N_Pos 31U
#define APSR_N_Msk (1UL << APSR_N_Pos)

#define APSR_Z_Pos 30U
#define APSR_Z_Msk (1UL << APSR_Z_Pos)

#define APSR_C_Pos 29U
#define APSR_C_Msk (1UL << APSR_C_Pos)

#define APSR_V_Pos 28U
#define APSR_V_Msk (1UL << APSR_V_Pos)

#define APSR_Q_Pos 27U
#define APSR_Q_Msk (1UL << APSR_Q_Pos)

#define APSR_GE_Pos 16U
#define APSR_GE_Msk (0xFUL << APSR_GE_Pos)





typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;


#define IPSR_ISR_Pos 0U
#define IPSR_ISR_Msk (0x1FFUL )





typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:1;
    uint32_t ICI_IT_1:6;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t ICI_IT_2:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;


#define xPSR_N_Pos 31U
#define xPSR_N_Msk (1UL << xPSR_N_Pos)

#define xPSR_Z_Pos 30U
#define xPSR_Z_Msk (1UL << xPSR_Z_Pos)

#define xPSR_C_Pos 29U
#define xPSR_C_Msk (1UL << xPSR_C_Pos)

#define xPSR_V_Pos 28U
#define xPSR_V_Msk (1UL << xPSR_V_Pos)

#define xPSR_Q_Pos 27U
#define xPSR_Q_Msk (1UL << xPSR_Q_Pos)

#define xPSR_ICI_IT_2_Pos 25U
#define xPSR_ICI_IT_2_Msk (3UL << xPSR_ICI_IT_2_Pos)

#define xPSR_T_Pos 24U
#define xPSR_T_Msk (1UL << xPSR_T_Pos)

#define xPSR_GE_Pos 16U
#define xPSR_GE_Msk (0xFUL << xPSR_GE_Pos)

#define xPSR_ICI_IT_1_Pos 10U
#define xPSR_ICI_IT_1_Msk (0x3FUL << xPSR_ICI_IT_1_Pos)

#define xPSR_ISR_Pos 0U
#define xPSR_ISR_Msk (0x1FFUL )





typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;


#define CONTROL_FPCA_Pos 2U
#define CONTROL_FPCA_Msk (1UL << CONTROL_FPCA_Pos)

#define CONTROL_SPSEL_Pos 1U
#define CONTROL_SPSEL_Msk (1UL << CONTROL_SPSEL_Pos)

#define CONTROL_nPRIV_Pos 0U
#define CONTROL_nPRIV_Msk (1UL )
# 406 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RESERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;


#define NVIC_STIR_INTID_Pos 0U
#define NVIC_STIR_INTID_Msk (0x1FFUL )
# 440 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;


#define SCB_CPUID_IMPLEMENTER_Pos 24U
#define SCB_CPUID_IMPLEMENTER_Msk (0xFFUL << SCB_CPUID_IMPLEMENTER_Pos)

#define SCB_CPUID_VARIANT_Pos 20U
#define SCB_CPUID_VARIANT_Msk (0xFUL << SCB_CPUID_VARIANT_Pos)

#define SCB_CPUID_ARCHITECTURE_Pos 16U
#define SCB_CPUID_ARCHITECTURE_Msk (0xFUL << SCB_CPUID_ARCHITECTURE_Pos)

#define SCB_CPUID_PARTNO_Pos 4U
#define SCB_CPUID_PARTNO_Msk (0xFFFUL << SCB_CPUID_PARTNO_Pos)

#define SCB_CPUID_REVISION_Pos 0U
#define SCB_CPUID_REVISION_Msk (0xFUL )


#define SCB_ICSR_NMIPENDSET_Pos 31U
#define SCB_ICSR_NMIPENDSET_Msk (1UL << SCB_ICSR_NMIPENDSET_Pos)

#define SCB_ICSR_PENDSVSET_Pos 28U
#define SCB_ICSR_PENDSVSET_Msk (1UL << SCB_ICSR_PENDSVSET_Pos)

#define SCB_ICSR_PENDSVCLR_Pos 27U
#define SCB_ICSR_PENDSVCLR_Msk (1UL << SCB_ICSR_PENDSVCLR_Pos)

#define SCB_ICSR_PENDSTSET_Pos 26U
#define SCB_ICSR_PENDSTSET_Msk (1UL << SCB_ICSR_PENDSTSET_Pos)

#define SCB_ICSR_PENDSTCLR_Pos 25U
#define SCB_ICSR_PENDSTCLR_Msk (1UL << SCB_ICSR_PENDSTCLR_Pos)

#define SCB_ICSR_ISRPREEMPT_Pos 23U
#define SCB_ICSR_ISRPREEMPT_Msk (1UL << SCB_ICSR_ISRPREEMPT_Pos)

#define SCB_ICSR_ISRPENDING_Pos 22U
#define SCB_ICSR_ISRPENDING_Msk (1UL << SCB_ICSR_ISRPENDING_Pos)

#define SCB_ICSR_VECTPENDING_Pos 12U
#define SCB_ICSR_VECTPENDING_Msk (0x1FFUL << SCB_ICSR_VECTPENDING_Pos)

#define SCB_ICSR_RETTOBASE_Pos 11U
#define SCB_ICSR_RETTOBASE_Msk (1UL << SCB_ICSR_RETTOBASE_Pos)

#define SCB_ICSR_VECTACTIVE_Pos 0U
#define SCB_ICSR_VECTACTIVE_Msk (0x1FFUL )


#define SCB_VTOR_TBLOFF_Pos 7U
#define SCB_VTOR_TBLOFF_Msk (0x1FFFFFFUL << SCB_VTOR_TBLOFF_Pos)


#define SCB_AIRCR_VECTKEY_Pos 16U
#define SCB_AIRCR_VECTKEY_Msk (0xFFFFUL << SCB_AIRCR_VECTKEY_Pos)

#define SCB_AIRCR_VECTKEYSTAT_Pos 16U
#define SCB_AIRCR_VECTKEYSTAT_Msk (0xFFFFUL << SCB_AIRCR_VECTKEYSTAT_Pos)

#define SCB_AIRCR_ENDIANESS_Pos 15U
#define SCB_AIRCR_ENDIANESS_Msk (1UL << SCB_AIRCR_ENDIANESS_Pos)

#define SCB_AIRCR_PRIGROUP_Pos 8U
#define SCB_AIRCR_PRIGROUP_Msk (7UL << SCB_AIRCR_PRIGROUP_Pos)

#define SCB_AIRCR_SYSRESETREQ_Pos 2U
#define SCB_AIRCR_SYSRESETREQ_Msk (1UL << SCB_AIRCR_SYSRESETREQ_Pos)

#define SCB_AIRCR_VECTCLRACTIVE_Pos 1U
#define SCB_AIRCR_VECTCLRACTIVE_Msk (1UL << SCB_AIRCR_VECTCLRACTIVE_Pos)

#define SCB_AIRCR_VECTRESET_Pos 0U
#define SCB_AIRCR_VECTRESET_Msk (1UL )


#define SCB_SCR_SEVONPEND_Pos 4U
#define SCB_SCR_SEVONPEND_Msk (1UL << SCB_SCR_SEVONPEND_Pos)

#define SCB_SCR_SLEEPDEEP_Pos 2U
#define SCB_SCR_SLEEPDEEP_Msk (1UL << SCB_SCR_SLEEPDEEP_Pos)

#define SCB_SCR_SLEEPONEXIT_Pos 1U
#define SCB_SCR_SLEEPONEXIT_Msk (1UL << SCB_SCR_SLEEPONEXIT_Pos)


#define SCB_CCR_STKALIGN_Pos 9U
#define SCB_CCR_STKALIGN_Msk (1UL << SCB_CCR_STKALIGN_Pos)

#define SCB_CCR_BFHFNMIGN_Pos 8U
#define SCB_CCR_BFHFNMIGN_Msk (1UL << SCB_CCR_BFHFNMIGN_Pos)

#define SCB_CCR_DIV_0_TRP_Pos 4U
#define SCB_CCR_DIV_0_TRP_Msk (1UL << SCB_CCR_DIV_0_TRP_Pos)

#define SCB_CCR_UNALIGN_TRP_Pos 3U
#define SCB_CCR_UNALIGN_TRP_Msk (1UL << SCB_CCR_UNALIGN_TRP_Pos)

#define SCB_CCR_USERSETMPEND_Pos 1U
#define SCB_CCR_USERSETMPEND_Msk (1UL << SCB_CCR_USERSETMPEND_Pos)

#define SCB_CCR_NONBASETHRDENA_Pos 0U
#define SCB_CCR_NONBASETHRDENA_Msk (1UL )


#define SCB_SHCSR_USGFAULTENA_Pos 18U
#define SCB_SHCSR_USGFAULTENA_Msk (1UL << SCB_SHCSR_USGFAULTENA_Pos)

#define SCB_SHCSR_BUSFAULTENA_Pos 17U
#define SCB_SHCSR_BUSFAULTENA_Msk (1UL << SCB_SHCSR_BUSFAULTENA_Pos)

#define SCB_SHCSR_MEMFAULTENA_Pos 16U
#define SCB_SHCSR_MEMFAULTENA_Msk (1UL << SCB_SHCSR_MEMFAULTENA_Pos)

#define SCB_SHCSR_SVCALLPENDED_Pos 15U
#define SCB_SHCSR_SVCALLPENDED_Msk (1UL << SCB_SHCSR_SVCALLPENDED_Pos)

#define SCB_SHCSR_BUSFAULTPENDED_Pos 14U
#define SCB_SHCSR_BUSFAULTPENDED_Msk (1UL << SCB_SHCSR_BUSFAULTPENDED_Pos)

#define SCB_SHCSR_MEMFAULTPENDED_Pos 13U
#define SCB_SHCSR_MEMFAULTPENDED_Msk (1UL << SCB_SHCSR_MEMFAULTPENDED_Pos)

#define SCB_SHCSR_USGFAULTPENDED_Pos 12U
#define SCB_SHCSR_USGFAULTPENDED_Msk (1UL << SCB_SHCSR_USGFAULTPENDED_Pos)

#define SCB_SHCSR_SYSTICKACT_Pos 11U
#define SCB_SHCSR_SYSTICKACT_Msk (1UL << SCB_SHCSR_SYSTICKACT_Pos)

#define SCB_SHCSR_PENDSVACT_Pos 10U
#define SCB_SHCSR_PENDSVACT_Msk (1UL << SCB_SHCSR_PENDSVACT_Pos)

#define SCB_SHCSR_MONITORACT_Pos 8U
#define SCB_SHCSR_MONITORACT_Msk (1UL << SCB_SHCSR_MONITORACT_Pos)

#define SCB_SHCSR_SVCALLACT_Pos 7U
#define SCB_SHCSR_SVCALLACT_Msk (1UL << SCB_SHCSR_SVCALLACT_Pos)

#define SCB_SHCSR_USGFAULTACT_Pos 3U
#define SCB_SHCSR_USGFAULTACT_Msk (1UL << SCB_SHCSR_USGFAULTACT_Pos)

#define SCB_SHCSR_BUSFAULTACT_Pos 1U
#define SCB_SHCSR_BUSFAULTACT_Msk (1UL << SCB_SHCSR_BUSFAULTACT_Pos)

#define SCB_SHCSR_MEMFAULTACT_Pos 0U
#define SCB_SHCSR_MEMFAULTACT_Msk (1UL )


#define SCB_CFSR_USGFAULTSR_Pos 16U
#define SCB_CFSR_USGFAULTSR_Msk (0xFFFFUL << SCB_CFSR_USGFAULTSR_Pos)

#define SCB_CFSR_BUSFAULTSR_Pos 8U
#define SCB_CFSR_BUSFAULTSR_Msk (0xFFUL << SCB_CFSR_BUSFAULTSR_Pos)

#define SCB_CFSR_MEMFAULTSR_Pos 0U
#define SCB_CFSR_MEMFAULTSR_Msk (0xFFUL )


#define SCB_CFSR_MMARVALID_Pos (SCB_SHCSR_MEMFAULTACT_Pos + 7U)
#define SCB_CFSR_MMARVALID_Msk (1UL << SCB_CFSR_MMARVALID_Pos)

#define SCB_CFSR_MLSPERR_Pos (SCB_SHCSR_MEMFAULTACT_Pos + 5U)
#define SCB_CFSR_MLSPERR_Msk (1UL << SCB_CFSR_MLSPERR_Pos)

#define SCB_CFSR_MSTKERR_Pos (SCB_SHCSR_MEMFAULTACT_Pos + 4U)
#define SCB_CFSR_MSTKERR_Msk (1UL << SCB_CFSR_MSTKERR_Pos)

#define SCB_CFSR_MUNSTKERR_Pos (SCB_SHCSR_MEMFAULTACT_Pos + 3U)
#define SCB_CFSR_MUNSTKERR_Msk (1UL << SCB_CFSR_MUNSTKERR_Pos)

#define SCB_CFSR_DACCVIOL_Pos (SCB_SHCSR_MEMFAULTACT_Pos + 1U)
#define SCB_CFSR_DACCVIOL_Msk (1UL << SCB_CFSR_DACCVIOL_Pos)

#define SCB_CFSR_IACCVIOL_Pos (SCB_SHCSR_MEMFAULTACT_Pos + 0U)
#define SCB_CFSR_IACCVIOL_Msk (1UL )


#define SCB_CFSR_BFARVALID_Pos (SCB_CFSR_BUSFAULTSR_Pos + 7U)
#define SCB_CFSR_BFARVALID_Msk (1UL << SCB_CFSR_BFARVALID_Pos)

#define SCB_CFSR_LSPERR_Pos (SCB_CFSR_BUSFAULTSR_Pos + 5U)
#define SCB_CFSR_LSPERR_Msk (1UL << SCB_CFSR_LSPERR_Pos)

#define SCB_CFSR_STKERR_Pos (SCB_CFSR_BUSFAULTSR_Pos + 4U)
#define SCB_CFSR_STKERR_Msk (1UL << SCB_CFSR_STKERR_Pos)

#define SCB_CFSR_UNSTKERR_Pos (SCB_CFSR_BUSFAULTSR_Pos + 3U)
#define SCB_CFSR_UNSTKERR_Msk (1UL << SCB_CFSR_UNSTKERR_Pos)

#define SCB_CFSR_IMPRECISERR_Pos (SCB_CFSR_BUSFAULTSR_Pos + 2U)
#define SCB_CFSR_IMPRECISERR_Msk (1UL << SCB_CFSR_IMPRECISERR_Pos)

#define SCB_CFSR_PRECISERR_Pos (SCB_CFSR_BUSFAULTSR_Pos + 1U)
#define SCB_CFSR_PRECISERR_Msk (1UL << SCB_CFSR_PRECISERR_Pos)

#define SCB_CFSR_IBUSERR_Pos (SCB_CFSR_BUSFAULTSR_Pos + 0U)
#define SCB_CFSR_IBUSERR_Msk (1UL << SCB_CFSR_IBUSERR_Pos)


#define SCB_CFSR_DIVBYZERO_Pos (SCB_CFSR_USGFAULTSR_Pos + 9U)
#define SCB_CFSR_DIVBYZERO_Msk (1UL << SCB_CFSR_DIVBYZERO_Pos)

#define SCB_CFSR_UNALIGNED_Pos (SCB_CFSR_USGFAULTSR_Pos + 8U)
#define SCB_CFSR_UNALIGNED_Msk (1UL << SCB_CFSR_UNALIGNED_Pos)

#define SCB_CFSR_NOCP_Pos (SCB_CFSR_USGFAULTSR_Pos + 3U)
#define SCB_CFSR_NOCP_Msk (1UL << SCB_CFSR_NOCP_Pos)

#define SCB_CFSR_INVPC_Pos (SCB_CFSR_USGFAULTSR_Pos + 2U)
#define SCB_CFSR_INVPC_Msk (1UL << SCB_CFSR_INVPC_Pos)

#define SCB_CFSR_INVSTATE_Pos (SCB_CFSR_USGFAULTSR_Pos + 1U)
#define SCB_CFSR_INVSTATE_Msk (1UL << SCB_CFSR_INVSTATE_Pos)

#define SCB_CFSR_UNDEFINSTR_Pos (SCB_CFSR_USGFAULTSR_Pos + 0U)
#define SCB_CFSR_UNDEFINSTR_Msk (1UL << SCB_CFSR_UNDEFINSTR_Pos)


#define SCB_HFSR_DEBUGEVT_Pos 31U
#define SCB_HFSR_DEBUGEVT_Msk (1UL << SCB_HFSR_DEBUGEVT_Pos)

#define SCB_HFSR_FORCED_Pos 30U
#define SCB_HFSR_FORCED_Msk (1UL << SCB_HFSR_FORCED_Pos)

#define SCB_HFSR_VECTTBL_Pos 1U
#define SCB_HFSR_VECTTBL_Msk (1UL << SCB_HFSR_VECTTBL_Pos)


#define SCB_DFSR_EXTERNAL_Pos 4U
#define SCB_DFSR_EXTERNAL_Msk (1UL << SCB_DFSR_EXTERNAL_Pos)

#define SCB_DFSR_VCATCH_Pos 3U
#define SCB_DFSR_VCATCH_Msk (1UL << SCB_DFSR_VCATCH_Pos)

#define SCB_DFSR_DWTTRAP_Pos 2U
#define SCB_DFSR_DWTTRAP_Msk (1UL << SCB_DFSR_DWTTRAP_Pos)

#define SCB_DFSR_BKPT_Pos 1U
#define SCB_DFSR_BKPT_Msk (1UL << SCB_DFSR_BKPT_Pos)

#define SCB_DFSR_HALTED_Pos 0U
#define SCB_DFSR_HALTED_Msk (1UL )
# 719 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;


#define SCnSCB_ICTR_INTLINESNUM_Pos 0U
#define SCnSCB_ICTR_INTLINESNUM_Msk (0xFUL )


#define SCnSCB_ACTLR_DISOOFP_Pos 9U
#define SCnSCB_ACTLR_DISOOFP_Msk (1UL << SCnSCB_ACTLR_DISOOFP_Pos)

#define SCnSCB_ACTLR_DISFPCA_Pos 8U
#define SCnSCB_ACTLR_DISFPCA_Msk (1UL << SCnSCB_ACTLR_DISFPCA_Pos)

#define SCnSCB_ACTLR_DISFOLD_Pos 2U
#define SCnSCB_ACTLR_DISFOLD_Msk (1UL << SCnSCB_ACTLR_DISFOLD_Pos)

#define SCnSCB_ACTLR_DISDEFWBUF_Pos 1U
#define SCnSCB_ACTLR_DISDEFWBUF_Msk (1UL << SCnSCB_ACTLR_DISDEFWBUF_Pos)

#define SCnSCB_ACTLR_DISMCYCINT_Pos 0U
#define SCnSCB_ACTLR_DISMCYCINT_Msk (1UL )
# 759 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;


#define SysTick_CTRL_COUNTFLAG_Pos 16U
#define SysTick_CTRL_COUNTFLAG_Msk (1UL << SysTick_CTRL_COUNTFLAG_Pos)

#define SysTick_CTRL_CLKSOURCE_Pos 2U
#define SysTick_CTRL_CLKSOURCE_Msk (1UL << SysTick_CTRL_CLKSOURCE_Pos)

#define SysTick_CTRL_TICKINT_Pos 1U
#define SysTick_CTRL_TICKINT_Msk (1UL << SysTick_CTRL_TICKINT_Pos)

#define SysTick_CTRL_ENABLE_Pos 0U
#define SysTick_CTRL_ENABLE_Msk (1UL )


#define SysTick_LOAD_RELOAD_Pos 0U
#define SysTick_LOAD_RELOAD_Msk (0xFFFFFFUL )


#define SysTick_VAL_CURRENT_Pos 0U
#define SysTick_VAL_CURRENT_Msk (0xFFFFFFUL )


#define SysTick_CALIB_NOREF_Pos 31U
#define SysTick_CALIB_NOREF_Msk (1UL << SysTick_CALIB_NOREF_Pos)

#define SysTick_CALIB_SKEW_Pos 30U
#define SysTick_CALIB_SKEW_Msk (1UL << SysTick_CALIB_SKEW_Pos)

#define SysTick_CALIB_TENMS_Pos 0U
#define SysTick_CALIB_TENMS_Msk (0xFFFFFFUL )
# 811 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[32U];
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;


#define ITM_TPR_PRIVMASK_Pos 0U
#define ITM_TPR_PRIVMASK_Msk (0xFFFFFFFFUL )


#define ITM_TCR_BUSY_Pos 23U
#define ITM_TCR_BUSY_Msk (1UL << ITM_TCR_BUSY_Pos)

#define ITM_TCR_TraceBusID_Pos 16U
#define ITM_TCR_TraceBusID_Msk (0x7FUL << ITM_TCR_TraceBusID_Pos)

#define ITM_TCR_GTSFREQ_Pos 10U
#define ITM_TCR_GTSFREQ_Msk (3UL << ITM_TCR_GTSFREQ_Pos)

#define ITM_TCR_TSPrescale_Pos 8U
#define ITM_TCR_TSPrescale_Msk (3UL << ITM_TCR_TSPrescale_Pos)

#define ITM_TCR_SWOENA_Pos 4U
#define ITM_TCR_SWOENA_Msk (1UL << ITM_TCR_SWOENA_Pos)

#define ITM_TCR_DWTENA_Pos 3U
#define ITM_TCR_DWTENA_Msk (1UL << ITM_TCR_DWTENA_Pos)

#define ITM_TCR_SYNCENA_Pos 2U
#define ITM_TCR_SYNCENA_Msk (1UL << ITM_TCR_SYNCENA_Pos)

#define ITM_TCR_TSENA_Pos 1U
#define ITM_TCR_TSENA_Msk (1UL << ITM_TCR_TSENA_Pos)

#define ITM_TCR_ITMENA_Pos 0U
#define ITM_TCR_ITMENA_Msk (1UL )


#define ITM_LSR_ByteAcc_Pos 2U
#define ITM_LSR_ByteAcc_Msk (1UL << ITM_LSR_ByteAcc_Pos)

#define ITM_LSR_Access_Pos 1U
#define ITM_LSR_Access_Msk (1UL << ITM_LSR_Access_Pos)

#define ITM_LSR_Present_Pos 0U
#define ITM_LSR_Present_Msk (1UL )
# 899 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;


#define DWT_CTRL_NUMCOMP_Pos 28U
#define DWT_CTRL_NUMCOMP_Msk (0xFUL << DWT_CTRL_NUMCOMP_Pos)

#define DWT_CTRL_NOTRCPKT_Pos 27U
#define DWT_CTRL_NOTRCPKT_Msk (0x1UL << DWT_CTRL_NOTRCPKT_Pos)

#define DWT_CTRL_NOEXTTRIG_Pos 26U
#define DWT_CTRL_NOEXTTRIG_Msk (0x1UL << DWT_CTRL_NOEXTTRIG_Pos)

#define DWT_CTRL_NOCYCCNT_Pos 25U
#define DWT_CTRL_NOCYCCNT_Msk (0x1UL << DWT_CTRL_NOCYCCNT_Pos)

#define DWT_CTRL_NOPRFCNT_Pos 24U
#define DWT_CTRL_NOPRFCNT_Msk (0x1UL << DWT_CTRL_NOPRFCNT_Pos)

#define DWT_CTRL_CYCEVTENA_Pos 22U
#define DWT_CTRL_CYCEVTENA_Msk (0x1UL << DWT_CTRL_CYCEVTENA_Pos)

#define DWT_CTRL_FOLDEVTENA_Pos 21U
#define DWT_CTRL_FOLDEVTENA_Msk (0x1UL << DWT_CTRL_FOLDEVTENA_Pos)

#define DWT_CTRL_LSUEVTENA_Pos 20U
#define DWT_CTRL_LSUEVTENA_Msk (0x1UL << DWT_CTRL_LSUEVTENA_Pos)

#define DWT_CTRL_SLEEPEVTENA_Pos 19U
#define DWT_CTRL_SLEEPEVTENA_Msk (0x1UL << DWT_CTRL_SLEEPEVTENA_Pos)

#define DWT_CTRL_EXCEVTENA_Pos 18U
#define DWT_CTRL_EXCEVTENA_Msk (0x1UL << DWT_CTRL_EXCEVTENA_Pos)

#define DWT_CTRL_CPIEVTENA_Pos 17U
#define DWT_CTRL_CPIEVTENA_Msk (0x1UL << DWT_CTRL_CPIEVTENA_Pos)

#define DWT_CTRL_EXCTRCENA_Pos 16U
#define DWT_CTRL_EXCTRCENA_Msk (0x1UL << DWT_CTRL_EXCTRCENA_Pos)

#define DWT_CTRL_PCSAMPLENA_Pos 12U
#define DWT_CTRL_PCSAMPLENA_Msk (0x1UL << DWT_CTRL_PCSAMPLENA_Pos)

#define DWT_CTRL_SYNCTAP_Pos 10U
#define DWT_CTRL_SYNCTAP_Msk (0x3UL << DWT_CTRL_SYNCTAP_Pos)

#define DWT_CTRL_CYCTAP_Pos 9U
#define DWT_CTRL_CYCTAP_Msk (0x1UL << DWT_CTRL_CYCTAP_Pos)

#define DWT_CTRL_POSTINIT_Pos 5U
#define DWT_CTRL_POSTINIT_Msk (0xFUL << DWT_CTRL_POSTINIT_Pos)

#define DWT_CTRL_POSTPRESET_Pos 1U
#define DWT_CTRL_POSTPRESET_Msk (0xFUL << DWT_CTRL_POSTPRESET_Pos)

#define DWT_CTRL_CYCCNTENA_Pos 0U
#define DWT_CTRL_CYCCNTENA_Msk (0x1UL )


#define DWT_CPICNT_CPICNT_Pos 0U
#define DWT_CPICNT_CPICNT_Msk (0xFFUL )


#define DWT_EXCCNT_EXCCNT_Pos 0U
#define DWT_EXCCNT_EXCCNT_Msk (0xFFUL )


#define DWT_SLEEPCNT_SLEEPCNT_Pos 0U
#define DWT_SLEEPCNT_SLEEPCNT_Msk (0xFFUL )


#define DWT_LSUCNT_LSUCNT_Pos 0U
#define DWT_LSUCNT_LSUCNT_Msk (0xFFUL )


#define DWT_FOLDCNT_FOLDCNT_Pos 0U
#define DWT_FOLDCNT_FOLDCNT_Msk (0xFFUL )


#define DWT_MASK_MASK_Pos 0U
#define DWT_MASK_MASK_Msk (0x1FUL )


#define DWT_FUNCTION_MATCHED_Pos 24U
#define DWT_FUNCTION_MATCHED_Msk (0x1UL << DWT_FUNCTION_MATCHED_Pos)

#define DWT_FUNCTION_DATAVADDR1_Pos 16U
#define DWT_FUNCTION_DATAVADDR1_Msk (0xFUL << DWT_FUNCTION_DATAVADDR1_Pos)

#define DWT_FUNCTION_DATAVADDR0_Pos 12U
#define DWT_FUNCTION_DATAVADDR0_Msk (0xFUL << DWT_FUNCTION_DATAVADDR0_Pos)

#define DWT_FUNCTION_DATAVSIZE_Pos 10U
#define DWT_FUNCTION_DATAVSIZE_Msk (0x3UL << DWT_FUNCTION_DATAVSIZE_Pos)

#define DWT_FUNCTION_LNK1ENA_Pos 9U
#define DWT_FUNCTION_LNK1ENA_Msk (0x1UL << DWT_FUNCTION_LNK1ENA_Pos)

#define DWT_FUNCTION_DATAVMATCH_Pos 8U
#define DWT_FUNCTION_DATAVMATCH_Msk (0x1UL << DWT_FUNCTION_DATAVMATCH_Pos)

#define DWT_FUNCTION_CYCMATCH_Pos 7U
#define DWT_FUNCTION_CYCMATCH_Msk (0x1UL << DWT_FUNCTION_CYCMATCH_Pos)

#define DWT_FUNCTION_EMITRANGE_Pos 5U
#define DWT_FUNCTION_EMITRANGE_Msk (0x1UL << DWT_FUNCTION_EMITRANGE_Pos)

#define DWT_FUNCTION_FUNCTION_Pos 0U
#define DWT_FUNCTION_FUNCTION_Msk (0xFUL )
# 1046 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;


#define TPI_ACPR_PRESCALER_Pos 0U
#define TPI_ACPR_PRESCALER_Msk (0x1FFFUL )


#define TPI_SPPR_TXMODE_Pos 0U
#define TPI_SPPR_TXMODE_Msk (0x3UL )


#define TPI_FFSR_FtNonStop_Pos 3U
#define TPI_FFSR_FtNonStop_Msk (0x1UL << TPI_FFSR_FtNonStop_Pos)

#define TPI_FFSR_TCPresent_Pos 2U
#define TPI_FFSR_TCPresent_Msk (0x1UL << TPI_FFSR_TCPresent_Pos)

#define TPI_FFSR_FtStopped_Pos 1U
#define TPI_FFSR_FtStopped_Msk (0x1UL << TPI_FFSR_FtStopped_Pos)

#define TPI_FFSR_FlInProg_Pos 0U
#define TPI_FFSR_FlInProg_Msk (0x1UL )


#define TPI_FFCR_TrigIn_Pos 8U
#define TPI_FFCR_TrigIn_Msk (0x1UL << TPI_FFCR_TrigIn_Pos)

#define TPI_FFCR_EnFCont_Pos 1U
#define TPI_FFCR_EnFCont_Msk (0x1UL << TPI_FFCR_EnFCont_Pos)


#define TPI_TRIGGER_TRIGGER_Pos 0U
#define TPI_TRIGGER_TRIGGER_Msk (0x1UL )


#define TPI_FIFO0_ITM_ATVALID_Pos 29U
#define TPI_FIFO0_ITM_ATVALID_Msk (0x1UL << TPI_FIFO0_ITM_ATVALID_Pos)

#define TPI_FIFO0_ITM_bytecount_Pos 27U
#define TPI_FIFO0_ITM_bytecount_Msk (0x3UL << TPI_FIFO0_ITM_bytecount_Pos)

#define TPI_FIFO0_ETM_ATVALID_Pos 26U
#define TPI_FIFO0_ETM_ATVALID_Msk (0x1UL << TPI_FIFO0_ETM_ATVALID_Pos)

#define TPI_FIFO0_ETM_bytecount_Pos 24U
#define TPI_FIFO0_ETM_bytecount_Msk (0x3UL << TPI_FIFO0_ETM_bytecount_Pos)

#define TPI_FIFO0_ETM2_Pos 16U
#define TPI_FIFO0_ETM2_Msk (0xFFUL << TPI_FIFO0_ETM2_Pos)

#define TPI_FIFO0_ETM1_Pos 8U
#define TPI_FIFO0_ETM1_Msk (0xFFUL << TPI_FIFO0_ETM1_Pos)

#define TPI_FIFO0_ETM0_Pos 0U
#define TPI_FIFO0_ETM0_Msk (0xFFUL )


#define TPI_ITATBCTR2_ATREADY2_Pos 0U
#define TPI_ITATBCTR2_ATREADY2_Msk (0x1UL )

#define TPI_ITATBCTR2_ATREADY1_Pos 0U
#define TPI_ITATBCTR2_ATREADY1_Msk (0x1UL )


#define TPI_FIFO1_ITM_ATVALID_Pos 29U
#define TPI_FIFO1_ITM_ATVALID_Msk (0x1UL << TPI_FIFO1_ITM_ATVALID_Pos)

#define TPI_FIFO1_ITM_bytecount_Pos 27U
#define TPI_FIFO1_ITM_bytecount_Msk (0x3UL << TPI_FIFO1_ITM_bytecount_Pos)

#define TPI_FIFO1_ETM_ATVALID_Pos 26U
#define TPI_FIFO1_ETM_ATVALID_Msk (0x1UL << TPI_FIFO1_ETM_ATVALID_Pos)

#define TPI_FIFO1_ETM_bytecount_Pos 24U
#define TPI_FIFO1_ETM_bytecount_Msk (0x3UL << TPI_FIFO1_ETM_bytecount_Pos)

#define TPI_FIFO1_ITM2_Pos 16U
#define TPI_FIFO1_ITM2_Msk (0xFFUL << TPI_FIFO1_ITM2_Pos)

#define TPI_FIFO1_ITM1_Pos 8U
#define TPI_FIFO1_ITM1_Msk (0xFFUL << TPI_FIFO1_ITM1_Pos)

#define TPI_FIFO1_ITM0_Pos 0U
#define TPI_FIFO1_ITM0_Msk (0xFFUL )


#define TPI_ITATBCTR0_ATREADY2_Pos 0U
#define TPI_ITATBCTR0_ATREADY2_Msk (0x1UL )

#define TPI_ITATBCTR0_ATREADY1_Pos 0U
#define TPI_ITATBCTR0_ATREADY1_Msk (0x1UL )


#define TPI_ITCTRL_Mode_Pos 0U
#define TPI_ITCTRL_Mode_Msk (0x3UL )


#define TPI_DEVID_NRZVALID_Pos 11U
#define TPI_DEVID_NRZVALID_Msk (0x1UL << TPI_DEVID_NRZVALID_Pos)

#define TPI_DEVID_MANCVALID_Pos 10U
#define TPI_DEVID_MANCVALID_Msk (0x1UL << TPI_DEVID_MANCVALID_Pos)

#define TPI_DEVID_PTINVALID_Pos 9U
#define TPI_DEVID_PTINVALID_Msk (0x1UL << TPI_DEVID_PTINVALID_Pos)

#define TPI_DEVID_MinBufSz_Pos 6U
#define TPI_DEVID_MinBufSz_Msk (0x7UL << TPI_DEVID_MinBufSz_Pos)

#define TPI_DEVID_AsynClkIn_Pos 5U
#define TPI_DEVID_AsynClkIn_Msk (0x1UL << TPI_DEVID_AsynClkIn_Pos)

#define TPI_DEVID_NrTraceInput_Pos 0U
#define TPI_DEVID_NrTraceInput_Msk (0x1FUL )


#define TPI_DEVTYPE_SubType_Pos 4U
#define TPI_DEVTYPE_SubType_Msk (0xFUL )

#define TPI_DEVTYPE_MajorType_Pos 0U
#define TPI_DEVTYPE_MajorType_Msk (0xFUL << TPI_DEVTYPE_MajorType_Pos)
# 1208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;

#define MPU_TYPE_RALIASES 4U


#define MPU_TYPE_IREGION_Pos 16U
#define MPU_TYPE_IREGION_Msk (0xFFUL << MPU_TYPE_IREGION_Pos)

#define MPU_TYPE_DREGION_Pos 8U
#define MPU_TYPE_DREGION_Msk (0xFFUL << MPU_TYPE_DREGION_Pos)

#define MPU_TYPE_SEPARATE_Pos 0U
#define MPU_TYPE_SEPARATE_Msk (1UL )


#define MPU_CTRL_PRIVDEFENA_Pos 2U
#define MPU_CTRL_PRIVDEFENA_Msk (1UL << MPU_CTRL_PRIVDEFENA_Pos)

#define MPU_CTRL_HFNMIENA_Pos 1U
#define MPU_CTRL_HFNMIENA_Msk (1UL << MPU_CTRL_HFNMIENA_Pos)

#define MPU_CTRL_ENABLE_Pos 0U
#define MPU_CTRL_ENABLE_Msk (1UL )


#define MPU_RNR_REGION_Pos 0U
#define MPU_RNR_REGION_Msk (0xFFUL )


#define MPU_RBAR_ADDR_Pos 5U
#define MPU_RBAR_ADDR_Msk (0x7FFFFFFUL << MPU_RBAR_ADDR_Pos)

#define MPU_RBAR_VALID_Pos 4U
#define MPU_RBAR_VALID_Msk (1UL << MPU_RBAR_VALID_Pos)

#define MPU_RBAR_REGION_Pos 0U
#define MPU_RBAR_REGION_Msk (0xFUL )


#define MPU_RASR_ATTRS_Pos 16U
#define MPU_RASR_ATTRS_Msk (0xFFFFUL << MPU_RASR_ATTRS_Pos)

#define MPU_RASR_XN_Pos 28U
#define MPU_RASR_XN_Msk (1UL << MPU_RASR_XN_Pos)

#define MPU_RASR_AP_Pos 24U
#define MPU_RASR_AP_Msk (0x7UL << MPU_RASR_AP_Pos)

#define MPU_RASR_TEX_Pos 19U
#define MPU_RASR_TEX_Msk (0x7UL << MPU_RASR_TEX_Pos)

#define MPU_RASR_S_Pos 18U
#define MPU_RASR_S_Msk (1UL << MPU_RASR_S_Pos)

#define MPU_RASR_C_Pos 17U
#define MPU_RASR_C_Msk (1UL << MPU_RASR_C_Pos)

#define MPU_RASR_B_Pos 16U
#define MPU_RASR_B_Msk (1UL << MPU_RASR_B_Pos)

#define MPU_RASR_SRD_Pos 8U
#define MPU_RASR_SRD_Msk (0xFFUL << MPU_RASR_SRD_Pos)

#define MPU_RASR_SIZE_Pos 1U
#define MPU_RASR_SIZE_Msk (0x1FUL << MPU_RASR_SIZE_Pos)

#define MPU_RASR_ENABLE_Pos 0U
#define MPU_RASR_ENABLE_Msk (1UL )
# 1304 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
  volatile const uint32_t MVFR2;
} FPU_Type;


#define FPU_FPCCR_ASPEN_Pos 31U
#define FPU_FPCCR_ASPEN_Msk (1UL << FPU_FPCCR_ASPEN_Pos)

#define FPU_FPCCR_LSPEN_Pos 30U
#define FPU_FPCCR_LSPEN_Msk (1UL << FPU_FPCCR_LSPEN_Pos)

#define FPU_FPCCR_MONRDY_Pos 8U
#define FPU_FPCCR_MONRDY_Msk (1UL << FPU_FPCCR_MONRDY_Pos)

#define FPU_FPCCR_BFRDY_Pos 6U
#define FPU_FPCCR_BFRDY_Msk (1UL << FPU_FPCCR_BFRDY_Pos)

#define FPU_FPCCR_MMRDY_Pos 5U
#define FPU_FPCCR_MMRDY_Msk (1UL << FPU_FPCCR_MMRDY_Pos)

#define FPU_FPCCR_HFRDY_Pos 4U
#define FPU_FPCCR_HFRDY_Msk (1UL << FPU_FPCCR_HFRDY_Pos)

#define FPU_FPCCR_THREAD_Pos 3U
#define FPU_FPCCR_THREAD_Msk (1UL << FPU_FPCCR_THREAD_Pos)

#define FPU_FPCCR_USER_Pos 1U
#define FPU_FPCCR_USER_Msk (1UL << FPU_FPCCR_USER_Pos)

#define FPU_FPCCR_LSPACT_Pos 0U
#define FPU_FPCCR_LSPACT_Msk (1UL )


#define FPU_FPCAR_ADDRESS_Pos 3U
#define FPU_FPCAR_ADDRESS_Msk (0x1FFFFFFFUL << FPU_FPCAR_ADDRESS_Pos)


#define FPU_FPDSCR_AHP_Pos 26U
#define FPU_FPDSCR_AHP_Msk (1UL << FPU_FPDSCR_AHP_Pos)

#define FPU_FPDSCR_DN_Pos 25U
#define FPU_FPDSCR_DN_Msk (1UL << FPU_FPDSCR_DN_Pos)

#define FPU_FPDSCR_FZ_Pos 24U
#define FPU_FPDSCR_FZ_Msk (1UL << FPU_FPDSCR_FZ_Pos)

#define FPU_FPDSCR_RMode_Pos 22U
#define FPU_FPDSCR_RMode_Msk (3UL << FPU_FPDSCR_RMode_Pos)


#define FPU_MVFR0_FP_rounding_modes_Pos 28U
#define FPU_MVFR0_FP_rounding_modes_Msk (0xFUL << FPU_MVFR0_FP_rounding_modes_Pos)

#define FPU_MVFR0_Short_vectors_Pos 24U
#define FPU_MVFR0_Short_vectors_Msk (0xFUL << FPU_MVFR0_Short_vectors_Pos)

#define FPU_MVFR0_Square_root_Pos 20U
#define FPU_MVFR0_Square_root_Msk (0xFUL << FPU_MVFR0_Square_root_Pos)

#define FPU_MVFR0_Divide_Pos 16U
#define FPU_MVFR0_Divide_Msk (0xFUL << FPU_MVFR0_Divide_Pos)

#define FPU_MVFR0_FP_excep_trapping_Pos 12U
#define FPU_MVFR0_FP_excep_trapping_Msk (0xFUL << FPU_MVFR0_FP_excep_trapping_Pos)

#define FPU_MVFR0_Double_precision_Pos 8U
#define FPU_MVFR0_Double_precision_Msk (0xFUL << FPU_MVFR0_Double_precision_Pos)

#define FPU_MVFR0_Single_precision_Pos 4U
#define FPU_MVFR0_Single_precision_Msk (0xFUL << FPU_MVFR0_Single_precision_Pos)

#define FPU_MVFR0_A_SIMD_registers_Pos 0U
#define FPU_MVFR0_A_SIMD_registers_Msk (0xFUL )


#define FPU_MVFR1_FP_fused_MAC_Pos 28U
#define FPU_MVFR1_FP_fused_MAC_Msk (0xFUL << FPU_MVFR1_FP_fused_MAC_Pos)

#define FPU_MVFR1_FP_HPFP_Pos 24U
#define FPU_MVFR1_FP_HPFP_Msk (0xFUL << FPU_MVFR1_FP_HPFP_Pos)

#define FPU_MVFR1_D_NaN_mode_Pos 4U
#define FPU_MVFR1_D_NaN_mode_Msk (0xFUL << FPU_MVFR1_D_NaN_mode_Pos)

#define FPU_MVFR1_FtZ_mode_Pos 0U
#define FPU_MVFR1_FtZ_mode_Msk (0xFUL )



#define FPU_MVFR2_VFP_Misc_Pos 4U
#define FPU_MVFR2_VFP_Misc_Msk (0xFUL << FPU_MVFR2_VFP_Misc_Pos)
# 1416 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;


#define CoreDebug_DHCSR_DBGKEY_Pos 16U
#define CoreDebug_DHCSR_DBGKEY_Msk (0xFFFFUL << CoreDebug_DHCSR_DBGKEY_Pos)

#define CoreDebug_DHCSR_S_RESET_ST_Pos 25U
#define CoreDebug_DHCSR_S_RESET_ST_Msk (1UL << CoreDebug_DHCSR_S_RESET_ST_Pos)

#define CoreDebug_DHCSR_S_RETIRE_ST_Pos 24U
#define CoreDebug_DHCSR_S_RETIRE_ST_Msk (1UL << CoreDebug_DHCSR_S_RETIRE_ST_Pos)

#define CoreDebug_DHCSR_S_LOCKUP_Pos 19U
#define CoreDebug_DHCSR_S_LOCKUP_Msk (1UL << CoreDebug_DHCSR_S_LOCKUP_Pos)

#define CoreDebug_DHCSR_S_SLEEP_Pos 18U
#define CoreDebug_DHCSR_S_SLEEP_Msk (1UL << CoreDebug_DHCSR_S_SLEEP_Pos)

#define CoreDebug_DHCSR_S_HALT_Pos 17U
#define CoreDebug_DHCSR_S_HALT_Msk (1UL << CoreDebug_DHCSR_S_HALT_Pos)

#define CoreDebug_DHCSR_S_REGRDY_Pos 16U
#define CoreDebug_DHCSR_S_REGRDY_Msk (1UL << CoreDebug_DHCSR_S_REGRDY_Pos)

#define CoreDebug_DHCSR_C_SNAPSTALL_Pos 5U
#define CoreDebug_DHCSR_C_SNAPSTALL_Msk (1UL << CoreDebug_DHCSR_C_SNAPSTALL_Pos)

#define CoreDebug_DHCSR_C_MASKINTS_Pos 3U
#define CoreDebug_DHCSR_C_MASKINTS_Msk (1UL << CoreDebug_DHCSR_C_MASKINTS_Pos)

#define CoreDebug_DHCSR_C_STEP_Pos 2U
#define CoreDebug_DHCSR_C_STEP_Msk (1UL << CoreDebug_DHCSR_C_STEP_Pos)

#define CoreDebug_DHCSR_C_HALT_Pos 1U
#define CoreDebug_DHCSR_C_HALT_Msk (1UL << CoreDebug_DHCSR_C_HALT_Pos)

#define CoreDebug_DHCSR_C_DEBUGEN_Pos 0U
#define CoreDebug_DHCSR_C_DEBUGEN_Msk (1UL )


#define CoreDebug_DCRSR_REGWnR_Pos 16U
#define CoreDebug_DCRSR_REGWnR_Msk (1UL << CoreDebug_DCRSR_REGWnR_Pos)

#define CoreDebug_DCRSR_REGSEL_Pos 0U
#define CoreDebug_DCRSR_REGSEL_Msk (0x1FUL )


#define CoreDebug_DEMCR_TRCENA_Pos 24U
#define CoreDebug_DEMCR_TRCENA_Msk (1UL << CoreDebug_DEMCR_TRCENA_Pos)

#define CoreDebug_DEMCR_MON_REQ_Pos 19U
#define CoreDebug_DEMCR_MON_REQ_Msk (1UL << CoreDebug_DEMCR_MON_REQ_Pos)

#define CoreDebug_DEMCR_MON_STEP_Pos 18U
#define CoreDebug_DEMCR_MON_STEP_Msk (1UL << CoreDebug_DEMCR_MON_STEP_Pos)

#define CoreDebug_DEMCR_MON_PEND_Pos 17U
#define CoreDebug_DEMCR_MON_PEND_Msk (1UL << CoreDebug_DEMCR_MON_PEND_Pos)

#define CoreDebug_DEMCR_MON_EN_Pos 16U
#define CoreDebug_DEMCR_MON_EN_Msk (1UL << CoreDebug_DEMCR_MON_EN_Pos)

#define CoreDebug_DEMCR_VC_HARDERR_Pos 10U
#define CoreDebug_DEMCR_VC_HARDERR_Msk (1UL << CoreDebug_DEMCR_VC_HARDERR_Pos)

#define CoreDebug_DEMCR_VC_INTERR_Pos 9U
#define CoreDebug_DEMCR_VC_INTERR_Msk (1UL << CoreDebug_DEMCR_VC_INTERR_Pos)

#define CoreDebug_DEMCR_VC_BUSERR_Pos 8U
#define CoreDebug_DEMCR_VC_BUSERR_Msk (1UL << CoreDebug_DEMCR_VC_BUSERR_Pos)

#define CoreDebug_DEMCR_VC_STATERR_Pos 7U
#define CoreDebug_DEMCR_VC_STATERR_Msk (1UL << CoreDebug_DEMCR_VC_STATERR_Pos)

#define CoreDebug_DEMCR_VC_CHKERR_Pos 6U
#define CoreDebug_DEMCR_VC_CHKERR_Msk (1UL << CoreDebug_DEMCR_VC_CHKERR_Pos)

#define CoreDebug_DEMCR_VC_NOCPERR_Pos 5U
#define CoreDebug_DEMCR_VC_NOCPERR_Msk (1UL << CoreDebug_DEMCR_VC_NOCPERR_Pos)

#define CoreDebug_DEMCR_VC_MMERR_Pos 4U
#define CoreDebug_DEMCR_VC_MMERR_Msk (1UL << CoreDebug_DEMCR_VC_MMERR_Pos)

#define CoreDebug_DEMCR_VC_CORERESET_Pos 0U
#define CoreDebug_DEMCR_VC_CORERESET_Msk (1UL )
# 1524 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
#define _VAL2FLD(field,value) (((uint32_t)(value) << field ## _Pos) & field ## _Msk)







#define _FLD2VAL(field,value) (((uint32_t)(value) & field ## _Msk) >> field ## _Pos)
# 1545 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
#define SCS_BASE (0xE000E000UL)
#define ITM_BASE (0xE0000000UL)
#define DWT_BASE (0xE0001000UL)
#define TPI_BASE (0xE0040000UL)
#define CoreDebug_BASE (0xE000EDF0UL)
#define SysTick_BASE (SCS_BASE + 0x0010UL)
#define NVIC_BASE (SCS_BASE + 0x0100UL)
#define SCB_BASE (SCS_BASE + 0x0D00UL)

#define SCnSCB ((SCnSCB_Type *) SCS_BASE )
#define SCB ((SCB_Type *) SCB_BASE )
#define SysTick ((SysTick_Type *) SysTick_BASE )
#define NVIC ((NVIC_Type *) NVIC_BASE )
#define ITM ((ITM_Type *) ITM_BASE )
#define DWT ((DWT_Type *) DWT_BASE )
#define TPI ((TPI_Type *) TPI_BASE )
#define CoreDebug ((CoreDebug_Type *) CoreDebug_BASE)


#define MPU_BASE (SCS_BASE + 0x0D90UL)
#define MPU ((MPU_Type *) MPU_BASE )


#define FPU_BASE (SCS_BASE + 0x0F30UL)
#define FPU ((FPU_Type *) FPU_BASE )
# 1603 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
#define NVIC_SetPriorityGrouping __NVIC_SetPriorityGrouping
#define NVIC_GetPriorityGrouping __NVIC_GetPriorityGrouping
#define NVIC_EnableIRQ __NVIC_EnableIRQ
#define NVIC_GetEnableIRQ __NVIC_GetEnableIRQ
#define NVIC_DisableIRQ __NVIC_DisableIRQ
#define NVIC_GetPendingIRQ __NVIC_GetPendingIRQ
#define NVIC_SetPendingIRQ __NVIC_SetPendingIRQ
#define NVIC_ClearPendingIRQ __NVIC_ClearPendingIRQ
#define NVIC_GetActive __NVIC_GetActive
#define NVIC_SetPriority __NVIC_SetPriority
#define NVIC_GetPriority __NVIC_GetPriority
#define NVIC_SystemReset __NVIC_SystemReset
# 1623 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
#define NVIC_SetVector __NVIC_SetVector
#define NVIC_GetVector __NVIC_GetVector


#define NVIC_USER_IRQ_OFFSET 16



#define EXC_RETURN_HANDLER (0xFFFFFFF1UL)
#define EXC_RETURN_THREAD_MSP (0xFFFFFFF9UL)
#define EXC_RETURN_THREAD_PSP (0xFFFFFFFDUL)
#define EXC_RETURN_HANDLER_FPU (0xFFFFFFE1UL)
#define EXC_RETURN_THREAD_MSP_FPU (0xFFFFFFE9UL)
#define EXC_RETURN_THREAD_PSP_FPU (0xFFFFFFEDUL)
# 1648 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t __NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}
# 1679 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_EnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    __asm volatile("":::"memory");
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __asm volatile("":::"memory");
  }
}
# 1698 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetEnableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1717 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_DisableIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
    __DSB();
    __ISB();
  }
}
# 1736 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1755 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1770 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)IRQn) & 0x1FUL));
  }
}
# 1787 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetActive(IRQn_Type IRQn)
{
  if ((int32_t)(IRQn) >= 0)
  {
    return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
  }
  else
  {
    return(0U);
  }
}
# 1809 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) >= 0)
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
}
# 1831 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) >= 0)
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)IRQn)] >> (8U - 3)));
  }
  else
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)IRQn) & 0xFUL)-4UL] >> (8U - 3)));
  }
}
# 1856 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1883 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}
# 1906 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline void __NVIC_SetVector(IRQn_Type IRQn, uint32_t vector)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  (* (int *) (vectors + ((int32_t)IRQn + 16) * 4)) = vector;

}
# 1922 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t __NVIC_GetVector(IRQn_Type IRQn)
{
  uint32_t vectors = (uint32_t )((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->VTOR;
  return (uint32_t)(* (int *) (vectors + ((int32_t)IRQn + 16) * 4));
}






__attribute__((__noreturn__)) static inline void __NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for(;;)
  {
    __asm volatile ("nop");
  }
}
# 1955 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/mpu_armv7.h" 1
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/mpu_armv7.h"
#define ARM_MPU_ARMV7_H 

#define ARM_MPU_REGION_SIZE_32B ((uint8_t)0x04U)
#define ARM_MPU_REGION_SIZE_64B ((uint8_t)0x05U)
#define ARM_MPU_REGION_SIZE_128B ((uint8_t)0x06U)
#define ARM_MPU_REGION_SIZE_256B ((uint8_t)0x07U)
#define ARM_MPU_REGION_SIZE_512B ((uint8_t)0x08U)
#define ARM_MPU_REGION_SIZE_1KB ((uint8_t)0x09U)
#define ARM_MPU_REGION_SIZE_2KB ((uint8_t)0x0AU)
#define ARM_MPU_REGION_SIZE_4KB ((uint8_t)0x0BU)
#define ARM_MPU_REGION_SIZE_8KB ((uint8_t)0x0CU)
#define ARM_MPU_REGION_SIZE_16KB ((uint8_t)0x0DU)
#define ARM_MPU_REGION_SIZE_32KB ((uint8_t)0x0EU)
#define ARM_MPU_REGION_SIZE_64KB ((uint8_t)0x0FU)
#define ARM_MPU_REGION_SIZE_128KB ((uint8_t)0x10U)
#define ARM_MPU_REGION_SIZE_256KB ((uint8_t)0x11U)
#define ARM_MPU_REGION_SIZE_512KB ((uint8_t)0x12U)
#define ARM_MPU_REGION_SIZE_1MB ((uint8_t)0x13U)
#define ARM_MPU_REGION_SIZE_2MB ((uint8_t)0x14U)
#define ARM_MPU_REGION_SIZE_4MB ((uint8_t)0x15U)
#define ARM_MPU_REGION_SIZE_8MB ((uint8_t)0x16U)
#define ARM_MPU_REGION_SIZE_16MB ((uint8_t)0x17U)
#define ARM_MPU_REGION_SIZE_32MB ((uint8_t)0x18U)
#define ARM_MPU_REGION_SIZE_64MB ((uint8_t)0x19U)
#define ARM_MPU_REGION_SIZE_128MB ((uint8_t)0x1AU)
#define ARM_MPU_REGION_SIZE_256MB ((uint8_t)0x1BU)
#define ARM_MPU_REGION_SIZE_512MB ((uint8_t)0x1CU)
#define ARM_MPU_REGION_SIZE_1GB ((uint8_t)0x1DU)
#define ARM_MPU_REGION_SIZE_2GB ((uint8_t)0x1EU)
#define ARM_MPU_REGION_SIZE_4GB ((uint8_t)0x1FU)

#define ARM_MPU_AP_NONE 0U
#define ARM_MPU_AP_PRIV 1U
#define ARM_MPU_AP_URO 2U
#define ARM_MPU_AP_FULL 3U
#define ARM_MPU_AP_PRO 5U
#define ARM_MPU_AP_RO 6U






#define ARM_MPU_RBAR(Region,BaseAddress) (((BaseAddress) & MPU_RBAR_ADDR_Msk) | ((Region) & MPU_RBAR_REGION_Msk) | (MPU_RBAR_VALID_Msk))
# 88 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/mpu_armv7.h"
#define ARM_MPU_ACCESS_(TypeExtField,IsShareable,IsCacheable,IsBufferable) ((((TypeExtField) << MPU_RASR_TEX_Pos) & MPU_RASR_TEX_Msk) | (((IsShareable) << MPU_RASR_S_Pos) & MPU_RASR_S_Msk) | (((IsCacheable) << MPU_RASR_C_Pos) & MPU_RASR_C_Msk) | (((IsBufferable) << MPU_RASR_B_Pos) & MPU_RASR_B_Msk))
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/mpu_armv7.h"
#define ARM_MPU_RASR_EX(DisableExec,AccessPermission,AccessAttributes,SubRegionDisable,Size) ((((DisableExec) << MPU_RASR_XN_Pos) & MPU_RASR_XN_Msk) | (((AccessPermission) << MPU_RASR_AP_Pos) & MPU_RASR_AP_Msk) | (((AccessAttributes) & (MPU_RASR_TEX_Msk | MPU_RASR_S_Msk | MPU_RASR_C_Msk | MPU_RASR_B_Msk))) | (((SubRegionDisable) << MPU_RASR_SRD_Pos) & MPU_RASR_SRD_Msk) | (((Size) << MPU_RASR_SIZE_Pos) & MPU_RASR_SIZE_Msk) | (((MPU_RASR_ENABLE_Msk))))
# 123 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/mpu_armv7.h"
#define ARM_MPU_RASR(DisableExec,AccessPermission,TypeExtField,IsShareable,IsCacheable,IsBufferable,SubRegionDisable,Size) ARM_MPU_RASR_EX(DisableExec, AccessPermission, ARM_MPU_ACCESS_(TypeExtField, IsShareable, IsCacheable, IsBufferable), SubRegionDisable, Size)
# 133 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/mpu_armv7.h"
#define ARM_MPU_ACCESS_ORDERED ARM_MPU_ACCESS_(0U, 1U, 0U, 0U)
# 144 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/mpu_armv7.h"
#define ARM_MPU_ACCESS_DEVICE(IsShareable) ((IsShareable) ? ARM_MPU_ACCESS_(0U, 1U, 0U, 1U) : ARM_MPU_ACCESS_(2U, 0U, 0U, 0U))
# 157 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/mpu_armv7.h"
#define ARM_MPU_ACCESS_NORMAL(OuterCp,InnerCp,IsShareable) ARM_MPU_ACCESS_((4U | (OuterCp)), IsShareable, ((InnerCp) & 2U), ((InnerCp) & 1U))




#define ARM_MPU_CACHEP_NOCACHE 0U




#define ARM_MPU_CACHEP_WB_WRA 1U




#define ARM_MPU_CACHEP_WT_NWA 2U




#define ARM_MPU_CACHEP_WB_NWA 3U





typedef struct {
  uint32_t RBAR;
  uint32_t RASR;
} ARM_MPU_Region_t;




static inline void ARM_MPU_Enable(uint32_t MPU_Control)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL = MPU_Control | (1UL );

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR |= (1UL << 16U);

  __DSB();
  __ISB();
}



static inline void ARM_MPU_Disable(void)
{
  __DMB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHCSR &= ~(1UL << 16U);

  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->CTRL &= ~(1UL );
}




static inline void ARM_MPU_ClrRegion(uint32_t rnr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = 0U;
}





static inline void ARM_MPU_SetRegion(uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_SetRegionEx(uint32_t rnr, uint32_t rbar, uint32_t rasr)
{
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RNR = rnr;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR = rbar;
  ((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RASR = rasr;
}






static inline void ARM_MPU_OrderedMemcpy(volatile uint32_t* dst, const uint32_t* __restrict src, uint32_t len)
{
  uint32_t i;
  for (i = 0U; i < len; ++i)
  {
    dst[i] = src[i];
  }
}





static inline void ARM_MPU_Load(ARM_MPU_Region_t const* table, uint32_t cnt)
{
  const uint32_t rowWordSize = sizeof(ARM_MPU_Region_t)/4U;
  while (cnt > 4U) {
    ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), 4U*rowWordSize);
    table += 4U;
    cnt -= 4U;
  }
  ARM_MPU_OrderedMemcpy(&(((MPU_Type *) ((0xE000E000UL) + 0x0D90UL) )->RBAR), &(table->RBAR), cnt*rowWordSize);
}
# 1956 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h" 2
# 1976 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t SCB_GetFPUType(void)
{
  uint32_t mvfr0;

  mvfr0 = ((FPU_Type *) ((0xE000E000UL) + 0x0F30UL) )->MVFR0;
  if ((mvfr0 & ((0xFUL << 4U) | (0xFUL << 8U))) == 0x020U)
  {
    return 1U;
  }
  else
  {
    return 0U;
  }
}
# 2017 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  __NVIC_SetPriority (SysTick_IRQn, (1UL << 3) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 2047 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
#define ITM_RXBUFFER_EMPTY ((int32_t)0x5AA55AA5U)
# 2059 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __asm volatile ("nop");
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 2080 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != ((int32_t)0x5AA55AA5U))
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = ((int32_t)0x5AA55AA5U);
  }

  return (ch);
}
# 2100 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/toolchain/cmsis/include/core_cm4.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == ((int32_t)0x5AA55AA5U))
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 157 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/system_nrf52840.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/system_nrf52840.h"
#define SYSTEM_NRF52840_H 
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/system_nrf52840.h"
extern uint32_t SystemCoreClock;
# 44 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/system_nrf52840.h"
extern void SystemInit (void);
# 55 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/system_nrf52840.h"
extern void SystemCoreClockUpdate (void);
# 158 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h" 2
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t PART;
  volatile const uint32_t VARIANT;
  volatile const uint32_t PACKAGE;
  volatile const uint32_t RAM;
  volatile const uint32_t FLASH;
} FICR_INFO_Type;





typedef struct {
  volatile const uint32_t A0;
  volatile const uint32_t A1;
  volatile const uint32_t A2;
  volatile const uint32_t A3;
  volatile const uint32_t A4;
  volatile const uint32_t A5;
  volatile const uint32_t B0;
  volatile const uint32_t B1;
  volatile const uint32_t B2;
  volatile const uint32_t B3;
  volatile const uint32_t B4;
  volatile const uint32_t B5;
  volatile const uint32_t T0;
  volatile const uint32_t T1;
  volatile const uint32_t T2;
  volatile const uint32_t T3;
  volatile const uint32_t T4;
} FICR_TEMP_Type;





typedef struct {
  volatile const uint32_t TAGHEADER0;


  volatile const uint32_t TAGHEADER1;


  volatile const uint32_t TAGHEADER2;


  volatile const uint32_t TAGHEADER3;


} FICR_NFC_Type;





typedef struct {
  volatile const uint32_t BYTES;
  volatile const uint32_t RCCUTOFF;
  volatile const uint32_t APCUTOFF;
  volatile const uint32_t STARTUP;
  volatile const uint32_t ROSC1;
  volatile const uint32_t ROSC2;
  volatile const uint32_t ROSC3;
  volatile const uint32_t ROSC4;
} FICR_TRNG90B_Type;





typedef struct {
  volatile uint32_t POWER;
  volatile uint32_t POWERSET;
  volatile uint32_t POWERCLR;

  volatile const uint32_t RESERVED;
} POWER_RAM_Type;





typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UART_PSEL_Type;





typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UARTE_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_TXD_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
} SPI_PSEL_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
  volatile uint32_t CSN;
} SPIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_TXD_Type;





typedef struct {
  volatile uint32_t RXDELAY;
  volatile uint32_t CSNDUR;


} SPIM_IFTIMING_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MISO;
  volatile uint32_t MOSI;
  volatile uint32_t CSN;
} SPIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIS_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWI_PSEL_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIS_TXD_Type;





typedef struct {
  volatile uint32_t RX;
} NFCT_FRAMESTATUS_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile uint32_t AMOUNT;
} NFCT_TXD_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile const uint32_t AMOUNT;
} NFCT_RXD_Type;





typedef struct {
  volatile uint32_t LIMITH;

  volatile uint32_t LIMITL;

} SAADC_EVENTS_CH_Type;





typedef struct {
  volatile uint32_t PSELP;

  volatile uint32_t PSELN;

  volatile uint32_t CONFIG;

  volatile uint32_t LIMIT;

} SAADC_CH_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

} SAADC_RESULT_Type;





typedef struct {
  volatile uint32_t LED;
  volatile uint32_t A;
  volatile uint32_t B;
} QDEC_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t CNT;

  volatile uint32_t REFRESH;


  volatile uint32_t ENDDELAY;
  volatile const uint32_t RESERVED[4];
} PWM_SEQ_Type;





typedef struct {
  volatile uint32_t OUT[4];

} PWM_PSEL_Type;





typedef struct {
  volatile uint32_t CLK;
  volatile uint32_t DIN;
} PDM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t MAXCNT;

} PDM_SAMPLE_Type;





typedef struct {
  volatile uint32_t ADDR;

  volatile uint32_t SIZE;


  volatile uint32_t PERM;


  volatile const uint32_t RESERVED;
} ACL_ACL_Type;





typedef struct {
  volatile uint32_t EN;
  volatile uint32_t DIS;
} PPI_TASKS_CHG_Type;





typedef struct {
  volatile uint32_t EEP;
  volatile uint32_t TEP;
} PPI_CH_Type;





typedef struct {
  volatile uint32_t TEP;
} PPI_FORK_Type;





typedef struct {
  volatile uint32_t WA;

  volatile uint32_t RA;

} MWU_EVENTS_REGION_Type;





typedef struct {
  volatile uint32_t WA;

  volatile uint32_t RA;

} MWU_EVENTS_PREGION_Type;





typedef struct {
  volatile uint32_t SUBSTATWA;



  volatile uint32_t SUBSTATRA;



} MWU_PERREGION_Type;





typedef struct {
  volatile uint32_t START;

  volatile uint32_t END;
  volatile const uint32_t RESERVED[2];
} MWU_REGION_Type;





typedef struct {
  volatile const uint32_t START;
  volatile const uint32_t END;
  volatile uint32_t SUBS;
  volatile const uint32_t RESERVED;
} MWU_PREGION_Type;





typedef struct {
  volatile uint32_t MODE;
  volatile uint32_t RXEN;
  volatile uint32_t TXEN;
  volatile uint32_t MCKEN;
  volatile uint32_t MCKFREQ;
  volatile uint32_t RATIO;
  volatile uint32_t SWIDTH;
  volatile uint32_t ALIGN;
  volatile uint32_t FORMAT;
  volatile uint32_t CHANNELS;
} I2S_CONFIG_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_TXD_Type;





typedef struct {
  volatile uint32_t MAXCNT;
} I2S_RXTXD_Type;





typedef struct {
  volatile uint32_t MCK;
  volatile uint32_t SCK;
  volatile uint32_t LRCK;
  volatile uint32_t SDIN;
  volatile uint32_t SDOUT;
} I2S_PSEL_Type;





typedef struct {
  volatile const uint32_t EPIN[8];


  volatile const uint32_t RESERVED;
  volatile const uint32_t EPOUT[8];


} USBD_HALTED_Type;





typedef struct {
  volatile uint32_t EPOUT[8];

  volatile const uint32_t ISOOUT;

} USBD_SIZE_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED[2];
} USBD_EPIN_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOIN_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;

  volatile const uint32_t AMOUNT;

  volatile const uint32_t RESERVED[2];
} USBD_EPOUT_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} USBD_ISOOUT_Type;





typedef struct {
  volatile uint32_t SRC;
  volatile uint32_t DST;
  volatile uint32_t CNT;
} QSPI_READ_Type;





typedef struct {
  volatile uint32_t DST;
  volatile uint32_t SRC;
  volatile uint32_t CNT;
} QSPI_WRITE_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t LEN;
} QSPI_ERASE_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t CSN;
  volatile const uint32_t RESERVED;
  volatile uint32_t IO0;
  volatile uint32_t IO1;
  volatile uint32_t IO2;
  volatile uint32_t IO3;
} QSPI_PSEL_Type;
# 897 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[4];
  volatile const uint32_t CODEPAGESIZE;
  volatile const uint32_t CODESIZE;
  volatile const uint32_t RESERVED1[18];
  volatile const uint32_t DEVICEID[2];
  volatile const uint32_t RESERVED2[6];
  volatile const uint32_t ER[4];

  volatile const uint32_t IR[4];
  volatile const uint32_t DEVICEADDRTYPE;
  volatile const uint32_t DEVICEADDR[2];
  volatile const uint32_t RESERVED3[21];
  volatile const FICR_INFO_Type INFO;
  volatile const uint32_t RESERVED4[143];
  volatile const uint32_t PRODTEST[3];

  volatile const uint32_t RESERVED5[42];
  volatile const FICR_TEMP_Type TEMP;

  volatile const uint32_t RESERVED6[2];
  volatile FICR_NFC_Type NFC;
  volatile const uint32_t RESERVED7[488];
  volatile FICR_TRNG90B_Type TRNG90B;
} NRF_FICR_Type;
# 934 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[5];
  volatile uint32_t NRFFW[13];

  volatile const uint32_t RESERVED1[2];
  volatile uint32_t NRFHW[12];

  volatile uint32_t CUSTOMER[32];
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t PSELRESET[2];

  volatile uint32_t APPROTECT;
  volatile uint32_t NFCPINS;

  volatile uint32_t DEBUGCTRL;
  volatile const uint32_t RESERVED3[60];
  volatile uint32_t REGOUT0;

} NRF_UICR_Type;
# 965 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_HFCLKSTART;
  volatile uint32_t TASKS_HFCLKSTOP;
  volatile uint32_t TASKS_LFCLKSTART;
  volatile uint32_t TASKS_LFCLKSTOP;
  volatile uint32_t TASKS_CAL;
  volatile uint32_t TASKS_CTSTART;
  volatile uint32_t TASKS_CTSTOP;
  volatile const uint32_t RESERVED[57];
  volatile uint32_t EVENTS_HFCLKSTARTED;
  volatile uint32_t EVENTS_LFCLKSTARTED;
  volatile const uint32_t RESERVED1;
  volatile uint32_t EVENTS_DONE;
  volatile uint32_t EVENTS_CTTO;
  volatile const uint32_t RESERVED2[5];
  volatile uint32_t EVENTS_CTSTARTED;

  volatile uint32_t EVENTS_CTSTOPPED;

  volatile const uint32_t RESERVED3[117];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[63];
  volatile const uint32_t HFCLKRUN;

  volatile const uint32_t HFCLKSTAT;
  volatile const uint32_t RESERVED5;
  volatile const uint32_t LFCLKRUN;

  volatile const uint32_t LFCLKSTAT;
  volatile const uint32_t LFCLKSRCCOPY;

  volatile const uint32_t RESERVED6[62];
  volatile uint32_t LFCLKSRC;
  volatile const uint32_t RESERVED7[3];
  volatile uint32_t HFXODEBOUNCE;

  volatile const uint32_t RESERVED8[3];
  volatile uint32_t CTIV;
  volatile const uint32_t RESERVED9[8];
  volatile uint32_t TRACECONFIG;
  volatile const uint32_t RESERVED10[21];
  volatile uint32_t LFRCMODE;
} NRF_CLOCK_Type;
# 1021 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[30];
  volatile uint32_t TASKS_CONSTLAT;
  volatile uint32_t TASKS_LOWPWR;
  volatile const uint32_t RESERVED1[34];
  volatile uint32_t EVENTS_POFWARN;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_SLEEPENTER;
  volatile uint32_t EVENTS_SLEEPEXIT;
  volatile uint32_t EVENTS_USBDETECTED;
  volatile uint32_t EVENTS_USBREMOVED;
  volatile uint32_t EVENTS_USBPWRRDY;
  volatile const uint32_t RESERVED3[119];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile uint32_t RESETREAS;
  volatile const uint32_t RESERVED5[9];
  volatile const uint32_t RAMSTATUS;
  volatile const uint32_t RESERVED6[3];
  volatile const uint32_t USBREGSTATUS;
  volatile const uint32_t RESERVED7[49];
  volatile uint32_t SYSTEMOFF;
  volatile const uint32_t RESERVED8[3];
  volatile uint32_t POFCON;
  volatile const uint32_t RESERVED9[2];
  volatile uint32_t GPREGRET;
  volatile uint32_t GPREGRET2;
  volatile const uint32_t RESERVED10[21];
  volatile uint32_t DCDCEN;
  volatile const uint32_t RESERVED11;
  volatile uint32_t DCDCEN0;
  volatile const uint32_t RESERVED12[47];
  volatile const uint32_t MAINREGSTATUS;
  volatile const uint32_t RESERVED13[175];
  volatile POWER_RAM_Type RAM[9];
} NRF_POWER_Type;
# 1070 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[321];
  volatile uint32_t OUT;
  volatile uint32_t OUTSET;
  volatile uint32_t OUTCLR;
  volatile const uint32_t IN;
  volatile uint32_t DIR;
  volatile uint32_t DIRSET;
  volatile uint32_t DIRCLR;
  volatile uint32_t LATCH;


  volatile uint32_t DETECTMODE;

  volatile const uint32_t RESERVED1[118];
  volatile uint32_t PIN_CNF[32];

} NRF_GPIO_Type;
# 1100 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_TXEN;
  volatile uint32_t TASKS_RXEN;
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_RSSISTART;

  volatile uint32_t TASKS_RSSISTOP;
  volatile uint32_t TASKS_BCSTART;
  volatile uint32_t TASKS_BCSTOP;
  volatile uint32_t TASKS_EDSTART;

  volatile uint32_t TASKS_EDSTOP;
  volatile uint32_t TASKS_CCASTART;

  volatile uint32_t TASKS_CCASTOP;
  volatile const uint32_t RESERVED[51];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_ADDRESS;
  volatile uint32_t EVENTS_PAYLOAD;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DISABLED;
  volatile uint32_t EVENTS_DEVMATCH;

  volatile uint32_t EVENTS_DEVMISS;

  volatile uint32_t EVENTS_RSSIEND;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_BCMATCH;
  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_CRCOK;
  volatile uint32_t EVENTS_CRCERROR;
  volatile uint32_t EVENTS_FRAMESTART;
  volatile uint32_t EVENTS_EDEND;


  volatile uint32_t EVENTS_EDSTOPPED;
  volatile uint32_t EVENTS_CCAIDLE;
  volatile uint32_t EVENTS_CCABUSY;
  volatile uint32_t EVENTS_CCASTOPPED;
  volatile uint32_t EVENTS_RATEBOOST;

  volatile uint32_t EVENTS_TXREADY;

  volatile uint32_t EVENTS_RXREADY;

  volatile uint32_t EVENTS_MHRMATCH;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_SYNC;
  volatile uint32_t EVENTS_PHYEND;


  volatile const uint32_t RESERVED4[36];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile const uint32_t CRCSTATUS;
  volatile const uint32_t RESERVED7;
  volatile const uint32_t RXMATCH;
  volatile const uint32_t RXCRC;
  volatile const uint32_t DAI;
  volatile const uint32_t PDUSTAT;
  volatile const uint32_t RESERVED8[59];
  volatile uint32_t PACKETPTR;
  volatile uint32_t FREQUENCY;
  volatile uint32_t TXPOWER;
  volatile uint32_t MODE;
  volatile uint32_t PCNF0;
  volatile uint32_t PCNF1;
  volatile uint32_t BASE0;
  volatile uint32_t BASE1;
  volatile uint32_t PREFIX0;
  volatile uint32_t PREFIX1;
  volatile uint32_t TXADDRESS;
  volatile uint32_t RXADDRESSES;
  volatile uint32_t CRCCNF;
  volatile uint32_t CRCPOLY;
  volatile uint32_t CRCINIT;
  volatile const uint32_t RESERVED9;
  volatile uint32_t TIFS;
  volatile const uint32_t RSSISAMPLE;
  volatile const uint32_t RESERVED10;
  volatile const uint32_t STATE;
  volatile uint32_t DATAWHITEIV;
  volatile const uint32_t RESERVED11[2];
  volatile uint32_t BCC;
  volatile const uint32_t RESERVED12[39];
  volatile uint32_t DAB[8];

  volatile uint32_t DAP[8];

  volatile uint32_t DACNF;
  volatile uint32_t MHRMATCHCONF;
  volatile uint32_t MHRMATCHMAS;
  volatile const uint32_t RESERVED13;
  volatile uint32_t MODECNF0;
  volatile const uint32_t RESERVED14[3];
  volatile uint32_t SFD;
  volatile uint32_t EDCNT;
  volatile uint32_t EDSAMPLE;
  volatile uint32_t CCACTRL;
  volatile const uint32_t RESERVED15[611];
  volatile uint32_t POWER;
} NRF_RADIO_Type;
# 1219 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED[3];
  volatile uint32_t TASKS_SUSPEND;
  volatile const uint32_t RESERVED1[56];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;
  volatile const uint32_t RESERVED2[4];
  volatile uint32_t EVENTS_TXDRDY;
  volatile const uint32_t RESERVED3;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5[46];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED6[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED7[93];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED8[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  volatile UART_PSEL_Type PSEL;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED10;
  volatile uint32_t BAUDRATE;

  volatile const uint32_t RESERVED11[17];
  volatile uint32_t CONFIG;
} NRF_UART_Type;
# 1267 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED[7];
  volatile uint32_t TASKS_FLUSHRX;
  volatile const uint32_t RESERVED1[52];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;

  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_TXDRDY;
  volatile uint32_t EVENTS_ENDTX;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EVENTS_TXSTOPPED;
  volatile const uint32_t RESERVED7[41];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[93];
  volatile uint32_t ERRORSRC;

  volatile const uint32_t RESERVED10[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile UARTE_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t BAUDRATE;

  volatile const uint32_t RESERVED13[3];
  volatile UARTE_RXD_Type RXD;
  volatile const uint32_t RESERVED14;
  volatile UARTE_TXD_Type TXD;
  volatile const uint32_t RESERVED15[7];
  volatile uint32_t CONFIG;
} NRF_UARTE_Type;
# 1327 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[66];
  volatile uint32_t EVENTS_READY;
  volatile const uint32_t RESERVED1[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED3;
  volatile SPI_PSEL_Type PSEL;
  volatile const uint32_t RESERVED4;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED5;
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CONFIG;
} NRF_SPI_Type;
# 1358 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ENDTX;
  volatile const uint32_t RESERVED6[10];
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED7[44];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[61];
  volatile uint32_t STALLSTAT;



  volatile const uint32_t RESERVED10[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile SPIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED13[3];
  volatile SPIM_RXD_Type RXD;
  volatile SPIM_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED14[2];
  volatile SPIM_IFTIMING_Type IFTIMING;
  volatile uint32_t CSNPOL;
  volatile uint32_t PSELDCX;
  volatile uint32_t DCXCNT;
  volatile const uint32_t RESERVED15[19];
  volatile uint32_t ORC;


} NRF_SPIM_Type;
# 1418 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[9];
  volatile uint32_t TASKS_ACQUIRE;
  volatile uint32_t TASKS_RELEASE;

  volatile const uint32_t RESERVED1[54];
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t EVENTS_ACQUIRED;
  volatile const uint32_t RESERVED4[53];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile const uint32_t SEMSTAT;
  volatile const uint32_t RESERVED7[15];
  volatile uint32_t STATUS;
  volatile const uint32_t RESERVED8[47];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  volatile SPIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED10[7];
  volatile SPIS_RXD_Type RXD;
  volatile SPIS_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED11;
  volatile uint32_t DEF;

  volatile const uint32_t RESERVED12[24];
  volatile uint32_t ORC;
} NRF_SPIS_Type;
# 1464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_RXDREADY;
  volatile const uint32_t RESERVED4[4];
  volatile uint32_t EVENTS_TXDSENT;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_BB;

  volatile const uint32_t RESERVED7[3];
  volatile uint32_t EVENTS_SUSPENDED;
  volatile const uint32_t RESERVED8[45];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED9[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED10[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED11[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED12;
  volatile TWI_PSEL_Type PSEL;
  volatile const uint32_t RESERVED13[2];
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED14;
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED15[24];
  volatile uint32_t ADDRESS;
} NRF_TWI_Type;
# 1517 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;

  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t EVENTS_SUSPENDED;


  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[2];
  volatile uint32_t EVENTS_LASTRX;
  volatile uint32_t EVENTS_LASTTX;

  volatile const uint32_t RESERVED7[39];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED10[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile TWIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[5];
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED13[3];
  volatile TWIM_RXD_Type RXD;
  volatile TWIM_TXD_Type TXD;
  volatile const uint32_t RESERVED14[13];
  volatile uint32_t ADDRESS;
} NRF_TWIM_Type;
# 1574 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[5];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[3];
  volatile uint32_t TASKS_PREPARERX;
  volatile uint32_t TASKS_PREPARETX;
  volatile const uint32_t RESERVED3[51];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[9];
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_WRITE;
  volatile uint32_t EVENTS_READ;
  volatile const uint32_t RESERVED7[37];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[113];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t MATCH;

  volatile const uint32_t RESERVED10[10];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile TWIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[9];
  volatile TWIS_RXD_Type RXD;
  volatile TWIS_TXD_Type TXD;
  volatile const uint32_t RESERVED13[13];
  volatile uint32_t ADDRESS[2];
  volatile const uint32_t RESERVED14;
  volatile uint32_t CONFIG;

  volatile const uint32_t RESERVED15[10];
  volatile uint32_t ORC;

} NRF_TWIS_Type;
# 1631 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;

  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_SENSE;

  volatile uint32_t TASKS_STARTTX;

  volatile const uint32_t RESERVED[3];
  volatile uint32_t TASKS_ENABLERXDATA;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_GOIDLE;
  volatile uint32_t TASKS_GOSLEEP;
  volatile const uint32_t RESERVED2[53];
  volatile uint32_t EVENTS_READY;

  volatile uint32_t EVENTS_FIELDDETECTED;
  volatile uint32_t EVENTS_FIELDLOST;
  volatile uint32_t EVENTS_TXFRAMESTART;

  volatile uint32_t EVENTS_TXFRAMEEND;

  volatile uint32_t EVENTS_RXFRAMESTART;

  volatile uint32_t EVENTS_RXFRAMEEND;


  volatile uint32_t EVENTS_ERROR;

  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_RXERROR;


  volatile uint32_t EVENTS_ENDRX;

  volatile uint32_t EVENTS_ENDTX;

  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_AUTOCOLRESSTARTED;
  volatile const uint32_t RESERVED5[3];
  volatile uint32_t EVENTS_COLLISION;
  volatile uint32_t EVENTS_SELECTED;
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED6[43];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED7[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED8[62];
  volatile uint32_t ERRORSTATUS;
  volatile const uint32_t RESERVED9;
  volatile NFCT_FRAMESTATUS_Type FRAMESTATUS;
  volatile const uint32_t NFCTAGSTATE;
  volatile const uint32_t RESERVED10[3];
  volatile const uint32_t SLEEPSTATE;
  volatile const uint32_t RESERVED11[6];
  volatile const uint32_t FIELDPRESENT;
  volatile const uint32_t RESERVED12[49];
  volatile uint32_t FRAMEDELAYMIN;
  volatile uint32_t FRAMEDELAYMAX;
  volatile uint32_t FRAMEDELAYMODE;
  volatile uint32_t PACKETPTR;

  volatile uint32_t MAXLEN;

  volatile NFCT_TXD_Type TXD;
  volatile NFCT_RXD_Type RXD;
  volatile const uint32_t RESERVED13[26];
  volatile uint32_t NFCID1_LAST;
  volatile uint32_t NFCID1_2ND_LAST;
  volatile uint32_t NFCID1_3RD_LAST;
  volatile uint32_t AUTOCOLRESCONFIG;


  volatile uint32_t SENSRES;
  volatile uint32_t SELRES;
} NRF_NFCT_Type;
# 1721 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_OUT[8];


  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_SET[8];


  volatile const uint32_t RESERVED1[4];
  volatile uint32_t TASKS_CLR[8];


  volatile const uint32_t RESERVED2[32];
  volatile uint32_t EVENTS_IN[8];

  volatile const uint32_t RESERVED3[23];
  volatile uint32_t EVENTS_PORT;

  volatile const uint32_t RESERVED4[97];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED5[129];
  volatile uint32_t CONFIG[8];

} NRF_GPIOTE_Type;
# 1758 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_SAMPLE;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CALIBRATEOFFSET;
  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DONE;



  volatile uint32_t EVENTS_RESULTDONE;
  volatile uint32_t EVENTS_CALIBRATEDONE;
  volatile uint32_t EVENTS_STOPPED;
  volatile SAADC_EVENTS_CH_Type EVENTS_CH[8];
  volatile const uint32_t RESERVED1[106];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED4[3];
  volatile SAADC_CH_Type CH[8];
  volatile const uint32_t RESERVED5[24];
  volatile uint32_t RESOLUTION;
  volatile uint32_t OVERSAMPLE;



  volatile uint32_t SAMPLERATE;
  volatile const uint32_t RESERVED6[12];
  volatile SAADC_RESULT_Type RESULT;
} NRF_SAADC_Type;
# 1807 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_COUNT;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_SHUTDOWN;
  volatile const uint32_t RESERVED[11];
  volatile uint32_t TASKS_CAPTURE[6];

  volatile const uint32_t RESERVED1[58];
  volatile uint32_t EVENTS_COMPARE[6];

  volatile const uint32_t RESERVED2[42];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[126];
  volatile uint32_t MODE;
  volatile uint32_t BITMODE;
  volatile const uint32_t RESERVED5;
  volatile uint32_t PRESCALER;
  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CC[6];

} NRF_TIMER_Type;
# 1845 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_TRIGOVRFLW;
  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_TICK;
  volatile uint32_t EVENTS_OVRFLW;
  volatile const uint32_t RESERVED1[14];
  volatile uint32_t EVENTS_COMPARE[4];

  volatile const uint32_t RESERVED2[109];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[13];
  volatile uint32_t EVTEN;
  volatile uint32_t EVTENSET;
  volatile uint32_t EVTENCLR;
  volatile const uint32_t RESERVED4[110];
  volatile const uint32_t COUNTER;
  volatile uint32_t PRESCALER;

  volatile const uint32_t RESERVED5[13];
  volatile uint32_t CC[4];
} NRF_RTC_Type;
# 1882 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_DATARDY;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[127];
  volatile const int32_t TEMP;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t A0;
  volatile uint32_t A1;
  volatile uint32_t A2;
  volatile uint32_t A3;
  volatile uint32_t A4;
  volatile uint32_t A5;
  volatile const uint32_t RESERVED4[2];
  volatile uint32_t B0;
  volatile uint32_t B1;
  volatile uint32_t B2;
  volatile uint32_t B3;
  volatile uint32_t B4;
  volatile uint32_t B5;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t T0;
  volatile uint32_t T1;
  volatile uint32_t T2;
  volatile uint32_t T3;
  volatile uint32_t T4;
} NRF_TEMP_Type;
# 1925 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_VALRDY;

  volatile const uint32_t RESERVED1[63];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[126];
  volatile uint32_t CONFIG;
  volatile const uint32_t VALUE;
} NRF_RNG_Type;
# 1952 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_STARTECB;
  volatile uint32_t TASKS_STOPECB;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_ENDECB;
  volatile uint32_t EVENTS_ERRORECB;

  volatile const uint32_t RESERVED1[127];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t ECBDATAPTR;
} NRF_ECB_Type;
# 1977 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_RESOLVED;
  volatile uint32_t EVENTS_NOTRESOLVED;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t NIRK;
  volatile uint32_t IRKPTR;
  volatile const uint32_t RESERVED5;
  volatile uint32_t ADDRPTR;
  volatile uint32_t SCRATCHPTR;
} NRF_AAR_Type;
# 2011 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_KSGEN;

  volatile uint32_t TASKS_CRYPT;

  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_RATEOVERRIDE;


  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_ENDKSGEN;
  volatile uint32_t EVENTS_ENDCRYPT;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t MICSTATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t CNFPTR;

  volatile uint32_t INPTR;
  volatile uint32_t OUTPTR;
  volatile uint32_t SCRATCHPTR;
  volatile uint32_t MAXPACKETSIZE;

  volatile uint32_t RATEOVERRIDE;
} NRF_CCM_Type;
# 2055 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile const uint32_t RESERVED[63];
  volatile uint32_t EVENTS_TIMEOUT;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t RUNSTATUS;
  volatile const uint32_t REQSTATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t CRV;
  volatile uint32_t RREN;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED4[60];
  volatile uint32_t RR[8];
} NRF_WDT_Type;
# 2084 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_READCLRACC;
  volatile uint32_t TASKS_RDCLRACC;
  volatile uint32_t TASKS_RDCLRDBL;
  volatile const uint32_t RESERVED[59];
  volatile uint32_t EVENTS_SAMPLERDY;

  volatile uint32_t EVENTS_REPORTRDY;
  volatile uint32_t EVENTS_ACCOF;
  volatile uint32_t EVENTS_DBLRDY;
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[59];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  volatile uint32_t LEDPOL;
  volatile uint32_t SAMPLEPER;
  volatile const int32_t SAMPLE;
  volatile uint32_t REPORTPER;

  volatile const int32_t ACC;
  volatile const int32_t ACCREAD;

  volatile QDEC_PSEL_Type PSEL;
  volatile uint32_t DBFEN;
  volatile const uint32_t RESERVED4[5];
  volatile uint32_t LEDPRE;
  volatile const uint32_t ACCDBL;

  volatile const uint32_t ACCDBLREAD;

} NRF_QDEC_Type;
# 2133 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t TH;
  volatile uint32_t MODE;
  volatile uint32_t HYST;
} NRF_COMP_Type;
# 2172 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[4];
  volatile uint32_t ANADETECT;
  volatile const uint32_t RESERVED6[5];
  volatile uint32_t HYST;
} NRF_LPCOMP_Type;
# 2210 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_TRIGGER[16];

  volatile const uint32_t RESERVED[48];
  volatile uint32_t EVENTS_TRIGGERED[16];


  volatile const uint32_t RESERVED1[112];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
} NRF_EGU_Type;
# 2234 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_SWI_Type;
# 2249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STOP;


  volatile uint32_t TASKS_SEQSTART[2];




  volatile uint32_t TASKS_NEXTSTEP;



  volatile const uint32_t RESERVED1[60];
  volatile uint32_t EVENTS_STOPPED;

  volatile uint32_t EVENTS_SEQSTARTED[2];

  volatile uint32_t EVENTS_SEQEND[2];


  volatile uint32_t EVENTS_PWMPERIODEND;
  volatile uint32_t EVENTS_LOOPSDONE;

  volatile const uint32_t RESERVED2[56];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[125];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t COUNTERTOP;

  volatile uint32_t PRESCALER;
  volatile uint32_t DECODER;
  volatile uint32_t LOOP;
  volatile const uint32_t RESERVED5[2];
  volatile PWM_SEQ_Type SEQ[2];
  volatile PWM_PSEL_Type PSEL;
} NRF_PWM_Type;
# 2304 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_END;


  volatile const uint32_t RESERVED1[125];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile uint32_t PDMCLKCTRL;
  volatile uint32_t MODE;

  volatile const uint32_t RESERVED3[3];
  volatile uint32_t GAINL;
  volatile uint32_t GAINR;
  volatile uint32_t RATIO;

  volatile const uint32_t RESERVED4[7];
  volatile PDM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED5[6];
  volatile PDM_SAMPLE_Type SAMPLE;
} NRF_PDM_Type;
# 2344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[512];
  volatile ACL_ACL_Type ACL[8];
} NRF_ACL_Type;
# 2360 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[256];
  volatile const uint32_t READY;
  volatile const uint32_t RESERVED1;
  volatile const uint32_t READYNEXT;
  volatile const uint32_t RESERVED2[62];
  volatile uint32_t CONFIG;

  union {
    volatile uint32_t ERASEPAGE;
    volatile uint32_t ERASEPCR1;

  };
  volatile uint32_t ERASEALL;
  volatile uint32_t ERASEPCR0;

  volatile uint32_t ERASEUICR;

  volatile uint32_t ERASEPAGEPARTIAL;

  volatile uint32_t ERASEPAGEPARTIALCFG;
  volatile const uint32_t RESERVED3[8];
  volatile uint32_t ICACHECNF;
  volatile const uint32_t RESERVED4;
  volatile uint32_t IHIT;
  volatile uint32_t IMISS;
} NRF_NVMC_Type;
# 2399 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile PPI_TASKS_CHG_Type TASKS_CHG[6];
  volatile const uint32_t RESERVED[308];
  volatile uint32_t CHEN;
  volatile uint32_t CHENSET;
  volatile uint32_t CHENCLR;
  volatile const uint32_t RESERVED1;
  volatile PPI_CH_Type CH[20];
  volatile const uint32_t RESERVED2[148];
  volatile uint32_t CHG[6];
  volatile const uint32_t RESERVED3[62];
  volatile PPI_FORK_Type FORK[32];
} NRF_PPI_Type;
# 2424 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[64];
  volatile MWU_EVENTS_REGION_Type EVENTS_REGION[4];
  volatile const uint32_t RESERVED1[16];
  volatile MWU_EVENTS_PREGION_Type EVENTS_PREGION[2];
  volatile const uint32_t RESERVED2[100];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t NMIEN;
  volatile uint32_t NMIENSET;
  volatile uint32_t NMIENCLR;
  volatile const uint32_t RESERVED4[53];
  volatile MWU_PERREGION_Type PERREGION[2];
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t REGIONEN;
  volatile uint32_t REGIONENSET;
  volatile uint32_t REGIONENCLR;
  volatile const uint32_t RESERVED6[57];
  volatile MWU_REGION_Type REGION[4];
  volatile const uint32_t RESERVED7[32];
  volatile MWU_PREGION_Type PREGION[2];
} NRF_MWU_Type;
# 2460 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_STOP;


  volatile const uint32_t RESERVED[63];
  volatile uint32_t EVENTS_RXPTRUPD;




  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_TXPTRUPD;




  volatile const uint32_t RESERVED2[122];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  volatile I2S_CONFIG_Type CONFIG;
  volatile const uint32_t RESERVED4[3];
  volatile I2S_RXD_Type RXD;
  volatile const uint32_t RESERVED5;
  volatile I2S_TXD_Type TXD;
  volatile const uint32_t RESERVED6[3];
  volatile I2S_RXTXD_Type RXTXD;
  volatile const uint32_t RESERVED7[3];
  volatile I2S_PSEL_Type PSEL;
} NRF_I2S_Type;
# 2507 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_FPU_Type;
# 2522 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTEPIN[8];



  volatile uint32_t TASKS_STARTISOIN;


  volatile uint32_t TASKS_STARTEPOUT[8];



  volatile uint32_t TASKS_STARTISOOUT;


  volatile uint32_t TASKS_EP0RCVOUT;
  volatile uint32_t TASKS_EP0STATUS;
  volatile uint32_t TASKS_EP0STALL;

  volatile uint32_t TASKS_DPDMDRIVE;

  volatile uint32_t TASKS_DPDMNODRIVE;

  volatile const uint32_t RESERVED1[40];
  volatile uint32_t EVENTS_USBRESET;

  volatile uint32_t EVENTS_STARTED;



  volatile uint32_t EVENTS_ENDEPIN[8];


  volatile uint32_t EVENTS_EP0DATADONE;

  volatile uint32_t EVENTS_ENDISOIN;

  volatile uint32_t EVENTS_ENDEPOUT[8];


  volatile uint32_t EVENTS_ENDISOOUT;

  volatile uint32_t EVENTS_SOF;

  volatile uint32_t EVENTS_USBEVENT;


  volatile uint32_t EVENTS_EP0SETUP;

  volatile uint32_t EVENTS_EPDATA;

  volatile const uint32_t RESERVED2[39];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile uint32_t EVENTCAUSE;
  volatile const uint32_t RESERVED5[7];
  volatile USBD_HALTED_Type HALTED;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EPSTATUS;

  volatile uint32_t EPDATASTATUS;


  volatile const uint32_t USBADDR;
  volatile const uint32_t RESERVED7[3];
  volatile const uint32_t BMREQUESTTYPE;
  volatile const uint32_t BREQUEST;
  volatile const uint32_t WVALUEL;
  volatile const uint32_t WVALUEH;
  volatile const uint32_t WINDEXL;
  volatile const uint32_t WINDEXH;
  volatile const uint32_t WLENGTHL;
  volatile const uint32_t WLENGTHH;
  volatile USBD_SIZE_Type SIZE;
  volatile const uint32_t RESERVED8[15];
  volatile uint32_t ENABLE;
  volatile uint32_t USBPULLUP;
  volatile uint32_t DPDMVALUE;



  volatile uint32_t DTOGGLE;
  volatile uint32_t EPINEN;
  volatile uint32_t EPOUTEN;
  volatile uint32_t EPSTALL;
  volatile uint32_t ISOSPLIT;
  volatile const uint32_t FRAMECNTR;

  volatile const uint32_t RESERVED9[2];
  volatile uint32_t LOWPOWER;

  volatile uint32_t ISOINCONFIG;


  volatile const uint32_t RESERVED10[51];
  volatile USBD_EPIN_Type EPIN[8];
  volatile USBD_ISOIN_Type ISOIN;
  volatile const uint32_t RESERVED11[21];
  volatile USBD_EPOUT_Type EPOUT[8];
  volatile USBD_ISOOUT_Type ISOOUT;
} NRF_USBD_Type;
# 2640 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;
  volatile uint32_t TASKS_READSTART;

  volatile uint32_t TASKS_WRITESTART;

  volatile uint32_t TASKS_ERASESTART;
  volatile uint32_t TASKS_DEACTIVATE;
  volatile const uint32_t RESERVED[59];
  volatile uint32_t EVENTS_READY;

  volatile const uint32_t RESERVED1[127];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;

  volatile QSPI_READ_Type READ;
  volatile QSPI_WRITE_Type WRITE;
  volatile QSPI_ERASE_Type ERASE;
  volatile QSPI_PSEL_Type PSEL;
  volatile uint32_t XIPOFFSET;

  volatile uint32_t IFCONFIG0;
  volatile const uint32_t RESERVED3[46];
  volatile uint32_t IFCONFIG1;
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED4[3];
  volatile uint32_t DPMDUR;

  volatile const uint32_t RESERVED5[3];
  volatile uint32_t ADDRCONF;
  volatile const uint32_t RESERVED6[3];
  volatile uint32_t CINSTRCONF;
  volatile uint32_t CINSTRDAT0;
  volatile uint32_t CINSTRDAT1;
  volatile uint32_t IFTIMING;
} NRF_QSPI_Type;
# 2691 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[1678];
  volatile uint32_t HOST_CRYPTOKEY_SEL;
  volatile const uint32_t RESERVED1[4];
  volatile uint32_t HOST_IOT_KPRTL_LOCK;




  volatile uint32_t HOST_IOT_KDR0;




  volatile uint32_t HOST_IOT_KDR1;


  volatile uint32_t HOST_IOT_KDR2;


  volatile uint32_t HOST_IOT_KDR3;


  volatile uint32_t HOST_IOT_LCS;

} NRF_CC_HOST_RGF_Type;
# 2729 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
typedef struct {
  volatile const uint32_t RESERVED[320];
  volatile uint32_t ENABLE;
} NRF_CRYPTOCELL_Type;
# 2747 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
#define NRF_FICR_BASE 0x10000000UL
#define NRF_UICR_BASE 0x10001000UL
#define NRF_CLOCK_BASE 0x40000000UL
#define NRF_POWER_BASE 0x40000000UL
#define NRF_P0_BASE 0x50000000UL
#define NRF_P1_BASE 0x50000300UL
#define NRF_RADIO_BASE 0x40001000UL
#define NRF_UART0_BASE 0x40002000UL
#define NRF_UARTE0_BASE 0x40002000UL
#define NRF_SPI0_BASE 0x40003000UL
#define NRF_SPIM0_BASE 0x40003000UL
#define NRF_SPIS0_BASE 0x40003000UL
#define NRF_TWI0_BASE 0x40003000UL
#define NRF_TWIM0_BASE 0x40003000UL
#define NRF_TWIS0_BASE 0x40003000UL
#define NRF_SPI1_BASE 0x40004000UL
#define NRF_SPIM1_BASE 0x40004000UL
#define NRF_SPIS1_BASE 0x40004000UL
#define NRF_TWI1_BASE 0x40004000UL
#define NRF_TWIM1_BASE 0x40004000UL
#define NRF_TWIS1_BASE 0x40004000UL
#define NRF_NFCT_BASE 0x40005000UL
#define NRF_GPIOTE_BASE 0x40006000UL
#define NRF_SAADC_BASE 0x40007000UL
#define NRF_TIMER0_BASE 0x40008000UL
#define NRF_TIMER1_BASE 0x40009000UL
#define NRF_TIMER2_BASE 0x4000A000UL
#define NRF_RTC0_BASE 0x4000B000UL
#define NRF_TEMP_BASE 0x4000C000UL
#define NRF_RNG_BASE 0x4000D000UL
#define NRF_ECB_BASE 0x4000E000UL
#define NRF_AAR_BASE 0x4000F000UL
#define NRF_CCM_BASE 0x4000F000UL
#define NRF_WDT_BASE 0x40010000UL
#define NRF_RTC1_BASE 0x40011000UL
#define NRF_QDEC_BASE 0x40012000UL
#define NRF_COMP_BASE 0x40013000UL
#define NRF_LPCOMP_BASE 0x40013000UL
#define NRF_EGU0_BASE 0x40014000UL
#define NRF_SWI0_BASE 0x40014000UL
#define NRF_EGU1_BASE 0x40015000UL
#define NRF_SWI1_BASE 0x40015000UL
#define NRF_EGU2_BASE 0x40016000UL
#define NRF_SWI2_BASE 0x40016000UL
#define NRF_EGU3_BASE 0x40017000UL
#define NRF_SWI3_BASE 0x40017000UL
#define NRF_EGU4_BASE 0x40018000UL
#define NRF_SWI4_BASE 0x40018000UL
#define NRF_EGU5_BASE 0x40019000UL
#define NRF_SWI5_BASE 0x40019000UL
#define NRF_TIMER3_BASE 0x4001A000UL
#define NRF_TIMER4_BASE 0x4001B000UL
#define NRF_PWM0_BASE 0x4001C000UL
#define NRF_PDM_BASE 0x4001D000UL
#define NRF_ACL_BASE 0x4001E000UL
#define NRF_NVMC_BASE 0x4001E000UL
#define NRF_PPI_BASE 0x4001F000UL
#define NRF_MWU_BASE 0x40020000UL
#define NRF_PWM1_BASE 0x40021000UL
#define NRF_PWM2_BASE 0x40022000UL
#define NRF_SPI2_BASE 0x40023000UL
#define NRF_SPIM2_BASE 0x40023000UL
#define NRF_SPIS2_BASE 0x40023000UL
#define NRF_RTC2_BASE 0x40024000UL
#define NRF_I2S_BASE 0x40025000UL
#define NRF_FPU_BASE 0x40026000UL
#define NRF_USBD_BASE 0x40027000UL
#define NRF_UARTE1_BASE 0x40028000UL
#define NRF_QSPI_BASE 0x40029000UL
#define NRF_CC_HOST_RGF_BASE 0x5002A000UL
#define NRF_CRYPTOCELL_BASE 0x5002A000UL
#define NRF_PWM3_BASE 0x4002D000UL
#define NRF_SPIM3_BASE 0x4002F000UL
# 2833 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840.h"
#define NRF_FICR ((NRF_FICR_Type*) NRF_FICR_BASE)
#define NRF_UICR ((NRF_UICR_Type*) NRF_UICR_BASE)
#define NRF_CLOCK ((NRF_CLOCK_Type*) NRF_CLOCK_BASE)
#define NRF_POWER ((NRF_POWER_Type*) NRF_POWER_BASE)
#define NRF_P0 ((NRF_GPIO_Type*) NRF_P0_BASE)
#define NRF_P1 ((NRF_GPIO_Type*) NRF_P1_BASE)
#define NRF_RADIO ((NRF_RADIO_Type*) NRF_RADIO_BASE)
#define NRF_UART0 ((NRF_UART_Type*) NRF_UART0_BASE)
#define NRF_UARTE0 ((NRF_UARTE_Type*) NRF_UARTE0_BASE)
#define NRF_SPI0 ((NRF_SPI_Type*) NRF_SPI0_BASE)
#define NRF_SPIM0 ((NRF_SPIM_Type*) NRF_SPIM0_BASE)
#define NRF_SPIS0 ((NRF_SPIS_Type*) NRF_SPIS0_BASE)
#define NRF_TWI0 ((NRF_TWI_Type*) NRF_TWI0_BASE)
#define NRF_TWIM0 ((NRF_TWIM_Type*) NRF_TWIM0_BASE)
#define NRF_TWIS0 ((NRF_TWIS_Type*) NRF_TWIS0_BASE)
#define NRF_SPI1 ((NRF_SPI_Type*) NRF_SPI1_BASE)
#define NRF_SPIM1 ((NRF_SPIM_Type*) NRF_SPIM1_BASE)
#define NRF_SPIS1 ((NRF_SPIS_Type*) NRF_SPIS1_BASE)
#define NRF_TWI1 ((NRF_TWI_Type*) NRF_TWI1_BASE)
#define NRF_TWIM1 ((NRF_TWIM_Type*) NRF_TWIM1_BASE)
#define NRF_TWIS1 ((NRF_TWIS_Type*) NRF_TWIS1_BASE)
#define NRF_NFCT ((NRF_NFCT_Type*) NRF_NFCT_BASE)
#define NRF_GPIOTE ((NRF_GPIOTE_Type*) NRF_GPIOTE_BASE)
#define NRF_SAADC ((NRF_SAADC_Type*) NRF_SAADC_BASE)
#define NRF_TIMER0 ((NRF_TIMER_Type*) NRF_TIMER0_BASE)
#define NRF_TIMER1 ((NRF_TIMER_Type*) NRF_TIMER1_BASE)
#define NRF_TIMER2 ((NRF_TIMER_Type*) NRF_TIMER2_BASE)
#define NRF_RTC0 ((NRF_RTC_Type*) NRF_RTC0_BASE)
#define NRF_TEMP ((NRF_TEMP_Type*) NRF_TEMP_BASE)
#define NRF_RNG ((NRF_RNG_Type*) NRF_RNG_BASE)
#define NRF_ECB ((NRF_ECB_Type*) NRF_ECB_BASE)
#define NRF_AAR ((NRF_AAR_Type*) NRF_AAR_BASE)
#define NRF_CCM ((NRF_CCM_Type*) NRF_CCM_BASE)
#define NRF_WDT ((NRF_WDT_Type*) NRF_WDT_BASE)
#define NRF_RTC1 ((NRF_RTC_Type*) NRF_RTC1_BASE)
#define NRF_QDEC ((NRF_QDEC_Type*) NRF_QDEC_BASE)
#define NRF_COMP ((NRF_COMP_Type*) NRF_COMP_BASE)
#define NRF_LPCOMP ((NRF_LPCOMP_Type*) NRF_LPCOMP_BASE)
#define NRF_EGU0 ((NRF_EGU_Type*) NRF_EGU0_BASE)
#define NRF_SWI0 ((NRF_SWI_Type*) NRF_SWI0_BASE)
#define NRF_EGU1 ((NRF_EGU_Type*) NRF_EGU1_BASE)
#define NRF_SWI1 ((NRF_SWI_Type*) NRF_SWI1_BASE)
#define NRF_EGU2 ((NRF_EGU_Type*) NRF_EGU2_BASE)
#define NRF_SWI2 ((NRF_SWI_Type*) NRF_SWI2_BASE)
#define NRF_EGU3 ((NRF_EGU_Type*) NRF_EGU3_BASE)
#define NRF_SWI3 ((NRF_SWI_Type*) NRF_SWI3_BASE)
#define NRF_EGU4 ((NRF_EGU_Type*) NRF_EGU4_BASE)
#define NRF_SWI4 ((NRF_SWI_Type*) NRF_SWI4_BASE)
#define NRF_EGU5 ((NRF_EGU_Type*) NRF_EGU5_BASE)
#define NRF_SWI5 ((NRF_SWI_Type*) NRF_SWI5_BASE)
#define NRF_TIMER3 ((NRF_TIMER_Type*) NRF_TIMER3_BASE)
#define NRF_TIMER4 ((NRF_TIMER_Type*) NRF_TIMER4_BASE)
#define NRF_PWM0 ((NRF_PWM_Type*) NRF_PWM0_BASE)
#define NRF_PDM ((NRF_PDM_Type*) NRF_PDM_BASE)
#define NRF_ACL ((NRF_ACL_Type*) NRF_ACL_BASE)
#define NRF_NVMC ((NRF_NVMC_Type*) NRF_NVMC_BASE)
#define NRF_PPI ((NRF_PPI_Type*) NRF_PPI_BASE)
#define NRF_MWU ((NRF_MWU_Type*) NRF_MWU_BASE)
#define NRF_PWM1 ((NRF_PWM_Type*) NRF_PWM1_BASE)
#define NRF_PWM2 ((NRF_PWM_Type*) NRF_PWM2_BASE)
#define NRF_SPI2 ((NRF_SPI_Type*) NRF_SPI2_BASE)
#define NRF_SPIM2 ((NRF_SPIM_Type*) NRF_SPIM2_BASE)
#define NRF_SPIS2 ((NRF_SPIS_Type*) NRF_SPIS2_BASE)
#define NRF_RTC2 ((NRF_RTC_Type*) NRF_RTC2_BASE)
#define NRF_I2S ((NRF_I2S_Type*) NRF_I2S_BASE)
#define NRF_FPU ((NRF_FPU_Type*) NRF_FPU_BASE)
#define NRF_USBD ((NRF_USBD_Type*) NRF_USBD_BASE)
#define NRF_UARTE1 ((NRF_UARTE_Type*) NRF_UARTE1_BASE)
#define NRF_QSPI ((NRF_QSPI_Type*) NRF_QSPI_BASE)
#define NRF_CC_HOST_RGF ((NRF_CC_HOST_RGF_Type*) NRF_CC_HOST_RGF_BASE)
#define NRF_CRYPTOCELL ((NRF_CRYPTOCELL_Type*) NRF_CRYPTOCELL_BASE)
#define NRF_PWM3 ((NRF_PWM_Type*) NRF_PWM3_BASE)
#define NRF_SPIM3 ((NRF_SPIM_Type*) NRF_SPIM3_BASE)
# 170 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h" 1
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define __NRF52840_BITS_H 
# 54 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define AAR_TASKS_START_TASKS_START_Pos (0UL)
#define AAR_TASKS_START_TASKS_START_Msk (0x1UL << AAR_TASKS_START_TASKS_START_Pos)
#define AAR_TASKS_START_TASKS_START_Trigger (1UL)





#define AAR_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define AAR_TASKS_STOP_TASKS_STOP_Msk (0x1UL << AAR_TASKS_STOP_TASKS_STOP_Pos)
#define AAR_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define AAR_EVENTS_END_EVENTS_END_Pos (0UL)
#define AAR_EVENTS_END_EVENTS_END_Msk (0x1UL << AAR_EVENTS_END_EVENTS_END_Pos)
#define AAR_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define AAR_EVENTS_END_EVENTS_END_Generated (1UL)





#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos (0UL)
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Msk (0x1UL << AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos)
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_NotGenerated (0UL)
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Generated (1UL)





#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos (0UL)
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Msk (0x1UL << AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos)
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_NotGenerated (0UL)
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Generated (1UL)





#define AAR_INTENSET_NOTRESOLVED_Pos (2UL)
#define AAR_INTENSET_NOTRESOLVED_Msk (0x1UL << AAR_INTENSET_NOTRESOLVED_Pos)
#define AAR_INTENSET_NOTRESOLVED_Disabled (0UL)
#define AAR_INTENSET_NOTRESOLVED_Enabled (1UL)
#define AAR_INTENSET_NOTRESOLVED_Set (1UL)


#define AAR_INTENSET_RESOLVED_Pos (1UL)
#define AAR_INTENSET_RESOLVED_Msk (0x1UL << AAR_INTENSET_RESOLVED_Pos)
#define AAR_INTENSET_RESOLVED_Disabled (0UL)
#define AAR_INTENSET_RESOLVED_Enabled (1UL)
#define AAR_INTENSET_RESOLVED_Set (1UL)


#define AAR_INTENSET_END_Pos (0UL)
#define AAR_INTENSET_END_Msk (0x1UL << AAR_INTENSET_END_Pos)
#define AAR_INTENSET_END_Disabled (0UL)
#define AAR_INTENSET_END_Enabled (1UL)
#define AAR_INTENSET_END_Set (1UL)





#define AAR_INTENCLR_NOTRESOLVED_Pos (2UL)
#define AAR_INTENCLR_NOTRESOLVED_Msk (0x1UL << AAR_INTENCLR_NOTRESOLVED_Pos)
#define AAR_INTENCLR_NOTRESOLVED_Disabled (0UL)
#define AAR_INTENCLR_NOTRESOLVED_Enabled (1UL)
#define AAR_INTENCLR_NOTRESOLVED_Clear (1UL)


#define AAR_INTENCLR_RESOLVED_Pos (1UL)
#define AAR_INTENCLR_RESOLVED_Msk (0x1UL << AAR_INTENCLR_RESOLVED_Pos)
#define AAR_INTENCLR_RESOLVED_Disabled (0UL)
#define AAR_INTENCLR_RESOLVED_Enabled (1UL)
#define AAR_INTENCLR_RESOLVED_Clear (1UL)


#define AAR_INTENCLR_END_Pos (0UL)
#define AAR_INTENCLR_END_Msk (0x1UL << AAR_INTENCLR_END_Pos)
#define AAR_INTENCLR_END_Disabled (0UL)
#define AAR_INTENCLR_END_Enabled (1UL)
#define AAR_INTENCLR_END_Clear (1UL)





#define AAR_STATUS_STATUS_Pos (0UL)
#define AAR_STATUS_STATUS_Msk (0xFUL << AAR_STATUS_STATUS_Pos)





#define AAR_ENABLE_ENABLE_Pos (0UL)
#define AAR_ENABLE_ENABLE_Msk (0x3UL << AAR_ENABLE_ENABLE_Pos)
#define AAR_ENABLE_ENABLE_Disabled (0UL)
#define AAR_ENABLE_ENABLE_Enabled (3UL)





#define AAR_NIRK_NIRK_Pos (0UL)
#define AAR_NIRK_NIRK_Msk (0x1FUL << AAR_NIRK_NIRK_Pos)





#define AAR_IRKPTR_IRKPTR_Pos (0UL)
#define AAR_IRKPTR_IRKPTR_Msk (0xFFFFFFFFUL << AAR_IRKPTR_IRKPTR_Pos)





#define AAR_ADDRPTR_ADDRPTR_Pos (0UL)
#define AAR_ADDRPTR_ADDRPTR_Msk (0xFFFFFFFFUL << AAR_ADDRPTR_ADDRPTR_Pos)





#define AAR_SCRATCHPTR_SCRATCHPTR_Pos (0UL)
#define AAR_SCRATCHPTR_SCRATCHPTR_Msk (0xFFFFFFFFUL << AAR_SCRATCHPTR_SCRATCHPTR_Pos)
# 193 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define ACL_ACL_ADDR_ADDR_Pos (0UL)
#define ACL_ACL_ADDR_ADDR_Msk (0xFFFFFFFFUL << ACL_ACL_ADDR_ADDR_Pos)





#define ACL_ACL_SIZE_SIZE_Pos (0UL)
#define ACL_ACL_SIZE_SIZE_Msk (0xFFFFFFFFUL << ACL_ACL_SIZE_SIZE_Pos)





#define ACL_ACL_PERM_READ_Pos (2UL)
#define ACL_ACL_PERM_READ_Msk (0x1UL << ACL_ACL_PERM_READ_Pos)
#define ACL_ACL_PERM_READ_Enable (0UL)
#define ACL_ACL_PERM_READ_Disable (1UL)


#define ACL_ACL_PERM_WRITE_Pos (1UL)
#define ACL_ACL_PERM_WRITE_Msk (0x1UL << ACL_ACL_PERM_WRITE_Pos)
#define ACL_ACL_PERM_WRITE_Enable (0UL)
#define ACL_ACL_PERM_WRITE_Disable (1UL)
# 226 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Pos (0UL)
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Msk (0x1UL << CCM_TASKS_KSGEN_TASKS_KSGEN_Pos)
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Trigger (1UL)





#define CCM_TASKS_CRYPT_TASKS_CRYPT_Pos (0UL)
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Msk (0x1UL << CCM_TASKS_CRYPT_TASKS_CRYPT_Pos)
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Trigger (1UL)





#define CCM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define CCM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << CCM_TASKS_STOP_TASKS_STOP_Pos)
#define CCM_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos (0UL)
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Msk (0x1UL << CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos)
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Trigger (1UL)





#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos (0UL)
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Msk (0x1UL << CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos)
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_NotGenerated (0UL)
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Generated (1UL)





#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos (0UL)
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Msk (0x1UL << CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos)
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_NotGenerated (0UL)
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Generated (1UL)





#define CCM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << CCM_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define CCM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)





#define CCM_SHORTS_ENDKSGEN_CRYPT_Pos (0UL)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Msk (0x1UL << CCM_SHORTS_ENDKSGEN_CRYPT_Pos)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Disabled (0UL)
#define CCM_SHORTS_ENDKSGEN_CRYPT_Enabled (1UL)





#define CCM_INTENSET_ERROR_Pos (2UL)
#define CCM_INTENSET_ERROR_Msk (0x1UL << CCM_INTENSET_ERROR_Pos)
#define CCM_INTENSET_ERROR_Disabled (0UL)
#define CCM_INTENSET_ERROR_Enabled (1UL)
#define CCM_INTENSET_ERROR_Set (1UL)


#define CCM_INTENSET_ENDCRYPT_Pos (1UL)
#define CCM_INTENSET_ENDCRYPT_Msk (0x1UL << CCM_INTENSET_ENDCRYPT_Pos)
#define CCM_INTENSET_ENDCRYPT_Disabled (0UL)
#define CCM_INTENSET_ENDCRYPT_Enabled (1UL)
#define CCM_INTENSET_ENDCRYPT_Set (1UL)


#define CCM_INTENSET_ENDKSGEN_Pos (0UL)
#define CCM_INTENSET_ENDKSGEN_Msk (0x1UL << CCM_INTENSET_ENDKSGEN_Pos)
#define CCM_INTENSET_ENDKSGEN_Disabled (0UL)
#define CCM_INTENSET_ENDKSGEN_Enabled (1UL)
#define CCM_INTENSET_ENDKSGEN_Set (1UL)





#define CCM_INTENCLR_ERROR_Pos (2UL)
#define CCM_INTENCLR_ERROR_Msk (0x1UL << CCM_INTENCLR_ERROR_Pos)
#define CCM_INTENCLR_ERROR_Disabled (0UL)
#define CCM_INTENCLR_ERROR_Enabled (1UL)
#define CCM_INTENCLR_ERROR_Clear (1UL)


#define CCM_INTENCLR_ENDCRYPT_Pos (1UL)
#define CCM_INTENCLR_ENDCRYPT_Msk (0x1UL << CCM_INTENCLR_ENDCRYPT_Pos)
#define CCM_INTENCLR_ENDCRYPT_Disabled (0UL)
#define CCM_INTENCLR_ENDCRYPT_Enabled (1UL)
#define CCM_INTENCLR_ENDCRYPT_Clear (1UL)


#define CCM_INTENCLR_ENDKSGEN_Pos (0UL)
#define CCM_INTENCLR_ENDKSGEN_Msk (0x1UL << CCM_INTENCLR_ENDKSGEN_Pos)
#define CCM_INTENCLR_ENDKSGEN_Disabled (0UL)
#define CCM_INTENCLR_ENDKSGEN_Enabled (1UL)
#define CCM_INTENCLR_ENDKSGEN_Clear (1UL)





#define CCM_MICSTATUS_MICSTATUS_Pos (0UL)
#define CCM_MICSTATUS_MICSTATUS_Msk (0x1UL << CCM_MICSTATUS_MICSTATUS_Pos)
#define CCM_MICSTATUS_MICSTATUS_CheckFailed (0UL)
#define CCM_MICSTATUS_MICSTATUS_CheckPassed (1UL)





#define CCM_ENABLE_ENABLE_Pos (0UL)
#define CCM_ENABLE_ENABLE_Msk (0x3UL << CCM_ENABLE_ENABLE_Pos)
#define CCM_ENABLE_ENABLE_Disabled (0UL)
#define CCM_ENABLE_ENABLE_Enabled (2UL)





#define CCM_MODE_LENGTH_Pos (24UL)
#define CCM_MODE_LENGTH_Msk (0x1UL << CCM_MODE_LENGTH_Pos)
#define CCM_MODE_LENGTH_Default (0UL)
#define CCM_MODE_LENGTH_Extended (1UL)


#define CCM_MODE_DATARATE_Pos (16UL)
#define CCM_MODE_DATARATE_Msk (0x3UL << CCM_MODE_DATARATE_Pos)
#define CCM_MODE_DATARATE_1Mbit (0UL)
#define CCM_MODE_DATARATE_2Mbit (1UL)
#define CCM_MODE_DATARATE_125Kbps (2UL)
#define CCM_MODE_DATARATE_500Kbps (3UL)


#define CCM_MODE_MODE_Pos (0UL)
#define CCM_MODE_MODE_Msk (0x1UL << CCM_MODE_MODE_Pos)
#define CCM_MODE_MODE_Encryption (0UL)
#define CCM_MODE_MODE_Decryption (1UL)





#define CCM_CNFPTR_CNFPTR_Pos (0UL)
#define CCM_CNFPTR_CNFPTR_Msk (0xFFFFFFFFUL << CCM_CNFPTR_CNFPTR_Pos)





#define CCM_INPTR_INPTR_Pos (0UL)
#define CCM_INPTR_INPTR_Msk (0xFFFFFFFFUL << CCM_INPTR_INPTR_Pos)





#define CCM_OUTPTR_OUTPTR_Pos (0UL)
#define CCM_OUTPTR_OUTPTR_Msk (0xFFFFFFFFUL << CCM_OUTPTR_OUTPTR_Pos)






#define CCM_SCRATCHPTR_SCRATCHPTR_Pos (0UL)
#define CCM_SCRATCHPTR_SCRATCHPTR_Msk (0xFFFFFFFFUL << CCM_SCRATCHPTR_SCRATCHPTR_Pos)





#define CCM_MAXPACKETSIZE_MAXPACKETSIZE_Pos (0UL)
#define CCM_MAXPACKETSIZE_MAXPACKETSIZE_Msk (0xFFUL << CCM_MAXPACKETSIZE_MAXPACKETSIZE_Pos)





#define CCM_RATEOVERRIDE_RATEOVERRIDE_Pos (0UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Msk (0x3UL << CCM_RATEOVERRIDE_RATEOVERRIDE_Pos)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_1Mbit (0UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_2Mbit (1UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_125Kbps (2UL)
#define CCM_RATEOVERRIDE_RATEOVERRIDE_500Kbps (3UL)
# 434 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define CC_HOST_RGF_HOST_CRYPTOKEY_SEL_HOST_CRYPTOKEY_SEL_Pos (0UL)
#define CC_HOST_RGF_HOST_CRYPTOKEY_SEL_HOST_CRYPTOKEY_SEL_Msk (0x3UL << CC_HOST_RGF_HOST_CRYPTOKEY_SEL_HOST_CRYPTOKEY_SEL_Pos)
#define CC_HOST_RGF_HOST_CRYPTOKEY_SEL_HOST_CRYPTOKEY_SEL_K_DR (0UL)
#define CC_HOST_RGF_HOST_CRYPTOKEY_SEL_HOST_CRYPTOKEY_SEL_K_PRTL (1UL)
#define CC_HOST_RGF_HOST_CRYPTOKEY_SEL_HOST_CRYPTOKEY_SEL_Session (2UL)





#define CC_HOST_RGF_HOST_IOT_KPRTL_LOCK_HOST_IOT_KPRTL_LOCK_Pos (0UL)
#define CC_HOST_RGF_HOST_IOT_KPRTL_LOCK_HOST_IOT_KPRTL_LOCK_Msk (0x1UL << CC_HOST_RGF_HOST_IOT_KPRTL_LOCK_HOST_IOT_KPRTL_LOCK_Pos)
#define CC_HOST_RGF_HOST_IOT_KPRTL_LOCK_HOST_IOT_KPRTL_LOCK_Disabled (0UL)
#define CC_HOST_RGF_HOST_IOT_KPRTL_LOCK_HOST_IOT_KPRTL_LOCK_Enabled (1UL)





#define CC_HOST_RGF_HOST_IOT_KDR0_HOST_IOT_KDR0_Pos (0UL)
#define CC_HOST_RGF_HOST_IOT_KDR0_HOST_IOT_KDR0_Msk (0xFFFFFFFFUL << CC_HOST_RGF_HOST_IOT_KDR0_HOST_IOT_KDR0_Pos)





#define CC_HOST_RGF_HOST_IOT_KDR1_HOST_IOT_KDR1_Pos (0UL)
#define CC_HOST_RGF_HOST_IOT_KDR1_HOST_IOT_KDR1_Msk (0xFFFFFFFFUL << CC_HOST_RGF_HOST_IOT_KDR1_HOST_IOT_KDR1_Pos)





#define CC_HOST_RGF_HOST_IOT_KDR2_HOST_IOT_KDR2_Pos (0UL)
#define CC_HOST_RGF_HOST_IOT_KDR2_HOST_IOT_KDR2_Msk (0xFFFFFFFFUL << CC_HOST_RGF_HOST_IOT_KDR2_HOST_IOT_KDR2_Pos)





#define CC_HOST_RGF_HOST_IOT_KDR3_HOST_IOT_KDR3_Pos (0UL)
#define CC_HOST_RGF_HOST_IOT_KDR3_HOST_IOT_KDR3_Msk (0xFFFFFFFFUL << CC_HOST_RGF_HOST_IOT_KDR3_HOST_IOT_KDR3_Pos)





#define CC_HOST_RGF_HOST_IOT_LCS_LCS_IS_VALID_Pos (8UL)
#define CC_HOST_RGF_HOST_IOT_LCS_LCS_IS_VALID_Msk (0x1UL << CC_HOST_RGF_HOST_IOT_LCS_LCS_IS_VALID_Pos)
#define CC_HOST_RGF_HOST_IOT_LCS_LCS_IS_VALID_Invalid (0UL)
#define CC_HOST_RGF_HOST_IOT_LCS_LCS_IS_VALID_Valid (1UL)


#define CC_HOST_RGF_HOST_IOT_LCS_LCS_Pos (0UL)
#define CC_HOST_RGF_HOST_IOT_LCS_LCS_Msk (0x7UL << CC_HOST_RGF_HOST_IOT_LCS_LCS_Pos)
#define CC_HOST_RGF_HOST_IOT_LCS_LCS_Debug (0UL)
#define CC_HOST_RGF_HOST_IOT_LCS_LCS_Secure (2UL)
# 500 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos (0UL)
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Msk (0x1UL << CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos)
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Trigger (1UL)





#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos (0UL)
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos)
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Trigger (1UL)





#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos (0UL)
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Msk (0x1UL << CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos)
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Trigger (1UL)





#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos (0UL)
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos)
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Trigger (1UL)





#define CLOCK_TASKS_CAL_TASKS_CAL_Pos (0UL)
#define CLOCK_TASKS_CAL_TASKS_CAL_Msk (0x1UL << CLOCK_TASKS_CAL_TASKS_CAL_Pos)
#define CLOCK_TASKS_CAL_TASKS_CAL_Trigger (1UL)





#define CLOCK_TASKS_CTSTART_TASKS_CTSTART_Pos (0UL)
#define CLOCK_TASKS_CTSTART_TASKS_CTSTART_Msk (0x1UL << CLOCK_TASKS_CTSTART_TASKS_CTSTART_Pos)
#define CLOCK_TASKS_CTSTART_TASKS_CTSTART_Trigger (1UL)





#define CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Pos (0UL)
#define CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Msk (0x1UL << CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Pos)
#define CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Trigger (1UL)





#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos (0UL)
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos)
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_NotGenerated (0UL)
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Generated (1UL)





#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos (0UL)
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos)
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_NotGenerated (0UL)
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Generated (1UL)





#define CLOCK_EVENTS_DONE_EVENTS_DONE_Pos (0UL)
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << CLOCK_EVENTS_DONE_EVENTS_DONE_Pos)
#define CLOCK_EVENTS_DONE_EVENTS_DONE_NotGenerated (0UL)
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Generated (1UL)





#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_Pos (0UL)
#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_Msk (0x1UL << CLOCK_EVENTS_CTTO_EVENTS_CTTO_Pos)
#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_NotGenerated (0UL)
#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_Generated (1UL)





#define CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Pos (0UL)
#define CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Msk (0x1UL << CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Pos)
#define CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_NotGenerated (0UL)
#define CLOCK_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Generated (1UL)





#define CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Pos (0UL)
#define CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Msk (0x1UL << CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Pos)
#define CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_NotGenerated (0UL)
#define CLOCK_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Generated (1UL)





#define CLOCK_INTENSET_CTSTOPPED_Pos (11UL)
#define CLOCK_INTENSET_CTSTOPPED_Msk (0x1UL << CLOCK_INTENSET_CTSTOPPED_Pos)
#define CLOCK_INTENSET_CTSTOPPED_Disabled (0UL)
#define CLOCK_INTENSET_CTSTOPPED_Enabled (1UL)
#define CLOCK_INTENSET_CTSTOPPED_Set (1UL)


#define CLOCK_INTENSET_CTSTARTED_Pos (10UL)
#define CLOCK_INTENSET_CTSTARTED_Msk (0x1UL << CLOCK_INTENSET_CTSTARTED_Pos)
#define CLOCK_INTENSET_CTSTARTED_Disabled (0UL)
#define CLOCK_INTENSET_CTSTARTED_Enabled (1UL)
#define CLOCK_INTENSET_CTSTARTED_Set (1UL)


#define CLOCK_INTENSET_CTTO_Pos (4UL)
#define CLOCK_INTENSET_CTTO_Msk (0x1UL << CLOCK_INTENSET_CTTO_Pos)
#define CLOCK_INTENSET_CTTO_Disabled (0UL)
#define CLOCK_INTENSET_CTTO_Enabled (1UL)
#define CLOCK_INTENSET_CTTO_Set (1UL)


#define CLOCK_INTENSET_DONE_Pos (3UL)
#define CLOCK_INTENSET_DONE_Msk (0x1UL << CLOCK_INTENSET_DONE_Pos)
#define CLOCK_INTENSET_DONE_Disabled (0UL)
#define CLOCK_INTENSET_DONE_Enabled (1UL)
#define CLOCK_INTENSET_DONE_Set (1UL)


#define CLOCK_INTENSET_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_LFCLKSTARTED_Pos)
#define CLOCK_INTENSET_LFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENSET_LFCLKSTARTED_Set (1UL)


#define CLOCK_INTENSET_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLKSTARTED_Pos)
#define CLOCK_INTENSET_HFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENSET_HFCLKSTARTED_Set (1UL)





#define CLOCK_INTENCLR_CTSTOPPED_Pos (11UL)
#define CLOCK_INTENCLR_CTSTOPPED_Msk (0x1UL << CLOCK_INTENCLR_CTSTOPPED_Pos)
#define CLOCK_INTENCLR_CTSTOPPED_Disabled (0UL)
#define CLOCK_INTENCLR_CTSTOPPED_Enabled (1UL)
#define CLOCK_INTENCLR_CTSTOPPED_Clear (1UL)


#define CLOCK_INTENCLR_CTSTARTED_Pos (10UL)
#define CLOCK_INTENCLR_CTSTARTED_Msk (0x1UL << CLOCK_INTENCLR_CTSTARTED_Pos)
#define CLOCK_INTENCLR_CTSTARTED_Disabled (0UL)
#define CLOCK_INTENCLR_CTSTARTED_Enabled (1UL)
#define CLOCK_INTENCLR_CTSTARTED_Clear (1UL)


#define CLOCK_INTENCLR_CTTO_Pos (4UL)
#define CLOCK_INTENCLR_CTTO_Msk (0x1UL << CLOCK_INTENCLR_CTTO_Pos)
#define CLOCK_INTENCLR_CTTO_Disabled (0UL)
#define CLOCK_INTENCLR_CTTO_Enabled (1UL)
#define CLOCK_INTENCLR_CTTO_Clear (1UL)


#define CLOCK_INTENCLR_DONE_Pos (3UL)
#define CLOCK_INTENCLR_DONE_Msk (0x1UL << CLOCK_INTENCLR_DONE_Pos)
#define CLOCK_INTENCLR_DONE_Disabled (0UL)
#define CLOCK_INTENCLR_DONE_Enabled (1UL)
#define CLOCK_INTENCLR_DONE_Clear (1UL)


#define CLOCK_INTENCLR_LFCLKSTARTED_Pos (1UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_LFCLKSTARTED_Pos)
#define CLOCK_INTENCLR_LFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENCLR_LFCLKSTARTED_Clear (1UL)


#define CLOCK_INTENCLR_HFCLKSTARTED_Pos (0UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_HFCLKSTARTED_Pos)
#define CLOCK_INTENCLR_HFCLKSTARTED_Disabled (0UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Enabled (1UL)
#define CLOCK_INTENCLR_HFCLKSTARTED_Clear (1UL)





#define CLOCK_HFCLKRUN_STATUS_Pos (0UL)
#define CLOCK_HFCLKRUN_STATUS_Msk (0x1UL << CLOCK_HFCLKRUN_STATUS_Pos)
#define CLOCK_HFCLKRUN_STATUS_NotTriggered (0UL)
#define CLOCK_HFCLKRUN_STATUS_Triggered (1UL)





#define CLOCK_HFCLKSTAT_STATE_Pos (16UL)
#define CLOCK_HFCLKSTAT_STATE_Msk (0x1UL << CLOCK_HFCLKSTAT_STATE_Pos)
#define CLOCK_HFCLKSTAT_STATE_NotRunning (0UL)
#define CLOCK_HFCLKSTAT_STATE_Running (1UL)


#define CLOCK_HFCLKSTAT_SRC_Pos (0UL)
#define CLOCK_HFCLKSTAT_SRC_Msk (0x1UL << CLOCK_HFCLKSTAT_SRC_Pos)
#define CLOCK_HFCLKSTAT_SRC_RC (0UL)
#define CLOCK_HFCLKSTAT_SRC_Xtal (1UL)





#define CLOCK_LFCLKRUN_STATUS_Pos (0UL)
#define CLOCK_LFCLKRUN_STATUS_Msk (0x1UL << CLOCK_LFCLKRUN_STATUS_Pos)
#define CLOCK_LFCLKRUN_STATUS_NotTriggered (0UL)
#define CLOCK_LFCLKRUN_STATUS_Triggered (1UL)





#define CLOCK_LFCLKSTAT_STATE_Pos (16UL)
#define CLOCK_LFCLKSTAT_STATE_Msk (0x1UL << CLOCK_LFCLKSTAT_STATE_Pos)
#define CLOCK_LFCLKSTAT_STATE_NotRunning (0UL)
#define CLOCK_LFCLKSTAT_STATE_Running (1UL)


#define CLOCK_LFCLKSTAT_SRC_Pos (0UL)
#define CLOCK_LFCLKSTAT_SRC_Msk (0x3UL << CLOCK_LFCLKSTAT_SRC_Pos)
#define CLOCK_LFCLKSTAT_SRC_RC (0UL)
#define CLOCK_LFCLKSTAT_SRC_Xtal (1UL)
#define CLOCK_LFCLKSTAT_SRC_Synth (2UL)





#define CLOCK_LFCLKSRCCOPY_SRC_Pos (0UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Msk (0x3UL << CLOCK_LFCLKSRCCOPY_SRC_Pos)
#define CLOCK_LFCLKSRCCOPY_SRC_RC (0UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Xtal (1UL)
#define CLOCK_LFCLKSRCCOPY_SRC_Synth (2UL)





#define CLOCK_LFCLKSRC_EXTERNAL_Pos (17UL)
#define CLOCK_LFCLKSRC_EXTERNAL_Msk (0x1UL << CLOCK_LFCLKSRC_EXTERNAL_Pos)
#define CLOCK_LFCLKSRC_EXTERNAL_Disabled (0UL)
#define CLOCK_LFCLKSRC_EXTERNAL_Enabled (1UL)


#define CLOCK_LFCLKSRC_BYPASS_Pos (16UL)
#define CLOCK_LFCLKSRC_BYPASS_Msk (0x1UL << CLOCK_LFCLKSRC_BYPASS_Pos)
#define CLOCK_LFCLKSRC_BYPASS_Disabled (0UL)
#define CLOCK_LFCLKSRC_BYPASS_Enabled (1UL)


#define CLOCK_LFCLKSRC_SRC_Pos (0UL)
#define CLOCK_LFCLKSRC_SRC_Msk (0x3UL << CLOCK_LFCLKSRC_SRC_Pos)
#define CLOCK_LFCLKSRC_SRC_RC (0UL)
#define CLOCK_LFCLKSRC_SRC_Xtal (1UL)
#define CLOCK_LFCLKSRC_SRC_Synth (2UL)





#define CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Pos (0UL)
#define CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Msk (0xFFUL << CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Pos)
#define CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Db256us (0x10UL)
#define CLOCK_HFXODEBOUNCE_HFXODEBOUNCE_Db1024us (0x40UL)





#define CLOCK_CTIV_CTIV_Pos (0UL)
#define CLOCK_CTIV_CTIV_Msk (0x7FUL << CLOCK_CTIV_CTIV_Pos)





#define CLOCK_TRACECONFIG_TRACEMUX_Pos (16UL)
#define CLOCK_TRACECONFIG_TRACEMUX_Msk (0x3UL << CLOCK_TRACECONFIG_TRACEMUX_Pos)
#define CLOCK_TRACECONFIG_TRACEMUX_GPIO (0UL)
#define CLOCK_TRACECONFIG_TRACEMUX_Serial (1UL)
#define CLOCK_TRACECONFIG_TRACEMUX_Parallel (2UL)


#define CLOCK_TRACECONFIG_TRACEPORTSPEED_Pos (0UL)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_Msk (0x3UL << CLOCK_TRACECONFIG_TRACEPORTSPEED_Pos)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_32MHz (0UL)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_16MHz (1UL)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_8MHz (2UL)
#define CLOCK_TRACECONFIG_TRACEPORTSPEED_4MHz (3UL)





#define CLOCK_LFRCMODE_STATUS_Pos (16UL)
#define CLOCK_LFRCMODE_STATUS_Msk (0x1UL << CLOCK_LFRCMODE_STATUS_Pos)
#define CLOCK_LFRCMODE_STATUS_Normal (0UL)
#define CLOCK_LFRCMODE_STATUS_ULP (1UL)


#define CLOCK_LFRCMODE_MODE_Pos (0UL)
#define CLOCK_LFRCMODE_MODE_Msk (0x1UL << CLOCK_LFRCMODE_MODE_Pos)
#define CLOCK_LFRCMODE_MODE_Normal (0UL)
#define CLOCK_LFRCMODE_MODE_ULP (1UL)
# 834 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define COMP_TASKS_START_TASKS_START_Pos (0UL)
#define COMP_TASKS_START_TASKS_START_Msk (0x1UL << COMP_TASKS_START_TASKS_START_Pos)
#define COMP_TASKS_START_TASKS_START_Trigger (1UL)





#define COMP_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define COMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << COMP_TASKS_STOP_TASKS_STOP_Pos)
#define COMP_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL)
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos)
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (1UL)





#define COMP_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define COMP_EVENTS_READY_EVENTS_READY_Msk (0x1UL << COMP_EVENTS_READY_EVENTS_READY_Pos)
#define COMP_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define COMP_EVENTS_READY_EVENTS_READY_Generated (1UL)





#define COMP_EVENTS_DOWN_EVENTS_DOWN_Pos (0UL)
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Msk (0x1UL << COMP_EVENTS_DOWN_EVENTS_DOWN_Pos)
#define COMP_EVENTS_DOWN_EVENTS_DOWN_NotGenerated (0UL)
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Generated (1UL)





#define COMP_EVENTS_UP_EVENTS_UP_Pos (0UL)
#define COMP_EVENTS_UP_EVENTS_UP_Msk (0x1UL << COMP_EVENTS_UP_EVENTS_UP_Pos)
#define COMP_EVENTS_UP_EVENTS_UP_NotGenerated (0UL)
#define COMP_EVENTS_UP_EVENTS_UP_Generated (1UL)





#define COMP_EVENTS_CROSS_EVENTS_CROSS_Pos (0UL)
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Msk (0x1UL << COMP_EVENTS_CROSS_EVENTS_CROSS_Pos)
#define COMP_EVENTS_CROSS_EVENTS_CROSS_NotGenerated (0UL)
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Generated (1UL)





#define COMP_SHORTS_CROSS_STOP_Pos (4UL)
#define COMP_SHORTS_CROSS_STOP_Msk (0x1UL << COMP_SHORTS_CROSS_STOP_Pos)
#define COMP_SHORTS_CROSS_STOP_Disabled (0UL)
#define COMP_SHORTS_CROSS_STOP_Enabled (1UL)


#define COMP_SHORTS_UP_STOP_Pos (3UL)
#define COMP_SHORTS_UP_STOP_Msk (0x1UL << COMP_SHORTS_UP_STOP_Pos)
#define COMP_SHORTS_UP_STOP_Disabled (0UL)
#define COMP_SHORTS_UP_STOP_Enabled (1UL)


#define COMP_SHORTS_DOWN_STOP_Pos (2UL)
#define COMP_SHORTS_DOWN_STOP_Msk (0x1UL << COMP_SHORTS_DOWN_STOP_Pos)
#define COMP_SHORTS_DOWN_STOP_Disabled (0UL)
#define COMP_SHORTS_DOWN_STOP_Enabled (1UL)


#define COMP_SHORTS_READY_STOP_Pos (1UL)
#define COMP_SHORTS_READY_STOP_Msk (0x1UL << COMP_SHORTS_READY_STOP_Pos)
#define COMP_SHORTS_READY_STOP_Disabled (0UL)
#define COMP_SHORTS_READY_STOP_Enabled (1UL)


#define COMP_SHORTS_READY_SAMPLE_Pos (0UL)
#define COMP_SHORTS_READY_SAMPLE_Msk (0x1UL << COMP_SHORTS_READY_SAMPLE_Pos)
#define COMP_SHORTS_READY_SAMPLE_Disabled (0UL)
#define COMP_SHORTS_READY_SAMPLE_Enabled (1UL)





#define COMP_INTEN_CROSS_Pos (3UL)
#define COMP_INTEN_CROSS_Msk (0x1UL << COMP_INTEN_CROSS_Pos)
#define COMP_INTEN_CROSS_Disabled (0UL)
#define COMP_INTEN_CROSS_Enabled (1UL)


#define COMP_INTEN_UP_Pos (2UL)
#define COMP_INTEN_UP_Msk (0x1UL << COMP_INTEN_UP_Pos)
#define COMP_INTEN_UP_Disabled (0UL)
#define COMP_INTEN_UP_Enabled (1UL)


#define COMP_INTEN_DOWN_Pos (1UL)
#define COMP_INTEN_DOWN_Msk (0x1UL << COMP_INTEN_DOWN_Pos)
#define COMP_INTEN_DOWN_Disabled (0UL)
#define COMP_INTEN_DOWN_Enabled (1UL)


#define COMP_INTEN_READY_Pos (0UL)
#define COMP_INTEN_READY_Msk (0x1UL << COMP_INTEN_READY_Pos)
#define COMP_INTEN_READY_Disabled (0UL)
#define COMP_INTEN_READY_Enabled (1UL)





#define COMP_INTENSET_CROSS_Pos (3UL)
#define COMP_INTENSET_CROSS_Msk (0x1UL << COMP_INTENSET_CROSS_Pos)
#define COMP_INTENSET_CROSS_Disabled (0UL)
#define COMP_INTENSET_CROSS_Enabled (1UL)
#define COMP_INTENSET_CROSS_Set (1UL)


#define COMP_INTENSET_UP_Pos (2UL)
#define COMP_INTENSET_UP_Msk (0x1UL << COMP_INTENSET_UP_Pos)
#define COMP_INTENSET_UP_Disabled (0UL)
#define COMP_INTENSET_UP_Enabled (1UL)
#define COMP_INTENSET_UP_Set (1UL)


#define COMP_INTENSET_DOWN_Pos (1UL)
#define COMP_INTENSET_DOWN_Msk (0x1UL << COMP_INTENSET_DOWN_Pos)
#define COMP_INTENSET_DOWN_Disabled (0UL)
#define COMP_INTENSET_DOWN_Enabled (1UL)
#define COMP_INTENSET_DOWN_Set (1UL)


#define COMP_INTENSET_READY_Pos (0UL)
#define COMP_INTENSET_READY_Msk (0x1UL << COMP_INTENSET_READY_Pos)
#define COMP_INTENSET_READY_Disabled (0UL)
#define COMP_INTENSET_READY_Enabled (1UL)
#define COMP_INTENSET_READY_Set (1UL)





#define COMP_INTENCLR_CROSS_Pos (3UL)
#define COMP_INTENCLR_CROSS_Msk (0x1UL << COMP_INTENCLR_CROSS_Pos)
#define COMP_INTENCLR_CROSS_Disabled (0UL)
#define COMP_INTENCLR_CROSS_Enabled (1UL)
#define COMP_INTENCLR_CROSS_Clear (1UL)


#define COMP_INTENCLR_UP_Pos (2UL)
#define COMP_INTENCLR_UP_Msk (0x1UL << COMP_INTENCLR_UP_Pos)
#define COMP_INTENCLR_UP_Disabled (0UL)
#define COMP_INTENCLR_UP_Enabled (1UL)
#define COMP_INTENCLR_UP_Clear (1UL)


#define COMP_INTENCLR_DOWN_Pos (1UL)
#define COMP_INTENCLR_DOWN_Msk (0x1UL << COMP_INTENCLR_DOWN_Pos)
#define COMP_INTENCLR_DOWN_Disabled (0UL)
#define COMP_INTENCLR_DOWN_Enabled (1UL)
#define COMP_INTENCLR_DOWN_Clear (1UL)


#define COMP_INTENCLR_READY_Pos (0UL)
#define COMP_INTENCLR_READY_Msk (0x1UL << COMP_INTENCLR_READY_Pos)
#define COMP_INTENCLR_READY_Disabled (0UL)
#define COMP_INTENCLR_READY_Enabled (1UL)
#define COMP_INTENCLR_READY_Clear (1UL)





#define COMP_RESULT_RESULT_Pos (0UL)
#define COMP_RESULT_RESULT_Msk (0x1UL << COMP_RESULT_RESULT_Pos)
#define COMP_RESULT_RESULT_Below (0UL)
#define COMP_RESULT_RESULT_Above (1UL)





#define COMP_ENABLE_ENABLE_Pos (0UL)
#define COMP_ENABLE_ENABLE_Msk (0x3UL << COMP_ENABLE_ENABLE_Pos)
#define COMP_ENABLE_ENABLE_Disabled (0UL)
#define COMP_ENABLE_ENABLE_Enabled (2UL)





#define COMP_PSEL_PSEL_Pos (0UL)
#define COMP_PSEL_PSEL_Msk (0x7UL << COMP_PSEL_PSEL_Pos)
#define COMP_PSEL_PSEL_AnalogInput0 (0UL)
#define COMP_PSEL_PSEL_AnalogInput1 (1UL)
#define COMP_PSEL_PSEL_AnalogInput2 (2UL)
#define COMP_PSEL_PSEL_AnalogInput3 (3UL)
#define COMP_PSEL_PSEL_AnalogInput4 (4UL)
#define COMP_PSEL_PSEL_AnalogInput5 (5UL)
#define COMP_PSEL_PSEL_AnalogInput6 (6UL)
#define COMP_PSEL_PSEL_AnalogInput7 (7UL)





#define COMP_REFSEL_REFSEL_Pos (0UL)
#define COMP_REFSEL_REFSEL_Msk (0x7UL << COMP_REFSEL_REFSEL_Pos)
#define COMP_REFSEL_REFSEL_Int1V2 (0UL)
#define COMP_REFSEL_REFSEL_Int1V8 (1UL)
#define COMP_REFSEL_REFSEL_Int2V4 (2UL)
#define COMP_REFSEL_REFSEL_VDD (4UL)
#define COMP_REFSEL_REFSEL_ARef (5UL)





#define COMP_EXTREFSEL_EXTREFSEL_Pos (0UL)
#define COMP_EXTREFSEL_EXTREFSEL_Msk (0x7UL << COMP_EXTREFSEL_EXTREFSEL_Pos)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (1UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference2 (2UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference3 (3UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference4 (4UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference5 (5UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference6 (6UL)
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference7 (7UL)





#define COMP_TH_THUP_Pos (8UL)
#define COMP_TH_THUP_Msk (0x3FUL << COMP_TH_THUP_Pos)


#define COMP_TH_THDOWN_Pos (0UL)
#define COMP_TH_THDOWN_Msk (0x3FUL << COMP_TH_THDOWN_Pos)





#define COMP_MODE_MAIN_Pos (8UL)
#define COMP_MODE_MAIN_Msk (0x1UL << COMP_MODE_MAIN_Pos)
#define COMP_MODE_MAIN_SE (0UL)
#define COMP_MODE_MAIN_Diff (1UL)


#define COMP_MODE_SP_Pos (0UL)
#define COMP_MODE_SP_Msk (0x3UL << COMP_MODE_SP_Pos)
#define COMP_MODE_SP_Low (0UL)
#define COMP_MODE_SP_Normal (1UL)
#define COMP_MODE_SP_High (2UL)





#define COMP_HYST_HYST_Pos (0UL)
#define COMP_HYST_HYST_Msk (0x1UL << COMP_HYST_HYST_Pos)
#define COMP_HYST_HYST_NoHyst (0UL)
#define COMP_HYST_HYST_Hyst50mV (1UL)
# 1116 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define CRYPTOCELL_ENABLE_ENABLE_Pos (0UL)
#define CRYPTOCELL_ENABLE_ENABLE_Msk (0x1UL << CRYPTOCELL_ENABLE_ENABLE_Pos)
#define CRYPTOCELL_ENABLE_ENABLE_Disabled (0UL)
#define CRYPTOCELL_ENABLE_ENABLE_Enabled (1UL)
# 1129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Pos (0UL)
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Msk (0x1UL << ECB_TASKS_STARTECB_TASKS_STARTECB_Pos)
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Trigger (1UL)





#define ECB_TASKS_STOPECB_TASKS_STOPECB_Pos (0UL)
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Msk (0x1UL << ECB_TASKS_STOPECB_TASKS_STOPECB_Pos)
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Trigger (1UL)





#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos (0UL)
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Msk (0x1UL << ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos)
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_NotGenerated (0UL)
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Generated (1UL)





#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos (0UL)
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Msk (0x1UL << ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos)
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_NotGenerated (0UL)
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Generated (1UL)





#define ECB_INTENSET_ERRORECB_Pos (1UL)
#define ECB_INTENSET_ERRORECB_Msk (0x1UL << ECB_INTENSET_ERRORECB_Pos)
#define ECB_INTENSET_ERRORECB_Disabled (0UL)
#define ECB_INTENSET_ERRORECB_Enabled (1UL)
#define ECB_INTENSET_ERRORECB_Set (1UL)


#define ECB_INTENSET_ENDECB_Pos (0UL)
#define ECB_INTENSET_ENDECB_Msk (0x1UL << ECB_INTENSET_ENDECB_Pos)
#define ECB_INTENSET_ENDECB_Disabled (0UL)
#define ECB_INTENSET_ENDECB_Enabled (1UL)
#define ECB_INTENSET_ENDECB_Set (1UL)





#define ECB_INTENCLR_ERRORECB_Pos (1UL)
#define ECB_INTENCLR_ERRORECB_Msk (0x1UL << ECB_INTENCLR_ERRORECB_Pos)
#define ECB_INTENCLR_ERRORECB_Disabled (0UL)
#define ECB_INTENCLR_ERRORECB_Enabled (1UL)
#define ECB_INTENCLR_ERRORECB_Clear (1UL)


#define ECB_INTENCLR_ENDECB_Pos (0UL)
#define ECB_INTENCLR_ENDECB_Msk (0x1UL << ECB_INTENCLR_ENDECB_Pos)
#define ECB_INTENCLR_ENDECB_Disabled (0UL)
#define ECB_INTENCLR_ENDECB_Enabled (1UL)
#define ECB_INTENCLR_ENDECB_Clear (1UL)





#define ECB_ECBDATAPTR_ECBDATAPTR_Pos (0UL)
#define ECB_ECBDATAPTR_ECBDATAPTR_Msk (0xFFFFFFFFUL << ECB_ECBDATAPTR_ECBDATAPTR_Pos)
# 1208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Pos (0UL)
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Msk (0x1UL << EGU_TASKS_TRIGGER_TASKS_TRIGGER_Pos)
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Trigger (1UL)





#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Pos (0UL)
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Msk (0x1UL << EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Pos)
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_NotGenerated (0UL)
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Generated (1UL)





#define EGU_INTEN_TRIGGERED15_Pos (15UL)
#define EGU_INTEN_TRIGGERED15_Msk (0x1UL << EGU_INTEN_TRIGGERED15_Pos)
#define EGU_INTEN_TRIGGERED15_Disabled (0UL)
#define EGU_INTEN_TRIGGERED15_Enabled (1UL)


#define EGU_INTEN_TRIGGERED14_Pos (14UL)
#define EGU_INTEN_TRIGGERED14_Msk (0x1UL << EGU_INTEN_TRIGGERED14_Pos)
#define EGU_INTEN_TRIGGERED14_Disabled (0UL)
#define EGU_INTEN_TRIGGERED14_Enabled (1UL)


#define EGU_INTEN_TRIGGERED13_Pos (13UL)
#define EGU_INTEN_TRIGGERED13_Msk (0x1UL << EGU_INTEN_TRIGGERED13_Pos)
#define EGU_INTEN_TRIGGERED13_Disabled (0UL)
#define EGU_INTEN_TRIGGERED13_Enabled (1UL)


#define EGU_INTEN_TRIGGERED12_Pos (12UL)
#define EGU_INTEN_TRIGGERED12_Msk (0x1UL << EGU_INTEN_TRIGGERED12_Pos)
#define EGU_INTEN_TRIGGERED12_Disabled (0UL)
#define EGU_INTEN_TRIGGERED12_Enabled (1UL)


#define EGU_INTEN_TRIGGERED11_Pos (11UL)
#define EGU_INTEN_TRIGGERED11_Msk (0x1UL << EGU_INTEN_TRIGGERED11_Pos)
#define EGU_INTEN_TRIGGERED11_Disabled (0UL)
#define EGU_INTEN_TRIGGERED11_Enabled (1UL)


#define EGU_INTEN_TRIGGERED10_Pos (10UL)
#define EGU_INTEN_TRIGGERED10_Msk (0x1UL << EGU_INTEN_TRIGGERED10_Pos)
#define EGU_INTEN_TRIGGERED10_Disabled (0UL)
#define EGU_INTEN_TRIGGERED10_Enabled (1UL)


#define EGU_INTEN_TRIGGERED9_Pos (9UL)
#define EGU_INTEN_TRIGGERED9_Msk (0x1UL << EGU_INTEN_TRIGGERED9_Pos)
#define EGU_INTEN_TRIGGERED9_Disabled (0UL)
#define EGU_INTEN_TRIGGERED9_Enabled (1UL)


#define EGU_INTEN_TRIGGERED8_Pos (8UL)
#define EGU_INTEN_TRIGGERED8_Msk (0x1UL << EGU_INTEN_TRIGGERED8_Pos)
#define EGU_INTEN_TRIGGERED8_Disabled (0UL)
#define EGU_INTEN_TRIGGERED8_Enabled (1UL)


#define EGU_INTEN_TRIGGERED7_Pos (7UL)
#define EGU_INTEN_TRIGGERED7_Msk (0x1UL << EGU_INTEN_TRIGGERED7_Pos)
#define EGU_INTEN_TRIGGERED7_Disabled (0UL)
#define EGU_INTEN_TRIGGERED7_Enabled (1UL)


#define EGU_INTEN_TRIGGERED6_Pos (6UL)
#define EGU_INTEN_TRIGGERED6_Msk (0x1UL << EGU_INTEN_TRIGGERED6_Pos)
#define EGU_INTEN_TRIGGERED6_Disabled (0UL)
#define EGU_INTEN_TRIGGERED6_Enabled (1UL)


#define EGU_INTEN_TRIGGERED5_Pos (5UL)
#define EGU_INTEN_TRIGGERED5_Msk (0x1UL << EGU_INTEN_TRIGGERED5_Pos)
#define EGU_INTEN_TRIGGERED5_Disabled (0UL)
#define EGU_INTEN_TRIGGERED5_Enabled (1UL)


#define EGU_INTEN_TRIGGERED4_Pos (4UL)
#define EGU_INTEN_TRIGGERED4_Msk (0x1UL << EGU_INTEN_TRIGGERED4_Pos)
#define EGU_INTEN_TRIGGERED4_Disabled (0UL)
#define EGU_INTEN_TRIGGERED4_Enabled (1UL)


#define EGU_INTEN_TRIGGERED3_Pos (3UL)
#define EGU_INTEN_TRIGGERED3_Msk (0x1UL << EGU_INTEN_TRIGGERED3_Pos)
#define EGU_INTEN_TRIGGERED3_Disabled (0UL)
#define EGU_INTEN_TRIGGERED3_Enabled (1UL)


#define EGU_INTEN_TRIGGERED2_Pos (2UL)
#define EGU_INTEN_TRIGGERED2_Msk (0x1UL << EGU_INTEN_TRIGGERED2_Pos)
#define EGU_INTEN_TRIGGERED2_Disabled (0UL)
#define EGU_INTEN_TRIGGERED2_Enabled (1UL)


#define EGU_INTEN_TRIGGERED1_Pos (1UL)
#define EGU_INTEN_TRIGGERED1_Msk (0x1UL << EGU_INTEN_TRIGGERED1_Pos)
#define EGU_INTEN_TRIGGERED1_Disabled (0UL)
#define EGU_INTEN_TRIGGERED1_Enabled (1UL)


#define EGU_INTEN_TRIGGERED0_Pos (0UL)
#define EGU_INTEN_TRIGGERED0_Msk (0x1UL << EGU_INTEN_TRIGGERED0_Pos)
#define EGU_INTEN_TRIGGERED0_Disabled (0UL)
#define EGU_INTEN_TRIGGERED0_Enabled (1UL)





#define EGU_INTENSET_TRIGGERED15_Pos (15UL)
#define EGU_INTENSET_TRIGGERED15_Msk (0x1UL << EGU_INTENSET_TRIGGERED15_Pos)
#define EGU_INTENSET_TRIGGERED15_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED15_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED15_Set (1UL)


#define EGU_INTENSET_TRIGGERED14_Pos (14UL)
#define EGU_INTENSET_TRIGGERED14_Msk (0x1UL << EGU_INTENSET_TRIGGERED14_Pos)
#define EGU_INTENSET_TRIGGERED14_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED14_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED14_Set (1UL)


#define EGU_INTENSET_TRIGGERED13_Pos (13UL)
#define EGU_INTENSET_TRIGGERED13_Msk (0x1UL << EGU_INTENSET_TRIGGERED13_Pos)
#define EGU_INTENSET_TRIGGERED13_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED13_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED13_Set (1UL)


#define EGU_INTENSET_TRIGGERED12_Pos (12UL)
#define EGU_INTENSET_TRIGGERED12_Msk (0x1UL << EGU_INTENSET_TRIGGERED12_Pos)
#define EGU_INTENSET_TRIGGERED12_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED12_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED12_Set (1UL)


#define EGU_INTENSET_TRIGGERED11_Pos (11UL)
#define EGU_INTENSET_TRIGGERED11_Msk (0x1UL << EGU_INTENSET_TRIGGERED11_Pos)
#define EGU_INTENSET_TRIGGERED11_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED11_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED11_Set (1UL)


#define EGU_INTENSET_TRIGGERED10_Pos (10UL)
#define EGU_INTENSET_TRIGGERED10_Msk (0x1UL << EGU_INTENSET_TRIGGERED10_Pos)
#define EGU_INTENSET_TRIGGERED10_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED10_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED10_Set (1UL)


#define EGU_INTENSET_TRIGGERED9_Pos (9UL)
#define EGU_INTENSET_TRIGGERED9_Msk (0x1UL << EGU_INTENSET_TRIGGERED9_Pos)
#define EGU_INTENSET_TRIGGERED9_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED9_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED9_Set (1UL)


#define EGU_INTENSET_TRIGGERED8_Pos (8UL)
#define EGU_INTENSET_TRIGGERED8_Msk (0x1UL << EGU_INTENSET_TRIGGERED8_Pos)
#define EGU_INTENSET_TRIGGERED8_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED8_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED8_Set (1UL)


#define EGU_INTENSET_TRIGGERED7_Pos (7UL)
#define EGU_INTENSET_TRIGGERED7_Msk (0x1UL << EGU_INTENSET_TRIGGERED7_Pos)
#define EGU_INTENSET_TRIGGERED7_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED7_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED7_Set (1UL)


#define EGU_INTENSET_TRIGGERED6_Pos (6UL)
#define EGU_INTENSET_TRIGGERED6_Msk (0x1UL << EGU_INTENSET_TRIGGERED6_Pos)
#define EGU_INTENSET_TRIGGERED6_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED6_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED6_Set (1UL)


#define EGU_INTENSET_TRIGGERED5_Pos (5UL)
#define EGU_INTENSET_TRIGGERED5_Msk (0x1UL << EGU_INTENSET_TRIGGERED5_Pos)
#define EGU_INTENSET_TRIGGERED5_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED5_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED5_Set (1UL)


#define EGU_INTENSET_TRIGGERED4_Pos (4UL)
#define EGU_INTENSET_TRIGGERED4_Msk (0x1UL << EGU_INTENSET_TRIGGERED4_Pos)
#define EGU_INTENSET_TRIGGERED4_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED4_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED4_Set (1UL)


#define EGU_INTENSET_TRIGGERED3_Pos (3UL)
#define EGU_INTENSET_TRIGGERED3_Msk (0x1UL << EGU_INTENSET_TRIGGERED3_Pos)
#define EGU_INTENSET_TRIGGERED3_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED3_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED3_Set (1UL)


#define EGU_INTENSET_TRIGGERED2_Pos (2UL)
#define EGU_INTENSET_TRIGGERED2_Msk (0x1UL << EGU_INTENSET_TRIGGERED2_Pos)
#define EGU_INTENSET_TRIGGERED2_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED2_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED2_Set (1UL)


#define EGU_INTENSET_TRIGGERED1_Pos (1UL)
#define EGU_INTENSET_TRIGGERED1_Msk (0x1UL << EGU_INTENSET_TRIGGERED1_Pos)
#define EGU_INTENSET_TRIGGERED1_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED1_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED1_Set (1UL)


#define EGU_INTENSET_TRIGGERED0_Pos (0UL)
#define EGU_INTENSET_TRIGGERED0_Msk (0x1UL << EGU_INTENSET_TRIGGERED0_Pos)
#define EGU_INTENSET_TRIGGERED0_Disabled (0UL)
#define EGU_INTENSET_TRIGGERED0_Enabled (1UL)
#define EGU_INTENSET_TRIGGERED0_Set (1UL)





#define EGU_INTENCLR_TRIGGERED15_Pos (15UL)
#define EGU_INTENCLR_TRIGGERED15_Msk (0x1UL << EGU_INTENCLR_TRIGGERED15_Pos)
#define EGU_INTENCLR_TRIGGERED15_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED15_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED15_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED14_Pos (14UL)
#define EGU_INTENCLR_TRIGGERED14_Msk (0x1UL << EGU_INTENCLR_TRIGGERED14_Pos)
#define EGU_INTENCLR_TRIGGERED14_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED14_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED14_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED13_Pos (13UL)
#define EGU_INTENCLR_TRIGGERED13_Msk (0x1UL << EGU_INTENCLR_TRIGGERED13_Pos)
#define EGU_INTENCLR_TRIGGERED13_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED13_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED13_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED12_Pos (12UL)
#define EGU_INTENCLR_TRIGGERED12_Msk (0x1UL << EGU_INTENCLR_TRIGGERED12_Pos)
#define EGU_INTENCLR_TRIGGERED12_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED12_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED12_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED11_Pos (11UL)
#define EGU_INTENCLR_TRIGGERED11_Msk (0x1UL << EGU_INTENCLR_TRIGGERED11_Pos)
#define EGU_INTENCLR_TRIGGERED11_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED11_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED11_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED10_Pos (10UL)
#define EGU_INTENCLR_TRIGGERED10_Msk (0x1UL << EGU_INTENCLR_TRIGGERED10_Pos)
#define EGU_INTENCLR_TRIGGERED10_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED10_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED10_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED9_Pos (9UL)
#define EGU_INTENCLR_TRIGGERED9_Msk (0x1UL << EGU_INTENCLR_TRIGGERED9_Pos)
#define EGU_INTENCLR_TRIGGERED9_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED9_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED9_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED8_Pos (8UL)
#define EGU_INTENCLR_TRIGGERED8_Msk (0x1UL << EGU_INTENCLR_TRIGGERED8_Pos)
#define EGU_INTENCLR_TRIGGERED8_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED8_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED8_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED7_Pos (7UL)
#define EGU_INTENCLR_TRIGGERED7_Msk (0x1UL << EGU_INTENCLR_TRIGGERED7_Pos)
#define EGU_INTENCLR_TRIGGERED7_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED7_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED7_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED6_Pos (6UL)
#define EGU_INTENCLR_TRIGGERED6_Msk (0x1UL << EGU_INTENCLR_TRIGGERED6_Pos)
#define EGU_INTENCLR_TRIGGERED6_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED6_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED6_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED5_Pos (5UL)
#define EGU_INTENCLR_TRIGGERED5_Msk (0x1UL << EGU_INTENCLR_TRIGGERED5_Pos)
#define EGU_INTENCLR_TRIGGERED5_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED5_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED5_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED4_Pos (4UL)
#define EGU_INTENCLR_TRIGGERED4_Msk (0x1UL << EGU_INTENCLR_TRIGGERED4_Pos)
#define EGU_INTENCLR_TRIGGERED4_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED4_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED4_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED3_Pos (3UL)
#define EGU_INTENCLR_TRIGGERED3_Msk (0x1UL << EGU_INTENCLR_TRIGGERED3_Pos)
#define EGU_INTENCLR_TRIGGERED3_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED3_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED3_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED2_Pos (2UL)
#define EGU_INTENCLR_TRIGGERED2_Msk (0x1UL << EGU_INTENCLR_TRIGGERED2_Pos)
#define EGU_INTENCLR_TRIGGERED2_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED2_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED2_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED1_Pos (1UL)
#define EGU_INTENCLR_TRIGGERED1_Msk (0x1UL << EGU_INTENCLR_TRIGGERED1_Pos)
#define EGU_INTENCLR_TRIGGERED1_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED1_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED1_Clear (1UL)


#define EGU_INTENCLR_TRIGGERED0_Pos (0UL)
#define EGU_INTENCLR_TRIGGERED0_Msk (0x1UL << EGU_INTENCLR_TRIGGERED0_Pos)
#define EGU_INTENCLR_TRIGGERED0_Disabled (0UL)
#define EGU_INTENCLR_TRIGGERED0_Enabled (1UL)
#define EGU_INTENCLR_TRIGGERED0_Clear (1UL)
# 1558 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define FICR_CODEPAGESIZE_CODEPAGESIZE_Pos (0UL)
#define FICR_CODEPAGESIZE_CODEPAGESIZE_Msk (0xFFFFFFFFUL << FICR_CODEPAGESIZE_CODEPAGESIZE_Pos)





#define FICR_CODESIZE_CODESIZE_Pos (0UL)
#define FICR_CODESIZE_CODESIZE_Msk (0xFFFFFFFFUL << FICR_CODESIZE_CODESIZE_Pos)





#define FICR_DEVICEID_DEVICEID_Pos (0UL)
#define FICR_DEVICEID_DEVICEID_Msk (0xFFFFFFFFUL << FICR_DEVICEID_DEVICEID_Pos)





#define FICR_ER_ER_Pos (0UL)
#define FICR_ER_ER_Msk (0xFFFFFFFFUL << FICR_ER_ER_Pos)





#define FICR_IR_IR_Pos (0UL)
#define FICR_IR_IR_Msk (0xFFFFFFFFUL << FICR_IR_IR_Pos)





#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Pos (0UL)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Msk (0x1UL << FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Pos)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Public (0UL)
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Random (1UL)





#define FICR_DEVICEADDR_DEVICEADDR_Pos (0UL)
#define FICR_DEVICEADDR_DEVICEADDR_Msk (0xFFFFFFFFUL << FICR_DEVICEADDR_DEVICEADDR_Pos)





#define FICR_INFO_PART_PART_Pos (0UL)
#define FICR_INFO_PART_PART_Msk (0xFFFFFFFFUL << FICR_INFO_PART_PART_Pos)
#define FICR_INFO_PART_PART_N52833 (0x52833UL)
#define FICR_INFO_PART_PART_N52840 (0x52840UL)
#define FICR_INFO_PART_PART_Unspecified (0xFFFFFFFFUL)





#define FICR_INFO_VARIANT_VARIANT_Pos (0UL)
#define FICR_INFO_VARIANT_VARIANT_Msk (0xFFFFFFFFUL << FICR_INFO_VARIANT_VARIANT_Pos)
#define FICR_INFO_VARIANT_VARIANT_AAAA (0x41414141UL)
#define FICR_INFO_VARIANT_VARIANT_AAAB (0x41414142UL)
#define FICR_INFO_VARIANT_VARIANT_AABA (0x41414241UL)
#define FICR_INFO_VARIANT_VARIANT_AABB (0x41414242UL)
#define FICR_INFO_VARIANT_VARIANT_AACA (0x41414341UL)
#define FICR_INFO_VARIANT_VARIANT_BAAA (0x42414141UL)
#define FICR_INFO_VARIANT_VARIANT_CAAA (0x43414141UL)
#define FICR_INFO_VARIANT_VARIANT_Unspecified (0xFFFFFFFFUL)





#define FICR_INFO_PACKAGE_PACKAGE_Pos (0UL)
#define FICR_INFO_PACKAGE_PACKAGE_Msk (0xFFFFFFFFUL << FICR_INFO_PACKAGE_PACKAGE_Pos)
#define FICR_INFO_PACKAGE_PACKAGE_QI (0x2004UL)
#define FICR_INFO_PACKAGE_PACKAGE_CK (0x2005UL)
#define FICR_INFO_PACKAGE_PACKAGE_Unspecified (0xFFFFFFFFUL)





#define FICR_INFO_RAM_RAM_Pos (0UL)
#define FICR_INFO_RAM_RAM_Msk (0xFFFFFFFFUL << FICR_INFO_RAM_RAM_Pos)
#define FICR_INFO_RAM_RAM_K16 (0x10UL)
#define FICR_INFO_RAM_RAM_K32 (0x20UL)
#define FICR_INFO_RAM_RAM_K64 (0x40UL)
#define FICR_INFO_RAM_RAM_K128 (0x80UL)
#define FICR_INFO_RAM_RAM_K256 (0x100UL)
#define FICR_INFO_RAM_RAM_Unspecified (0xFFFFFFFFUL)





#define FICR_INFO_FLASH_FLASH_Pos (0UL)
#define FICR_INFO_FLASH_FLASH_Msk (0xFFFFFFFFUL << FICR_INFO_FLASH_FLASH_Pos)
#define FICR_INFO_FLASH_FLASH_K128 (0x80UL)
#define FICR_INFO_FLASH_FLASH_K256 (0x100UL)
#define FICR_INFO_FLASH_FLASH_K512 (0x200UL)
#define FICR_INFO_FLASH_FLASH_K1024 (0x400UL)
#define FICR_INFO_FLASH_FLASH_K2048 (0x800UL)
#define FICR_INFO_FLASH_FLASH_Unspecified (0xFFFFFFFFUL)





#define FICR_PRODTEST_PRODTEST_Pos (0UL)
#define FICR_PRODTEST_PRODTEST_Msk (0xFFFFFFFFUL << FICR_PRODTEST_PRODTEST_Pos)
#define FICR_PRODTEST_PRODTEST_Done (0xBB42319FUL)
#define FICR_PRODTEST_PRODTEST_NotDone (0xFFFFFFFFUL)





#define FICR_TEMP_A0_A_Pos (0UL)
#define FICR_TEMP_A0_A_Msk (0xFFFUL << FICR_TEMP_A0_A_Pos)





#define FICR_TEMP_A1_A_Pos (0UL)
#define FICR_TEMP_A1_A_Msk (0xFFFUL << FICR_TEMP_A1_A_Pos)





#define FICR_TEMP_A2_A_Pos (0UL)
#define FICR_TEMP_A2_A_Msk (0xFFFUL << FICR_TEMP_A2_A_Pos)





#define FICR_TEMP_A3_A_Pos (0UL)
#define FICR_TEMP_A3_A_Msk (0xFFFUL << FICR_TEMP_A3_A_Pos)





#define FICR_TEMP_A4_A_Pos (0UL)
#define FICR_TEMP_A4_A_Msk (0xFFFUL << FICR_TEMP_A4_A_Pos)





#define FICR_TEMP_A5_A_Pos (0UL)
#define FICR_TEMP_A5_A_Msk (0xFFFUL << FICR_TEMP_A5_A_Pos)





#define FICR_TEMP_B0_B_Pos (0UL)
#define FICR_TEMP_B0_B_Msk (0x3FFFUL << FICR_TEMP_B0_B_Pos)





#define FICR_TEMP_B1_B_Pos (0UL)
#define FICR_TEMP_B1_B_Msk (0x3FFFUL << FICR_TEMP_B1_B_Pos)





#define FICR_TEMP_B2_B_Pos (0UL)
#define FICR_TEMP_B2_B_Msk (0x3FFFUL << FICR_TEMP_B2_B_Pos)





#define FICR_TEMP_B3_B_Pos (0UL)
#define FICR_TEMP_B3_B_Msk (0x3FFFUL << FICR_TEMP_B3_B_Pos)





#define FICR_TEMP_B4_B_Pos (0UL)
#define FICR_TEMP_B4_B_Msk (0x3FFFUL << FICR_TEMP_B4_B_Pos)





#define FICR_TEMP_B5_B_Pos (0UL)
#define FICR_TEMP_B5_B_Msk (0x3FFFUL << FICR_TEMP_B5_B_Pos)





#define FICR_TEMP_T0_T_Pos (0UL)
#define FICR_TEMP_T0_T_Msk (0xFFUL << FICR_TEMP_T0_T_Pos)





#define FICR_TEMP_T1_T_Pos (0UL)
#define FICR_TEMP_T1_T_Msk (0xFFUL << FICR_TEMP_T1_T_Pos)





#define FICR_TEMP_T2_T_Pos (0UL)
#define FICR_TEMP_T2_T_Msk (0xFFUL << FICR_TEMP_T2_T_Pos)





#define FICR_TEMP_T3_T_Pos (0UL)
#define FICR_TEMP_T3_T_Msk (0xFFUL << FICR_TEMP_T3_T_Pos)





#define FICR_TEMP_T4_T_Pos (0UL)
#define FICR_TEMP_T4_T_Msk (0xFFUL << FICR_TEMP_T4_T_Pos)





#define FICR_NFC_TAGHEADER0_UD3_Pos (24UL)
#define FICR_NFC_TAGHEADER0_UD3_Msk (0xFFUL << FICR_NFC_TAGHEADER0_UD3_Pos)


#define FICR_NFC_TAGHEADER0_UD2_Pos (16UL)
#define FICR_NFC_TAGHEADER0_UD2_Msk (0xFFUL << FICR_NFC_TAGHEADER0_UD2_Pos)


#define FICR_NFC_TAGHEADER0_UD1_Pos (8UL)
#define FICR_NFC_TAGHEADER0_UD1_Msk (0xFFUL << FICR_NFC_TAGHEADER0_UD1_Pos)


#define FICR_NFC_TAGHEADER0_MFGID_Pos (0UL)
#define FICR_NFC_TAGHEADER0_MFGID_Msk (0xFFUL << FICR_NFC_TAGHEADER0_MFGID_Pos)





#define FICR_NFC_TAGHEADER1_UD7_Pos (24UL)
#define FICR_NFC_TAGHEADER1_UD7_Msk (0xFFUL << FICR_NFC_TAGHEADER1_UD7_Pos)


#define FICR_NFC_TAGHEADER1_UD6_Pos (16UL)
#define FICR_NFC_TAGHEADER1_UD6_Msk (0xFFUL << FICR_NFC_TAGHEADER1_UD6_Pos)


#define FICR_NFC_TAGHEADER1_UD5_Pos (8UL)
#define FICR_NFC_TAGHEADER1_UD5_Msk (0xFFUL << FICR_NFC_TAGHEADER1_UD5_Pos)


#define FICR_NFC_TAGHEADER1_UD4_Pos (0UL)
#define FICR_NFC_TAGHEADER1_UD4_Msk (0xFFUL << FICR_NFC_TAGHEADER1_UD4_Pos)





#define FICR_NFC_TAGHEADER2_UD11_Pos (24UL)
#define FICR_NFC_TAGHEADER2_UD11_Msk (0xFFUL << FICR_NFC_TAGHEADER2_UD11_Pos)


#define FICR_NFC_TAGHEADER2_UD10_Pos (16UL)
#define FICR_NFC_TAGHEADER2_UD10_Msk (0xFFUL << FICR_NFC_TAGHEADER2_UD10_Pos)


#define FICR_NFC_TAGHEADER2_UD9_Pos (8UL)
#define FICR_NFC_TAGHEADER2_UD9_Msk (0xFFUL << FICR_NFC_TAGHEADER2_UD9_Pos)


#define FICR_NFC_TAGHEADER2_UD8_Pos (0UL)
#define FICR_NFC_TAGHEADER2_UD8_Msk (0xFFUL << FICR_NFC_TAGHEADER2_UD8_Pos)





#define FICR_NFC_TAGHEADER3_UD15_Pos (24UL)
#define FICR_NFC_TAGHEADER3_UD15_Msk (0xFFUL << FICR_NFC_TAGHEADER3_UD15_Pos)


#define FICR_NFC_TAGHEADER3_UD14_Pos (16UL)
#define FICR_NFC_TAGHEADER3_UD14_Msk (0xFFUL << FICR_NFC_TAGHEADER3_UD14_Pos)


#define FICR_NFC_TAGHEADER3_UD13_Pos (8UL)
#define FICR_NFC_TAGHEADER3_UD13_Msk (0xFFUL << FICR_NFC_TAGHEADER3_UD13_Pos)


#define FICR_NFC_TAGHEADER3_UD12_Pos (0UL)
#define FICR_NFC_TAGHEADER3_UD12_Msk (0xFFUL << FICR_NFC_TAGHEADER3_UD12_Pos)





#define FICR_TRNG90B_BYTES_BYTES_Pos (0UL)
#define FICR_TRNG90B_BYTES_BYTES_Msk (0xFFFFFFFFUL << FICR_TRNG90B_BYTES_BYTES_Pos)





#define FICR_TRNG90B_RCCUTOFF_RCCUTOFF_Pos (0UL)
#define FICR_TRNG90B_RCCUTOFF_RCCUTOFF_Msk (0xFFFFFFFFUL << FICR_TRNG90B_RCCUTOFF_RCCUTOFF_Pos)





#define FICR_TRNG90B_APCUTOFF_APCUTOFF_Pos (0UL)
#define FICR_TRNG90B_APCUTOFF_APCUTOFF_Msk (0xFFFFFFFFUL << FICR_TRNG90B_APCUTOFF_APCUTOFF_Pos)





#define FICR_TRNG90B_STARTUP_STARTUP_Pos (0UL)
#define FICR_TRNG90B_STARTUP_STARTUP_Msk (0xFFFFFFFFUL << FICR_TRNG90B_STARTUP_STARTUP_Pos)





#define FICR_TRNG90B_ROSC1_ROSC1_Pos (0UL)
#define FICR_TRNG90B_ROSC1_ROSC1_Msk (0xFFFFFFFFUL << FICR_TRNG90B_ROSC1_ROSC1_Pos)





#define FICR_TRNG90B_ROSC2_ROSC2_Pos (0UL)
#define FICR_TRNG90B_ROSC2_ROSC2_Msk (0xFFFFFFFFUL << FICR_TRNG90B_ROSC2_ROSC2_Pos)





#define FICR_TRNG90B_ROSC3_ROSC3_Pos (0UL)
#define FICR_TRNG90B_ROSC3_ROSC3_Msk (0xFFFFFFFFUL << FICR_TRNG90B_ROSC3_ROSC3_Pos)





#define FICR_TRNG90B_ROSC4_ROSC4_Pos (0UL)
#define FICR_TRNG90B_ROSC4_ROSC4_Msk (0xFFFFFFFFUL << FICR_TRNG90B_ROSC4_ROSC4_Pos)
# 1934 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define GPIOTE_TASKS_OUT_TASKS_OUT_Pos (0UL)
#define GPIOTE_TASKS_OUT_TASKS_OUT_Msk (0x1UL << GPIOTE_TASKS_OUT_TASKS_OUT_Pos)
#define GPIOTE_TASKS_OUT_TASKS_OUT_Trigger (1UL)





#define GPIOTE_TASKS_SET_TASKS_SET_Pos (0UL)
#define GPIOTE_TASKS_SET_TASKS_SET_Msk (0x1UL << GPIOTE_TASKS_SET_TASKS_SET_Pos)
#define GPIOTE_TASKS_SET_TASKS_SET_Trigger (1UL)





#define GPIOTE_TASKS_CLR_TASKS_CLR_Pos (0UL)
#define GPIOTE_TASKS_CLR_TASKS_CLR_Msk (0x1UL << GPIOTE_TASKS_CLR_TASKS_CLR_Pos)
#define GPIOTE_TASKS_CLR_TASKS_CLR_Trigger (1UL)





#define GPIOTE_EVENTS_IN_EVENTS_IN_Pos (0UL)
#define GPIOTE_EVENTS_IN_EVENTS_IN_Msk (0x1UL << GPIOTE_EVENTS_IN_EVENTS_IN_Pos)
#define GPIOTE_EVENTS_IN_EVENTS_IN_NotGenerated (0UL)
#define GPIOTE_EVENTS_IN_EVENTS_IN_Generated (1UL)





#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos (0UL)
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Msk (0x1UL << GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos)
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_NotGenerated (0UL)
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Generated (1UL)





#define GPIOTE_INTENSET_PORT_Pos (31UL)
#define GPIOTE_INTENSET_PORT_Msk (0x1UL << GPIOTE_INTENSET_PORT_Pos)
#define GPIOTE_INTENSET_PORT_Disabled (0UL)
#define GPIOTE_INTENSET_PORT_Enabled (1UL)
#define GPIOTE_INTENSET_PORT_Set (1UL)


#define GPIOTE_INTENSET_IN7_Pos (7UL)
#define GPIOTE_INTENSET_IN7_Msk (0x1UL << GPIOTE_INTENSET_IN7_Pos)
#define GPIOTE_INTENSET_IN7_Disabled (0UL)
#define GPIOTE_INTENSET_IN7_Enabled (1UL)
#define GPIOTE_INTENSET_IN7_Set (1UL)


#define GPIOTE_INTENSET_IN6_Pos (6UL)
#define GPIOTE_INTENSET_IN6_Msk (0x1UL << GPIOTE_INTENSET_IN6_Pos)
#define GPIOTE_INTENSET_IN6_Disabled (0UL)
#define GPIOTE_INTENSET_IN6_Enabled (1UL)
#define GPIOTE_INTENSET_IN6_Set (1UL)


#define GPIOTE_INTENSET_IN5_Pos (5UL)
#define GPIOTE_INTENSET_IN5_Msk (0x1UL << GPIOTE_INTENSET_IN5_Pos)
#define GPIOTE_INTENSET_IN5_Disabled (0UL)
#define GPIOTE_INTENSET_IN5_Enabled (1UL)
#define GPIOTE_INTENSET_IN5_Set (1UL)


#define GPIOTE_INTENSET_IN4_Pos (4UL)
#define GPIOTE_INTENSET_IN4_Msk (0x1UL << GPIOTE_INTENSET_IN4_Pos)
#define GPIOTE_INTENSET_IN4_Disabled (0UL)
#define GPIOTE_INTENSET_IN4_Enabled (1UL)
#define GPIOTE_INTENSET_IN4_Set (1UL)


#define GPIOTE_INTENSET_IN3_Pos (3UL)
#define GPIOTE_INTENSET_IN3_Msk (0x1UL << GPIOTE_INTENSET_IN3_Pos)
#define GPIOTE_INTENSET_IN3_Disabled (0UL)
#define GPIOTE_INTENSET_IN3_Enabled (1UL)
#define GPIOTE_INTENSET_IN3_Set (1UL)


#define GPIOTE_INTENSET_IN2_Pos (2UL)
#define GPIOTE_INTENSET_IN2_Msk (0x1UL << GPIOTE_INTENSET_IN2_Pos)
#define GPIOTE_INTENSET_IN2_Disabled (0UL)
#define GPIOTE_INTENSET_IN2_Enabled (1UL)
#define GPIOTE_INTENSET_IN2_Set (1UL)


#define GPIOTE_INTENSET_IN1_Pos (1UL)
#define GPIOTE_INTENSET_IN1_Msk (0x1UL << GPIOTE_INTENSET_IN1_Pos)
#define GPIOTE_INTENSET_IN1_Disabled (0UL)
#define GPIOTE_INTENSET_IN1_Enabled (1UL)
#define GPIOTE_INTENSET_IN1_Set (1UL)


#define GPIOTE_INTENSET_IN0_Pos (0UL)
#define GPIOTE_INTENSET_IN0_Msk (0x1UL << GPIOTE_INTENSET_IN0_Pos)
#define GPIOTE_INTENSET_IN0_Disabled (0UL)
#define GPIOTE_INTENSET_IN0_Enabled (1UL)
#define GPIOTE_INTENSET_IN0_Set (1UL)





#define GPIOTE_INTENCLR_PORT_Pos (31UL)
#define GPIOTE_INTENCLR_PORT_Msk (0x1UL << GPIOTE_INTENCLR_PORT_Pos)
#define GPIOTE_INTENCLR_PORT_Disabled (0UL)
#define GPIOTE_INTENCLR_PORT_Enabled (1UL)
#define GPIOTE_INTENCLR_PORT_Clear (1UL)


#define GPIOTE_INTENCLR_IN7_Pos (7UL)
#define GPIOTE_INTENCLR_IN7_Msk (0x1UL << GPIOTE_INTENCLR_IN7_Pos)
#define GPIOTE_INTENCLR_IN7_Disabled (0UL)
#define GPIOTE_INTENCLR_IN7_Enabled (1UL)
#define GPIOTE_INTENCLR_IN7_Clear (1UL)


#define GPIOTE_INTENCLR_IN6_Pos (6UL)
#define GPIOTE_INTENCLR_IN6_Msk (0x1UL << GPIOTE_INTENCLR_IN6_Pos)
#define GPIOTE_INTENCLR_IN6_Disabled (0UL)
#define GPIOTE_INTENCLR_IN6_Enabled (1UL)
#define GPIOTE_INTENCLR_IN6_Clear (1UL)


#define GPIOTE_INTENCLR_IN5_Pos (5UL)
#define GPIOTE_INTENCLR_IN5_Msk (0x1UL << GPIOTE_INTENCLR_IN5_Pos)
#define GPIOTE_INTENCLR_IN5_Disabled (0UL)
#define GPIOTE_INTENCLR_IN5_Enabled (1UL)
#define GPIOTE_INTENCLR_IN5_Clear (1UL)


#define GPIOTE_INTENCLR_IN4_Pos (4UL)
#define GPIOTE_INTENCLR_IN4_Msk (0x1UL << GPIOTE_INTENCLR_IN4_Pos)
#define GPIOTE_INTENCLR_IN4_Disabled (0UL)
#define GPIOTE_INTENCLR_IN4_Enabled (1UL)
#define GPIOTE_INTENCLR_IN4_Clear (1UL)


#define GPIOTE_INTENCLR_IN3_Pos (3UL)
#define GPIOTE_INTENCLR_IN3_Msk (0x1UL << GPIOTE_INTENCLR_IN3_Pos)
#define GPIOTE_INTENCLR_IN3_Disabled (0UL)
#define GPIOTE_INTENCLR_IN3_Enabled (1UL)
#define GPIOTE_INTENCLR_IN3_Clear (1UL)


#define GPIOTE_INTENCLR_IN2_Pos (2UL)
#define GPIOTE_INTENCLR_IN2_Msk (0x1UL << GPIOTE_INTENCLR_IN2_Pos)
#define GPIOTE_INTENCLR_IN2_Disabled (0UL)
#define GPIOTE_INTENCLR_IN2_Enabled (1UL)
#define GPIOTE_INTENCLR_IN2_Clear (1UL)


#define GPIOTE_INTENCLR_IN1_Pos (1UL)
#define GPIOTE_INTENCLR_IN1_Msk (0x1UL << GPIOTE_INTENCLR_IN1_Pos)
#define GPIOTE_INTENCLR_IN1_Disabled (0UL)
#define GPIOTE_INTENCLR_IN1_Enabled (1UL)
#define GPIOTE_INTENCLR_IN1_Clear (1UL)


#define GPIOTE_INTENCLR_IN0_Pos (0UL)
#define GPIOTE_INTENCLR_IN0_Msk (0x1UL << GPIOTE_INTENCLR_IN0_Pos)
#define GPIOTE_INTENCLR_IN0_Disabled (0UL)
#define GPIOTE_INTENCLR_IN0_Enabled (1UL)
#define GPIOTE_INTENCLR_IN0_Clear (1UL)





#define GPIOTE_CONFIG_OUTINIT_Pos (20UL)
#define GPIOTE_CONFIG_OUTINIT_Msk (0x1UL << GPIOTE_CONFIG_OUTINIT_Pos)
#define GPIOTE_CONFIG_OUTINIT_Low (0UL)
#define GPIOTE_CONFIG_OUTINIT_High (1UL)


#define GPIOTE_CONFIG_POLARITY_Pos (16UL)
#define GPIOTE_CONFIG_POLARITY_Msk (0x3UL << GPIOTE_CONFIG_POLARITY_Pos)
#define GPIOTE_CONFIG_POLARITY_None (0UL)
#define GPIOTE_CONFIG_POLARITY_LoToHi (1UL)
#define GPIOTE_CONFIG_POLARITY_HiToLo (2UL)
#define GPIOTE_CONFIG_POLARITY_Toggle (3UL)


#define GPIOTE_CONFIG_PORT_Pos (13UL)
#define GPIOTE_CONFIG_PORT_Msk (0x1UL << GPIOTE_CONFIG_PORT_Pos)


#define GPIOTE_CONFIG_PSEL_Pos (8UL)
#define GPIOTE_CONFIG_PSEL_Msk (0x1FUL << GPIOTE_CONFIG_PSEL_Pos)


#define GPIOTE_CONFIG_MODE_Pos (0UL)
#define GPIOTE_CONFIG_MODE_Msk (0x3UL << GPIOTE_CONFIG_MODE_Pos)
#define GPIOTE_CONFIG_MODE_Disabled (0UL)
#define GPIOTE_CONFIG_MODE_Event (1UL)
#define GPIOTE_CONFIG_MODE_Task (3UL)
# 2144 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define I2S_TASKS_START_TASKS_START_Pos (0UL)
#define I2S_TASKS_START_TASKS_START_Msk (0x1UL << I2S_TASKS_START_TASKS_START_Pos)
#define I2S_TASKS_START_TASKS_START_Trigger (1UL)





#define I2S_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define I2S_TASKS_STOP_TASKS_STOP_Msk (0x1UL << I2S_TASKS_STOP_TASKS_STOP_Pos)
#define I2S_TASKS_STOP_TASKS_STOP_Trigger (1UL)







#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Pos (0UL)
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Msk (0x1UL << I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Pos)
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_NotGenerated (0UL)
#define I2S_EVENTS_RXPTRUPD_EVENTS_RXPTRUPD_Generated (1UL)





#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << I2S_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define I2S_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)







#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Pos (0UL)
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Msk (0x1UL << I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Pos)
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_NotGenerated (0UL)
#define I2S_EVENTS_TXPTRUPD_EVENTS_TXPTRUPD_Generated (1UL)





#define I2S_INTEN_TXPTRUPD_Pos (5UL)
#define I2S_INTEN_TXPTRUPD_Msk (0x1UL << I2S_INTEN_TXPTRUPD_Pos)
#define I2S_INTEN_TXPTRUPD_Disabled (0UL)
#define I2S_INTEN_TXPTRUPD_Enabled (1UL)


#define I2S_INTEN_STOPPED_Pos (2UL)
#define I2S_INTEN_STOPPED_Msk (0x1UL << I2S_INTEN_STOPPED_Pos)
#define I2S_INTEN_STOPPED_Disabled (0UL)
#define I2S_INTEN_STOPPED_Enabled (1UL)


#define I2S_INTEN_RXPTRUPD_Pos (1UL)
#define I2S_INTEN_RXPTRUPD_Msk (0x1UL << I2S_INTEN_RXPTRUPD_Pos)
#define I2S_INTEN_RXPTRUPD_Disabled (0UL)
#define I2S_INTEN_RXPTRUPD_Enabled (1UL)





#define I2S_INTENSET_TXPTRUPD_Pos (5UL)
#define I2S_INTENSET_TXPTRUPD_Msk (0x1UL << I2S_INTENSET_TXPTRUPD_Pos)
#define I2S_INTENSET_TXPTRUPD_Disabled (0UL)
#define I2S_INTENSET_TXPTRUPD_Enabled (1UL)
#define I2S_INTENSET_TXPTRUPD_Set (1UL)


#define I2S_INTENSET_STOPPED_Pos (2UL)
#define I2S_INTENSET_STOPPED_Msk (0x1UL << I2S_INTENSET_STOPPED_Pos)
#define I2S_INTENSET_STOPPED_Disabled (0UL)
#define I2S_INTENSET_STOPPED_Enabled (1UL)
#define I2S_INTENSET_STOPPED_Set (1UL)


#define I2S_INTENSET_RXPTRUPD_Pos (1UL)
#define I2S_INTENSET_RXPTRUPD_Msk (0x1UL << I2S_INTENSET_RXPTRUPD_Pos)
#define I2S_INTENSET_RXPTRUPD_Disabled (0UL)
#define I2S_INTENSET_RXPTRUPD_Enabled (1UL)
#define I2S_INTENSET_RXPTRUPD_Set (1UL)





#define I2S_INTENCLR_TXPTRUPD_Pos (5UL)
#define I2S_INTENCLR_TXPTRUPD_Msk (0x1UL << I2S_INTENCLR_TXPTRUPD_Pos)
#define I2S_INTENCLR_TXPTRUPD_Disabled (0UL)
#define I2S_INTENCLR_TXPTRUPD_Enabled (1UL)
#define I2S_INTENCLR_TXPTRUPD_Clear (1UL)


#define I2S_INTENCLR_STOPPED_Pos (2UL)
#define I2S_INTENCLR_STOPPED_Msk (0x1UL << I2S_INTENCLR_STOPPED_Pos)
#define I2S_INTENCLR_STOPPED_Disabled (0UL)
#define I2S_INTENCLR_STOPPED_Enabled (1UL)
#define I2S_INTENCLR_STOPPED_Clear (1UL)


#define I2S_INTENCLR_RXPTRUPD_Pos (1UL)
#define I2S_INTENCLR_RXPTRUPD_Msk (0x1UL << I2S_INTENCLR_RXPTRUPD_Pos)
#define I2S_INTENCLR_RXPTRUPD_Disabled (0UL)
#define I2S_INTENCLR_RXPTRUPD_Enabled (1UL)
#define I2S_INTENCLR_RXPTRUPD_Clear (1UL)





#define I2S_ENABLE_ENABLE_Pos (0UL)
#define I2S_ENABLE_ENABLE_Msk (0x1UL << I2S_ENABLE_ENABLE_Pos)
#define I2S_ENABLE_ENABLE_Disabled (0UL)
#define I2S_ENABLE_ENABLE_Enabled (1UL)





#define I2S_CONFIG_MODE_MODE_Pos (0UL)
#define I2S_CONFIG_MODE_MODE_Msk (0x1UL << I2S_CONFIG_MODE_MODE_Pos)
#define I2S_CONFIG_MODE_MODE_Master (0UL)
#define I2S_CONFIG_MODE_MODE_Slave (1UL)





#define I2S_CONFIG_RXEN_RXEN_Pos (0UL)
#define I2S_CONFIG_RXEN_RXEN_Msk (0x1UL << I2S_CONFIG_RXEN_RXEN_Pos)
#define I2S_CONFIG_RXEN_RXEN_Disabled (0UL)
#define I2S_CONFIG_RXEN_RXEN_Enabled (1UL)





#define I2S_CONFIG_TXEN_TXEN_Pos (0UL)
#define I2S_CONFIG_TXEN_TXEN_Msk (0x1UL << I2S_CONFIG_TXEN_TXEN_Pos)
#define I2S_CONFIG_TXEN_TXEN_Disabled (0UL)
#define I2S_CONFIG_TXEN_TXEN_Enabled (1UL)





#define I2S_CONFIG_MCKEN_MCKEN_Pos (0UL)
#define I2S_CONFIG_MCKEN_MCKEN_Msk (0x1UL << I2S_CONFIG_MCKEN_MCKEN_Pos)
#define I2S_CONFIG_MCKEN_MCKEN_Disabled (0UL)
#define I2S_CONFIG_MCKEN_MCKEN_Enabled (1UL)





#define I2S_CONFIG_MCKFREQ_MCKFREQ_Pos (0UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_Msk (0xFFFFFFFFUL << I2S_CONFIG_MCKFREQ_MCKFREQ_Pos)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV125 (0x020C0000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV63 (0x04100000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV42 (0x06000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV32 (0x08000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV31 (0x08400000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV30 (0x08800000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV23 (0x0B000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV21 (0x0C000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV16 (0x10000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV15 (0x11000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV11 (0x16000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV10 (0x18000000UL)
#define I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV8 (0x20000000UL)





#define I2S_CONFIG_RATIO_RATIO_Pos (0UL)
#define I2S_CONFIG_RATIO_RATIO_Msk (0xFUL << I2S_CONFIG_RATIO_RATIO_Pos)
#define I2S_CONFIG_RATIO_RATIO_32X (0UL)
#define I2S_CONFIG_RATIO_RATIO_48X (1UL)
#define I2S_CONFIG_RATIO_RATIO_64X (2UL)
#define I2S_CONFIG_RATIO_RATIO_96X (3UL)
#define I2S_CONFIG_RATIO_RATIO_128X (4UL)
#define I2S_CONFIG_RATIO_RATIO_192X (5UL)
#define I2S_CONFIG_RATIO_RATIO_256X (6UL)
#define I2S_CONFIG_RATIO_RATIO_384X (7UL)
#define I2S_CONFIG_RATIO_RATIO_512X (8UL)





#define I2S_CONFIG_SWIDTH_SWIDTH_Pos (0UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_Msk (0x3UL << I2S_CONFIG_SWIDTH_SWIDTH_Pos)
#define I2S_CONFIG_SWIDTH_SWIDTH_8Bit (0UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_16Bit (1UL)
#define I2S_CONFIG_SWIDTH_SWIDTH_24Bit (2UL)





#define I2S_CONFIG_ALIGN_ALIGN_Pos (0UL)
#define I2S_CONFIG_ALIGN_ALIGN_Msk (0x1UL << I2S_CONFIG_ALIGN_ALIGN_Pos)
#define I2S_CONFIG_ALIGN_ALIGN_Left (0UL)
#define I2S_CONFIG_ALIGN_ALIGN_Right (1UL)





#define I2S_CONFIG_FORMAT_FORMAT_Pos (0UL)
#define I2S_CONFIG_FORMAT_FORMAT_Msk (0x1UL << I2S_CONFIG_FORMAT_FORMAT_Pos)
#define I2S_CONFIG_FORMAT_FORMAT_I2S (0UL)
#define I2S_CONFIG_FORMAT_FORMAT_Aligned (1UL)





#define I2S_CONFIG_CHANNELS_CHANNELS_Pos (0UL)
#define I2S_CONFIG_CHANNELS_CHANNELS_Msk (0x3UL << I2S_CONFIG_CHANNELS_CHANNELS_Pos)
#define I2S_CONFIG_CHANNELS_CHANNELS_Stereo (0UL)
#define I2S_CONFIG_CHANNELS_CHANNELS_Left (1UL)
#define I2S_CONFIG_CHANNELS_CHANNELS_Right (2UL)





#define I2S_RXD_PTR_PTR_Pos (0UL)
#define I2S_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << I2S_RXD_PTR_PTR_Pos)





#define I2S_TXD_PTR_PTR_Pos (0UL)
#define I2S_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << I2S_TXD_PTR_PTR_Pos)





#define I2S_RXTXD_MAXCNT_MAXCNT_Pos (0UL)
#define I2S_RXTXD_MAXCNT_MAXCNT_Msk (0x3FFFUL << I2S_RXTXD_MAXCNT_MAXCNT_Pos)





#define I2S_PSEL_MCK_CONNECT_Pos (31UL)
#define I2S_PSEL_MCK_CONNECT_Msk (0x1UL << I2S_PSEL_MCK_CONNECT_Pos)
#define I2S_PSEL_MCK_CONNECT_Connected (0UL)
#define I2S_PSEL_MCK_CONNECT_Disconnected (1UL)


#define I2S_PSEL_MCK_PORT_Pos (5UL)
#define I2S_PSEL_MCK_PORT_Msk (0x1UL << I2S_PSEL_MCK_PORT_Pos)


#define I2S_PSEL_MCK_PIN_Pos (0UL)
#define I2S_PSEL_MCK_PIN_Msk (0x1FUL << I2S_PSEL_MCK_PIN_Pos)





#define I2S_PSEL_SCK_CONNECT_Pos (31UL)
#define I2S_PSEL_SCK_CONNECT_Msk (0x1UL << I2S_PSEL_SCK_CONNECT_Pos)
#define I2S_PSEL_SCK_CONNECT_Connected (0UL)
#define I2S_PSEL_SCK_CONNECT_Disconnected (1UL)


#define I2S_PSEL_SCK_PORT_Pos (5UL)
#define I2S_PSEL_SCK_PORT_Msk (0x1UL << I2S_PSEL_SCK_PORT_Pos)


#define I2S_PSEL_SCK_PIN_Pos (0UL)
#define I2S_PSEL_SCK_PIN_Msk (0x1FUL << I2S_PSEL_SCK_PIN_Pos)





#define I2S_PSEL_LRCK_CONNECT_Pos (31UL)
#define I2S_PSEL_LRCK_CONNECT_Msk (0x1UL << I2S_PSEL_LRCK_CONNECT_Pos)
#define I2S_PSEL_LRCK_CONNECT_Connected (0UL)
#define I2S_PSEL_LRCK_CONNECT_Disconnected (1UL)


#define I2S_PSEL_LRCK_PORT_Pos (5UL)
#define I2S_PSEL_LRCK_PORT_Msk (0x1UL << I2S_PSEL_LRCK_PORT_Pos)


#define I2S_PSEL_LRCK_PIN_Pos (0UL)
#define I2S_PSEL_LRCK_PIN_Msk (0x1FUL << I2S_PSEL_LRCK_PIN_Pos)





#define I2S_PSEL_SDIN_CONNECT_Pos (31UL)
#define I2S_PSEL_SDIN_CONNECT_Msk (0x1UL << I2S_PSEL_SDIN_CONNECT_Pos)
#define I2S_PSEL_SDIN_CONNECT_Connected (0UL)
#define I2S_PSEL_SDIN_CONNECT_Disconnected (1UL)


#define I2S_PSEL_SDIN_PORT_Pos (5UL)
#define I2S_PSEL_SDIN_PORT_Msk (0x1UL << I2S_PSEL_SDIN_PORT_Pos)


#define I2S_PSEL_SDIN_PIN_Pos (0UL)
#define I2S_PSEL_SDIN_PIN_Msk (0x1FUL << I2S_PSEL_SDIN_PIN_Pos)





#define I2S_PSEL_SDOUT_CONNECT_Pos (31UL)
#define I2S_PSEL_SDOUT_CONNECT_Msk (0x1UL << I2S_PSEL_SDOUT_CONNECT_Pos)
#define I2S_PSEL_SDOUT_CONNECT_Connected (0UL)
#define I2S_PSEL_SDOUT_CONNECT_Disconnected (1UL)


#define I2S_PSEL_SDOUT_PORT_Pos (5UL)
#define I2S_PSEL_SDOUT_PORT_Msk (0x1UL << I2S_PSEL_SDOUT_PORT_Pos)


#define I2S_PSEL_SDOUT_PIN_Pos (0UL)
#define I2S_PSEL_SDOUT_PIN_Msk (0x1FUL << I2S_PSEL_SDOUT_PIN_Pos)
# 2489 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define LPCOMP_TASKS_START_TASKS_START_Pos (0UL)
#define LPCOMP_TASKS_START_TASKS_START_Msk (0x1UL << LPCOMP_TASKS_START_TASKS_START_Pos)
#define LPCOMP_TASKS_START_TASKS_START_Trigger (1UL)





#define LPCOMP_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define LPCOMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << LPCOMP_TASKS_STOP_TASKS_STOP_Pos)
#define LPCOMP_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL)
#define LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos)
#define LPCOMP_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (1UL)





#define LPCOMP_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define LPCOMP_EVENTS_READY_EVENTS_READY_Msk (0x1UL << LPCOMP_EVENTS_READY_EVENTS_READY_Pos)
#define LPCOMP_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define LPCOMP_EVENTS_READY_EVENTS_READY_Generated (1UL)





#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Pos (0UL)
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Msk (0x1UL << LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Pos)
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_NotGenerated (0UL)
#define LPCOMP_EVENTS_DOWN_EVENTS_DOWN_Generated (1UL)





#define LPCOMP_EVENTS_UP_EVENTS_UP_Pos (0UL)
#define LPCOMP_EVENTS_UP_EVENTS_UP_Msk (0x1UL << LPCOMP_EVENTS_UP_EVENTS_UP_Pos)
#define LPCOMP_EVENTS_UP_EVENTS_UP_NotGenerated (0UL)
#define LPCOMP_EVENTS_UP_EVENTS_UP_Generated (1UL)





#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Pos (0UL)
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Msk (0x1UL << LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Pos)
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_NotGenerated (0UL)
#define LPCOMP_EVENTS_CROSS_EVENTS_CROSS_Generated (1UL)





#define LPCOMP_SHORTS_CROSS_STOP_Pos (4UL)
#define LPCOMP_SHORTS_CROSS_STOP_Msk (0x1UL << LPCOMP_SHORTS_CROSS_STOP_Pos)
#define LPCOMP_SHORTS_CROSS_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_CROSS_STOP_Enabled (1UL)


#define LPCOMP_SHORTS_UP_STOP_Pos (3UL)
#define LPCOMP_SHORTS_UP_STOP_Msk (0x1UL << LPCOMP_SHORTS_UP_STOP_Pos)
#define LPCOMP_SHORTS_UP_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_UP_STOP_Enabled (1UL)


#define LPCOMP_SHORTS_DOWN_STOP_Pos (2UL)
#define LPCOMP_SHORTS_DOWN_STOP_Msk (0x1UL << LPCOMP_SHORTS_DOWN_STOP_Pos)
#define LPCOMP_SHORTS_DOWN_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_DOWN_STOP_Enabled (1UL)


#define LPCOMP_SHORTS_READY_STOP_Pos (1UL)
#define LPCOMP_SHORTS_READY_STOP_Msk (0x1UL << LPCOMP_SHORTS_READY_STOP_Pos)
#define LPCOMP_SHORTS_READY_STOP_Disabled (0UL)
#define LPCOMP_SHORTS_READY_STOP_Enabled (1UL)


#define LPCOMP_SHORTS_READY_SAMPLE_Pos (0UL)
#define LPCOMP_SHORTS_READY_SAMPLE_Msk (0x1UL << LPCOMP_SHORTS_READY_SAMPLE_Pos)
#define LPCOMP_SHORTS_READY_SAMPLE_Disabled (0UL)
#define LPCOMP_SHORTS_READY_SAMPLE_Enabled (1UL)





#define LPCOMP_INTENSET_CROSS_Pos (3UL)
#define LPCOMP_INTENSET_CROSS_Msk (0x1UL << LPCOMP_INTENSET_CROSS_Pos)
#define LPCOMP_INTENSET_CROSS_Disabled (0UL)
#define LPCOMP_INTENSET_CROSS_Enabled (1UL)
#define LPCOMP_INTENSET_CROSS_Set (1UL)


#define LPCOMP_INTENSET_UP_Pos (2UL)
#define LPCOMP_INTENSET_UP_Msk (0x1UL << LPCOMP_INTENSET_UP_Pos)
#define LPCOMP_INTENSET_UP_Disabled (0UL)
#define LPCOMP_INTENSET_UP_Enabled (1UL)
#define LPCOMP_INTENSET_UP_Set (1UL)


#define LPCOMP_INTENSET_DOWN_Pos (1UL)
#define LPCOMP_INTENSET_DOWN_Msk (0x1UL << LPCOMP_INTENSET_DOWN_Pos)
#define LPCOMP_INTENSET_DOWN_Disabled (0UL)
#define LPCOMP_INTENSET_DOWN_Enabled (1UL)
#define LPCOMP_INTENSET_DOWN_Set (1UL)


#define LPCOMP_INTENSET_READY_Pos (0UL)
#define LPCOMP_INTENSET_READY_Msk (0x1UL << LPCOMP_INTENSET_READY_Pos)
#define LPCOMP_INTENSET_READY_Disabled (0UL)
#define LPCOMP_INTENSET_READY_Enabled (1UL)
#define LPCOMP_INTENSET_READY_Set (1UL)





#define LPCOMP_INTENCLR_CROSS_Pos (3UL)
#define LPCOMP_INTENCLR_CROSS_Msk (0x1UL << LPCOMP_INTENCLR_CROSS_Pos)
#define LPCOMP_INTENCLR_CROSS_Disabled (0UL)
#define LPCOMP_INTENCLR_CROSS_Enabled (1UL)
#define LPCOMP_INTENCLR_CROSS_Clear (1UL)


#define LPCOMP_INTENCLR_UP_Pos (2UL)
#define LPCOMP_INTENCLR_UP_Msk (0x1UL << LPCOMP_INTENCLR_UP_Pos)
#define LPCOMP_INTENCLR_UP_Disabled (0UL)
#define LPCOMP_INTENCLR_UP_Enabled (1UL)
#define LPCOMP_INTENCLR_UP_Clear (1UL)


#define LPCOMP_INTENCLR_DOWN_Pos (1UL)
#define LPCOMP_INTENCLR_DOWN_Msk (0x1UL << LPCOMP_INTENCLR_DOWN_Pos)
#define LPCOMP_INTENCLR_DOWN_Disabled (0UL)
#define LPCOMP_INTENCLR_DOWN_Enabled (1UL)
#define LPCOMP_INTENCLR_DOWN_Clear (1UL)


#define LPCOMP_INTENCLR_READY_Pos (0UL)
#define LPCOMP_INTENCLR_READY_Msk (0x1UL << LPCOMP_INTENCLR_READY_Pos)
#define LPCOMP_INTENCLR_READY_Disabled (0UL)
#define LPCOMP_INTENCLR_READY_Enabled (1UL)
#define LPCOMP_INTENCLR_READY_Clear (1UL)





#define LPCOMP_RESULT_RESULT_Pos (0UL)
#define LPCOMP_RESULT_RESULT_Msk (0x1UL << LPCOMP_RESULT_RESULT_Pos)
#define LPCOMP_RESULT_RESULT_Below (0UL)
#define LPCOMP_RESULT_RESULT_Above (1UL)





#define LPCOMP_ENABLE_ENABLE_Pos (0UL)
#define LPCOMP_ENABLE_ENABLE_Msk (0x3UL << LPCOMP_ENABLE_ENABLE_Pos)
#define LPCOMP_ENABLE_ENABLE_Disabled (0UL)
#define LPCOMP_ENABLE_ENABLE_Enabled (1UL)





#define LPCOMP_PSEL_PSEL_Pos (0UL)
#define LPCOMP_PSEL_PSEL_Msk (0x7UL << LPCOMP_PSEL_PSEL_Pos)
#define LPCOMP_PSEL_PSEL_AnalogInput0 (0UL)
#define LPCOMP_PSEL_PSEL_AnalogInput1 (1UL)
#define LPCOMP_PSEL_PSEL_AnalogInput2 (2UL)
#define LPCOMP_PSEL_PSEL_AnalogInput3 (3UL)
#define LPCOMP_PSEL_PSEL_AnalogInput4 (4UL)
#define LPCOMP_PSEL_PSEL_AnalogInput5 (5UL)
#define LPCOMP_PSEL_PSEL_AnalogInput6 (6UL)
#define LPCOMP_PSEL_PSEL_AnalogInput7 (7UL)





#define LPCOMP_REFSEL_REFSEL_Pos (0UL)
#define LPCOMP_REFSEL_REFSEL_Msk (0xFUL << LPCOMP_REFSEL_REFSEL_Pos)
#define LPCOMP_REFSEL_REFSEL_Ref1_8Vdd (0UL)
#define LPCOMP_REFSEL_REFSEL_Ref2_8Vdd (1UL)
#define LPCOMP_REFSEL_REFSEL_Ref3_8Vdd (2UL)
#define LPCOMP_REFSEL_REFSEL_Ref4_8Vdd (3UL)
#define LPCOMP_REFSEL_REFSEL_Ref5_8Vdd (4UL)
#define LPCOMP_REFSEL_REFSEL_Ref6_8Vdd (5UL)
#define LPCOMP_REFSEL_REFSEL_Ref7_8Vdd (6UL)
#define LPCOMP_REFSEL_REFSEL_ARef (7UL)
#define LPCOMP_REFSEL_REFSEL_Ref1_16Vdd (8UL)
#define LPCOMP_REFSEL_REFSEL_Ref3_16Vdd (9UL)
#define LPCOMP_REFSEL_REFSEL_Ref5_16Vdd (10UL)
#define LPCOMP_REFSEL_REFSEL_Ref7_16Vdd (11UL)
#define LPCOMP_REFSEL_REFSEL_Ref9_16Vdd (12UL)
#define LPCOMP_REFSEL_REFSEL_Ref11_16Vdd (13UL)
#define LPCOMP_REFSEL_REFSEL_Ref13_16Vdd (14UL)
#define LPCOMP_REFSEL_REFSEL_Ref15_16Vdd (15UL)





#define LPCOMP_EXTREFSEL_EXTREFSEL_Pos (0UL)
#define LPCOMP_EXTREFSEL_EXTREFSEL_Msk (0x1UL << LPCOMP_EXTREFSEL_EXTREFSEL_Pos)
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0UL)
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (1UL)





#define LPCOMP_ANADETECT_ANADETECT_Pos (0UL)
#define LPCOMP_ANADETECT_ANADETECT_Msk (0x3UL << LPCOMP_ANADETECT_ANADETECT_Pos)
#define LPCOMP_ANADETECT_ANADETECT_Cross (0UL)
#define LPCOMP_ANADETECT_ANADETECT_Up (1UL)
#define LPCOMP_ANADETECT_ANADETECT_Down (2UL)





#define LPCOMP_HYST_HYST_Pos (0UL)
#define LPCOMP_HYST_HYST_Msk (0x1UL << LPCOMP_HYST_HYST_Pos)
#define LPCOMP_HYST_HYST_Disabled (0UL)
#define LPCOMP_HYST_HYST_Enabled (1UL)
# 2732 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define MWU_EVENTS_REGION_WA_WA_Pos (0UL)
#define MWU_EVENTS_REGION_WA_WA_Msk (0x1UL << MWU_EVENTS_REGION_WA_WA_Pos)
#define MWU_EVENTS_REGION_WA_WA_NotGenerated (0UL)
#define MWU_EVENTS_REGION_WA_WA_Generated (1UL)





#define MWU_EVENTS_REGION_RA_RA_Pos (0UL)
#define MWU_EVENTS_REGION_RA_RA_Msk (0x1UL << MWU_EVENTS_REGION_RA_RA_Pos)
#define MWU_EVENTS_REGION_RA_RA_NotGenerated (0UL)
#define MWU_EVENTS_REGION_RA_RA_Generated (1UL)





#define MWU_EVENTS_PREGION_WA_WA_Pos (0UL)
#define MWU_EVENTS_PREGION_WA_WA_Msk (0x1UL << MWU_EVENTS_PREGION_WA_WA_Pos)
#define MWU_EVENTS_PREGION_WA_WA_NotGenerated (0UL)
#define MWU_EVENTS_PREGION_WA_WA_Generated (1UL)





#define MWU_EVENTS_PREGION_RA_RA_Pos (0UL)
#define MWU_EVENTS_PREGION_RA_RA_Msk (0x1UL << MWU_EVENTS_PREGION_RA_RA_Pos)
#define MWU_EVENTS_PREGION_RA_RA_NotGenerated (0UL)
#define MWU_EVENTS_PREGION_RA_RA_Generated (1UL)





#define MWU_INTEN_PREGION1RA_Pos (27UL)
#define MWU_INTEN_PREGION1RA_Msk (0x1UL << MWU_INTEN_PREGION1RA_Pos)
#define MWU_INTEN_PREGION1RA_Disabled (0UL)
#define MWU_INTEN_PREGION1RA_Enabled (1UL)


#define MWU_INTEN_PREGION1WA_Pos (26UL)
#define MWU_INTEN_PREGION1WA_Msk (0x1UL << MWU_INTEN_PREGION1WA_Pos)
#define MWU_INTEN_PREGION1WA_Disabled (0UL)
#define MWU_INTEN_PREGION1WA_Enabled (1UL)


#define MWU_INTEN_PREGION0RA_Pos (25UL)
#define MWU_INTEN_PREGION0RA_Msk (0x1UL << MWU_INTEN_PREGION0RA_Pos)
#define MWU_INTEN_PREGION0RA_Disabled (0UL)
#define MWU_INTEN_PREGION0RA_Enabled (1UL)


#define MWU_INTEN_PREGION0WA_Pos (24UL)
#define MWU_INTEN_PREGION0WA_Msk (0x1UL << MWU_INTEN_PREGION0WA_Pos)
#define MWU_INTEN_PREGION0WA_Disabled (0UL)
#define MWU_INTEN_PREGION0WA_Enabled (1UL)


#define MWU_INTEN_REGION3RA_Pos (7UL)
#define MWU_INTEN_REGION3RA_Msk (0x1UL << MWU_INTEN_REGION3RA_Pos)
#define MWU_INTEN_REGION3RA_Disabled (0UL)
#define MWU_INTEN_REGION3RA_Enabled (1UL)


#define MWU_INTEN_REGION3WA_Pos (6UL)
#define MWU_INTEN_REGION3WA_Msk (0x1UL << MWU_INTEN_REGION3WA_Pos)
#define MWU_INTEN_REGION3WA_Disabled (0UL)
#define MWU_INTEN_REGION3WA_Enabled (1UL)


#define MWU_INTEN_REGION2RA_Pos (5UL)
#define MWU_INTEN_REGION2RA_Msk (0x1UL << MWU_INTEN_REGION2RA_Pos)
#define MWU_INTEN_REGION2RA_Disabled (0UL)
#define MWU_INTEN_REGION2RA_Enabled (1UL)


#define MWU_INTEN_REGION2WA_Pos (4UL)
#define MWU_INTEN_REGION2WA_Msk (0x1UL << MWU_INTEN_REGION2WA_Pos)
#define MWU_INTEN_REGION2WA_Disabled (0UL)
#define MWU_INTEN_REGION2WA_Enabled (1UL)


#define MWU_INTEN_REGION1RA_Pos (3UL)
#define MWU_INTEN_REGION1RA_Msk (0x1UL << MWU_INTEN_REGION1RA_Pos)
#define MWU_INTEN_REGION1RA_Disabled (0UL)
#define MWU_INTEN_REGION1RA_Enabled (1UL)


#define MWU_INTEN_REGION1WA_Pos (2UL)
#define MWU_INTEN_REGION1WA_Msk (0x1UL << MWU_INTEN_REGION1WA_Pos)
#define MWU_INTEN_REGION1WA_Disabled (0UL)
#define MWU_INTEN_REGION1WA_Enabled (1UL)


#define MWU_INTEN_REGION0RA_Pos (1UL)
#define MWU_INTEN_REGION0RA_Msk (0x1UL << MWU_INTEN_REGION0RA_Pos)
#define MWU_INTEN_REGION0RA_Disabled (0UL)
#define MWU_INTEN_REGION0RA_Enabled (1UL)


#define MWU_INTEN_REGION0WA_Pos (0UL)
#define MWU_INTEN_REGION0WA_Msk (0x1UL << MWU_INTEN_REGION0WA_Pos)
#define MWU_INTEN_REGION0WA_Disabled (0UL)
#define MWU_INTEN_REGION0WA_Enabled (1UL)





#define MWU_INTENSET_PREGION1RA_Pos (27UL)
#define MWU_INTENSET_PREGION1RA_Msk (0x1UL << MWU_INTENSET_PREGION1RA_Pos)
#define MWU_INTENSET_PREGION1RA_Disabled (0UL)
#define MWU_INTENSET_PREGION1RA_Enabled (1UL)
#define MWU_INTENSET_PREGION1RA_Set (1UL)


#define MWU_INTENSET_PREGION1WA_Pos (26UL)
#define MWU_INTENSET_PREGION1WA_Msk (0x1UL << MWU_INTENSET_PREGION1WA_Pos)
#define MWU_INTENSET_PREGION1WA_Disabled (0UL)
#define MWU_INTENSET_PREGION1WA_Enabled (1UL)
#define MWU_INTENSET_PREGION1WA_Set (1UL)


#define MWU_INTENSET_PREGION0RA_Pos (25UL)
#define MWU_INTENSET_PREGION0RA_Msk (0x1UL << MWU_INTENSET_PREGION0RA_Pos)
#define MWU_INTENSET_PREGION0RA_Disabled (0UL)
#define MWU_INTENSET_PREGION0RA_Enabled (1UL)
#define MWU_INTENSET_PREGION0RA_Set (1UL)


#define MWU_INTENSET_PREGION0WA_Pos (24UL)
#define MWU_INTENSET_PREGION0WA_Msk (0x1UL << MWU_INTENSET_PREGION0WA_Pos)
#define MWU_INTENSET_PREGION0WA_Disabled (0UL)
#define MWU_INTENSET_PREGION0WA_Enabled (1UL)
#define MWU_INTENSET_PREGION0WA_Set (1UL)


#define MWU_INTENSET_REGION3RA_Pos (7UL)
#define MWU_INTENSET_REGION3RA_Msk (0x1UL << MWU_INTENSET_REGION3RA_Pos)
#define MWU_INTENSET_REGION3RA_Disabled (0UL)
#define MWU_INTENSET_REGION3RA_Enabled (1UL)
#define MWU_INTENSET_REGION3RA_Set (1UL)


#define MWU_INTENSET_REGION3WA_Pos (6UL)
#define MWU_INTENSET_REGION3WA_Msk (0x1UL << MWU_INTENSET_REGION3WA_Pos)
#define MWU_INTENSET_REGION3WA_Disabled (0UL)
#define MWU_INTENSET_REGION3WA_Enabled (1UL)
#define MWU_INTENSET_REGION3WA_Set (1UL)


#define MWU_INTENSET_REGION2RA_Pos (5UL)
#define MWU_INTENSET_REGION2RA_Msk (0x1UL << MWU_INTENSET_REGION2RA_Pos)
#define MWU_INTENSET_REGION2RA_Disabled (0UL)
#define MWU_INTENSET_REGION2RA_Enabled (1UL)
#define MWU_INTENSET_REGION2RA_Set (1UL)


#define MWU_INTENSET_REGION2WA_Pos (4UL)
#define MWU_INTENSET_REGION2WA_Msk (0x1UL << MWU_INTENSET_REGION2WA_Pos)
#define MWU_INTENSET_REGION2WA_Disabled (0UL)
#define MWU_INTENSET_REGION2WA_Enabled (1UL)
#define MWU_INTENSET_REGION2WA_Set (1UL)


#define MWU_INTENSET_REGION1RA_Pos (3UL)
#define MWU_INTENSET_REGION1RA_Msk (0x1UL << MWU_INTENSET_REGION1RA_Pos)
#define MWU_INTENSET_REGION1RA_Disabled (0UL)
#define MWU_INTENSET_REGION1RA_Enabled (1UL)
#define MWU_INTENSET_REGION1RA_Set (1UL)


#define MWU_INTENSET_REGION1WA_Pos (2UL)
#define MWU_INTENSET_REGION1WA_Msk (0x1UL << MWU_INTENSET_REGION1WA_Pos)
#define MWU_INTENSET_REGION1WA_Disabled (0UL)
#define MWU_INTENSET_REGION1WA_Enabled (1UL)
#define MWU_INTENSET_REGION1WA_Set (1UL)


#define MWU_INTENSET_REGION0RA_Pos (1UL)
#define MWU_INTENSET_REGION0RA_Msk (0x1UL << MWU_INTENSET_REGION0RA_Pos)
#define MWU_INTENSET_REGION0RA_Disabled (0UL)
#define MWU_INTENSET_REGION0RA_Enabled (1UL)
#define MWU_INTENSET_REGION0RA_Set (1UL)


#define MWU_INTENSET_REGION0WA_Pos (0UL)
#define MWU_INTENSET_REGION0WA_Msk (0x1UL << MWU_INTENSET_REGION0WA_Pos)
#define MWU_INTENSET_REGION0WA_Disabled (0UL)
#define MWU_INTENSET_REGION0WA_Enabled (1UL)
#define MWU_INTENSET_REGION0WA_Set (1UL)





#define MWU_INTENCLR_PREGION1RA_Pos (27UL)
#define MWU_INTENCLR_PREGION1RA_Msk (0x1UL << MWU_INTENCLR_PREGION1RA_Pos)
#define MWU_INTENCLR_PREGION1RA_Disabled (0UL)
#define MWU_INTENCLR_PREGION1RA_Enabled (1UL)
#define MWU_INTENCLR_PREGION1RA_Clear (1UL)


#define MWU_INTENCLR_PREGION1WA_Pos (26UL)
#define MWU_INTENCLR_PREGION1WA_Msk (0x1UL << MWU_INTENCLR_PREGION1WA_Pos)
#define MWU_INTENCLR_PREGION1WA_Disabled (0UL)
#define MWU_INTENCLR_PREGION1WA_Enabled (1UL)
#define MWU_INTENCLR_PREGION1WA_Clear (1UL)


#define MWU_INTENCLR_PREGION0RA_Pos (25UL)
#define MWU_INTENCLR_PREGION0RA_Msk (0x1UL << MWU_INTENCLR_PREGION0RA_Pos)
#define MWU_INTENCLR_PREGION0RA_Disabled (0UL)
#define MWU_INTENCLR_PREGION0RA_Enabled (1UL)
#define MWU_INTENCLR_PREGION0RA_Clear (1UL)


#define MWU_INTENCLR_PREGION0WA_Pos (24UL)
#define MWU_INTENCLR_PREGION0WA_Msk (0x1UL << MWU_INTENCLR_PREGION0WA_Pos)
#define MWU_INTENCLR_PREGION0WA_Disabled (0UL)
#define MWU_INTENCLR_PREGION0WA_Enabled (1UL)
#define MWU_INTENCLR_PREGION0WA_Clear (1UL)


#define MWU_INTENCLR_REGION3RA_Pos (7UL)
#define MWU_INTENCLR_REGION3RA_Msk (0x1UL << MWU_INTENCLR_REGION3RA_Pos)
#define MWU_INTENCLR_REGION3RA_Disabled (0UL)
#define MWU_INTENCLR_REGION3RA_Enabled (1UL)
#define MWU_INTENCLR_REGION3RA_Clear (1UL)


#define MWU_INTENCLR_REGION3WA_Pos (6UL)
#define MWU_INTENCLR_REGION3WA_Msk (0x1UL << MWU_INTENCLR_REGION3WA_Pos)
#define MWU_INTENCLR_REGION3WA_Disabled (0UL)
#define MWU_INTENCLR_REGION3WA_Enabled (1UL)
#define MWU_INTENCLR_REGION3WA_Clear (1UL)


#define MWU_INTENCLR_REGION2RA_Pos (5UL)
#define MWU_INTENCLR_REGION2RA_Msk (0x1UL << MWU_INTENCLR_REGION2RA_Pos)
#define MWU_INTENCLR_REGION2RA_Disabled (0UL)
#define MWU_INTENCLR_REGION2RA_Enabled (1UL)
#define MWU_INTENCLR_REGION2RA_Clear (1UL)


#define MWU_INTENCLR_REGION2WA_Pos (4UL)
#define MWU_INTENCLR_REGION2WA_Msk (0x1UL << MWU_INTENCLR_REGION2WA_Pos)
#define MWU_INTENCLR_REGION2WA_Disabled (0UL)
#define MWU_INTENCLR_REGION2WA_Enabled (1UL)
#define MWU_INTENCLR_REGION2WA_Clear (1UL)


#define MWU_INTENCLR_REGION1RA_Pos (3UL)
#define MWU_INTENCLR_REGION1RA_Msk (0x1UL << MWU_INTENCLR_REGION1RA_Pos)
#define MWU_INTENCLR_REGION1RA_Disabled (0UL)
#define MWU_INTENCLR_REGION1RA_Enabled (1UL)
#define MWU_INTENCLR_REGION1RA_Clear (1UL)


#define MWU_INTENCLR_REGION1WA_Pos (2UL)
#define MWU_INTENCLR_REGION1WA_Msk (0x1UL << MWU_INTENCLR_REGION1WA_Pos)
#define MWU_INTENCLR_REGION1WA_Disabled (0UL)
#define MWU_INTENCLR_REGION1WA_Enabled (1UL)
#define MWU_INTENCLR_REGION1WA_Clear (1UL)


#define MWU_INTENCLR_REGION0RA_Pos (1UL)
#define MWU_INTENCLR_REGION0RA_Msk (0x1UL << MWU_INTENCLR_REGION0RA_Pos)
#define MWU_INTENCLR_REGION0RA_Disabled (0UL)
#define MWU_INTENCLR_REGION0RA_Enabled (1UL)
#define MWU_INTENCLR_REGION0RA_Clear (1UL)


#define MWU_INTENCLR_REGION0WA_Pos (0UL)
#define MWU_INTENCLR_REGION0WA_Msk (0x1UL << MWU_INTENCLR_REGION0WA_Pos)
#define MWU_INTENCLR_REGION0WA_Disabled (0UL)
#define MWU_INTENCLR_REGION0WA_Enabled (1UL)
#define MWU_INTENCLR_REGION0WA_Clear (1UL)





#define MWU_NMIEN_PREGION1RA_Pos (27UL)
#define MWU_NMIEN_PREGION1RA_Msk (0x1UL << MWU_NMIEN_PREGION1RA_Pos)
#define MWU_NMIEN_PREGION1RA_Disabled (0UL)
#define MWU_NMIEN_PREGION1RA_Enabled (1UL)


#define MWU_NMIEN_PREGION1WA_Pos (26UL)
#define MWU_NMIEN_PREGION1WA_Msk (0x1UL << MWU_NMIEN_PREGION1WA_Pos)
#define MWU_NMIEN_PREGION1WA_Disabled (0UL)
#define MWU_NMIEN_PREGION1WA_Enabled (1UL)


#define MWU_NMIEN_PREGION0RA_Pos (25UL)
#define MWU_NMIEN_PREGION0RA_Msk (0x1UL << MWU_NMIEN_PREGION0RA_Pos)
#define MWU_NMIEN_PREGION0RA_Disabled (0UL)
#define MWU_NMIEN_PREGION0RA_Enabled (1UL)


#define MWU_NMIEN_PREGION0WA_Pos (24UL)
#define MWU_NMIEN_PREGION0WA_Msk (0x1UL << MWU_NMIEN_PREGION0WA_Pos)
#define MWU_NMIEN_PREGION0WA_Disabled (0UL)
#define MWU_NMIEN_PREGION0WA_Enabled (1UL)


#define MWU_NMIEN_REGION3RA_Pos (7UL)
#define MWU_NMIEN_REGION3RA_Msk (0x1UL << MWU_NMIEN_REGION3RA_Pos)
#define MWU_NMIEN_REGION3RA_Disabled (0UL)
#define MWU_NMIEN_REGION3RA_Enabled (1UL)


#define MWU_NMIEN_REGION3WA_Pos (6UL)
#define MWU_NMIEN_REGION3WA_Msk (0x1UL << MWU_NMIEN_REGION3WA_Pos)
#define MWU_NMIEN_REGION3WA_Disabled (0UL)
#define MWU_NMIEN_REGION3WA_Enabled (1UL)


#define MWU_NMIEN_REGION2RA_Pos (5UL)
#define MWU_NMIEN_REGION2RA_Msk (0x1UL << MWU_NMIEN_REGION2RA_Pos)
#define MWU_NMIEN_REGION2RA_Disabled (0UL)
#define MWU_NMIEN_REGION2RA_Enabled (1UL)


#define MWU_NMIEN_REGION2WA_Pos (4UL)
#define MWU_NMIEN_REGION2WA_Msk (0x1UL << MWU_NMIEN_REGION2WA_Pos)
#define MWU_NMIEN_REGION2WA_Disabled (0UL)
#define MWU_NMIEN_REGION2WA_Enabled (1UL)


#define MWU_NMIEN_REGION1RA_Pos (3UL)
#define MWU_NMIEN_REGION1RA_Msk (0x1UL << MWU_NMIEN_REGION1RA_Pos)
#define MWU_NMIEN_REGION1RA_Disabled (0UL)
#define MWU_NMIEN_REGION1RA_Enabled (1UL)


#define MWU_NMIEN_REGION1WA_Pos (2UL)
#define MWU_NMIEN_REGION1WA_Msk (0x1UL << MWU_NMIEN_REGION1WA_Pos)
#define MWU_NMIEN_REGION1WA_Disabled (0UL)
#define MWU_NMIEN_REGION1WA_Enabled (1UL)


#define MWU_NMIEN_REGION0RA_Pos (1UL)
#define MWU_NMIEN_REGION0RA_Msk (0x1UL << MWU_NMIEN_REGION0RA_Pos)
#define MWU_NMIEN_REGION0RA_Disabled (0UL)
#define MWU_NMIEN_REGION0RA_Enabled (1UL)


#define MWU_NMIEN_REGION0WA_Pos (0UL)
#define MWU_NMIEN_REGION0WA_Msk (0x1UL << MWU_NMIEN_REGION0WA_Pos)
#define MWU_NMIEN_REGION0WA_Disabled (0UL)
#define MWU_NMIEN_REGION0WA_Enabled (1UL)





#define MWU_NMIENSET_PREGION1RA_Pos (27UL)
#define MWU_NMIENSET_PREGION1RA_Msk (0x1UL << MWU_NMIENSET_PREGION1RA_Pos)
#define MWU_NMIENSET_PREGION1RA_Disabled (0UL)
#define MWU_NMIENSET_PREGION1RA_Enabled (1UL)
#define MWU_NMIENSET_PREGION1RA_Set (1UL)


#define MWU_NMIENSET_PREGION1WA_Pos (26UL)
#define MWU_NMIENSET_PREGION1WA_Msk (0x1UL << MWU_NMIENSET_PREGION1WA_Pos)
#define MWU_NMIENSET_PREGION1WA_Disabled (0UL)
#define MWU_NMIENSET_PREGION1WA_Enabled (1UL)
#define MWU_NMIENSET_PREGION1WA_Set (1UL)


#define MWU_NMIENSET_PREGION0RA_Pos (25UL)
#define MWU_NMIENSET_PREGION0RA_Msk (0x1UL << MWU_NMIENSET_PREGION0RA_Pos)
#define MWU_NMIENSET_PREGION0RA_Disabled (0UL)
#define MWU_NMIENSET_PREGION0RA_Enabled (1UL)
#define MWU_NMIENSET_PREGION0RA_Set (1UL)


#define MWU_NMIENSET_PREGION0WA_Pos (24UL)
#define MWU_NMIENSET_PREGION0WA_Msk (0x1UL << MWU_NMIENSET_PREGION0WA_Pos)
#define MWU_NMIENSET_PREGION0WA_Disabled (0UL)
#define MWU_NMIENSET_PREGION0WA_Enabled (1UL)
#define MWU_NMIENSET_PREGION0WA_Set (1UL)


#define MWU_NMIENSET_REGION3RA_Pos (7UL)
#define MWU_NMIENSET_REGION3RA_Msk (0x1UL << MWU_NMIENSET_REGION3RA_Pos)
#define MWU_NMIENSET_REGION3RA_Disabled (0UL)
#define MWU_NMIENSET_REGION3RA_Enabled (1UL)
#define MWU_NMIENSET_REGION3RA_Set (1UL)


#define MWU_NMIENSET_REGION3WA_Pos (6UL)
#define MWU_NMIENSET_REGION3WA_Msk (0x1UL << MWU_NMIENSET_REGION3WA_Pos)
#define MWU_NMIENSET_REGION3WA_Disabled (0UL)
#define MWU_NMIENSET_REGION3WA_Enabled (1UL)
#define MWU_NMIENSET_REGION3WA_Set (1UL)


#define MWU_NMIENSET_REGION2RA_Pos (5UL)
#define MWU_NMIENSET_REGION2RA_Msk (0x1UL << MWU_NMIENSET_REGION2RA_Pos)
#define MWU_NMIENSET_REGION2RA_Disabled (0UL)
#define MWU_NMIENSET_REGION2RA_Enabled (1UL)
#define MWU_NMIENSET_REGION2RA_Set (1UL)


#define MWU_NMIENSET_REGION2WA_Pos (4UL)
#define MWU_NMIENSET_REGION2WA_Msk (0x1UL << MWU_NMIENSET_REGION2WA_Pos)
#define MWU_NMIENSET_REGION2WA_Disabled (0UL)
#define MWU_NMIENSET_REGION2WA_Enabled (1UL)
#define MWU_NMIENSET_REGION2WA_Set (1UL)


#define MWU_NMIENSET_REGION1RA_Pos (3UL)
#define MWU_NMIENSET_REGION1RA_Msk (0x1UL << MWU_NMIENSET_REGION1RA_Pos)
#define MWU_NMIENSET_REGION1RA_Disabled (0UL)
#define MWU_NMIENSET_REGION1RA_Enabled (1UL)
#define MWU_NMIENSET_REGION1RA_Set (1UL)


#define MWU_NMIENSET_REGION1WA_Pos (2UL)
#define MWU_NMIENSET_REGION1WA_Msk (0x1UL << MWU_NMIENSET_REGION1WA_Pos)
#define MWU_NMIENSET_REGION1WA_Disabled (0UL)
#define MWU_NMIENSET_REGION1WA_Enabled (1UL)
#define MWU_NMIENSET_REGION1WA_Set (1UL)


#define MWU_NMIENSET_REGION0RA_Pos (1UL)
#define MWU_NMIENSET_REGION0RA_Msk (0x1UL << MWU_NMIENSET_REGION0RA_Pos)
#define MWU_NMIENSET_REGION0RA_Disabled (0UL)
#define MWU_NMIENSET_REGION0RA_Enabled (1UL)
#define MWU_NMIENSET_REGION0RA_Set (1UL)


#define MWU_NMIENSET_REGION0WA_Pos (0UL)
#define MWU_NMIENSET_REGION0WA_Msk (0x1UL << MWU_NMIENSET_REGION0WA_Pos)
#define MWU_NMIENSET_REGION0WA_Disabled (0UL)
#define MWU_NMIENSET_REGION0WA_Enabled (1UL)
#define MWU_NMIENSET_REGION0WA_Set (1UL)





#define MWU_NMIENCLR_PREGION1RA_Pos (27UL)
#define MWU_NMIENCLR_PREGION1RA_Msk (0x1UL << MWU_NMIENCLR_PREGION1RA_Pos)
#define MWU_NMIENCLR_PREGION1RA_Disabled (0UL)
#define MWU_NMIENCLR_PREGION1RA_Enabled (1UL)
#define MWU_NMIENCLR_PREGION1RA_Clear (1UL)


#define MWU_NMIENCLR_PREGION1WA_Pos (26UL)
#define MWU_NMIENCLR_PREGION1WA_Msk (0x1UL << MWU_NMIENCLR_PREGION1WA_Pos)
#define MWU_NMIENCLR_PREGION1WA_Disabled (0UL)
#define MWU_NMIENCLR_PREGION1WA_Enabled (1UL)
#define MWU_NMIENCLR_PREGION1WA_Clear (1UL)


#define MWU_NMIENCLR_PREGION0RA_Pos (25UL)
#define MWU_NMIENCLR_PREGION0RA_Msk (0x1UL << MWU_NMIENCLR_PREGION0RA_Pos)
#define MWU_NMIENCLR_PREGION0RA_Disabled (0UL)
#define MWU_NMIENCLR_PREGION0RA_Enabled (1UL)
#define MWU_NMIENCLR_PREGION0RA_Clear (1UL)


#define MWU_NMIENCLR_PREGION0WA_Pos (24UL)
#define MWU_NMIENCLR_PREGION0WA_Msk (0x1UL << MWU_NMIENCLR_PREGION0WA_Pos)
#define MWU_NMIENCLR_PREGION0WA_Disabled (0UL)
#define MWU_NMIENCLR_PREGION0WA_Enabled (1UL)
#define MWU_NMIENCLR_PREGION0WA_Clear (1UL)


#define MWU_NMIENCLR_REGION3RA_Pos (7UL)
#define MWU_NMIENCLR_REGION3RA_Msk (0x1UL << MWU_NMIENCLR_REGION3RA_Pos)
#define MWU_NMIENCLR_REGION3RA_Disabled (0UL)
#define MWU_NMIENCLR_REGION3RA_Enabled (1UL)
#define MWU_NMIENCLR_REGION3RA_Clear (1UL)


#define MWU_NMIENCLR_REGION3WA_Pos (6UL)
#define MWU_NMIENCLR_REGION3WA_Msk (0x1UL << MWU_NMIENCLR_REGION3WA_Pos)
#define MWU_NMIENCLR_REGION3WA_Disabled (0UL)
#define MWU_NMIENCLR_REGION3WA_Enabled (1UL)
#define MWU_NMIENCLR_REGION3WA_Clear (1UL)


#define MWU_NMIENCLR_REGION2RA_Pos (5UL)
#define MWU_NMIENCLR_REGION2RA_Msk (0x1UL << MWU_NMIENCLR_REGION2RA_Pos)
#define MWU_NMIENCLR_REGION2RA_Disabled (0UL)
#define MWU_NMIENCLR_REGION2RA_Enabled (1UL)
#define MWU_NMIENCLR_REGION2RA_Clear (1UL)


#define MWU_NMIENCLR_REGION2WA_Pos (4UL)
#define MWU_NMIENCLR_REGION2WA_Msk (0x1UL << MWU_NMIENCLR_REGION2WA_Pos)
#define MWU_NMIENCLR_REGION2WA_Disabled (0UL)
#define MWU_NMIENCLR_REGION2WA_Enabled (1UL)
#define MWU_NMIENCLR_REGION2WA_Clear (1UL)


#define MWU_NMIENCLR_REGION1RA_Pos (3UL)
#define MWU_NMIENCLR_REGION1RA_Msk (0x1UL << MWU_NMIENCLR_REGION1RA_Pos)
#define MWU_NMIENCLR_REGION1RA_Disabled (0UL)
#define MWU_NMIENCLR_REGION1RA_Enabled (1UL)
#define MWU_NMIENCLR_REGION1RA_Clear (1UL)


#define MWU_NMIENCLR_REGION1WA_Pos (2UL)
#define MWU_NMIENCLR_REGION1WA_Msk (0x1UL << MWU_NMIENCLR_REGION1WA_Pos)
#define MWU_NMIENCLR_REGION1WA_Disabled (0UL)
#define MWU_NMIENCLR_REGION1WA_Enabled (1UL)
#define MWU_NMIENCLR_REGION1WA_Clear (1UL)


#define MWU_NMIENCLR_REGION0RA_Pos (1UL)
#define MWU_NMIENCLR_REGION0RA_Msk (0x1UL << MWU_NMIENCLR_REGION0RA_Pos)
#define MWU_NMIENCLR_REGION0RA_Disabled (0UL)
#define MWU_NMIENCLR_REGION0RA_Enabled (1UL)
#define MWU_NMIENCLR_REGION0RA_Clear (1UL)


#define MWU_NMIENCLR_REGION0WA_Pos (0UL)
#define MWU_NMIENCLR_REGION0WA_Msk (0x1UL << MWU_NMIENCLR_REGION0WA_Pos)
#define MWU_NMIENCLR_REGION0WA_Disabled (0UL)
#define MWU_NMIENCLR_REGION0WA_Enabled (1UL)
#define MWU_NMIENCLR_REGION0WA_Clear (1UL)





#define MWU_PERREGION_SUBSTATWA_SR31_Pos (31UL)
#define MWU_PERREGION_SUBSTATWA_SR31_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR31_Pos)
#define MWU_PERREGION_SUBSTATWA_SR31_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR31_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR30_Pos (30UL)
#define MWU_PERREGION_SUBSTATWA_SR30_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR30_Pos)
#define MWU_PERREGION_SUBSTATWA_SR30_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR30_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR29_Pos (29UL)
#define MWU_PERREGION_SUBSTATWA_SR29_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR29_Pos)
#define MWU_PERREGION_SUBSTATWA_SR29_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR29_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR28_Pos (28UL)
#define MWU_PERREGION_SUBSTATWA_SR28_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR28_Pos)
#define MWU_PERREGION_SUBSTATWA_SR28_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR28_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR27_Pos (27UL)
#define MWU_PERREGION_SUBSTATWA_SR27_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR27_Pos)
#define MWU_PERREGION_SUBSTATWA_SR27_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR27_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR26_Pos (26UL)
#define MWU_PERREGION_SUBSTATWA_SR26_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR26_Pos)
#define MWU_PERREGION_SUBSTATWA_SR26_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR26_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR25_Pos (25UL)
#define MWU_PERREGION_SUBSTATWA_SR25_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR25_Pos)
#define MWU_PERREGION_SUBSTATWA_SR25_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR25_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR24_Pos (24UL)
#define MWU_PERREGION_SUBSTATWA_SR24_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR24_Pos)
#define MWU_PERREGION_SUBSTATWA_SR24_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR24_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR23_Pos (23UL)
#define MWU_PERREGION_SUBSTATWA_SR23_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR23_Pos)
#define MWU_PERREGION_SUBSTATWA_SR23_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR23_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR22_Pos (22UL)
#define MWU_PERREGION_SUBSTATWA_SR22_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR22_Pos)
#define MWU_PERREGION_SUBSTATWA_SR22_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR22_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR21_Pos (21UL)
#define MWU_PERREGION_SUBSTATWA_SR21_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR21_Pos)
#define MWU_PERREGION_SUBSTATWA_SR21_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR21_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR20_Pos (20UL)
#define MWU_PERREGION_SUBSTATWA_SR20_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR20_Pos)
#define MWU_PERREGION_SUBSTATWA_SR20_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR20_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR19_Pos (19UL)
#define MWU_PERREGION_SUBSTATWA_SR19_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR19_Pos)
#define MWU_PERREGION_SUBSTATWA_SR19_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR19_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR18_Pos (18UL)
#define MWU_PERREGION_SUBSTATWA_SR18_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR18_Pos)
#define MWU_PERREGION_SUBSTATWA_SR18_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR18_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR17_Pos (17UL)
#define MWU_PERREGION_SUBSTATWA_SR17_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR17_Pos)
#define MWU_PERREGION_SUBSTATWA_SR17_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR17_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR16_Pos (16UL)
#define MWU_PERREGION_SUBSTATWA_SR16_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR16_Pos)
#define MWU_PERREGION_SUBSTATWA_SR16_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR16_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR15_Pos (15UL)
#define MWU_PERREGION_SUBSTATWA_SR15_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR15_Pos)
#define MWU_PERREGION_SUBSTATWA_SR15_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR15_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR14_Pos (14UL)
#define MWU_PERREGION_SUBSTATWA_SR14_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR14_Pos)
#define MWU_PERREGION_SUBSTATWA_SR14_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR14_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR13_Pos (13UL)
#define MWU_PERREGION_SUBSTATWA_SR13_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR13_Pos)
#define MWU_PERREGION_SUBSTATWA_SR13_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR13_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR12_Pos (12UL)
#define MWU_PERREGION_SUBSTATWA_SR12_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR12_Pos)
#define MWU_PERREGION_SUBSTATWA_SR12_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR12_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR11_Pos (11UL)
#define MWU_PERREGION_SUBSTATWA_SR11_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR11_Pos)
#define MWU_PERREGION_SUBSTATWA_SR11_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR11_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR10_Pos (10UL)
#define MWU_PERREGION_SUBSTATWA_SR10_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR10_Pos)
#define MWU_PERREGION_SUBSTATWA_SR10_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR10_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR9_Pos (9UL)
#define MWU_PERREGION_SUBSTATWA_SR9_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR9_Pos)
#define MWU_PERREGION_SUBSTATWA_SR9_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR9_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR8_Pos (8UL)
#define MWU_PERREGION_SUBSTATWA_SR8_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR8_Pos)
#define MWU_PERREGION_SUBSTATWA_SR8_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR8_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR7_Pos (7UL)
#define MWU_PERREGION_SUBSTATWA_SR7_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR7_Pos)
#define MWU_PERREGION_SUBSTATWA_SR7_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR7_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR6_Pos (6UL)
#define MWU_PERREGION_SUBSTATWA_SR6_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR6_Pos)
#define MWU_PERREGION_SUBSTATWA_SR6_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR6_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR5_Pos (5UL)
#define MWU_PERREGION_SUBSTATWA_SR5_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR5_Pos)
#define MWU_PERREGION_SUBSTATWA_SR5_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR5_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR4_Pos (4UL)
#define MWU_PERREGION_SUBSTATWA_SR4_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR4_Pos)
#define MWU_PERREGION_SUBSTATWA_SR4_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR4_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR3_Pos (3UL)
#define MWU_PERREGION_SUBSTATWA_SR3_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR3_Pos)
#define MWU_PERREGION_SUBSTATWA_SR3_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR3_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR2_Pos (2UL)
#define MWU_PERREGION_SUBSTATWA_SR2_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR2_Pos)
#define MWU_PERREGION_SUBSTATWA_SR2_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR2_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR1_Pos (1UL)
#define MWU_PERREGION_SUBSTATWA_SR1_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR1_Pos)
#define MWU_PERREGION_SUBSTATWA_SR1_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR1_Access (1UL)


#define MWU_PERREGION_SUBSTATWA_SR0_Pos (0UL)
#define MWU_PERREGION_SUBSTATWA_SR0_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR0_Pos)
#define MWU_PERREGION_SUBSTATWA_SR0_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATWA_SR0_Access (1UL)





#define MWU_PERREGION_SUBSTATRA_SR31_Pos (31UL)
#define MWU_PERREGION_SUBSTATRA_SR31_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR31_Pos)
#define MWU_PERREGION_SUBSTATRA_SR31_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR31_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR30_Pos (30UL)
#define MWU_PERREGION_SUBSTATRA_SR30_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR30_Pos)
#define MWU_PERREGION_SUBSTATRA_SR30_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR30_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR29_Pos (29UL)
#define MWU_PERREGION_SUBSTATRA_SR29_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR29_Pos)
#define MWU_PERREGION_SUBSTATRA_SR29_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR29_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR28_Pos (28UL)
#define MWU_PERREGION_SUBSTATRA_SR28_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR28_Pos)
#define MWU_PERREGION_SUBSTATRA_SR28_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR28_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR27_Pos (27UL)
#define MWU_PERREGION_SUBSTATRA_SR27_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR27_Pos)
#define MWU_PERREGION_SUBSTATRA_SR27_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR27_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR26_Pos (26UL)
#define MWU_PERREGION_SUBSTATRA_SR26_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR26_Pos)
#define MWU_PERREGION_SUBSTATRA_SR26_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR26_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR25_Pos (25UL)
#define MWU_PERREGION_SUBSTATRA_SR25_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR25_Pos)
#define MWU_PERREGION_SUBSTATRA_SR25_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR25_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR24_Pos (24UL)
#define MWU_PERREGION_SUBSTATRA_SR24_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR24_Pos)
#define MWU_PERREGION_SUBSTATRA_SR24_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR24_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR23_Pos (23UL)
#define MWU_PERREGION_SUBSTATRA_SR23_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR23_Pos)
#define MWU_PERREGION_SUBSTATRA_SR23_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR23_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR22_Pos (22UL)
#define MWU_PERREGION_SUBSTATRA_SR22_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR22_Pos)
#define MWU_PERREGION_SUBSTATRA_SR22_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR22_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR21_Pos (21UL)
#define MWU_PERREGION_SUBSTATRA_SR21_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR21_Pos)
#define MWU_PERREGION_SUBSTATRA_SR21_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR21_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR20_Pos (20UL)
#define MWU_PERREGION_SUBSTATRA_SR20_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR20_Pos)
#define MWU_PERREGION_SUBSTATRA_SR20_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR20_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR19_Pos (19UL)
#define MWU_PERREGION_SUBSTATRA_SR19_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR19_Pos)
#define MWU_PERREGION_SUBSTATRA_SR19_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR19_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR18_Pos (18UL)
#define MWU_PERREGION_SUBSTATRA_SR18_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR18_Pos)
#define MWU_PERREGION_SUBSTATRA_SR18_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR18_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR17_Pos (17UL)
#define MWU_PERREGION_SUBSTATRA_SR17_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR17_Pos)
#define MWU_PERREGION_SUBSTATRA_SR17_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR17_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR16_Pos (16UL)
#define MWU_PERREGION_SUBSTATRA_SR16_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR16_Pos)
#define MWU_PERREGION_SUBSTATRA_SR16_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR16_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR15_Pos (15UL)
#define MWU_PERREGION_SUBSTATRA_SR15_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR15_Pos)
#define MWU_PERREGION_SUBSTATRA_SR15_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR15_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR14_Pos (14UL)
#define MWU_PERREGION_SUBSTATRA_SR14_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR14_Pos)
#define MWU_PERREGION_SUBSTATRA_SR14_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR14_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR13_Pos (13UL)
#define MWU_PERREGION_SUBSTATRA_SR13_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR13_Pos)
#define MWU_PERREGION_SUBSTATRA_SR13_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR13_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR12_Pos (12UL)
#define MWU_PERREGION_SUBSTATRA_SR12_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR12_Pos)
#define MWU_PERREGION_SUBSTATRA_SR12_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR12_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR11_Pos (11UL)
#define MWU_PERREGION_SUBSTATRA_SR11_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR11_Pos)
#define MWU_PERREGION_SUBSTATRA_SR11_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR11_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR10_Pos (10UL)
#define MWU_PERREGION_SUBSTATRA_SR10_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR10_Pos)
#define MWU_PERREGION_SUBSTATRA_SR10_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR10_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR9_Pos (9UL)
#define MWU_PERREGION_SUBSTATRA_SR9_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR9_Pos)
#define MWU_PERREGION_SUBSTATRA_SR9_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR9_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR8_Pos (8UL)
#define MWU_PERREGION_SUBSTATRA_SR8_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR8_Pos)
#define MWU_PERREGION_SUBSTATRA_SR8_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR8_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR7_Pos (7UL)
#define MWU_PERREGION_SUBSTATRA_SR7_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR7_Pos)
#define MWU_PERREGION_SUBSTATRA_SR7_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR7_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR6_Pos (6UL)
#define MWU_PERREGION_SUBSTATRA_SR6_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR6_Pos)
#define MWU_PERREGION_SUBSTATRA_SR6_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR6_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR5_Pos (5UL)
#define MWU_PERREGION_SUBSTATRA_SR5_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR5_Pos)
#define MWU_PERREGION_SUBSTATRA_SR5_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR5_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR4_Pos (4UL)
#define MWU_PERREGION_SUBSTATRA_SR4_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR4_Pos)
#define MWU_PERREGION_SUBSTATRA_SR4_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR4_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR3_Pos (3UL)
#define MWU_PERREGION_SUBSTATRA_SR3_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR3_Pos)
#define MWU_PERREGION_SUBSTATRA_SR3_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR3_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR2_Pos (2UL)
#define MWU_PERREGION_SUBSTATRA_SR2_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR2_Pos)
#define MWU_PERREGION_SUBSTATRA_SR2_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR2_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR1_Pos (1UL)
#define MWU_PERREGION_SUBSTATRA_SR1_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR1_Pos)
#define MWU_PERREGION_SUBSTATRA_SR1_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR1_Access (1UL)


#define MWU_PERREGION_SUBSTATRA_SR0_Pos (0UL)
#define MWU_PERREGION_SUBSTATRA_SR0_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR0_Pos)
#define MWU_PERREGION_SUBSTATRA_SR0_NoAccess (0UL)
#define MWU_PERREGION_SUBSTATRA_SR0_Access (1UL)





#define MWU_REGIONEN_PRGN1RA_Pos (27UL)
#define MWU_REGIONEN_PRGN1RA_Msk (0x1UL << MWU_REGIONEN_PRGN1RA_Pos)
#define MWU_REGIONEN_PRGN1RA_Disable (0UL)
#define MWU_REGIONEN_PRGN1RA_Enable (1UL)


#define MWU_REGIONEN_PRGN1WA_Pos (26UL)
#define MWU_REGIONEN_PRGN1WA_Msk (0x1UL << MWU_REGIONEN_PRGN1WA_Pos)
#define MWU_REGIONEN_PRGN1WA_Disable (0UL)
#define MWU_REGIONEN_PRGN1WA_Enable (1UL)


#define MWU_REGIONEN_PRGN0RA_Pos (25UL)
#define MWU_REGIONEN_PRGN0RA_Msk (0x1UL << MWU_REGIONEN_PRGN0RA_Pos)
#define MWU_REGIONEN_PRGN0RA_Disable (0UL)
#define MWU_REGIONEN_PRGN0RA_Enable (1UL)


#define MWU_REGIONEN_PRGN0WA_Pos (24UL)
#define MWU_REGIONEN_PRGN0WA_Msk (0x1UL << MWU_REGIONEN_PRGN0WA_Pos)
#define MWU_REGIONEN_PRGN0WA_Disable (0UL)
#define MWU_REGIONEN_PRGN0WA_Enable (1UL)


#define MWU_REGIONEN_RGN3RA_Pos (7UL)
#define MWU_REGIONEN_RGN3RA_Msk (0x1UL << MWU_REGIONEN_RGN3RA_Pos)
#define MWU_REGIONEN_RGN3RA_Disable (0UL)
#define MWU_REGIONEN_RGN3RA_Enable (1UL)


#define MWU_REGIONEN_RGN3WA_Pos (6UL)
#define MWU_REGIONEN_RGN3WA_Msk (0x1UL << MWU_REGIONEN_RGN3WA_Pos)
#define MWU_REGIONEN_RGN3WA_Disable (0UL)
#define MWU_REGIONEN_RGN3WA_Enable (1UL)


#define MWU_REGIONEN_RGN2RA_Pos (5UL)
#define MWU_REGIONEN_RGN2RA_Msk (0x1UL << MWU_REGIONEN_RGN2RA_Pos)
#define MWU_REGIONEN_RGN2RA_Disable (0UL)
#define MWU_REGIONEN_RGN2RA_Enable (1UL)


#define MWU_REGIONEN_RGN2WA_Pos (4UL)
#define MWU_REGIONEN_RGN2WA_Msk (0x1UL << MWU_REGIONEN_RGN2WA_Pos)
#define MWU_REGIONEN_RGN2WA_Disable (0UL)
#define MWU_REGIONEN_RGN2WA_Enable (1UL)


#define MWU_REGIONEN_RGN1RA_Pos (3UL)
#define MWU_REGIONEN_RGN1RA_Msk (0x1UL << MWU_REGIONEN_RGN1RA_Pos)
#define MWU_REGIONEN_RGN1RA_Disable (0UL)
#define MWU_REGIONEN_RGN1RA_Enable (1UL)


#define MWU_REGIONEN_RGN1WA_Pos (2UL)
#define MWU_REGIONEN_RGN1WA_Msk (0x1UL << MWU_REGIONEN_RGN1WA_Pos)
#define MWU_REGIONEN_RGN1WA_Disable (0UL)
#define MWU_REGIONEN_RGN1WA_Enable (1UL)


#define MWU_REGIONEN_RGN0RA_Pos (1UL)
#define MWU_REGIONEN_RGN0RA_Msk (0x1UL << MWU_REGIONEN_RGN0RA_Pos)
#define MWU_REGIONEN_RGN0RA_Disable (0UL)
#define MWU_REGIONEN_RGN0RA_Enable (1UL)


#define MWU_REGIONEN_RGN0WA_Pos (0UL)
#define MWU_REGIONEN_RGN0WA_Msk (0x1UL << MWU_REGIONEN_RGN0WA_Pos)
#define MWU_REGIONEN_RGN0WA_Disable (0UL)
#define MWU_REGIONEN_RGN0WA_Enable (1UL)





#define MWU_REGIONENSET_PRGN1RA_Pos (27UL)
#define MWU_REGIONENSET_PRGN1RA_Msk (0x1UL << MWU_REGIONENSET_PRGN1RA_Pos)
#define MWU_REGIONENSET_PRGN1RA_Disabled (0UL)
#define MWU_REGIONENSET_PRGN1RA_Enabled (1UL)
#define MWU_REGIONENSET_PRGN1RA_Set (1UL)


#define MWU_REGIONENSET_PRGN1WA_Pos (26UL)
#define MWU_REGIONENSET_PRGN1WA_Msk (0x1UL << MWU_REGIONENSET_PRGN1WA_Pos)
#define MWU_REGIONENSET_PRGN1WA_Disabled (0UL)
#define MWU_REGIONENSET_PRGN1WA_Enabled (1UL)
#define MWU_REGIONENSET_PRGN1WA_Set (1UL)


#define MWU_REGIONENSET_PRGN0RA_Pos (25UL)
#define MWU_REGIONENSET_PRGN0RA_Msk (0x1UL << MWU_REGIONENSET_PRGN0RA_Pos)
#define MWU_REGIONENSET_PRGN0RA_Disabled (0UL)
#define MWU_REGIONENSET_PRGN0RA_Enabled (1UL)
#define MWU_REGIONENSET_PRGN0RA_Set (1UL)


#define MWU_REGIONENSET_PRGN0WA_Pos (24UL)
#define MWU_REGIONENSET_PRGN0WA_Msk (0x1UL << MWU_REGIONENSET_PRGN0WA_Pos)
#define MWU_REGIONENSET_PRGN0WA_Disabled (0UL)
#define MWU_REGIONENSET_PRGN0WA_Enabled (1UL)
#define MWU_REGIONENSET_PRGN0WA_Set (1UL)


#define MWU_REGIONENSET_RGN3RA_Pos (7UL)
#define MWU_REGIONENSET_RGN3RA_Msk (0x1UL << MWU_REGIONENSET_RGN3RA_Pos)
#define MWU_REGIONENSET_RGN3RA_Disabled (0UL)
#define MWU_REGIONENSET_RGN3RA_Enabled (1UL)
#define MWU_REGIONENSET_RGN3RA_Set (1UL)


#define MWU_REGIONENSET_RGN3WA_Pos (6UL)
#define MWU_REGIONENSET_RGN3WA_Msk (0x1UL << MWU_REGIONENSET_RGN3WA_Pos)
#define MWU_REGIONENSET_RGN3WA_Disabled (0UL)
#define MWU_REGIONENSET_RGN3WA_Enabled (1UL)
#define MWU_REGIONENSET_RGN3WA_Set (1UL)


#define MWU_REGIONENSET_RGN2RA_Pos (5UL)
#define MWU_REGIONENSET_RGN2RA_Msk (0x1UL << MWU_REGIONENSET_RGN2RA_Pos)
#define MWU_REGIONENSET_RGN2RA_Disabled (0UL)
#define MWU_REGIONENSET_RGN2RA_Enabled (1UL)
#define MWU_REGIONENSET_RGN2RA_Set (1UL)


#define MWU_REGIONENSET_RGN2WA_Pos (4UL)
#define MWU_REGIONENSET_RGN2WA_Msk (0x1UL << MWU_REGIONENSET_RGN2WA_Pos)
#define MWU_REGIONENSET_RGN2WA_Disabled (0UL)
#define MWU_REGIONENSET_RGN2WA_Enabled (1UL)
#define MWU_REGIONENSET_RGN2WA_Set (1UL)


#define MWU_REGIONENSET_RGN1RA_Pos (3UL)
#define MWU_REGIONENSET_RGN1RA_Msk (0x1UL << MWU_REGIONENSET_RGN1RA_Pos)
#define MWU_REGIONENSET_RGN1RA_Disabled (0UL)
#define MWU_REGIONENSET_RGN1RA_Enabled (1UL)
#define MWU_REGIONENSET_RGN1RA_Set (1UL)


#define MWU_REGIONENSET_RGN1WA_Pos (2UL)
#define MWU_REGIONENSET_RGN1WA_Msk (0x1UL << MWU_REGIONENSET_RGN1WA_Pos)
#define MWU_REGIONENSET_RGN1WA_Disabled (0UL)
#define MWU_REGIONENSET_RGN1WA_Enabled (1UL)
#define MWU_REGIONENSET_RGN1WA_Set (1UL)


#define MWU_REGIONENSET_RGN0RA_Pos (1UL)
#define MWU_REGIONENSET_RGN0RA_Msk (0x1UL << MWU_REGIONENSET_RGN0RA_Pos)
#define MWU_REGIONENSET_RGN0RA_Disabled (0UL)
#define MWU_REGIONENSET_RGN0RA_Enabled (1UL)
#define MWU_REGIONENSET_RGN0RA_Set (1UL)


#define MWU_REGIONENSET_RGN0WA_Pos (0UL)
#define MWU_REGIONENSET_RGN0WA_Msk (0x1UL << MWU_REGIONENSET_RGN0WA_Pos)
#define MWU_REGIONENSET_RGN0WA_Disabled (0UL)
#define MWU_REGIONENSET_RGN0WA_Enabled (1UL)
#define MWU_REGIONENSET_RGN0WA_Set (1UL)





#define MWU_REGIONENCLR_PRGN1RA_Pos (27UL)
#define MWU_REGIONENCLR_PRGN1RA_Msk (0x1UL << MWU_REGIONENCLR_PRGN1RA_Pos)
#define MWU_REGIONENCLR_PRGN1RA_Disabled (0UL)
#define MWU_REGIONENCLR_PRGN1RA_Enabled (1UL)
#define MWU_REGIONENCLR_PRGN1RA_Clear (1UL)


#define MWU_REGIONENCLR_PRGN1WA_Pos (26UL)
#define MWU_REGIONENCLR_PRGN1WA_Msk (0x1UL << MWU_REGIONENCLR_PRGN1WA_Pos)
#define MWU_REGIONENCLR_PRGN1WA_Disabled (0UL)
#define MWU_REGIONENCLR_PRGN1WA_Enabled (1UL)
#define MWU_REGIONENCLR_PRGN1WA_Clear (1UL)


#define MWU_REGIONENCLR_PRGN0RA_Pos (25UL)
#define MWU_REGIONENCLR_PRGN0RA_Msk (0x1UL << MWU_REGIONENCLR_PRGN0RA_Pos)
#define MWU_REGIONENCLR_PRGN0RA_Disabled (0UL)
#define MWU_REGIONENCLR_PRGN0RA_Enabled (1UL)
#define MWU_REGIONENCLR_PRGN0RA_Clear (1UL)


#define MWU_REGIONENCLR_PRGN0WA_Pos (24UL)
#define MWU_REGIONENCLR_PRGN0WA_Msk (0x1UL << MWU_REGIONENCLR_PRGN0WA_Pos)
#define MWU_REGIONENCLR_PRGN0WA_Disabled (0UL)
#define MWU_REGIONENCLR_PRGN0WA_Enabled (1UL)
#define MWU_REGIONENCLR_PRGN0WA_Clear (1UL)


#define MWU_REGIONENCLR_RGN3RA_Pos (7UL)
#define MWU_REGIONENCLR_RGN3RA_Msk (0x1UL << MWU_REGIONENCLR_RGN3RA_Pos)
#define MWU_REGIONENCLR_RGN3RA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN3RA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN3RA_Clear (1UL)


#define MWU_REGIONENCLR_RGN3WA_Pos (6UL)
#define MWU_REGIONENCLR_RGN3WA_Msk (0x1UL << MWU_REGIONENCLR_RGN3WA_Pos)
#define MWU_REGIONENCLR_RGN3WA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN3WA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN3WA_Clear (1UL)


#define MWU_REGIONENCLR_RGN2RA_Pos (5UL)
#define MWU_REGIONENCLR_RGN2RA_Msk (0x1UL << MWU_REGIONENCLR_RGN2RA_Pos)
#define MWU_REGIONENCLR_RGN2RA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN2RA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN2RA_Clear (1UL)


#define MWU_REGIONENCLR_RGN2WA_Pos (4UL)
#define MWU_REGIONENCLR_RGN2WA_Msk (0x1UL << MWU_REGIONENCLR_RGN2WA_Pos)
#define MWU_REGIONENCLR_RGN2WA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN2WA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN2WA_Clear (1UL)


#define MWU_REGIONENCLR_RGN1RA_Pos (3UL)
#define MWU_REGIONENCLR_RGN1RA_Msk (0x1UL << MWU_REGIONENCLR_RGN1RA_Pos)
#define MWU_REGIONENCLR_RGN1RA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN1RA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN1RA_Clear (1UL)


#define MWU_REGIONENCLR_RGN1WA_Pos (2UL)
#define MWU_REGIONENCLR_RGN1WA_Msk (0x1UL << MWU_REGIONENCLR_RGN1WA_Pos)
#define MWU_REGIONENCLR_RGN1WA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN1WA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN1WA_Clear (1UL)


#define MWU_REGIONENCLR_RGN0RA_Pos (1UL)
#define MWU_REGIONENCLR_RGN0RA_Msk (0x1UL << MWU_REGIONENCLR_RGN0RA_Pos)
#define MWU_REGIONENCLR_RGN0RA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN0RA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN0RA_Clear (1UL)


#define MWU_REGIONENCLR_RGN0WA_Pos (0UL)
#define MWU_REGIONENCLR_RGN0WA_Msk (0x1UL << MWU_REGIONENCLR_RGN0WA_Pos)
#define MWU_REGIONENCLR_RGN0WA_Disabled (0UL)
#define MWU_REGIONENCLR_RGN0WA_Enabled (1UL)
#define MWU_REGIONENCLR_RGN0WA_Clear (1UL)





#define MWU_REGION_START_START_Pos (0UL)
#define MWU_REGION_START_START_Msk (0xFFFFFFFFUL << MWU_REGION_START_START_Pos)





#define MWU_REGION_END_END_Pos (0UL)
#define MWU_REGION_END_END_Msk (0xFFFFFFFFUL << MWU_REGION_END_END_Pos)





#define MWU_PREGION_START_START_Pos (0UL)
#define MWU_PREGION_START_START_Msk (0xFFFFFFFFUL << MWU_PREGION_START_START_Pos)





#define MWU_PREGION_END_END_Pos (0UL)
#define MWU_PREGION_END_END_Msk (0xFFFFFFFFUL << MWU_PREGION_END_END_Pos)





#define MWU_PREGION_SUBS_SR31_Pos (31UL)
#define MWU_PREGION_SUBS_SR31_Msk (0x1UL << MWU_PREGION_SUBS_SR31_Pos)
#define MWU_PREGION_SUBS_SR31_Exclude (0UL)
#define MWU_PREGION_SUBS_SR31_Include (1UL)


#define MWU_PREGION_SUBS_SR30_Pos (30UL)
#define MWU_PREGION_SUBS_SR30_Msk (0x1UL << MWU_PREGION_SUBS_SR30_Pos)
#define MWU_PREGION_SUBS_SR30_Exclude (0UL)
#define MWU_PREGION_SUBS_SR30_Include (1UL)


#define MWU_PREGION_SUBS_SR29_Pos (29UL)
#define MWU_PREGION_SUBS_SR29_Msk (0x1UL << MWU_PREGION_SUBS_SR29_Pos)
#define MWU_PREGION_SUBS_SR29_Exclude (0UL)
#define MWU_PREGION_SUBS_SR29_Include (1UL)


#define MWU_PREGION_SUBS_SR28_Pos (28UL)
#define MWU_PREGION_SUBS_SR28_Msk (0x1UL << MWU_PREGION_SUBS_SR28_Pos)
#define MWU_PREGION_SUBS_SR28_Exclude (0UL)
#define MWU_PREGION_SUBS_SR28_Include (1UL)


#define MWU_PREGION_SUBS_SR27_Pos (27UL)
#define MWU_PREGION_SUBS_SR27_Msk (0x1UL << MWU_PREGION_SUBS_SR27_Pos)
#define MWU_PREGION_SUBS_SR27_Exclude (0UL)
#define MWU_PREGION_SUBS_SR27_Include (1UL)


#define MWU_PREGION_SUBS_SR26_Pos (26UL)
#define MWU_PREGION_SUBS_SR26_Msk (0x1UL << MWU_PREGION_SUBS_SR26_Pos)
#define MWU_PREGION_SUBS_SR26_Exclude (0UL)
#define MWU_PREGION_SUBS_SR26_Include (1UL)


#define MWU_PREGION_SUBS_SR25_Pos (25UL)
#define MWU_PREGION_SUBS_SR25_Msk (0x1UL << MWU_PREGION_SUBS_SR25_Pos)
#define MWU_PREGION_SUBS_SR25_Exclude (0UL)
#define MWU_PREGION_SUBS_SR25_Include (1UL)


#define MWU_PREGION_SUBS_SR24_Pos (24UL)
#define MWU_PREGION_SUBS_SR24_Msk (0x1UL << MWU_PREGION_SUBS_SR24_Pos)
#define MWU_PREGION_SUBS_SR24_Exclude (0UL)
#define MWU_PREGION_SUBS_SR24_Include (1UL)


#define MWU_PREGION_SUBS_SR23_Pos (23UL)
#define MWU_PREGION_SUBS_SR23_Msk (0x1UL << MWU_PREGION_SUBS_SR23_Pos)
#define MWU_PREGION_SUBS_SR23_Exclude (0UL)
#define MWU_PREGION_SUBS_SR23_Include (1UL)


#define MWU_PREGION_SUBS_SR22_Pos (22UL)
#define MWU_PREGION_SUBS_SR22_Msk (0x1UL << MWU_PREGION_SUBS_SR22_Pos)
#define MWU_PREGION_SUBS_SR22_Exclude (0UL)
#define MWU_PREGION_SUBS_SR22_Include (1UL)


#define MWU_PREGION_SUBS_SR21_Pos (21UL)
#define MWU_PREGION_SUBS_SR21_Msk (0x1UL << MWU_PREGION_SUBS_SR21_Pos)
#define MWU_PREGION_SUBS_SR21_Exclude (0UL)
#define MWU_PREGION_SUBS_SR21_Include (1UL)


#define MWU_PREGION_SUBS_SR20_Pos (20UL)
#define MWU_PREGION_SUBS_SR20_Msk (0x1UL << MWU_PREGION_SUBS_SR20_Pos)
#define MWU_PREGION_SUBS_SR20_Exclude (0UL)
#define MWU_PREGION_SUBS_SR20_Include (1UL)


#define MWU_PREGION_SUBS_SR19_Pos (19UL)
#define MWU_PREGION_SUBS_SR19_Msk (0x1UL << MWU_PREGION_SUBS_SR19_Pos)
#define MWU_PREGION_SUBS_SR19_Exclude (0UL)
#define MWU_PREGION_SUBS_SR19_Include (1UL)


#define MWU_PREGION_SUBS_SR18_Pos (18UL)
#define MWU_PREGION_SUBS_SR18_Msk (0x1UL << MWU_PREGION_SUBS_SR18_Pos)
#define MWU_PREGION_SUBS_SR18_Exclude (0UL)
#define MWU_PREGION_SUBS_SR18_Include (1UL)


#define MWU_PREGION_SUBS_SR17_Pos (17UL)
#define MWU_PREGION_SUBS_SR17_Msk (0x1UL << MWU_PREGION_SUBS_SR17_Pos)
#define MWU_PREGION_SUBS_SR17_Exclude (0UL)
#define MWU_PREGION_SUBS_SR17_Include (1UL)


#define MWU_PREGION_SUBS_SR16_Pos (16UL)
#define MWU_PREGION_SUBS_SR16_Msk (0x1UL << MWU_PREGION_SUBS_SR16_Pos)
#define MWU_PREGION_SUBS_SR16_Exclude (0UL)
#define MWU_PREGION_SUBS_SR16_Include (1UL)


#define MWU_PREGION_SUBS_SR15_Pos (15UL)
#define MWU_PREGION_SUBS_SR15_Msk (0x1UL << MWU_PREGION_SUBS_SR15_Pos)
#define MWU_PREGION_SUBS_SR15_Exclude (0UL)
#define MWU_PREGION_SUBS_SR15_Include (1UL)


#define MWU_PREGION_SUBS_SR14_Pos (14UL)
#define MWU_PREGION_SUBS_SR14_Msk (0x1UL << MWU_PREGION_SUBS_SR14_Pos)
#define MWU_PREGION_SUBS_SR14_Exclude (0UL)
#define MWU_PREGION_SUBS_SR14_Include (1UL)


#define MWU_PREGION_SUBS_SR13_Pos (13UL)
#define MWU_PREGION_SUBS_SR13_Msk (0x1UL << MWU_PREGION_SUBS_SR13_Pos)
#define MWU_PREGION_SUBS_SR13_Exclude (0UL)
#define MWU_PREGION_SUBS_SR13_Include (1UL)


#define MWU_PREGION_SUBS_SR12_Pos (12UL)
#define MWU_PREGION_SUBS_SR12_Msk (0x1UL << MWU_PREGION_SUBS_SR12_Pos)
#define MWU_PREGION_SUBS_SR12_Exclude (0UL)
#define MWU_PREGION_SUBS_SR12_Include (1UL)


#define MWU_PREGION_SUBS_SR11_Pos (11UL)
#define MWU_PREGION_SUBS_SR11_Msk (0x1UL << MWU_PREGION_SUBS_SR11_Pos)
#define MWU_PREGION_SUBS_SR11_Exclude (0UL)
#define MWU_PREGION_SUBS_SR11_Include (1UL)


#define MWU_PREGION_SUBS_SR10_Pos (10UL)
#define MWU_PREGION_SUBS_SR10_Msk (0x1UL << MWU_PREGION_SUBS_SR10_Pos)
#define MWU_PREGION_SUBS_SR10_Exclude (0UL)
#define MWU_PREGION_SUBS_SR10_Include (1UL)


#define MWU_PREGION_SUBS_SR9_Pos (9UL)
#define MWU_PREGION_SUBS_SR9_Msk (0x1UL << MWU_PREGION_SUBS_SR9_Pos)
#define MWU_PREGION_SUBS_SR9_Exclude (0UL)
#define MWU_PREGION_SUBS_SR9_Include (1UL)


#define MWU_PREGION_SUBS_SR8_Pos (8UL)
#define MWU_PREGION_SUBS_SR8_Msk (0x1UL << MWU_PREGION_SUBS_SR8_Pos)
#define MWU_PREGION_SUBS_SR8_Exclude (0UL)
#define MWU_PREGION_SUBS_SR8_Include (1UL)


#define MWU_PREGION_SUBS_SR7_Pos (7UL)
#define MWU_PREGION_SUBS_SR7_Msk (0x1UL << MWU_PREGION_SUBS_SR7_Pos)
#define MWU_PREGION_SUBS_SR7_Exclude (0UL)
#define MWU_PREGION_SUBS_SR7_Include (1UL)


#define MWU_PREGION_SUBS_SR6_Pos (6UL)
#define MWU_PREGION_SUBS_SR6_Msk (0x1UL << MWU_PREGION_SUBS_SR6_Pos)
#define MWU_PREGION_SUBS_SR6_Exclude (0UL)
#define MWU_PREGION_SUBS_SR6_Include (1UL)


#define MWU_PREGION_SUBS_SR5_Pos (5UL)
#define MWU_PREGION_SUBS_SR5_Msk (0x1UL << MWU_PREGION_SUBS_SR5_Pos)
#define MWU_PREGION_SUBS_SR5_Exclude (0UL)
#define MWU_PREGION_SUBS_SR5_Include (1UL)


#define MWU_PREGION_SUBS_SR4_Pos (4UL)
#define MWU_PREGION_SUBS_SR4_Msk (0x1UL << MWU_PREGION_SUBS_SR4_Pos)
#define MWU_PREGION_SUBS_SR4_Exclude (0UL)
#define MWU_PREGION_SUBS_SR4_Include (1UL)


#define MWU_PREGION_SUBS_SR3_Pos (3UL)
#define MWU_PREGION_SUBS_SR3_Msk (0x1UL << MWU_PREGION_SUBS_SR3_Pos)
#define MWU_PREGION_SUBS_SR3_Exclude (0UL)
#define MWU_PREGION_SUBS_SR3_Include (1UL)


#define MWU_PREGION_SUBS_SR2_Pos (2UL)
#define MWU_PREGION_SUBS_SR2_Msk (0x1UL << MWU_PREGION_SUBS_SR2_Pos)
#define MWU_PREGION_SUBS_SR2_Exclude (0UL)
#define MWU_PREGION_SUBS_SR2_Include (1UL)


#define MWU_PREGION_SUBS_SR1_Pos (1UL)
#define MWU_PREGION_SUBS_SR1_Msk (0x1UL << MWU_PREGION_SUBS_SR1_Pos)
#define MWU_PREGION_SUBS_SR1_Exclude (0UL)
#define MWU_PREGION_SUBS_SR1_Include (1UL)


#define MWU_PREGION_SUBS_SR0_Pos (0UL)
#define MWU_PREGION_SUBS_SR0_Msk (0x1UL << MWU_PREGION_SUBS_SR0_Pos)
#define MWU_PREGION_SUBS_SR0_Exclude (0UL)
#define MWU_PREGION_SUBS_SR0_Include (1UL)
# 4132 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos (0UL)
#define NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Msk (0x1UL << NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos)
#define NFCT_TASKS_ACTIVATE_TASKS_ACTIVATE_Trigger (1UL)





#define NFCT_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL)
#define NFCT_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << NFCT_TASKS_DISABLE_TASKS_DISABLE_Pos)
#define NFCT_TASKS_DISABLE_TASKS_DISABLE_Trigger (1UL)





#define NFCT_TASKS_SENSE_TASKS_SENSE_Pos (0UL)
#define NFCT_TASKS_SENSE_TASKS_SENSE_Msk (0x1UL << NFCT_TASKS_SENSE_TASKS_SENSE_Pos)
#define NFCT_TASKS_SENSE_TASKS_SENSE_Trigger (1UL)





#define NFCT_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define NFCT_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << NFCT_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define NFCT_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)





#define NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Pos (0UL)
#define NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Msk (0x1UL << NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Pos)
#define NFCT_TASKS_ENABLERXDATA_TASKS_ENABLERXDATA_Trigger (1UL)





#define NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Pos (0UL)
#define NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Msk (0x1UL << NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Pos)
#define NFCT_TASKS_GOIDLE_TASKS_GOIDLE_Trigger (1UL)





#define NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Pos (0UL)
#define NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Msk (0x1UL << NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Pos)
#define NFCT_TASKS_GOSLEEP_TASKS_GOSLEEP_Trigger (1UL)





#define NFCT_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define NFCT_EVENTS_READY_EVENTS_READY_Msk (0x1UL << NFCT_EVENTS_READY_EVENTS_READY_Pos)
#define NFCT_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define NFCT_EVENTS_READY_EVENTS_READY_Generated (1UL)





#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Pos (0UL)
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Msk (0x1UL << NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Pos)
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_NotGenerated (0UL)
#define NFCT_EVENTS_FIELDDETECTED_EVENTS_FIELDDETECTED_Generated (1UL)





#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Pos (0UL)
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Msk (0x1UL << NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Pos)
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_NotGenerated (0UL)
#define NFCT_EVENTS_FIELDLOST_EVENTS_FIELDLOST_Generated (1UL)





#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Pos (0UL)
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Msk (0x1UL << NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Pos)
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_NotGenerated (0UL)
#define NFCT_EVENTS_TXFRAMESTART_EVENTS_TXFRAMESTART_Generated (1UL)





#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Pos (0UL)
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Msk (0x1UL << NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Pos)
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_NotGenerated (0UL)
#define NFCT_EVENTS_TXFRAMEEND_EVENTS_TXFRAMEEND_Generated (1UL)





#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Pos (0UL)
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Msk (0x1UL << NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Pos)
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_NotGenerated (0UL)
#define NFCT_EVENTS_RXFRAMESTART_EVENTS_RXFRAMESTART_Generated (1UL)





#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Pos (0UL)
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Msk (0x1UL << NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Pos)
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_NotGenerated (0UL)
#define NFCT_EVENTS_RXFRAMEEND_EVENTS_RXFRAMEEND_Generated (1UL)





#define NFCT_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << NFCT_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define NFCT_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)





#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Pos (0UL)
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Msk (0x1UL << NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Pos)
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_NotGenerated (0UL)
#define NFCT_EVENTS_RXERROR_EVENTS_RXERROR_Generated (1UL)





#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL)
#define NFCT_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL)





#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL)
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Pos)
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0UL)
#define NFCT_EVENTS_ENDTX_EVENTS_ENDTX_Generated (1UL)





#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Pos (0UL)
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Pos)
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_NotGenerated (0UL)
#define NFCT_EVENTS_AUTOCOLRESSTARTED_EVENTS_AUTOCOLRESSTARTED_Generated (1UL)





#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Pos (0UL)
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Msk (0x1UL << NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Pos)
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_NotGenerated (0UL)
#define NFCT_EVENTS_COLLISION_EVENTS_COLLISION_Generated (1UL)





#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Pos (0UL)
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Msk (0x1UL << NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Pos)
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_NotGenerated (0UL)
#define NFCT_EVENTS_SELECTED_EVENTS_SELECTED_Generated (1UL)





#define NFCT_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << NFCT_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define NFCT_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)





#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Pos (5UL)
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Msk (0x1UL << NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Pos)
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Disabled (0UL)
#define NFCT_SHORTS_TXFRAMEEND_ENABLERXDATA_Enabled (1UL)


#define NFCT_SHORTS_FIELDLOST_SENSE_Pos (1UL)
#define NFCT_SHORTS_FIELDLOST_SENSE_Msk (0x1UL << NFCT_SHORTS_FIELDLOST_SENSE_Pos)
#define NFCT_SHORTS_FIELDLOST_SENSE_Disabled (0UL)
#define NFCT_SHORTS_FIELDLOST_SENSE_Enabled (1UL)


#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Pos (0UL)
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Msk (0x1UL << NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Pos)
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Disabled (0UL)
#define NFCT_SHORTS_FIELDDETECTED_ACTIVATE_Enabled (1UL)





#define NFCT_INTEN_STARTED_Pos (20UL)
#define NFCT_INTEN_STARTED_Msk (0x1UL << NFCT_INTEN_STARTED_Pos)
#define NFCT_INTEN_STARTED_Disabled (0UL)
#define NFCT_INTEN_STARTED_Enabled (1UL)


#define NFCT_INTEN_SELECTED_Pos (19UL)
#define NFCT_INTEN_SELECTED_Msk (0x1UL << NFCT_INTEN_SELECTED_Pos)
#define NFCT_INTEN_SELECTED_Disabled (0UL)
#define NFCT_INTEN_SELECTED_Enabled (1UL)


#define NFCT_INTEN_COLLISION_Pos (18UL)
#define NFCT_INTEN_COLLISION_Msk (0x1UL << NFCT_INTEN_COLLISION_Pos)
#define NFCT_INTEN_COLLISION_Disabled (0UL)
#define NFCT_INTEN_COLLISION_Enabled (1UL)


#define NFCT_INTEN_AUTOCOLRESSTARTED_Pos (14UL)
#define NFCT_INTEN_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_INTEN_AUTOCOLRESSTARTED_Pos)
#define NFCT_INTEN_AUTOCOLRESSTARTED_Disabled (0UL)
#define NFCT_INTEN_AUTOCOLRESSTARTED_Enabled (1UL)


#define NFCT_INTEN_ENDTX_Pos (12UL)
#define NFCT_INTEN_ENDTX_Msk (0x1UL << NFCT_INTEN_ENDTX_Pos)
#define NFCT_INTEN_ENDTX_Disabled (0UL)
#define NFCT_INTEN_ENDTX_Enabled (1UL)


#define NFCT_INTEN_ENDRX_Pos (11UL)
#define NFCT_INTEN_ENDRX_Msk (0x1UL << NFCT_INTEN_ENDRX_Pos)
#define NFCT_INTEN_ENDRX_Disabled (0UL)
#define NFCT_INTEN_ENDRX_Enabled (1UL)


#define NFCT_INTEN_RXERROR_Pos (10UL)
#define NFCT_INTEN_RXERROR_Msk (0x1UL << NFCT_INTEN_RXERROR_Pos)
#define NFCT_INTEN_RXERROR_Disabled (0UL)
#define NFCT_INTEN_RXERROR_Enabled (1UL)


#define NFCT_INTEN_ERROR_Pos (7UL)
#define NFCT_INTEN_ERROR_Msk (0x1UL << NFCT_INTEN_ERROR_Pos)
#define NFCT_INTEN_ERROR_Disabled (0UL)
#define NFCT_INTEN_ERROR_Enabled (1UL)


#define NFCT_INTEN_RXFRAMEEND_Pos (6UL)
#define NFCT_INTEN_RXFRAMEEND_Msk (0x1UL << NFCT_INTEN_RXFRAMEEND_Pos)
#define NFCT_INTEN_RXFRAMEEND_Disabled (0UL)
#define NFCT_INTEN_RXFRAMEEND_Enabled (1UL)


#define NFCT_INTEN_RXFRAMESTART_Pos (5UL)
#define NFCT_INTEN_RXFRAMESTART_Msk (0x1UL << NFCT_INTEN_RXFRAMESTART_Pos)
#define NFCT_INTEN_RXFRAMESTART_Disabled (0UL)
#define NFCT_INTEN_RXFRAMESTART_Enabled (1UL)


#define NFCT_INTEN_TXFRAMEEND_Pos (4UL)
#define NFCT_INTEN_TXFRAMEEND_Msk (0x1UL << NFCT_INTEN_TXFRAMEEND_Pos)
#define NFCT_INTEN_TXFRAMEEND_Disabled (0UL)
#define NFCT_INTEN_TXFRAMEEND_Enabled (1UL)


#define NFCT_INTEN_TXFRAMESTART_Pos (3UL)
#define NFCT_INTEN_TXFRAMESTART_Msk (0x1UL << NFCT_INTEN_TXFRAMESTART_Pos)
#define NFCT_INTEN_TXFRAMESTART_Disabled (0UL)
#define NFCT_INTEN_TXFRAMESTART_Enabled (1UL)


#define NFCT_INTEN_FIELDLOST_Pos (2UL)
#define NFCT_INTEN_FIELDLOST_Msk (0x1UL << NFCT_INTEN_FIELDLOST_Pos)
#define NFCT_INTEN_FIELDLOST_Disabled (0UL)
#define NFCT_INTEN_FIELDLOST_Enabled (1UL)


#define NFCT_INTEN_FIELDDETECTED_Pos (1UL)
#define NFCT_INTEN_FIELDDETECTED_Msk (0x1UL << NFCT_INTEN_FIELDDETECTED_Pos)
#define NFCT_INTEN_FIELDDETECTED_Disabled (0UL)
#define NFCT_INTEN_FIELDDETECTED_Enabled (1UL)


#define NFCT_INTEN_READY_Pos (0UL)
#define NFCT_INTEN_READY_Msk (0x1UL << NFCT_INTEN_READY_Pos)
#define NFCT_INTEN_READY_Disabled (0UL)
#define NFCT_INTEN_READY_Enabled (1UL)





#define NFCT_INTENSET_STARTED_Pos (20UL)
#define NFCT_INTENSET_STARTED_Msk (0x1UL << NFCT_INTENSET_STARTED_Pos)
#define NFCT_INTENSET_STARTED_Disabled (0UL)
#define NFCT_INTENSET_STARTED_Enabled (1UL)
#define NFCT_INTENSET_STARTED_Set (1UL)


#define NFCT_INTENSET_SELECTED_Pos (19UL)
#define NFCT_INTENSET_SELECTED_Msk (0x1UL << NFCT_INTENSET_SELECTED_Pos)
#define NFCT_INTENSET_SELECTED_Disabled (0UL)
#define NFCT_INTENSET_SELECTED_Enabled (1UL)
#define NFCT_INTENSET_SELECTED_Set (1UL)


#define NFCT_INTENSET_COLLISION_Pos (18UL)
#define NFCT_INTENSET_COLLISION_Msk (0x1UL << NFCT_INTENSET_COLLISION_Pos)
#define NFCT_INTENSET_COLLISION_Disabled (0UL)
#define NFCT_INTENSET_COLLISION_Enabled (1UL)
#define NFCT_INTENSET_COLLISION_Set (1UL)


#define NFCT_INTENSET_AUTOCOLRESSTARTED_Pos (14UL)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_INTENSET_AUTOCOLRESSTARTED_Pos)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Disabled (0UL)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Enabled (1UL)
#define NFCT_INTENSET_AUTOCOLRESSTARTED_Set (1UL)


#define NFCT_INTENSET_ENDTX_Pos (12UL)
#define NFCT_INTENSET_ENDTX_Msk (0x1UL << NFCT_INTENSET_ENDTX_Pos)
#define NFCT_INTENSET_ENDTX_Disabled (0UL)
#define NFCT_INTENSET_ENDTX_Enabled (1UL)
#define NFCT_INTENSET_ENDTX_Set (1UL)


#define NFCT_INTENSET_ENDRX_Pos (11UL)
#define NFCT_INTENSET_ENDRX_Msk (0x1UL << NFCT_INTENSET_ENDRX_Pos)
#define NFCT_INTENSET_ENDRX_Disabled (0UL)
#define NFCT_INTENSET_ENDRX_Enabled (1UL)
#define NFCT_INTENSET_ENDRX_Set (1UL)


#define NFCT_INTENSET_RXERROR_Pos (10UL)
#define NFCT_INTENSET_RXERROR_Msk (0x1UL << NFCT_INTENSET_RXERROR_Pos)
#define NFCT_INTENSET_RXERROR_Disabled (0UL)
#define NFCT_INTENSET_RXERROR_Enabled (1UL)
#define NFCT_INTENSET_RXERROR_Set (1UL)


#define NFCT_INTENSET_ERROR_Pos (7UL)
#define NFCT_INTENSET_ERROR_Msk (0x1UL << NFCT_INTENSET_ERROR_Pos)
#define NFCT_INTENSET_ERROR_Disabled (0UL)
#define NFCT_INTENSET_ERROR_Enabled (1UL)
#define NFCT_INTENSET_ERROR_Set (1UL)


#define NFCT_INTENSET_RXFRAMEEND_Pos (6UL)
#define NFCT_INTENSET_RXFRAMEEND_Msk (0x1UL << NFCT_INTENSET_RXFRAMEEND_Pos)
#define NFCT_INTENSET_RXFRAMEEND_Disabled (0UL)
#define NFCT_INTENSET_RXFRAMEEND_Enabled (1UL)
#define NFCT_INTENSET_RXFRAMEEND_Set (1UL)


#define NFCT_INTENSET_RXFRAMESTART_Pos (5UL)
#define NFCT_INTENSET_RXFRAMESTART_Msk (0x1UL << NFCT_INTENSET_RXFRAMESTART_Pos)
#define NFCT_INTENSET_RXFRAMESTART_Disabled (0UL)
#define NFCT_INTENSET_RXFRAMESTART_Enabled (1UL)
#define NFCT_INTENSET_RXFRAMESTART_Set (1UL)


#define NFCT_INTENSET_TXFRAMEEND_Pos (4UL)
#define NFCT_INTENSET_TXFRAMEEND_Msk (0x1UL << NFCT_INTENSET_TXFRAMEEND_Pos)
#define NFCT_INTENSET_TXFRAMEEND_Disabled (0UL)
#define NFCT_INTENSET_TXFRAMEEND_Enabled (1UL)
#define NFCT_INTENSET_TXFRAMEEND_Set (1UL)


#define NFCT_INTENSET_TXFRAMESTART_Pos (3UL)
#define NFCT_INTENSET_TXFRAMESTART_Msk (0x1UL << NFCT_INTENSET_TXFRAMESTART_Pos)
#define NFCT_INTENSET_TXFRAMESTART_Disabled (0UL)
#define NFCT_INTENSET_TXFRAMESTART_Enabled (1UL)
#define NFCT_INTENSET_TXFRAMESTART_Set (1UL)


#define NFCT_INTENSET_FIELDLOST_Pos (2UL)
#define NFCT_INTENSET_FIELDLOST_Msk (0x1UL << NFCT_INTENSET_FIELDLOST_Pos)
#define NFCT_INTENSET_FIELDLOST_Disabled (0UL)
#define NFCT_INTENSET_FIELDLOST_Enabled (1UL)
#define NFCT_INTENSET_FIELDLOST_Set (1UL)


#define NFCT_INTENSET_FIELDDETECTED_Pos (1UL)
#define NFCT_INTENSET_FIELDDETECTED_Msk (0x1UL << NFCT_INTENSET_FIELDDETECTED_Pos)
#define NFCT_INTENSET_FIELDDETECTED_Disabled (0UL)
#define NFCT_INTENSET_FIELDDETECTED_Enabled (1UL)
#define NFCT_INTENSET_FIELDDETECTED_Set (1UL)


#define NFCT_INTENSET_READY_Pos (0UL)
#define NFCT_INTENSET_READY_Msk (0x1UL << NFCT_INTENSET_READY_Pos)
#define NFCT_INTENSET_READY_Disabled (0UL)
#define NFCT_INTENSET_READY_Enabled (1UL)
#define NFCT_INTENSET_READY_Set (1UL)





#define NFCT_INTENCLR_STARTED_Pos (20UL)
#define NFCT_INTENCLR_STARTED_Msk (0x1UL << NFCT_INTENCLR_STARTED_Pos)
#define NFCT_INTENCLR_STARTED_Disabled (0UL)
#define NFCT_INTENCLR_STARTED_Enabled (1UL)
#define NFCT_INTENCLR_STARTED_Clear (1UL)


#define NFCT_INTENCLR_SELECTED_Pos (19UL)
#define NFCT_INTENCLR_SELECTED_Msk (0x1UL << NFCT_INTENCLR_SELECTED_Pos)
#define NFCT_INTENCLR_SELECTED_Disabled (0UL)
#define NFCT_INTENCLR_SELECTED_Enabled (1UL)
#define NFCT_INTENCLR_SELECTED_Clear (1UL)


#define NFCT_INTENCLR_COLLISION_Pos (18UL)
#define NFCT_INTENCLR_COLLISION_Msk (0x1UL << NFCT_INTENCLR_COLLISION_Pos)
#define NFCT_INTENCLR_COLLISION_Disabled (0UL)
#define NFCT_INTENCLR_COLLISION_Enabled (1UL)
#define NFCT_INTENCLR_COLLISION_Clear (1UL)


#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Pos (14UL)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Msk (0x1UL << NFCT_INTENCLR_AUTOCOLRESSTARTED_Pos)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Disabled (0UL)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Enabled (1UL)
#define NFCT_INTENCLR_AUTOCOLRESSTARTED_Clear (1UL)


#define NFCT_INTENCLR_ENDTX_Pos (12UL)
#define NFCT_INTENCLR_ENDTX_Msk (0x1UL << NFCT_INTENCLR_ENDTX_Pos)
#define NFCT_INTENCLR_ENDTX_Disabled (0UL)
#define NFCT_INTENCLR_ENDTX_Enabled (1UL)
#define NFCT_INTENCLR_ENDTX_Clear (1UL)


#define NFCT_INTENCLR_ENDRX_Pos (11UL)
#define NFCT_INTENCLR_ENDRX_Msk (0x1UL << NFCT_INTENCLR_ENDRX_Pos)
#define NFCT_INTENCLR_ENDRX_Disabled (0UL)
#define NFCT_INTENCLR_ENDRX_Enabled (1UL)
#define NFCT_INTENCLR_ENDRX_Clear (1UL)


#define NFCT_INTENCLR_RXERROR_Pos (10UL)
#define NFCT_INTENCLR_RXERROR_Msk (0x1UL << NFCT_INTENCLR_RXERROR_Pos)
#define NFCT_INTENCLR_RXERROR_Disabled (0UL)
#define NFCT_INTENCLR_RXERROR_Enabled (1UL)
#define NFCT_INTENCLR_RXERROR_Clear (1UL)


#define NFCT_INTENCLR_ERROR_Pos (7UL)
#define NFCT_INTENCLR_ERROR_Msk (0x1UL << NFCT_INTENCLR_ERROR_Pos)
#define NFCT_INTENCLR_ERROR_Disabled (0UL)
#define NFCT_INTENCLR_ERROR_Enabled (1UL)
#define NFCT_INTENCLR_ERROR_Clear (1UL)


#define NFCT_INTENCLR_RXFRAMEEND_Pos (6UL)
#define NFCT_INTENCLR_RXFRAMEEND_Msk (0x1UL << NFCT_INTENCLR_RXFRAMEEND_Pos)
#define NFCT_INTENCLR_RXFRAMEEND_Disabled (0UL)
#define NFCT_INTENCLR_RXFRAMEEND_Enabled (1UL)
#define NFCT_INTENCLR_RXFRAMEEND_Clear (1UL)


#define NFCT_INTENCLR_RXFRAMESTART_Pos (5UL)
#define NFCT_INTENCLR_RXFRAMESTART_Msk (0x1UL << NFCT_INTENCLR_RXFRAMESTART_Pos)
#define NFCT_INTENCLR_RXFRAMESTART_Disabled (0UL)
#define NFCT_INTENCLR_RXFRAMESTART_Enabled (1UL)
#define NFCT_INTENCLR_RXFRAMESTART_Clear (1UL)


#define NFCT_INTENCLR_TXFRAMEEND_Pos (4UL)
#define NFCT_INTENCLR_TXFRAMEEND_Msk (0x1UL << NFCT_INTENCLR_TXFRAMEEND_Pos)
#define NFCT_INTENCLR_TXFRAMEEND_Disabled (0UL)
#define NFCT_INTENCLR_TXFRAMEEND_Enabled (1UL)
#define NFCT_INTENCLR_TXFRAMEEND_Clear (1UL)


#define NFCT_INTENCLR_TXFRAMESTART_Pos (3UL)
#define NFCT_INTENCLR_TXFRAMESTART_Msk (0x1UL << NFCT_INTENCLR_TXFRAMESTART_Pos)
#define NFCT_INTENCLR_TXFRAMESTART_Disabled (0UL)
#define NFCT_INTENCLR_TXFRAMESTART_Enabled (1UL)
#define NFCT_INTENCLR_TXFRAMESTART_Clear (1UL)


#define NFCT_INTENCLR_FIELDLOST_Pos (2UL)
#define NFCT_INTENCLR_FIELDLOST_Msk (0x1UL << NFCT_INTENCLR_FIELDLOST_Pos)
#define NFCT_INTENCLR_FIELDLOST_Disabled (0UL)
#define NFCT_INTENCLR_FIELDLOST_Enabled (1UL)
#define NFCT_INTENCLR_FIELDLOST_Clear (1UL)


#define NFCT_INTENCLR_FIELDDETECTED_Pos (1UL)
#define NFCT_INTENCLR_FIELDDETECTED_Msk (0x1UL << NFCT_INTENCLR_FIELDDETECTED_Pos)
#define NFCT_INTENCLR_FIELDDETECTED_Disabled (0UL)
#define NFCT_INTENCLR_FIELDDETECTED_Enabled (1UL)
#define NFCT_INTENCLR_FIELDDETECTED_Clear (1UL)


#define NFCT_INTENCLR_READY_Pos (0UL)
#define NFCT_INTENCLR_READY_Msk (0x1UL << NFCT_INTENCLR_READY_Pos)
#define NFCT_INTENCLR_READY_Disabled (0UL)
#define NFCT_INTENCLR_READY_Enabled (1UL)
#define NFCT_INTENCLR_READY_Clear (1UL)





#define NFCT_ERRORSTATUS_FRAMEDELAYTIMEOUT_Pos (0UL)
#define NFCT_ERRORSTATUS_FRAMEDELAYTIMEOUT_Msk (0x1UL << NFCT_ERRORSTATUS_FRAMEDELAYTIMEOUT_Pos)





#define NFCT_FRAMESTATUS_RX_OVERRUN_Pos (3UL)
#define NFCT_FRAMESTATUS_RX_OVERRUN_Msk (0x1UL << NFCT_FRAMESTATUS_RX_OVERRUN_Pos)
#define NFCT_FRAMESTATUS_RX_OVERRUN_NoOverrun (0UL)
#define NFCT_FRAMESTATUS_RX_OVERRUN_Overrun (1UL)


#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_Pos (2UL)
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_Msk (0x1UL << NFCT_FRAMESTATUS_RX_PARITYSTATUS_Pos)
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_ParityOK (0UL)
#define NFCT_FRAMESTATUS_RX_PARITYSTATUS_ParityError (1UL)


#define NFCT_FRAMESTATUS_RX_CRCERROR_Pos (0UL)
#define NFCT_FRAMESTATUS_RX_CRCERROR_Msk (0x1UL << NFCT_FRAMESTATUS_RX_CRCERROR_Pos)
#define NFCT_FRAMESTATUS_RX_CRCERROR_CRCCorrect (0UL)
#define NFCT_FRAMESTATUS_RX_CRCERROR_CRCError (1UL)





#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Pos (0UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Msk (0x7UL << NFCT_NFCTAGSTATE_NFCTAGSTATE_Pos)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Disabled (0UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_RampUp (2UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Idle (3UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Receive (4UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_FrameDelay (5UL)
#define NFCT_NFCTAGSTATE_NFCTAGSTATE_Transmit (6UL)







#define NFCT_SLEEPSTATE_SLEEPSTATE_Pos (0UL)
#define NFCT_SLEEPSTATE_SLEEPSTATE_Msk (0x1UL << NFCT_SLEEPSTATE_SLEEPSTATE_Pos)
#define NFCT_SLEEPSTATE_SLEEPSTATE_Idle (0UL)
#define NFCT_SLEEPSTATE_SLEEPSTATE_SleepA (1UL)





#define NFCT_FIELDPRESENT_LOCKDETECT_Pos (1UL)
#define NFCT_FIELDPRESENT_LOCKDETECT_Msk (0x1UL << NFCT_FIELDPRESENT_LOCKDETECT_Pos)
#define NFCT_FIELDPRESENT_LOCKDETECT_NotLocked (0UL)
#define NFCT_FIELDPRESENT_LOCKDETECT_Locked (1UL)


#define NFCT_FIELDPRESENT_FIELDPRESENT_Pos (0UL)
#define NFCT_FIELDPRESENT_FIELDPRESENT_Msk (0x1UL << NFCT_FIELDPRESENT_FIELDPRESENT_Pos)
#define NFCT_FIELDPRESENT_FIELDPRESENT_NoField (0UL)
#define NFCT_FIELDPRESENT_FIELDPRESENT_FieldPresent (1UL)





#define NFCT_FRAMEDELAYMIN_FRAMEDELAYMIN_Pos (0UL)
#define NFCT_FRAMEDELAYMIN_FRAMEDELAYMIN_Msk (0xFFFFUL << NFCT_FRAMEDELAYMIN_FRAMEDELAYMIN_Pos)





#define NFCT_FRAMEDELAYMAX_FRAMEDELAYMAX_Pos (0UL)
#define NFCT_FRAMEDELAYMAX_FRAMEDELAYMAX_Msk (0xFFFFFUL << NFCT_FRAMEDELAYMAX_FRAMEDELAYMAX_Pos)





#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Pos (0UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Msk (0x3UL << NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Pos)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_FreeRun (0UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_Window (1UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_ExactVal (2UL)
#define NFCT_FRAMEDELAYMODE_FRAMEDELAYMODE_WindowGrid (3UL)





#define NFCT_PACKETPTR_PTR_Pos (0UL)
#define NFCT_PACKETPTR_PTR_Msk (0xFFFFFFFFUL << NFCT_PACKETPTR_PTR_Pos)





#define NFCT_MAXLEN_MAXLEN_Pos (0UL)
#define NFCT_MAXLEN_MAXLEN_Msk (0x1FFUL << NFCT_MAXLEN_MAXLEN_Pos)





#define NFCT_TXD_FRAMECONFIG_CRCMODETX_Pos (4UL)
#define NFCT_TXD_FRAMECONFIG_CRCMODETX_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_CRCMODETX_Pos)
#define NFCT_TXD_FRAMECONFIG_CRCMODETX_NoCRCTX (0UL)
#define NFCT_TXD_FRAMECONFIG_CRCMODETX_CRC16TX (1UL)


#define NFCT_TXD_FRAMECONFIG_SOF_Pos (2UL)
#define NFCT_TXD_FRAMECONFIG_SOF_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_SOF_Pos)
#define NFCT_TXD_FRAMECONFIG_SOF_NoSoF (0UL)
#define NFCT_TXD_FRAMECONFIG_SOF_SoF (1UL)


#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_Pos (1UL)
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_DISCARDMODE_Pos)
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_DiscardEnd (0UL)
#define NFCT_TXD_FRAMECONFIG_DISCARDMODE_DiscardStart (1UL)


#define NFCT_TXD_FRAMECONFIG_PARITY_Pos (0UL)
#define NFCT_TXD_FRAMECONFIG_PARITY_Msk (0x1UL << NFCT_TXD_FRAMECONFIG_PARITY_Pos)
#define NFCT_TXD_FRAMECONFIG_PARITY_NoParity (0UL)
#define NFCT_TXD_FRAMECONFIG_PARITY_Parity (1UL)





#define NFCT_TXD_AMOUNT_TXDATABYTES_Pos (3UL)
#define NFCT_TXD_AMOUNT_TXDATABYTES_Msk (0x1FFUL << NFCT_TXD_AMOUNT_TXDATABYTES_Pos)


#define NFCT_TXD_AMOUNT_TXDATABITS_Pos (0UL)
#define NFCT_TXD_AMOUNT_TXDATABITS_Msk (0x7UL << NFCT_TXD_AMOUNT_TXDATABITS_Pos)





#define NFCT_RXD_FRAMECONFIG_CRCMODERX_Pos (4UL)
#define NFCT_RXD_FRAMECONFIG_CRCMODERX_Msk (0x1UL << NFCT_RXD_FRAMECONFIG_CRCMODERX_Pos)
#define NFCT_RXD_FRAMECONFIG_CRCMODERX_NoCRCRX (0UL)
#define NFCT_RXD_FRAMECONFIG_CRCMODERX_CRC16RX (1UL)


#define NFCT_RXD_FRAMECONFIG_SOF_Pos (2UL)
#define NFCT_RXD_FRAMECONFIG_SOF_Msk (0x1UL << NFCT_RXD_FRAMECONFIG_SOF_Pos)
#define NFCT_RXD_FRAMECONFIG_SOF_NoSoF (0UL)
#define NFCT_RXD_FRAMECONFIG_SOF_SoF (1UL)


#define NFCT_RXD_FRAMECONFIG_PARITY_Pos (0UL)
#define NFCT_RXD_FRAMECONFIG_PARITY_Msk (0x1UL << NFCT_RXD_FRAMECONFIG_PARITY_Pos)
#define NFCT_RXD_FRAMECONFIG_PARITY_NoParity (0UL)
#define NFCT_RXD_FRAMECONFIG_PARITY_Parity (1UL)





#define NFCT_RXD_AMOUNT_RXDATABYTES_Pos (3UL)
#define NFCT_RXD_AMOUNT_RXDATABYTES_Msk (0x1FFUL << NFCT_RXD_AMOUNT_RXDATABYTES_Pos)


#define NFCT_RXD_AMOUNT_RXDATABITS_Pos (0UL)
#define NFCT_RXD_AMOUNT_RXDATABITS_Msk (0x7UL << NFCT_RXD_AMOUNT_RXDATABITS_Pos)





#define NFCT_NFCID1_LAST_NFCID1_W_Pos (24UL)
#define NFCT_NFCID1_LAST_NFCID1_W_Msk (0xFFUL << NFCT_NFCID1_LAST_NFCID1_W_Pos)


#define NFCT_NFCID1_LAST_NFCID1_X_Pos (16UL)
#define NFCT_NFCID1_LAST_NFCID1_X_Msk (0xFFUL << NFCT_NFCID1_LAST_NFCID1_X_Pos)


#define NFCT_NFCID1_LAST_NFCID1_Y_Pos (8UL)
#define NFCT_NFCID1_LAST_NFCID1_Y_Msk (0xFFUL << NFCT_NFCID1_LAST_NFCID1_Y_Pos)


#define NFCT_NFCID1_LAST_NFCID1_Z_Pos (0UL)
#define NFCT_NFCID1_LAST_NFCID1_Z_Msk (0xFFUL << NFCT_NFCID1_LAST_NFCID1_Z_Pos)





#define NFCT_NFCID1_2ND_LAST_NFCID1_T_Pos (16UL)
#define NFCT_NFCID1_2ND_LAST_NFCID1_T_Msk (0xFFUL << NFCT_NFCID1_2ND_LAST_NFCID1_T_Pos)


#define NFCT_NFCID1_2ND_LAST_NFCID1_U_Pos (8UL)
#define NFCT_NFCID1_2ND_LAST_NFCID1_U_Msk (0xFFUL << NFCT_NFCID1_2ND_LAST_NFCID1_U_Pos)


#define NFCT_NFCID1_2ND_LAST_NFCID1_V_Pos (0UL)
#define NFCT_NFCID1_2ND_LAST_NFCID1_V_Msk (0xFFUL << NFCT_NFCID1_2ND_LAST_NFCID1_V_Pos)





#define NFCT_NFCID1_3RD_LAST_NFCID1_Q_Pos (16UL)
#define NFCT_NFCID1_3RD_LAST_NFCID1_Q_Msk (0xFFUL << NFCT_NFCID1_3RD_LAST_NFCID1_Q_Pos)


#define NFCT_NFCID1_3RD_LAST_NFCID1_R_Pos (8UL)
#define NFCT_NFCID1_3RD_LAST_NFCID1_R_Msk (0xFFUL << NFCT_NFCID1_3RD_LAST_NFCID1_R_Pos)


#define NFCT_NFCID1_3RD_LAST_NFCID1_S_Pos (0UL)
#define NFCT_NFCID1_3RD_LAST_NFCID1_S_Msk (0xFFUL << NFCT_NFCID1_3RD_LAST_NFCID1_S_Pos)





#define NFCT_AUTOCOLRESCONFIG_MODE_Pos (0UL)
#define NFCT_AUTOCOLRESCONFIG_MODE_Msk (0x1UL << NFCT_AUTOCOLRESCONFIG_MODE_Pos)
#define NFCT_AUTOCOLRESCONFIG_MODE_Enabled (0UL)
#define NFCT_AUTOCOLRESCONFIG_MODE_Disabled (1UL)





#define NFCT_SENSRES_RFU74_Pos (12UL)
#define NFCT_SENSRES_RFU74_Msk (0xFUL << NFCT_SENSRES_RFU74_Pos)


#define NFCT_SENSRES_PLATFCONFIG_Pos (8UL)
#define NFCT_SENSRES_PLATFCONFIG_Msk (0xFUL << NFCT_SENSRES_PLATFCONFIG_Pos)


#define NFCT_SENSRES_NFCIDSIZE_Pos (6UL)
#define NFCT_SENSRES_NFCIDSIZE_Msk (0x3UL << NFCT_SENSRES_NFCIDSIZE_Pos)
#define NFCT_SENSRES_NFCIDSIZE_NFCID1Single (0UL)
#define NFCT_SENSRES_NFCIDSIZE_NFCID1Double (1UL)
#define NFCT_SENSRES_NFCIDSIZE_NFCID1Triple (2UL)


#define NFCT_SENSRES_RFU5_Pos (5UL)
#define NFCT_SENSRES_RFU5_Msk (0x1UL << NFCT_SENSRES_RFU5_Pos)


#define NFCT_SENSRES_BITFRAMESDD_Pos (0UL)
#define NFCT_SENSRES_BITFRAMESDD_Msk (0x1FUL << NFCT_SENSRES_BITFRAMESDD_Pos)
#define NFCT_SENSRES_BITFRAMESDD_SDD00000 (0UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD00001 (1UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD00010 (2UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD00100 (4UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD01000 (8UL)
#define NFCT_SENSRES_BITFRAMESDD_SDD10000 (16UL)





#define NFCT_SELRES_RFU7_Pos (7UL)
#define NFCT_SELRES_RFU7_Msk (0x1UL << NFCT_SELRES_RFU7_Pos)


#define NFCT_SELRES_PROTOCOL_Pos (5UL)
#define NFCT_SELRES_PROTOCOL_Msk (0x3UL << NFCT_SELRES_PROTOCOL_Pos)


#define NFCT_SELRES_RFU43_Pos (3UL)
#define NFCT_SELRES_RFU43_Msk (0x3UL << NFCT_SELRES_RFU43_Pos)


#define NFCT_SELRES_CASCADE_Pos (2UL)
#define NFCT_SELRES_CASCADE_Msk (0x1UL << NFCT_SELRES_CASCADE_Pos)


#define NFCT_SELRES_RFU10_Pos (0UL)
#define NFCT_SELRES_RFU10_Msk (0x3UL << NFCT_SELRES_RFU10_Pos)
# 4946 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define NVMC_READY_READY_Pos (0UL)
#define NVMC_READY_READY_Msk (0x1UL << NVMC_READY_READY_Pos)
#define NVMC_READY_READY_Busy (0UL)
#define NVMC_READY_READY_Ready (1UL)





#define NVMC_READYNEXT_READYNEXT_Pos (0UL)
#define NVMC_READYNEXT_READYNEXT_Msk (0x1UL << NVMC_READYNEXT_READYNEXT_Pos)
#define NVMC_READYNEXT_READYNEXT_Busy (0UL)
#define NVMC_READYNEXT_READYNEXT_Ready (1UL)





#define NVMC_CONFIG_WEN_Pos (0UL)
#define NVMC_CONFIG_WEN_Msk (0x3UL << NVMC_CONFIG_WEN_Pos)
#define NVMC_CONFIG_WEN_Ren (0UL)
#define NVMC_CONFIG_WEN_Wen (1UL)
#define NVMC_CONFIG_WEN_Een (2UL)





#define NVMC_ERASEPAGE_ERASEPAGE_Pos (0UL)
#define NVMC_ERASEPAGE_ERASEPAGE_Msk (0xFFFFFFFFUL << NVMC_ERASEPAGE_ERASEPAGE_Pos)





#define NVMC_ERASEPCR1_ERASEPCR1_Pos (0UL)
#define NVMC_ERASEPCR1_ERASEPCR1_Msk (0xFFFFFFFFUL << NVMC_ERASEPCR1_ERASEPCR1_Pos)





#define NVMC_ERASEALL_ERASEALL_Pos (0UL)
#define NVMC_ERASEALL_ERASEALL_Msk (0x1UL << NVMC_ERASEALL_ERASEALL_Pos)
#define NVMC_ERASEALL_ERASEALL_NoOperation (0UL)
#define NVMC_ERASEALL_ERASEALL_Erase (1UL)





#define NVMC_ERASEPCR0_ERASEPCR0_Pos (0UL)
#define NVMC_ERASEPCR0_ERASEPCR0_Msk (0xFFFFFFFFUL << NVMC_ERASEPCR0_ERASEPCR0_Pos)





#define NVMC_ERASEUICR_ERASEUICR_Pos (0UL)
#define NVMC_ERASEUICR_ERASEUICR_Msk (0x1UL << NVMC_ERASEUICR_ERASEUICR_Pos)
#define NVMC_ERASEUICR_ERASEUICR_NoOperation (0UL)
#define NVMC_ERASEUICR_ERASEUICR_Erase (1UL)





#define NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Pos (0UL)
#define NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Msk (0xFFFFFFFFUL << NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Pos)





#define NVMC_ERASEPAGEPARTIALCFG_DURATION_Pos (0UL)
#define NVMC_ERASEPAGEPARTIALCFG_DURATION_Msk (0x7FUL << NVMC_ERASEPAGEPARTIALCFG_DURATION_Pos)





#define NVMC_ICACHECNF_CACHEPROFEN_Pos (8UL)
#define NVMC_ICACHECNF_CACHEPROFEN_Msk (0x1UL << NVMC_ICACHECNF_CACHEPROFEN_Pos)
#define NVMC_ICACHECNF_CACHEPROFEN_Disabled (0UL)
#define NVMC_ICACHECNF_CACHEPROFEN_Enabled (1UL)


#define NVMC_ICACHECNF_CACHEEN_Pos (0UL)
#define NVMC_ICACHECNF_CACHEEN_Msk (0x1UL << NVMC_ICACHECNF_CACHEEN_Pos)
#define NVMC_ICACHECNF_CACHEEN_Disabled (0UL)
#define NVMC_ICACHECNF_CACHEEN_Enabled (1UL)





#define NVMC_IHIT_HITS_Pos (0UL)
#define NVMC_IHIT_HITS_Msk (0xFFFFFFFFUL << NVMC_IHIT_HITS_Pos)





#define NVMC_IMISS_MISSES_Pos (0UL)
#define NVMC_IMISS_MISSES_Msk (0xFFFFFFFFUL << NVMC_IMISS_MISSES_Pos)
# 5060 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define GPIO_OUT_PIN31_Pos (31UL)
#define GPIO_OUT_PIN31_Msk (0x1UL << GPIO_OUT_PIN31_Pos)
#define GPIO_OUT_PIN31_Low (0UL)
#define GPIO_OUT_PIN31_High (1UL)


#define GPIO_OUT_PIN30_Pos (30UL)
#define GPIO_OUT_PIN30_Msk (0x1UL << GPIO_OUT_PIN30_Pos)
#define GPIO_OUT_PIN30_Low (0UL)
#define GPIO_OUT_PIN30_High (1UL)


#define GPIO_OUT_PIN29_Pos (29UL)
#define GPIO_OUT_PIN29_Msk (0x1UL << GPIO_OUT_PIN29_Pos)
#define GPIO_OUT_PIN29_Low (0UL)
#define GPIO_OUT_PIN29_High (1UL)


#define GPIO_OUT_PIN28_Pos (28UL)
#define GPIO_OUT_PIN28_Msk (0x1UL << GPIO_OUT_PIN28_Pos)
#define GPIO_OUT_PIN28_Low (0UL)
#define GPIO_OUT_PIN28_High (1UL)


#define GPIO_OUT_PIN27_Pos (27UL)
#define GPIO_OUT_PIN27_Msk (0x1UL << GPIO_OUT_PIN27_Pos)
#define GPIO_OUT_PIN27_Low (0UL)
#define GPIO_OUT_PIN27_High (1UL)


#define GPIO_OUT_PIN26_Pos (26UL)
#define GPIO_OUT_PIN26_Msk (0x1UL << GPIO_OUT_PIN26_Pos)
#define GPIO_OUT_PIN26_Low (0UL)
#define GPIO_OUT_PIN26_High (1UL)


#define GPIO_OUT_PIN25_Pos (25UL)
#define GPIO_OUT_PIN25_Msk (0x1UL << GPIO_OUT_PIN25_Pos)
#define GPIO_OUT_PIN25_Low (0UL)
#define GPIO_OUT_PIN25_High (1UL)


#define GPIO_OUT_PIN24_Pos (24UL)
#define GPIO_OUT_PIN24_Msk (0x1UL << GPIO_OUT_PIN24_Pos)
#define GPIO_OUT_PIN24_Low (0UL)
#define GPIO_OUT_PIN24_High (1UL)


#define GPIO_OUT_PIN23_Pos (23UL)
#define GPIO_OUT_PIN23_Msk (0x1UL << GPIO_OUT_PIN23_Pos)
#define GPIO_OUT_PIN23_Low (0UL)
#define GPIO_OUT_PIN23_High (1UL)


#define GPIO_OUT_PIN22_Pos (22UL)
#define GPIO_OUT_PIN22_Msk (0x1UL << GPIO_OUT_PIN22_Pos)
#define GPIO_OUT_PIN22_Low (0UL)
#define GPIO_OUT_PIN22_High (1UL)


#define GPIO_OUT_PIN21_Pos (21UL)
#define GPIO_OUT_PIN21_Msk (0x1UL << GPIO_OUT_PIN21_Pos)
#define GPIO_OUT_PIN21_Low (0UL)
#define GPIO_OUT_PIN21_High (1UL)


#define GPIO_OUT_PIN20_Pos (20UL)
#define GPIO_OUT_PIN20_Msk (0x1UL << GPIO_OUT_PIN20_Pos)
#define GPIO_OUT_PIN20_Low (0UL)
#define GPIO_OUT_PIN20_High (1UL)


#define GPIO_OUT_PIN19_Pos (19UL)
#define GPIO_OUT_PIN19_Msk (0x1UL << GPIO_OUT_PIN19_Pos)
#define GPIO_OUT_PIN19_Low (0UL)
#define GPIO_OUT_PIN19_High (1UL)


#define GPIO_OUT_PIN18_Pos (18UL)
#define GPIO_OUT_PIN18_Msk (0x1UL << GPIO_OUT_PIN18_Pos)
#define GPIO_OUT_PIN18_Low (0UL)
#define GPIO_OUT_PIN18_High (1UL)


#define GPIO_OUT_PIN17_Pos (17UL)
#define GPIO_OUT_PIN17_Msk (0x1UL << GPIO_OUT_PIN17_Pos)
#define GPIO_OUT_PIN17_Low (0UL)
#define GPIO_OUT_PIN17_High (1UL)


#define GPIO_OUT_PIN16_Pos (16UL)
#define GPIO_OUT_PIN16_Msk (0x1UL << GPIO_OUT_PIN16_Pos)
#define GPIO_OUT_PIN16_Low (0UL)
#define GPIO_OUT_PIN16_High (1UL)


#define GPIO_OUT_PIN15_Pos (15UL)
#define GPIO_OUT_PIN15_Msk (0x1UL << GPIO_OUT_PIN15_Pos)
#define GPIO_OUT_PIN15_Low (0UL)
#define GPIO_OUT_PIN15_High (1UL)


#define GPIO_OUT_PIN14_Pos (14UL)
#define GPIO_OUT_PIN14_Msk (0x1UL << GPIO_OUT_PIN14_Pos)
#define GPIO_OUT_PIN14_Low (0UL)
#define GPIO_OUT_PIN14_High (1UL)


#define GPIO_OUT_PIN13_Pos (13UL)
#define GPIO_OUT_PIN13_Msk (0x1UL << GPIO_OUT_PIN13_Pos)
#define GPIO_OUT_PIN13_Low (0UL)
#define GPIO_OUT_PIN13_High (1UL)


#define GPIO_OUT_PIN12_Pos (12UL)
#define GPIO_OUT_PIN12_Msk (0x1UL << GPIO_OUT_PIN12_Pos)
#define GPIO_OUT_PIN12_Low (0UL)
#define GPIO_OUT_PIN12_High (1UL)


#define GPIO_OUT_PIN11_Pos (11UL)
#define GPIO_OUT_PIN11_Msk (0x1UL << GPIO_OUT_PIN11_Pos)
#define GPIO_OUT_PIN11_Low (0UL)
#define GPIO_OUT_PIN11_High (1UL)


#define GPIO_OUT_PIN10_Pos (10UL)
#define GPIO_OUT_PIN10_Msk (0x1UL << GPIO_OUT_PIN10_Pos)
#define GPIO_OUT_PIN10_Low (0UL)
#define GPIO_OUT_PIN10_High (1UL)


#define GPIO_OUT_PIN9_Pos (9UL)
#define GPIO_OUT_PIN9_Msk (0x1UL << GPIO_OUT_PIN9_Pos)
#define GPIO_OUT_PIN9_Low (0UL)
#define GPIO_OUT_PIN9_High (1UL)


#define GPIO_OUT_PIN8_Pos (8UL)
#define GPIO_OUT_PIN8_Msk (0x1UL << GPIO_OUT_PIN8_Pos)
#define GPIO_OUT_PIN8_Low (0UL)
#define GPIO_OUT_PIN8_High (1UL)


#define GPIO_OUT_PIN7_Pos (7UL)
#define GPIO_OUT_PIN7_Msk (0x1UL << GPIO_OUT_PIN7_Pos)
#define GPIO_OUT_PIN7_Low (0UL)
#define GPIO_OUT_PIN7_High (1UL)


#define GPIO_OUT_PIN6_Pos (6UL)
#define GPIO_OUT_PIN6_Msk (0x1UL << GPIO_OUT_PIN6_Pos)
#define GPIO_OUT_PIN6_Low (0UL)
#define GPIO_OUT_PIN6_High (1UL)


#define GPIO_OUT_PIN5_Pos (5UL)
#define GPIO_OUT_PIN5_Msk (0x1UL << GPIO_OUT_PIN5_Pos)
#define GPIO_OUT_PIN5_Low (0UL)
#define GPIO_OUT_PIN5_High (1UL)


#define GPIO_OUT_PIN4_Pos (4UL)
#define GPIO_OUT_PIN4_Msk (0x1UL << GPIO_OUT_PIN4_Pos)
#define GPIO_OUT_PIN4_Low (0UL)
#define GPIO_OUT_PIN4_High (1UL)


#define GPIO_OUT_PIN3_Pos (3UL)
#define GPIO_OUT_PIN3_Msk (0x1UL << GPIO_OUT_PIN3_Pos)
#define GPIO_OUT_PIN3_Low (0UL)
#define GPIO_OUT_PIN3_High (1UL)


#define GPIO_OUT_PIN2_Pos (2UL)
#define GPIO_OUT_PIN2_Msk (0x1UL << GPIO_OUT_PIN2_Pos)
#define GPIO_OUT_PIN2_Low (0UL)
#define GPIO_OUT_PIN2_High (1UL)


#define GPIO_OUT_PIN1_Pos (1UL)
#define GPIO_OUT_PIN1_Msk (0x1UL << GPIO_OUT_PIN1_Pos)
#define GPIO_OUT_PIN1_Low (0UL)
#define GPIO_OUT_PIN1_High (1UL)


#define GPIO_OUT_PIN0_Pos (0UL)
#define GPIO_OUT_PIN0_Msk (0x1UL << GPIO_OUT_PIN0_Pos)
#define GPIO_OUT_PIN0_Low (0UL)
#define GPIO_OUT_PIN0_High (1UL)





#define GPIO_OUTSET_PIN31_Pos (31UL)
#define GPIO_OUTSET_PIN31_Msk (0x1UL << GPIO_OUTSET_PIN31_Pos)
#define GPIO_OUTSET_PIN31_Low (0UL)
#define GPIO_OUTSET_PIN31_High (1UL)
#define GPIO_OUTSET_PIN31_Set (1UL)


#define GPIO_OUTSET_PIN30_Pos (30UL)
#define GPIO_OUTSET_PIN30_Msk (0x1UL << GPIO_OUTSET_PIN30_Pos)
#define GPIO_OUTSET_PIN30_Low (0UL)
#define GPIO_OUTSET_PIN30_High (1UL)
#define GPIO_OUTSET_PIN30_Set (1UL)


#define GPIO_OUTSET_PIN29_Pos (29UL)
#define GPIO_OUTSET_PIN29_Msk (0x1UL << GPIO_OUTSET_PIN29_Pos)
#define GPIO_OUTSET_PIN29_Low (0UL)
#define GPIO_OUTSET_PIN29_High (1UL)
#define GPIO_OUTSET_PIN29_Set (1UL)


#define GPIO_OUTSET_PIN28_Pos (28UL)
#define GPIO_OUTSET_PIN28_Msk (0x1UL << GPIO_OUTSET_PIN28_Pos)
#define GPIO_OUTSET_PIN28_Low (0UL)
#define GPIO_OUTSET_PIN28_High (1UL)
#define GPIO_OUTSET_PIN28_Set (1UL)


#define GPIO_OUTSET_PIN27_Pos (27UL)
#define GPIO_OUTSET_PIN27_Msk (0x1UL << GPIO_OUTSET_PIN27_Pos)
#define GPIO_OUTSET_PIN27_Low (0UL)
#define GPIO_OUTSET_PIN27_High (1UL)
#define GPIO_OUTSET_PIN27_Set (1UL)


#define GPIO_OUTSET_PIN26_Pos (26UL)
#define GPIO_OUTSET_PIN26_Msk (0x1UL << GPIO_OUTSET_PIN26_Pos)
#define GPIO_OUTSET_PIN26_Low (0UL)
#define GPIO_OUTSET_PIN26_High (1UL)
#define GPIO_OUTSET_PIN26_Set (1UL)


#define GPIO_OUTSET_PIN25_Pos (25UL)
#define GPIO_OUTSET_PIN25_Msk (0x1UL << GPIO_OUTSET_PIN25_Pos)
#define GPIO_OUTSET_PIN25_Low (0UL)
#define GPIO_OUTSET_PIN25_High (1UL)
#define GPIO_OUTSET_PIN25_Set (1UL)


#define GPIO_OUTSET_PIN24_Pos (24UL)
#define GPIO_OUTSET_PIN24_Msk (0x1UL << GPIO_OUTSET_PIN24_Pos)
#define GPIO_OUTSET_PIN24_Low (0UL)
#define GPIO_OUTSET_PIN24_High (1UL)
#define GPIO_OUTSET_PIN24_Set (1UL)


#define GPIO_OUTSET_PIN23_Pos (23UL)
#define GPIO_OUTSET_PIN23_Msk (0x1UL << GPIO_OUTSET_PIN23_Pos)
#define GPIO_OUTSET_PIN23_Low (0UL)
#define GPIO_OUTSET_PIN23_High (1UL)
#define GPIO_OUTSET_PIN23_Set (1UL)


#define GPIO_OUTSET_PIN22_Pos (22UL)
#define GPIO_OUTSET_PIN22_Msk (0x1UL << GPIO_OUTSET_PIN22_Pos)
#define GPIO_OUTSET_PIN22_Low (0UL)
#define GPIO_OUTSET_PIN22_High (1UL)
#define GPIO_OUTSET_PIN22_Set (1UL)


#define GPIO_OUTSET_PIN21_Pos (21UL)
#define GPIO_OUTSET_PIN21_Msk (0x1UL << GPIO_OUTSET_PIN21_Pos)
#define GPIO_OUTSET_PIN21_Low (0UL)
#define GPIO_OUTSET_PIN21_High (1UL)
#define GPIO_OUTSET_PIN21_Set (1UL)


#define GPIO_OUTSET_PIN20_Pos (20UL)
#define GPIO_OUTSET_PIN20_Msk (0x1UL << GPIO_OUTSET_PIN20_Pos)
#define GPIO_OUTSET_PIN20_Low (0UL)
#define GPIO_OUTSET_PIN20_High (1UL)
#define GPIO_OUTSET_PIN20_Set (1UL)


#define GPIO_OUTSET_PIN19_Pos (19UL)
#define GPIO_OUTSET_PIN19_Msk (0x1UL << GPIO_OUTSET_PIN19_Pos)
#define GPIO_OUTSET_PIN19_Low (0UL)
#define GPIO_OUTSET_PIN19_High (1UL)
#define GPIO_OUTSET_PIN19_Set (1UL)


#define GPIO_OUTSET_PIN18_Pos (18UL)
#define GPIO_OUTSET_PIN18_Msk (0x1UL << GPIO_OUTSET_PIN18_Pos)
#define GPIO_OUTSET_PIN18_Low (0UL)
#define GPIO_OUTSET_PIN18_High (1UL)
#define GPIO_OUTSET_PIN18_Set (1UL)


#define GPIO_OUTSET_PIN17_Pos (17UL)
#define GPIO_OUTSET_PIN17_Msk (0x1UL << GPIO_OUTSET_PIN17_Pos)
#define GPIO_OUTSET_PIN17_Low (0UL)
#define GPIO_OUTSET_PIN17_High (1UL)
#define GPIO_OUTSET_PIN17_Set (1UL)


#define GPIO_OUTSET_PIN16_Pos (16UL)
#define GPIO_OUTSET_PIN16_Msk (0x1UL << GPIO_OUTSET_PIN16_Pos)
#define GPIO_OUTSET_PIN16_Low (0UL)
#define GPIO_OUTSET_PIN16_High (1UL)
#define GPIO_OUTSET_PIN16_Set (1UL)


#define GPIO_OUTSET_PIN15_Pos (15UL)
#define GPIO_OUTSET_PIN15_Msk (0x1UL << GPIO_OUTSET_PIN15_Pos)
#define GPIO_OUTSET_PIN15_Low (0UL)
#define GPIO_OUTSET_PIN15_High (1UL)
#define GPIO_OUTSET_PIN15_Set (1UL)


#define GPIO_OUTSET_PIN14_Pos (14UL)
#define GPIO_OUTSET_PIN14_Msk (0x1UL << GPIO_OUTSET_PIN14_Pos)
#define GPIO_OUTSET_PIN14_Low (0UL)
#define GPIO_OUTSET_PIN14_High (1UL)
#define GPIO_OUTSET_PIN14_Set (1UL)


#define GPIO_OUTSET_PIN13_Pos (13UL)
#define GPIO_OUTSET_PIN13_Msk (0x1UL << GPIO_OUTSET_PIN13_Pos)
#define GPIO_OUTSET_PIN13_Low (0UL)
#define GPIO_OUTSET_PIN13_High (1UL)
#define GPIO_OUTSET_PIN13_Set (1UL)


#define GPIO_OUTSET_PIN12_Pos (12UL)
#define GPIO_OUTSET_PIN12_Msk (0x1UL << GPIO_OUTSET_PIN12_Pos)
#define GPIO_OUTSET_PIN12_Low (0UL)
#define GPIO_OUTSET_PIN12_High (1UL)
#define GPIO_OUTSET_PIN12_Set (1UL)


#define GPIO_OUTSET_PIN11_Pos (11UL)
#define GPIO_OUTSET_PIN11_Msk (0x1UL << GPIO_OUTSET_PIN11_Pos)
#define GPIO_OUTSET_PIN11_Low (0UL)
#define GPIO_OUTSET_PIN11_High (1UL)
#define GPIO_OUTSET_PIN11_Set (1UL)


#define GPIO_OUTSET_PIN10_Pos (10UL)
#define GPIO_OUTSET_PIN10_Msk (0x1UL << GPIO_OUTSET_PIN10_Pos)
#define GPIO_OUTSET_PIN10_Low (0UL)
#define GPIO_OUTSET_PIN10_High (1UL)
#define GPIO_OUTSET_PIN10_Set (1UL)


#define GPIO_OUTSET_PIN9_Pos (9UL)
#define GPIO_OUTSET_PIN9_Msk (0x1UL << GPIO_OUTSET_PIN9_Pos)
#define GPIO_OUTSET_PIN9_Low (0UL)
#define GPIO_OUTSET_PIN9_High (1UL)
#define GPIO_OUTSET_PIN9_Set (1UL)


#define GPIO_OUTSET_PIN8_Pos (8UL)
#define GPIO_OUTSET_PIN8_Msk (0x1UL << GPIO_OUTSET_PIN8_Pos)
#define GPIO_OUTSET_PIN8_Low (0UL)
#define GPIO_OUTSET_PIN8_High (1UL)
#define GPIO_OUTSET_PIN8_Set (1UL)


#define GPIO_OUTSET_PIN7_Pos (7UL)
#define GPIO_OUTSET_PIN7_Msk (0x1UL << GPIO_OUTSET_PIN7_Pos)
#define GPIO_OUTSET_PIN7_Low (0UL)
#define GPIO_OUTSET_PIN7_High (1UL)
#define GPIO_OUTSET_PIN7_Set (1UL)


#define GPIO_OUTSET_PIN6_Pos (6UL)
#define GPIO_OUTSET_PIN6_Msk (0x1UL << GPIO_OUTSET_PIN6_Pos)
#define GPIO_OUTSET_PIN6_Low (0UL)
#define GPIO_OUTSET_PIN6_High (1UL)
#define GPIO_OUTSET_PIN6_Set (1UL)


#define GPIO_OUTSET_PIN5_Pos (5UL)
#define GPIO_OUTSET_PIN5_Msk (0x1UL << GPIO_OUTSET_PIN5_Pos)
#define GPIO_OUTSET_PIN5_Low (0UL)
#define GPIO_OUTSET_PIN5_High (1UL)
#define GPIO_OUTSET_PIN5_Set (1UL)


#define GPIO_OUTSET_PIN4_Pos (4UL)
#define GPIO_OUTSET_PIN4_Msk (0x1UL << GPIO_OUTSET_PIN4_Pos)
#define GPIO_OUTSET_PIN4_Low (0UL)
#define GPIO_OUTSET_PIN4_High (1UL)
#define GPIO_OUTSET_PIN4_Set (1UL)


#define GPIO_OUTSET_PIN3_Pos (3UL)
#define GPIO_OUTSET_PIN3_Msk (0x1UL << GPIO_OUTSET_PIN3_Pos)
#define GPIO_OUTSET_PIN3_Low (0UL)
#define GPIO_OUTSET_PIN3_High (1UL)
#define GPIO_OUTSET_PIN3_Set (1UL)


#define GPIO_OUTSET_PIN2_Pos (2UL)
#define GPIO_OUTSET_PIN2_Msk (0x1UL << GPIO_OUTSET_PIN2_Pos)
#define GPIO_OUTSET_PIN2_Low (0UL)
#define GPIO_OUTSET_PIN2_High (1UL)
#define GPIO_OUTSET_PIN2_Set (1UL)


#define GPIO_OUTSET_PIN1_Pos (1UL)
#define GPIO_OUTSET_PIN1_Msk (0x1UL << GPIO_OUTSET_PIN1_Pos)
#define GPIO_OUTSET_PIN1_Low (0UL)
#define GPIO_OUTSET_PIN1_High (1UL)
#define GPIO_OUTSET_PIN1_Set (1UL)


#define GPIO_OUTSET_PIN0_Pos (0UL)
#define GPIO_OUTSET_PIN0_Msk (0x1UL << GPIO_OUTSET_PIN0_Pos)
#define GPIO_OUTSET_PIN0_Low (0UL)
#define GPIO_OUTSET_PIN0_High (1UL)
#define GPIO_OUTSET_PIN0_Set (1UL)





#define GPIO_OUTCLR_PIN31_Pos (31UL)
#define GPIO_OUTCLR_PIN31_Msk (0x1UL << GPIO_OUTCLR_PIN31_Pos)
#define GPIO_OUTCLR_PIN31_Low (0UL)
#define GPIO_OUTCLR_PIN31_High (1UL)
#define GPIO_OUTCLR_PIN31_Clear (1UL)


#define GPIO_OUTCLR_PIN30_Pos (30UL)
#define GPIO_OUTCLR_PIN30_Msk (0x1UL << GPIO_OUTCLR_PIN30_Pos)
#define GPIO_OUTCLR_PIN30_Low (0UL)
#define GPIO_OUTCLR_PIN30_High (1UL)
#define GPIO_OUTCLR_PIN30_Clear (1UL)


#define GPIO_OUTCLR_PIN29_Pos (29UL)
#define GPIO_OUTCLR_PIN29_Msk (0x1UL << GPIO_OUTCLR_PIN29_Pos)
#define GPIO_OUTCLR_PIN29_Low (0UL)
#define GPIO_OUTCLR_PIN29_High (1UL)
#define GPIO_OUTCLR_PIN29_Clear (1UL)


#define GPIO_OUTCLR_PIN28_Pos (28UL)
#define GPIO_OUTCLR_PIN28_Msk (0x1UL << GPIO_OUTCLR_PIN28_Pos)
#define GPIO_OUTCLR_PIN28_Low (0UL)
#define GPIO_OUTCLR_PIN28_High (1UL)
#define GPIO_OUTCLR_PIN28_Clear (1UL)


#define GPIO_OUTCLR_PIN27_Pos (27UL)
#define GPIO_OUTCLR_PIN27_Msk (0x1UL << GPIO_OUTCLR_PIN27_Pos)
#define GPIO_OUTCLR_PIN27_Low (0UL)
#define GPIO_OUTCLR_PIN27_High (1UL)
#define GPIO_OUTCLR_PIN27_Clear (1UL)


#define GPIO_OUTCLR_PIN26_Pos (26UL)
#define GPIO_OUTCLR_PIN26_Msk (0x1UL << GPIO_OUTCLR_PIN26_Pos)
#define GPIO_OUTCLR_PIN26_Low (0UL)
#define GPIO_OUTCLR_PIN26_High (1UL)
#define GPIO_OUTCLR_PIN26_Clear (1UL)


#define GPIO_OUTCLR_PIN25_Pos (25UL)
#define GPIO_OUTCLR_PIN25_Msk (0x1UL << GPIO_OUTCLR_PIN25_Pos)
#define GPIO_OUTCLR_PIN25_Low (0UL)
#define GPIO_OUTCLR_PIN25_High (1UL)
#define GPIO_OUTCLR_PIN25_Clear (1UL)


#define GPIO_OUTCLR_PIN24_Pos (24UL)
#define GPIO_OUTCLR_PIN24_Msk (0x1UL << GPIO_OUTCLR_PIN24_Pos)
#define GPIO_OUTCLR_PIN24_Low (0UL)
#define GPIO_OUTCLR_PIN24_High (1UL)
#define GPIO_OUTCLR_PIN24_Clear (1UL)


#define GPIO_OUTCLR_PIN23_Pos (23UL)
#define GPIO_OUTCLR_PIN23_Msk (0x1UL << GPIO_OUTCLR_PIN23_Pos)
#define GPIO_OUTCLR_PIN23_Low (0UL)
#define GPIO_OUTCLR_PIN23_High (1UL)
#define GPIO_OUTCLR_PIN23_Clear (1UL)


#define GPIO_OUTCLR_PIN22_Pos (22UL)
#define GPIO_OUTCLR_PIN22_Msk (0x1UL << GPIO_OUTCLR_PIN22_Pos)
#define GPIO_OUTCLR_PIN22_Low (0UL)
#define GPIO_OUTCLR_PIN22_High (1UL)
#define GPIO_OUTCLR_PIN22_Clear (1UL)


#define GPIO_OUTCLR_PIN21_Pos (21UL)
#define GPIO_OUTCLR_PIN21_Msk (0x1UL << GPIO_OUTCLR_PIN21_Pos)
#define GPIO_OUTCLR_PIN21_Low (0UL)
#define GPIO_OUTCLR_PIN21_High (1UL)
#define GPIO_OUTCLR_PIN21_Clear (1UL)


#define GPIO_OUTCLR_PIN20_Pos (20UL)
#define GPIO_OUTCLR_PIN20_Msk (0x1UL << GPIO_OUTCLR_PIN20_Pos)
#define GPIO_OUTCLR_PIN20_Low (0UL)
#define GPIO_OUTCLR_PIN20_High (1UL)
#define GPIO_OUTCLR_PIN20_Clear (1UL)


#define GPIO_OUTCLR_PIN19_Pos (19UL)
#define GPIO_OUTCLR_PIN19_Msk (0x1UL << GPIO_OUTCLR_PIN19_Pos)
#define GPIO_OUTCLR_PIN19_Low (0UL)
#define GPIO_OUTCLR_PIN19_High (1UL)
#define GPIO_OUTCLR_PIN19_Clear (1UL)


#define GPIO_OUTCLR_PIN18_Pos (18UL)
#define GPIO_OUTCLR_PIN18_Msk (0x1UL << GPIO_OUTCLR_PIN18_Pos)
#define GPIO_OUTCLR_PIN18_Low (0UL)
#define GPIO_OUTCLR_PIN18_High (1UL)
#define GPIO_OUTCLR_PIN18_Clear (1UL)


#define GPIO_OUTCLR_PIN17_Pos (17UL)
#define GPIO_OUTCLR_PIN17_Msk (0x1UL << GPIO_OUTCLR_PIN17_Pos)
#define GPIO_OUTCLR_PIN17_Low (0UL)
#define GPIO_OUTCLR_PIN17_High (1UL)
#define GPIO_OUTCLR_PIN17_Clear (1UL)


#define GPIO_OUTCLR_PIN16_Pos (16UL)
#define GPIO_OUTCLR_PIN16_Msk (0x1UL << GPIO_OUTCLR_PIN16_Pos)
#define GPIO_OUTCLR_PIN16_Low (0UL)
#define GPIO_OUTCLR_PIN16_High (1UL)
#define GPIO_OUTCLR_PIN16_Clear (1UL)


#define GPIO_OUTCLR_PIN15_Pos (15UL)
#define GPIO_OUTCLR_PIN15_Msk (0x1UL << GPIO_OUTCLR_PIN15_Pos)
#define GPIO_OUTCLR_PIN15_Low (0UL)
#define GPIO_OUTCLR_PIN15_High (1UL)
#define GPIO_OUTCLR_PIN15_Clear (1UL)


#define GPIO_OUTCLR_PIN14_Pos (14UL)
#define GPIO_OUTCLR_PIN14_Msk (0x1UL << GPIO_OUTCLR_PIN14_Pos)
#define GPIO_OUTCLR_PIN14_Low (0UL)
#define GPIO_OUTCLR_PIN14_High (1UL)
#define GPIO_OUTCLR_PIN14_Clear (1UL)


#define GPIO_OUTCLR_PIN13_Pos (13UL)
#define GPIO_OUTCLR_PIN13_Msk (0x1UL << GPIO_OUTCLR_PIN13_Pos)
#define GPIO_OUTCLR_PIN13_Low (0UL)
#define GPIO_OUTCLR_PIN13_High (1UL)
#define GPIO_OUTCLR_PIN13_Clear (1UL)


#define GPIO_OUTCLR_PIN12_Pos (12UL)
#define GPIO_OUTCLR_PIN12_Msk (0x1UL << GPIO_OUTCLR_PIN12_Pos)
#define GPIO_OUTCLR_PIN12_Low (0UL)
#define GPIO_OUTCLR_PIN12_High (1UL)
#define GPIO_OUTCLR_PIN12_Clear (1UL)


#define GPIO_OUTCLR_PIN11_Pos (11UL)
#define GPIO_OUTCLR_PIN11_Msk (0x1UL << GPIO_OUTCLR_PIN11_Pos)
#define GPIO_OUTCLR_PIN11_Low (0UL)
#define GPIO_OUTCLR_PIN11_High (1UL)
#define GPIO_OUTCLR_PIN11_Clear (1UL)


#define GPIO_OUTCLR_PIN10_Pos (10UL)
#define GPIO_OUTCLR_PIN10_Msk (0x1UL << GPIO_OUTCLR_PIN10_Pos)
#define GPIO_OUTCLR_PIN10_Low (0UL)
#define GPIO_OUTCLR_PIN10_High (1UL)
#define GPIO_OUTCLR_PIN10_Clear (1UL)


#define GPIO_OUTCLR_PIN9_Pos (9UL)
#define GPIO_OUTCLR_PIN9_Msk (0x1UL << GPIO_OUTCLR_PIN9_Pos)
#define GPIO_OUTCLR_PIN9_Low (0UL)
#define GPIO_OUTCLR_PIN9_High (1UL)
#define GPIO_OUTCLR_PIN9_Clear (1UL)


#define GPIO_OUTCLR_PIN8_Pos (8UL)
#define GPIO_OUTCLR_PIN8_Msk (0x1UL << GPIO_OUTCLR_PIN8_Pos)
#define GPIO_OUTCLR_PIN8_Low (0UL)
#define GPIO_OUTCLR_PIN8_High (1UL)
#define GPIO_OUTCLR_PIN8_Clear (1UL)


#define GPIO_OUTCLR_PIN7_Pos (7UL)
#define GPIO_OUTCLR_PIN7_Msk (0x1UL << GPIO_OUTCLR_PIN7_Pos)
#define GPIO_OUTCLR_PIN7_Low (0UL)
#define GPIO_OUTCLR_PIN7_High (1UL)
#define GPIO_OUTCLR_PIN7_Clear (1UL)


#define GPIO_OUTCLR_PIN6_Pos (6UL)
#define GPIO_OUTCLR_PIN6_Msk (0x1UL << GPIO_OUTCLR_PIN6_Pos)
#define GPIO_OUTCLR_PIN6_Low (0UL)
#define GPIO_OUTCLR_PIN6_High (1UL)
#define GPIO_OUTCLR_PIN6_Clear (1UL)


#define GPIO_OUTCLR_PIN5_Pos (5UL)
#define GPIO_OUTCLR_PIN5_Msk (0x1UL << GPIO_OUTCLR_PIN5_Pos)
#define GPIO_OUTCLR_PIN5_Low (0UL)
#define GPIO_OUTCLR_PIN5_High (1UL)
#define GPIO_OUTCLR_PIN5_Clear (1UL)


#define GPIO_OUTCLR_PIN4_Pos (4UL)
#define GPIO_OUTCLR_PIN4_Msk (0x1UL << GPIO_OUTCLR_PIN4_Pos)
#define GPIO_OUTCLR_PIN4_Low (0UL)
#define GPIO_OUTCLR_PIN4_High (1UL)
#define GPIO_OUTCLR_PIN4_Clear (1UL)


#define GPIO_OUTCLR_PIN3_Pos (3UL)
#define GPIO_OUTCLR_PIN3_Msk (0x1UL << GPIO_OUTCLR_PIN3_Pos)
#define GPIO_OUTCLR_PIN3_Low (0UL)
#define GPIO_OUTCLR_PIN3_High (1UL)
#define GPIO_OUTCLR_PIN3_Clear (1UL)


#define GPIO_OUTCLR_PIN2_Pos (2UL)
#define GPIO_OUTCLR_PIN2_Msk (0x1UL << GPIO_OUTCLR_PIN2_Pos)
#define GPIO_OUTCLR_PIN2_Low (0UL)
#define GPIO_OUTCLR_PIN2_High (1UL)
#define GPIO_OUTCLR_PIN2_Clear (1UL)


#define GPIO_OUTCLR_PIN1_Pos (1UL)
#define GPIO_OUTCLR_PIN1_Msk (0x1UL << GPIO_OUTCLR_PIN1_Pos)
#define GPIO_OUTCLR_PIN1_Low (0UL)
#define GPIO_OUTCLR_PIN1_High (1UL)
#define GPIO_OUTCLR_PIN1_Clear (1UL)


#define GPIO_OUTCLR_PIN0_Pos (0UL)
#define GPIO_OUTCLR_PIN0_Msk (0x1UL << GPIO_OUTCLR_PIN0_Pos)
#define GPIO_OUTCLR_PIN0_Low (0UL)
#define GPIO_OUTCLR_PIN0_High (1UL)
#define GPIO_OUTCLR_PIN0_Clear (1UL)





#define GPIO_IN_PIN31_Pos (31UL)
#define GPIO_IN_PIN31_Msk (0x1UL << GPIO_IN_PIN31_Pos)
#define GPIO_IN_PIN31_Low (0UL)
#define GPIO_IN_PIN31_High (1UL)


#define GPIO_IN_PIN30_Pos (30UL)
#define GPIO_IN_PIN30_Msk (0x1UL << GPIO_IN_PIN30_Pos)
#define GPIO_IN_PIN30_Low (0UL)
#define GPIO_IN_PIN30_High (1UL)


#define GPIO_IN_PIN29_Pos (29UL)
#define GPIO_IN_PIN29_Msk (0x1UL << GPIO_IN_PIN29_Pos)
#define GPIO_IN_PIN29_Low (0UL)
#define GPIO_IN_PIN29_High (1UL)


#define GPIO_IN_PIN28_Pos (28UL)
#define GPIO_IN_PIN28_Msk (0x1UL << GPIO_IN_PIN28_Pos)
#define GPIO_IN_PIN28_Low (0UL)
#define GPIO_IN_PIN28_High (1UL)


#define GPIO_IN_PIN27_Pos (27UL)
#define GPIO_IN_PIN27_Msk (0x1UL << GPIO_IN_PIN27_Pos)
#define GPIO_IN_PIN27_Low (0UL)
#define GPIO_IN_PIN27_High (1UL)


#define GPIO_IN_PIN26_Pos (26UL)
#define GPIO_IN_PIN26_Msk (0x1UL << GPIO_IN_PIN26_Pos)
#define GPIO_IN_PIN26_Low (0UL)
#define GPIO_IN_PIN26_High (1UL)


#define GPIO_IN_PIN25_Pos (25UL)
#define GPIO_IN_PIN25_Msk (0x1UL << GPIO_IN_PIN25_Pos)
#define GPIO_IN_PIN25_Low (0UL)
#define GPIO_IN_PIN25_High (1UL)


#define GPIO_IN_PIN24_Pos (24UL)
#define GPIO_IN_PIN24_Msk (0x1UL << GPIO_IN_PIN24_Pos)
#define GPIO_IN_PIN24_Low (0UL)
#define GPIO_IN_PIN24_High (1UL)


#define GPIO_IN_PIN23_Pos (23UL)
#define GPIO_IN_PIN23_Msk (0x1UL << GPIO_IN_PIN23_Pos)
#define GPIO_IN_PIN23_Low (0UL)
#define GPIO_IN_PIN23_High (1UL)


#define GPIO_IN_PIN22_Pos (22UL)
#define GPIO_IN_PIN22_Msk (0x1UL << GPIO_IN_PIN22_Pos)
#define GPIO_IN_PIN22_Low (0UL)
#define GPIO_IN_PIN22_High (1UL)


#define GPIO_IN_PIN21_Pos (21UL)
#define GPIO_IN_PIN21_Msk (0x1UL << GPIO_IN_PIN21_Pos)
#define GPIO_IN_PIN21_Low (0UL)
#define GPIO_IN_PIN21_High (1UL)


#define GPIO_IN_PIN20_Pos (20UL)
#define GPIO_IN_PIN20_Msk (0x1UL << GPIO_IN_PIN20_Pos)
#define GPIO_IN_PIN20_Low (0UL)
#define GPIO_IN_PIN20_High (1UL)


#define GPIO_IN_PIN19_Pos (19UL)
#define GPIO_IN_PIN19_Msk (0x1UL << GPIO_IN_PIN19_Pos)
#define GPIO_IN_PIN19_Low (0UL)
#define GPIO_IN_PIN19_High (1UL)


#define GPIO_IN_PIN18_Pos (18UL)
#define GPIO_IN_PIN18_Msk (0x1UL << GPIO_IN_PIN18_Pos)
#define GPIO_IN_PIN18_Low (0UL)
#define GPIO_IN_PIN18_High (1UL)


#define GPIO_IN_PIN17_Pos (17UL)
#define GPIO_IN_PIN17_Msk (0x1UL << GPIO_IN_PIN17_Pos)
#define GPIO_IN_PIN17_Low (0UL)
#define GPIO_IN_PIN17_High (1UL)


#define GPIO_IN_PIN16_Pos (16UL)
#define GPIO_IN_PIN16_Msk (0x1UL << GPIO_IN_PIN16_Pos)
#define GPIO_IN_PIN16_Low (0UL)
#define GPIO_IN_PIN16_High (1UL)


#define GPIO_IN_PIN15_Pos (15UL)
#define GPIO_IN_PIN15_Msk (0x1UL << GPIO_IN_PIN15_Pos)
#define GPIO_IN_PIN15_Low (0UL)
#define GPIO_IN_PIN15_High (1UL)


#define GPIO_IN_PIN14_Pos (14UL)
#define GPIO_IN_PIN14_Msk (0x1UL << GPIO_IN_PIN14_Pos)
#define GPIO_IN_PIN14_Low (0UL)
#define GPIO_IN_PIN14_High (1UL)


#define GPIO_IN_PIN13_Pos (13UL)
#define GPIO_IN_PIN13_Msk (0x1UL << GPIO_IN_PIN13_Pos)
#define GPIO_IN_PIN13_Low (0UL)
#define GPIO_IN_PIN13_High (1UL)


#define GPIO_IN_PIN12_Pos (12UL)
#define GPIO_IN_PIN12_Msk (0x1UL << GPIO_IN_PIN12_Pos)
#define GPIO_IN_PIN12_Low (0UL)
#define GPIO_IN_PIN12_High (1UL)


#define GPIO_IN_PIN11_Pos (11UL)
#define GPIO_IN_PIN11_Msk (0x1UL << GPIO_IN_PIN11_Pos)
#define GPIO_IN_PIN11_Low (0UL)
#define GPIO_IN_PIN11_High (1UL)


#define GPIO_IN_PIN10_Pos (10UL)
#define GPIO_IN_PIN10_Msk (0x1UL << GPIO_IN_PIN10_Pos)
#define GPIO_IN_PIN10_Low (0UL)
#define GPIO_IN_PIN10_High (1UL)


#define GPIO_IN_PIN9_Pos (9UL)
#define GPIO_IN_PIN9_Msk (0x1UL << GPIO_IN_PIN9_Pos)
#define GPIO_IN_PIN9_Low (0UL)
#define GPIO_IN_PIN9_High (1UL)


#define GPIO_IN_PIN8_Pos (8UL)
#define GPIO_IN_PIN8_Msk (0x1UL << GPIO_IN_PIN8_Pos)
#define GPIO_IN_PIN8_Low (0UL)
#define GPIO_IN_PIN8_High (1UL)


#define GPIO_IN_PIN7_Pos (7UL)
#define GPIO_IN_PIN7_Msk (0x1UL << GPIO_IN_PIN7_Pos)
#define GPIO_IN_PIN7_Low (0UL)
#define GPIO_IN_PIN7_High (1UL)


#define GPIO_IN_PIN6_Pos (6UL)
#define GPIO_IN_PIN6_Msk (0x1UL << GPIO_IN_PIN6_Pos)
#define GPIO_IN_PIN6_Low (0UL)
#define GPIO_IN_PIN6_High (1UL)


#define GPIO_IN_PIN5_Pos (5UL)
#define GPIO_IN_PIN5_Msk (0x1UL << GPIO_IN_PIN5_Pos)
#define GPIO_IN_PIN5_Low (0UL)
#define GPIO_IN_PIN5_High (1UL)


#define GPIO_IN_PIN4_Pos (4UL)
#define GPIO_IN_PIN4_Msk (0x1UL << GPIO_IN_PIN4_Pos)
#define GPIO_IN_PIN4_Low (0UL)
#define GPIO_IN_PIN4_High (1UL)


#define GPIO_IN_PIN3_Pos (3UL)
#define GPIO_IN_PIN3_Msk (0x1UL << GPIO_IN_PIN3_Pos)
#define GPIO_IN_PIN3_Low (0UL)
#define GPIO_IN_PIN3_High (1UL)


#define GPIO_IN_PIN2_Pos (2UL)
#define GPIO_IN_PIN2_Msk (0x1UL << GPIO_IN_PIN2_Pos)
#define GPIO_IN_PIN2_Low (0UL)
#define GPIO_IN_PIN2_High (1UL)


#define GPIO_IN_PIN1_Pos (1UL)
#define GPIO_IN_PIN1_Msk (0x1UL << GPIO_IN_PIN1_Pos)
#define GPIO_IN_PIN1_Low (0UL)
#define GPIO_IN_PIN1_High (1UL)


#define GPIO_IN_PIN0_Pos (0UL)
#define GPIO_IN_PIN0_Msk (0x1UL << GPIO_IN_PIN0_Pos)
#define GPIO_IN_PIN0_Low (0UL)
#define GPIO_IN_PIN0_High (1UL)





#define GPIO_DIR_PIN31_Pos (31UL)
#define GPIO_DIR_PIN31_Msk (0x1UL << GPIO_DIR_PIN31_Pos)
#define GPIO_DIR_PIN31_Input (0UL)
#define GPIO_DIR_PIN31_Output (1UL)


#define GPIO_DIR_PIN30_Pos (30UL)
#define GPIO_DIR_PIN30_Msk (0x1UL << GPIO_DIR_PIN30_Pos)
#define GPIO_DIR_PIN30_Input (0UL)
#define GPIO_DIR_PIN30_Output (1UL)


#define GPIO_DIR_PIN29_Pos (29UL)
#define GPIO_DIR_PIN29_Msk (0x1UL << GPIO_DIR_PIN29_Pos)
#define GPIO_DIR_PIN29_Input (0UL)
#define GPIO_DIR_PIN29_Output (1UL)


#define GPIO_DIR_PIN28_Pos (28UL)
#define GPIO_DIR_PIN28_Msk (0x1UL << GPIO_DIR_PIN28_Pos)
#define GPIO_DIR_PIN28_Input (0UL)
#define GPIO_DIR_PIN28_Output (1UL)


#define GPIO_DIR_PIN27_Pos (27UL)
#define GPIO_DIR_PIN27_Msk (0x1UL << GPIO_DIR_PIN27_Pos)
#define GPIO_DIR_PIN27_Input (0UL)
#define GPIO_DIR_PIN27_Output (1UL)


#define GPIO_DIR_PIN26_Pos (26UL)
#define GPIO_DIR_PIN26_Msk (0x1UL << GPIO_DIR_PIN26_Pos)
#define GPIO_DIR_PIN26_Input (0UL)
#define GPIO_DIR_PIN26_Output (1UL)


#define GPIO_DIR_PIN25_Pos (25UL)
#define GPIO_DIR_PIN25_Msk (0x1UL << GPIO_DIR_PIN25_Pos)
#define GPIO_DIR_PIN25_Input (0UL)
#define GPIO_DIR_PIN25_Output (1UL)


#define GPIO_DIR_PIN24_Pos (24UL)
#define GPIO_DIR_PIN24_Msk (0x1UL << GPIO_DIR_PIN24_Pos)
#define GPIO_DIR_PIN24_Input (0UL)
#define GPIO_DIR_PIN24_Output (1UL)


#define GPIO_DIR_PIN23_Pos (23UL)
#define GPIO_DIR_PIN23_Msk (0x1UL << GPIO_DIR_PIN23_Pos)
#define GPIO_DIR_PIN23_Input (0UL)
#define GPIO_DIR_PIN23_Output (1UL)


#define GPIO_DIR_PIN22_Pos (22UL)
#define GPIO_DIR_PIN22_Msk (0x1UL << GPIO_DIR_PIN22_Pos)
#define GPIO_DIR_PIN22_Input (0UL)
#define GPIO_DIR_PIN22_Output (1UL)


#define GPIO_DIR_PIN21_Pos (21UL)
#define GPIO_DIR_PIN21_Msk (0x1UL << GPIO_DIR_PIN21_Pos)
#define GPIO_DIR_PIN21_Input (0UL)
#define GPIO_DIR_PIN21_Output (1UL)


#define GPIO_DIR_PIN20_Pos (20UL)
#define GPIO_DIR_PIN20_Msk (0x1UL << GPIO_DIR_PIN20_Pos)
#define GPIO_DIR_PIN20_Input (0UL)
#define GPIO_DIR_PIN20_Output (1UL)


#define GPIO_DIR_PIN19_Pos (19UL)
#define GPIO_DIR_PIN19_Msk (0x1UL << GPIO_DIR_PIN19_Pos)
#define GPIO_DIR_PIN19_Input (0UL)
#define GPIO_DIR_PIN19_Output (1UL)


#define GPIO_DIR_PIN18_Pos (18UL)
#define GPIO_DIR_PIN18_Msk (0x1UL << GPIO_DIR_PIN18_Pos)
#define GPIO_DIR_PIN18_Input (0UL)
#define GPIO_DIR_PIN18_Output (1UL)


#define GPIO_DIR_PIN17_Pos (17UL)
#define GPIO_DIR_PIN17_Msk (0x1UL << GPIO_DIR_PIN17_Pos)
#define GPIO_DIR_PIN17_Input (0UL)
#define GPIO_DIR_PIN17_Output (1UL)


#define GPIO_DIR_PIN16_Pos (16UL)
#define GPIO_DIR_PIN16_Msk (0x1UL << GPIO_DIR_PIN16_Pos)
#define GPIO_DIR_PIN16_Input (0UL)
#define GPIO_DIR_PIN16_Output (1UL)


#define GPIO_DIR_PIN15_Pos (15UL)
#define GPIO_DIR_PIN15_Msk (0x1UL << GPIO_DIR_PIN15_Pos)
#define GPIO_DIR_PIN15_Input (0UL)
#define GPIO_DIR_PIN15_Output (1UL)


#define GPIO_DIR_PIN14_Pos (14UL)
#define GPIO_DIR_PIN14_Msk (0x1UL << GPIO_DIR_PIN14_Pos)
#define GPIO_DIR_PIN14_Input (0UL)
#define GPIO_DIR_PIN14_Output (1UL)


#define GPIO_DIR_PIN13_Pos (13UL)
#define GPIO_DIR_PIN13_Msk (0x1UL << GPIO_DIR_PIN13_Pos)
#define GPIO_DIR_PIN13_Input (0UL)
#define GPIO_DIR_PIN13_Output (1UL)


#define GPIO_DIR_PIN12_Pos (12UL)
#define GPIO_DIR_PIN12_Msk (0x1UL << GPIO_DIR_PIN12_Pos)
#define GPIO_DIR_PIN12_Input (0UL)
#define GPIO_DIR_PIN12_Output (1UL)


#define GPIO_DIR_PIN11_Pos (11UL)
#define GPIO_DIR_PIN11_Msk (0x1UL << GPIO_DIR_PIN11_Pos)
#define GPIO_DIR_PIN11_Input (0UL)
#define GPIO_DIR_PIN11_Output (1UL)


#define GPIO_DIR_PIN10_Pos (10UL)
#define GPIO_DIR_PIN10_Msk (0x1UL << GPIO_DIR_PIN10_Pos)
#define GPIO_DIR_PIN10_Input (0UL)
#define GPIO_DIR_PIN10_Output (1UL)


#define GPIO_DIR_PIN9_Pos (9UL)
#define GPIO_DIR_PIN9_Msk (0x1UL << GPIO_DIR_PIN9_Pos)
#define GPIO_DIR_PIN9_Input (0UL)
#define GPIO_DIR_PIN9_Output (1UL)


#define GPIO_DIR_PIN8_Pos (8UL)
#define GPIO_DIR_PIN8_Msk (0x1UL << GPIO_DIR_PIN8_Pos)
#define GPIO_DIR_PIN8_Input (0UL)
#define GPIO_DIR_PIN8_Output (1UL)


#define GPIO_DIR_PIN7_Pos (7UL)
#define GPIO_DIR_PIN7_Msk (0x1UL << GPIO_DIR_PIN7_Pos)
#define GPIO_DIR_PIN7_Input (0UL)
#define GPIO_DIR_PIN7_Output (1UL)


#define GPIO_DIR_PIN6_Pos (6UL)
#define GPIO_DIR_PIN6_Msk (0x1UL << GPIO_DIR_PIN6_Pos)
#define GPIO_DIR_PIN6_Input (0UL)
#define GPIO_DIR_PIN6_Output (1UL)


#define GPIO_DIR_PIN5_Pos (5UL)
#define GPIO_DIR_PIN5_Msk (0x1UL << GPIO_DIR_PIN5_Pos)
#define GPIO_DIR_PIN5_Input (0UL)
#define GPIO_DIR_PIN5_Output (1UL)


#define GPIO_DIR_PIN4_Pos (4UL)
#define GPIO_DIR_PIN4_Msk (0x1UL << GPIO_DIR_PIN4_Pos)
#define GPIO_DIR_PIN4_Input (0UL)
#define GPIO_DIR_PIN4_Output (1UL)


#define GPIO_DIR_PIN3_Pos (3UL)
#define GPIO_DIR_PIN3_Msk (0x1UL << GPIO_DIR_PIN3_Pos)
#define GPIO_DIR_PIN3_Input (0UL)
#define GPIO_DIR_PIN3_Output (1UL)


#define GPIO_DIR_PIN2_Pos (2UL)
#define GPIO_DIR_PIN2_Msk (0x1UL << GPIO_DIR_PIN2_Pos)
#define GPIO_DIR_PIN2_Input (0UL)
#define GPIO_DIR_PIN2_Output (1UL)


#define GPIO_DIR_PIN1_Pos (1UL)
#define GPIO_DIR_PIN1_Msk (0x1UL << GPIO_DIR_PIN1_Pos)
#define GPIO_DIR_PIN1_Input (0UL)
#define GPIO_DIR_PIN1_Output (1UL)


#define GPIO_DIR_PIN0_Pos (0UL)
#define GPIO_DIR_PIN0_Msk (0x1UL << GPIO_DIR_PIN0_Pos)
#define GPIO_DIR_PIN0_Input (0UL)
#define GPIO_DIR_PIN0_Output (1UL)





#define GPIO_DIRSET_PIN31_Pos (31UL)
#define GPIO_DIRSET_PIN31_Msk (0x1UL << GPIO_DIRSET_PIN31_Pos)
#define GPIO_DIRSET_PIN31_Input (0UL)
#define GPIO_DIRSET_PIN31_Output (1UL)
#define GPIO_DIRSET_PIN31_Set (1UL)


#define GPIO_DIRSET_PIN30_Pos (30UL)
#define GPIO_DIRSET_PIN30_Msk (0x1UL << GPIO_DIRSET_PIN30_Pos)
#define GPIO_DIRSET_PIN30_Input (0UL)
#define GPIO_DIRSET_PIN30_Output (1UL)
#define GPIO_DIRSET_PIN30_Set (1UL)


#define GPIO_DIRSET_PIN29_Pos (29UL)
#define GPIO_DIRSET_PIN29_Msk (0x1UL << GPIO_DIRSET_PIN29_Pos)
#define GPIO_DIRSET_PIN29_Input (0UL)
#define GPIO_DIRSET_PIN29_Output (1UL)
#define GPIO_DIRSET_PIN29_Set (1UL)


#define GPIO_DIRSET_PIN28_Pos (28UL)
#define GPIO_DIRSET_PIN28_Msk (0x1UL << GPIO_DIRSET_PIN28_Pos)
#define GPIO_DIRSET_PIN28_Input (0UL)
#define GPIO_DIRSET_PIN28_Output (1UL)
#define GPIO_DIRSET_PIN28_Set (1UL)


#define GPIO_DIRSET_PIN27_Pos (27UL)
#define GPIO_DIRSET_PIN27_Msk (0x1UL << GPIO_DIRSET_PIN27_Pos)
#define GPIO_DIRSET_PIN27_Input (0UL)
#define GPIO_DIRSET_PIN27_Output (1UL)
#define GPIO_DIRSET_PIN27_Set (1UL)


#define GPIO_DIRSET_PIN26_Pos (26UL)
#define GPIO_DIRSET_PIN26_Msk (0x1UL << GPIO_DIRSET_PIN26_Pos)
#define GPIO_DIRSET_PIN26_Input (0UL)
#define GPIO_DIRSET_PIN26_Output (1UL)
#define GPIO_DIRSET_PIN26_Set (1UL)


#define GPIO_DIRSET_PIN25_Pos (25UL)
#define GPIO_DIRSET_PIN25_Msk (0x1UL << GPIO_DIRSET_PIN25_Pos)
#define GPIO_DIRSET_PIN25_Input (0UL)
#define GPIO_DIRSET_PIN25_Output (1UL)
#define GPIO_DIRSET_PIN25_Set (1UL)


#define GPIO_DIRSET_PIN24_Pos (24UL)
#define GPIO_DIRSET_PIN24_Msk (0x1UL << GPIO_DIRSET_PIN24_Pos)
#define GPIO_DIRSET_PIN24_Input (0UL)
#define GPIO_DIRSET_PIN24_Output (1UL)
#define GPIO_DIRSET_PIN24_Set (1UL)


#define GPIO_DIRSET_PIN23_Pos (23UL)
#define GPIO_DIRSET_PIN23_Msk (0x1UL << GPIO_DIRSET_PIN23_Pos)
#define GPIO_DIRSET_PIN23_Input (0UL)
#define GPIO_DIRSET_PIN23_Output (1UL)
#define GPIO_DIRSET_PIN23_Set (1UL)


#define GPIO_DIRSET_PIN22_Pos (22UL)
#define GPIO_DIRSET_PIN22_Msk (0x1UL << GPIO_DIRSET_PIN22_Pos)
#define GPIO_DIRSET_PIN22_Input (0UL)
#define GPIO_DIRSET_PIN22_Output (1UL)
#define GPIO_DIRSET_PIN22_Set (1UL)


#define GPIO_DIRSET_PIN21_Pos (21UL)
#define GPIO_DIRSET_PIN21_Msk (0x1UL << GPIO_DIRSET_PIN21_Pos)
#define GPIO_DIRSET_PIN21_Input (0UL)
#define GPIO_DIRSET_PIN21_Output (1UL)
#define GPIO_DIRSET_PIN21_Set (1UL)


#define GPIO_DIRSET_PIN20_Pos (20UL)
#define GPIO_DIRSET_PIN20_Msk (0x1UL << GPIO_DIRSET_PIN20_Pos)
#define GPIO_DIRSET_PIN20_Input (0UL)
#define GPIO_DIRSET_PIN20_Output (1UL)
#define GPIO_DIRSET_PIN20_Set (1UL)


#define GPIO_DIRSET_PIN19_Pos (19UL)
#define GPIO_DIRSET_PIN19_Msk (0x1UL << GPIO_DIRSET_PIN19_Pos)
#define GPIO_DIRSET_PIN19_Input (0UL)
#define GPIO_DIRSET_PIN19_Output (1UL)
#define GPIO_DIRSET_PIN19_Set (1UL)


#define GPIO_DIRSET_PIN18_Pos (18UL)
#define GPIO_DIRSET_PIN18_Msk (0x1UL << GPIO_DIRSET_PIN18_Pos)
#define GPIO_DIRSET_PIN18_Input (0UL)
#define GPIO_DIRSET_PIN18_Output (1UL)
#define GPIO_DIRSET_PIN18_Set (1UL)


#define GPIO_DIRSET_PIN17_Pos (17UL)
#define GPIO_DIRSET_PIN17_Msk (0x1UL << GPIO_DIRSET_PIN17_Pos)
#define GPIO_DIRSET_PIN17_Input (0UL)
#define GPIO_DIRSET_PIN17_Output (1UL)
#define GPIO_DIRSET_PIN17_Set (1UL)


#define GPIO_DIRSET_PIN16_Pos (16UL)
#define GPIO_DIRSET_PIN16_Msk (0x1UL << GPIO_DIRSET_PIN16_Pos)
#define GPIO_DIRSET_PIN16_Input (0UL)
#define GPIO_DIRSET_PIN16_Output (1UL)
#define GPIO_DIRSET_PIN16_Set (1UL)


#define GPIO_DIRSET_PIN15_Pos (15UL)
#define GPIO_DIRSET_PIN15_Msk (0x1UL << GPIO_DIRSET_PIN15_Pos)
#define GPIO_DIRSET_PIN15_Input (0UL)
#define GPIO_DIRSET_PIN15_Output (1UL)
#define GPIO_DIRSET_PIN15_Set (1UL)


#define GPIO_DIRSET_PIN14_Pos (14UL)
#define GPIO_DIRSET_PIN14_Msk (0x1UL << GPIO_DIRSET_PIN14_Pos)
#define GPIO_DIRSET_PIN14_Input (0UL)
#define GPIO_DIRSET_PIN14_Output (1UL)
#define GPIO_DIRSET_PIN14_Set (1UL)


#define GPIO_DIRSET_PIN13_Pos (13UL)
#define GPIO_DIRSET_PIN13_Msk (0x1UL << GPIO_DIRSET_PIN13_Pos)
#define GPIO_DIRSET_PIN13_Input (0UL)
#define GPIO_DIRSET_PIN13_Output (1UL)
#define GPIO_DIRSET_PIN13_Set (1UL)


#define GPIO_DIRSET_PIN12_Pos (12UL)
#define GPIO_DIRSET_PIN12_Msk (0x1UL << GPIO_DIRSET_PIN12_Pos)
#define GPIO_DIRSET_PIN12_Input (0UL)
#define GPIO_DIRSET_PIN12_Output (1UL)
#define GPIO_DIRSET_PIN12_Set (1UL)


#define GPIO_DIRSET_PIN11_Pos (11UL)
#define GPIO_DIRSET_PIN11_Msk (0x1UL << GPIO_DIRSET_PIN11_Pos)
#define GPIO_DIRSET_PIN11_Input (0UL)
#define GPIO_DIRSET_PIN11_Output (1UL)
#define GPIO_DIRSET_PIN11_Set (1UL)


#define GPIO_DIRSET_PIN10_Pos (10UL)
#define GPIO_DIRSET_PIN10_Msk (0x1UL << GPIO_DIRSET_PIN10_Pos)
#define GPIO_DIRSET_PIN10_Input (0UL)
#define GPIO_DIRSET_PIN10_Output (1UL)
#define GPIO_DIRSET_PIN10_Set (1UL)


#define GPIO_DIRSET_PIN9_Pos (9UL)
#define GPIO_DIRSET_PIN9_Msk (0x1UL << GPIO_DIRSET_PIN9_Pos)
#define GPIO_DIRSET_PIN9_Input (0UL)
#define GPIO_DIRSET_PIN9_Output (1UL)
#define GPIO_DIRSET_PIN9_Set (1UL)


#define GPIO_DIRSET_PIN8_Pos (8UL)
#define GPIO_DIRSET_PIN8_Msk (0x1UL << GPIO_DIRSET_PIN8_Pos)
#define GPIO_DIRSET_PIN8_Input (0UL)
#define GPIO_DIRSET_PIN8_Output (1UL)
#define GPIO_DIRSET_PIN8_Set (1UL)


#define GPIO_DIRSET_PIN7_Pos (7UL)
#define GPIO_DIRSET_PIN7_Msk (0x1UL << GPIO_DIRSET_PIN7_Pos)
#define GPIO_DIRSET_PIN7_Input (0UL)
#define GPIO_DIRSET_PIN7_Output (1UL)
#define GPIO_DIRSET_PIN7_Set (1UL)


#define GPIO_DIRSET_PIN6_Pos (6UL)
#define GPIO_DIRSET_PIN6_Msk (0x1UL << GPIO_DIRSET_PIN6_Pos)
#define GPIO_DIRSET_PIN6_Input (0UL)
#define GPIO_DIRSET_PIN6_Output (1UL)
#define GPIO_DIRSET_PIN6_Set (1UL)


#define GPIO_DIRSET_PIN5_Pos (5UL)
#define GPIO_DIRSET_PIN5_Msk (0x1UL << GPIO_DIRSET_PIN5_Pos)
#define GPIO_DIRSET_PIN5_Input (0UL)
#define GPIO_DIRSET_PIN5_Output (1UL)
#define GPIO_DIRSET_PIN5_Set (1UL)


#define GPIO_DIRSET_PIN4_Pos (4UL)
#define GPIO_DIRSET_PIN4_Msk (0x1UL << GPIO_DIRSET_PIN4_Pos)
#define GPIO_DIRSET_PIN4_Input (0UL)
#define GPIO_DIRSET_PIN4_Output (1UL)
#define GPIO_DIRSET_PIN4_Set (1UL)


#define GPIO_DIRSET_PIN3_Pos (3UL)
#define GPIO_DIRSET_PIN3_Msk (0x1UL << GPIO_DIRSET_PIN3_Pos)
#define GPIO_DIRSET_PIN3_Input (0UL)
#define GPIO_DIRSET_PIN3_Output (1UL)
#define GPIO_DIRSET_PIN3_Set (1UL)


#define GPIO_DIRSET_PIN2_Pos (2UL)
#define GPIO_DIRSET_PIN2_Msk (0x1UL << GPIO_DIRSET_PIN2_Pos)
#define GPIO_DIRSET_PIN2_Input (0UL)
#define GPIO_DIRSET_PIN2_Output (1UL)
#define GPIO_DIRSET_PIN2_Set (1UL)


#define GPIO_DIRSET_PIN1_Pos (1UL)
#define GPIO_DIRSET_PIN1_Msk (0x1UL << GPIO_DIRSET_PIN1_Pos)
#define GPIO_DIRSET_PIN1_Input (0UL)
#define GPIO_DIRSET_PIN1_Output (1UL)
#define GPIO_DIRSET_PIN1_Set (1UL)


#define GPIO_DIRSET_PIN0_Pos (0UL)
#define GPIO_DIRSET_PIN0_Msk (0x1UL << GPIO_DIRSET_PIN0_Pos)
#define GPIO_DIRSET_PIN0_Input (0UL)
#define GPIO_DIRSET_PIN0_Output (1UL)
#define GPIO_DIRSET_PIN0_Set (1UL)





#define GPIO_DIRCLR_PIN31_Pos (31UL)
#define GPIO_DIRCLR_PIN31_Msk (0x1UL << GPIO_DIRCLR_PIN31_Pos)
#define GPIO_DIRCLR_PIN31_Input (0UL)
#define GPIO_DIRCLR_PIN31_Output (1UL)
#define GPIO_DIRCLR_PIN31_Clear (1UL)


#define GPIO_DIRCLR_PIN30_Pos (30UL)
#define GPIO_DIRCLR_PIN30_Msk (0x1UL << GPIO_DIRCLR_PIN30_Pos)
#define GPIO_DIRCLR_PIN30_Input (0UL)
#define GPIO_DIRCLR_PIN30_Output (1UL)
#define GPIO_DIRCLR_PIN30_Clear (1UL)


#define GPIO_DIRCLR_PIN29_Pos (29UL)
#define GPIO_DIRCLR_PIN29_Msk (0x1UL << GPIO_DIRCLR_PIN29_Pos)
#define GPIO_DIRCLR_PIN29_Input (0UL)
#define GPIO_DIRCLR_PIN29_Output (1UL)
#define GPIO_DIRCLR_PIN29_Clear (1UL)


#define GPIO_DIRCLR_PIN28_Pos (28UL)
#define GPIO_DIRCLR_PIN28_Msk (0x1UL << GPIO_DIRCLR_PIN28_Pos)
#define GPIO_DIRCLR_PIN28_Input (0UL)
#define GPIO_DIRCLR_PIN28_Output (1UL)
#define GPIO_DIRCLR_PIN28_Clear (1UL)


#define GPIO_DIRCLR_PIN27_Pos (27UL)
#define GPIO_DIRCLR_PIN27_Msk (0x1UL << GPIO_DIRCLR_PIN27_Pos)
#define GPIO_DIRCLR_PIN27_Input (0UL)
#define GPIO_DIRCLR_PIN27_Output (1UL)
#define GPIO_DIRCLR_PIN27_Clear (1UL)


#define GPIO_DIRCLR_PIN26_Pos (26UL)
#define GPIO_DIRCLR_PIN26_Msk (0x1UL << GPIO_DIRCLR_PIN26_Pos)
#define GPIO_DIRCLR_PIN26_Input (0UL)
#define GPIO_DIRCLR_PIN26_Output (1UL)
#define GPIO_DIRCLR_PIN26_Clear (1UL)


#define GPIO_DIRCLR_PIN25_Pos (25UL)
#define GPIO_DIRCLR_PIN25_Msk (0x1UL << GPIO_DIRCLR_PIN25_Pos)
#define GPIO_DIRCLR_PIN25_Input (0UL)
#define GPIO_DIRCLR_PIN25_Output (1UL)
#define GPIO_DIRCLR_PIN25_Clear (1UL)


#define GPIO_DIRCLR_PIN24_Pos (24UL)
#define GPIO_DIRCLR_PIN24_Msk (0x1UL << GPIO_DIRCLR_PIN24_Pos)
#define GPIO_DIRCLR_PIN24_Input (0UL)
#define GPIO_DIRCLR_PIN24_Output (1UL)
#define GPIO_DIRCLR_PIN24_Clear (1UL)


#define GPIO_DIRCLR_PIN23_Pos (23UL)
#define GPIO_DIRCLR_PIN23_Msk (0x1UL << GPIO_DIRCLR_PIN23_Pos)
#define GPIO_DIRCLR_PIN23_Input (0UL)
#define GPIO_DIRCLR_PIN23_Output (1UL)
#define GPIO_DIRCLR_PIN23_Clear (1UL)


#define GPIO_DIRCLR_PIN22_Pos (22UL)
#define GPIO_DIRCLR_PIN22_Msk (0x1UL << GPIO_DIRCLR_PIN22_Pos)
#define GPIO_DIRCLR_PIN22_Input (0UL)
#define GPIO_DIRCLR_PIN22_Output (1UL)
#define GPIO_DIRCLR_PIN22_Clear (1UL)


#define GPIO_DIRCLR_PIN21_Pos (21UL)
#define GPIO_DIRCLR_PIN21_Msk (0x1UL << GPIO_DIRCLR_PIN21_Pos)
#define GPIO_DIRCLR_PIN21_Input (0UL)
#define GPIO_DIRCLR_PIN21_Output (1UL)
#define GPIO_DIRCLR_PIN21_Clear (1UL)


#define GPIO_DIRCLR_PIN20_Pos (20UL)
#define GPIO_DIRCLR_PIN20_Msk (0x1UL << GPIO_DIRCLR_PIN20_Pos)
#define GPIO_DIRCLR_PIN20_Input (0UL)
#define GPIO_DIRCLR_PIN20_Output (1UL)
#define GPIO_DIRCLR_PIN20_Clear (1UL)


#define GPIO_DIRCLR_PIN19_Pos (19UL)
#define GPIO_DIRCLR_PIN19_Msk (0x1UL << GPIO_DIRCLR_PIN19_Pos)
#define GPIO_DIRCLR_PIN19_Input (0UL)
#define GPIO_DIRCLR_PIN19_Output (1UL)
#define GPIO_DIRCLR_PIN19_Clear (1UL)


#define GPIO_DIRCLR_PIN18_Pos (18UL)
#define GPIO_DIRCLR_PIN18_Msk (0x1UL << GPIO_DIRCLR_PIN18_Pos)
#define GPIO_DIRCLR_PIN18_Input (0UL)
#define GPIO_DIRCLR_PIN18_Output (1UL)
#define GPIO_DIRCLR_PIN18_Clear (1UL)


#define GPIO_DIRCLR_PIN17_Pos (17UL)
#define GPIO_DIRCLR_PIN17_Msk (0x1UL << GPIO_DIRCLR_PIN17_Pos)
#define GPIO_DIRCLR_PIN17_Input (0UL)
#define GPIO_DIRCLR_PIN17_Output (1UL)
#define GPIO_DIRCLR_PIN17_Clear (1UL)


#define GPIO_DIRCLR_PIN16_Pos (16UL)
#define GPIO_DIRCLR_PIN16_Msk (0x1UL << GPIO_DIRCLR_PIN16_Pos)
#define GPIO_DIRCLR_PIN16_Input (0UL)
#define GPIO_DIRCLR_PIN16_Output (1UL)
#define GPIO_DIRCLR_PIN16_Clear (1UL)


#define GPIO_DIRCLR_PIN15_Pos (15UL)
#define GPIO_DIRCLR_PIN15_Msk (0x1UL << GPIO_DIRCLR_PIN15_Pos)
#define GPIO_DIRCLR_PIN15_Input (0UL)
#define GPIO_DIRCLR_PIN15_Output (1UL)
#define GPIO_DIRCLR_PIN15_Clear (1UL)


#define GPIO_DIRCLR_PIN14_Pos (14UL)
#define GPIO_DIRCLR_PIN14_Msk (0x1UL << GPIO_DIRCLR_PIN14_Pos)
#define GPIO_DIRCLR_PIN14_Input (0UL)
#define GPIO_DIRCLR_PIN14_Output (1UL)
#define GPIO_DIRCLR_PIN14_Clear (1UL)


#define GPIO_DIRCLR_PIN13_Pos (13UL)
#define GPIO_DIRCLR_PIN13_Msk (0x1UL << GPIO_DIRCLR_PIN13_Pos)
#define GPIO_DIRCLR_PIN13_Input (0UL)
#define GPIO_DIRCLR_PIN13_Output (1UL)
#define GPIO_DIRCLR_PIN13_Clear (1UL)


#define GPIO_DIRCLR_PIN12_Pos (12UL)
#define GPIO_DIRCLR_PIN12_Msk (0x1UL << GPIO_DIRCLR_PIN12_Pos)
#define GPIO_DIRCLR_PIN12_Input (0UL)
#define GPIO_DIRCLR_PIN12_Output (1UL)
#define GPIO_DIRCLR_PIN12_Clear (1UL)


#define GPIO_DIRCLR_PIN11_Pos (11UL)
#define GPIO_DIRCLR_PIN11_Msk (0x1UL << GPIO_DIRCLR_PIN11_Pos)
#define GPIO_DIRCLR_PIN11_Input (0UL)
#define GPIO_DIRCLR_PIN11_Output (1UL)
#define GPIO_DIRCLR_PIN11_Clear (1UL)


#define GPIO_DIRCLR_PIN10_Pos (10UL)
#define GPIO_DIRCLR_PIN10_Msk (0x1UL << GPIO_DIRCLR_PIN10_Pos)
#define GPIO_DIRCLR_PIN10_Input (0UL)
#define GPIO_DIRCLR_PIN10_Output (1UL)
#define GPIO_DIRCLR_PIN10_Clear (1UL)


#define GPIO_DIRCLR_PIN9_Pos (9UL)
#define GPIO_DIRCLR_PIN9_Msk (0x1UL << GPIO_DIRCLR_PIN9_Pos)
#define GPIO_DIRCLR_PIN9_Input (0UL)
#define GPIO_DIRCLR_PIN9_Output (1UL)
#define GPIO_DIRCLR_PIN9_Clear (1UL)


#define GPIO_DIRCLR_PIN8_Pos (8UL)
#define GPIO_DIRCLR_PIN8_Msk (0x1UL << GPIO_DIRCLR_PIN8_Pos)
#define GPIO_DIRCLR_PIN8_Input (0UL)
#define GPIO_DIRCLR_PIN8_Output (1UL)
#define GPIO_DIRCLR_PIN8_Clear (1UL)


#define GPIO_DIRCLR_PIN7_Pos (7UL)
#define GPIO_DIRCLR_PIN7_Msk (0x1UL << GPIO_DIRCLR_PIN7_Pos)
#define GPIO_DIRCLR_PIN7_Input (0UL)
#define GPIO_DIRCLR_PIN7_Output (1UL)
#define GPIO_DIRCLR_PIN7_Clear (1UL)


#define GPIO_DIRCLR_PIN6_Pos (6UL)
#define GPIO_DIRCLR_PIN6_Msk (0x1UL << GPIO_DIRCLR_PIN6_Pos)
#define GPIO_DIRCLR_PIN6_Input (0UL)
#define GPIO_DIRCLR_PIN6_Output (1UL)
#define GPIO_DIRCLR_PIN6_Clear (1UL)


#define GPIO_DIRCLR_PIN5_Pos (5UL)
#define GPIO_DIRCLR_PIN5_Msk (0x1UL << GPIO_DIRCLR_PIN5_Pos)
#define GPIO_DIRCLR_PIN5_Input (0UL)
#define GPIO_DIRCLR_PIN5_Output (1UL)
#define GPIO_DIRCLR_PIN5_Clear (1UL)


#define GPIO_DIRCLR_PIN4_Pos (4UL)
#define GPIO_DIRCLR_PIN4_Msk (0x1UL << GPIO_DIRCLR_PIN4_Pos)
#define GPIO_DIRCLR_PIN4_Input (0UL)
#define GPIO_DIRCLR_PIN4_Output (1UL)
#define GPIO_DIRCLR_PIN4_Clear (1UL)


#define GPIO_DIRCLR_PIN3_Pos (3UL)
#define GPIO_DIRCLR_PIN3_Msk (0x1UL << GPIO_DIRCLR_PIN3_Pos)
#define GPIO_DIRCLR_PIN3_Input (0UL)
#define GPIO_DIRCLR_PIN3_Output (1UL)
#define GPIO_DIRCLR_PIN3_Clear (1UL)


#define GPIO_DIRCLR_PIN2_Pos (2UL)
#define GPIO_DIRCLR_PIN2_Msk (0x1UL << GPIO_DIRCLR_PIN2_Pos)
#define GPIO_DIRCLR_PIN2_Input (0UL)
#define GPIO_DIRCLR_PIN2_Output (1UL)
#define GPIO_DIRCLR_PIN2_Clear (1UL)


#define GPIO_DIRCLR_PIN1_Pos (1UL)
#define GPIO_DIRCLR_PIN1_Msk (0x1UL << GPIO_DIRCLR_PIN1_Pos)
#define GPIO_DIRCLR_PIN1_Input (0UL)
#define GPIO_DIRCLR_PIN1_Output (1UL)
#define GPIO_DIRCLR_PIN1_Clear (1UL)


#define GPIO_DIRCLR_PIN0_Pos (0UL)
#define GPIO_DIRCLR_PIN0_Msk (0x1UL << GPIO_DIRCLR_PIN0_Pos)
#define GPIO_DIRCLR_PIN0_Input (0UL)
#define GPIO_DIRCLR_PIN0_Output (1UL)
#define GPIO_DIRCLR_PIN0_Clear (1UL)





#define GPIO_LATCH_PIN31_Pos (31UL)
#define GPIO_LATCH_PIN31_Msk (0x1UL << GPIO_LATCH_PIN31_Pos)
#define GPIO_LATCH_PIN31_NotLatched (0UL)
#define GPIO_LATCH_PIN31_Latched (1UL)


#define GPIO_LATCH_PIN30_Pos (30UL)
#define GPIO_LATCH_PIN30_Msk (0x1UL << GPIO_LATCH_PIN30_Pos)
#define GPIO_LATCH_PIN30_NotLatched (0UL)
#define GPIO_LATCH_PIN30_Latched (1UL)


#define GPIO_LATCH_PIN29_Pos (29UL)
#define GPIO_LATCH_PIN29_Msk (0x1UL << GPIO_LATCH_PIN29_Pos)
#define GPIO_LATCH_PIN29_NotLatched (0UL)
#define GPIO_LATCH_PIN29_Latched (1UL)


#define GPIO_LATCH_PIN28_Pos (28UL)
#define GPIO_LATCH_PIN28_Msk (0x1UL << GPIO_LATCH_PIN28_Pos)
#define GPIO_LATCH_PIN28_NotLatched (0UL)
#define GPIO_LATCH_PIN28_Latched (1UL)


#define GPIO_LATCH_PIN27_Pos (27UL)
#define GPIO_LATCH_PIN27_Msk (0x1UL << GPIO_LATCH_PIN27_Pos)
#define GPIO_LATCH_PIN27_NotLatched (0UL)
#define GPIO_LATCH_PIN27_Latched (1UL)


#define GPIO_LATCH_PIN26_Pos (26UL)
#define GPIO_LATCH_PIN26_Msk (0x1UL << GPIO_LATCH_PIN26_Pos)
#define GPIO_LATCH_PIN26_NotLatched (0UL)
#define GPIO_LATCH_PIN26_Latched (1UL)


#define GPIO_LATCH_PIN25_Pos (25UL)
#define GPIO_LATCH_PIN25_Msk (0x1UL << GPIO_LATCH_PIN25_Pos)
#define GPIO_LATCH_PIN25_NotLatched (0UL)
#define GPIO_LATCH_PIN25_Latched (1UL)


#define GPIO_LATCH_PIN24_Pos (24UL)
#define GPIO_LATCH_PIN24_Msk (0x1UL << GPIO_LATCH_PIN24_Pos)
#define GPIO_LATCH_PIN24_NotLatched (0UL)
#define GPIO_LATCH_PIN24_Latched (1UL)


#define GPIO_LATCH_PIN23_Pos (23UL)
#define GPIO_LATCH_PIN23_Msk (0x1UL << GPIO_LATCH_PIN23_Pos)
#define GPIO_LATCH_PIN23_NotLatched (0UL)
#define GPIO_LATCH_PIN23_Latched (1UL)


#define GPIO_LATCH_PIN22_Pos (22UL)
#define GPIO_LATCH_PIN22_Msk (0x1UL << GPIO_LATCH_PIN22_Pos)
#define GPIO_LATCH_PIN22_NotLatched (0UL)
#define GPIO_LATCH_PIN22_Latched (1UL)


#define GPIO_LATCH_PIN21_Pos (21UL)
#define GPIO_LATCH_PIN21_Msk (0x1UL << GPIO_LATCH_PIN21_Pos)
#define GPIO_LATCH_PIN21_NotLatched (0UL)
#define GPIO_LATCH_PIN21_Latched (1UL)


#define GPIO_LATCH_PIN20_Pos (20UL)
#define GPIO_LATCH_PIN20_Msk (0x1UL << GPIO_LATCH_PIN20_Pos)
#define GPIO_LATCH_PIN20_NotLatched (0UL)
#define GPIO_LATCH_PIN20_Latched (1UL)


#define GPIO_LATCH_PIN19_Pos (19UL)
#define GPIO_LATCH_PIN19_Msk (0x1UL << GPIO_LATCH_PIN19_Pos)
#define GPIO_LATCH_PIN19_NotLatched (0UL)
#define GPIO_LATCH_PIN19_Latched (1UL)


#define GPIO_LATCH_PIN18_Pos (18UL)
#define GPIO_LATCH_PIN18_Msk (0x1UL << GPIO_LATCH_PIN18_Pos)
#define GPIO_LATCH_PIN18_NotLatched (0UL)
#define GPIO_LATCH_PIN18_Latched (1UL)


#define GPIO_LATCH_PIN17_Pos (17UL)
#define GPIO_LATCH_PIN17_Msk (0x1UL << GPIO_LATCH_PIN17_Pos)
#define GPIO_LATCH_PIN17_NotLatched (0UL)
#define GPIO_LATCH_PIN17_Latched (1UL)


#define GPIO_LATCH_PIN16_Pos (16UL)
#define GPIO_LATCH_PIN16_Msk (0x1UL << GPIO_LATCH_PIN16_Pos)
#define GPIO_LATCH_PIN16_NotLatched (0UL)
#define GPIO_LATCH_PIN16_Latched (1UL)


#define GPIO_LATCH_PIN15_Pos (15UL)
#define GPIO_LATCH_PIN15_Msk (0x1UL << GPIO_LATCH_PIN15_Pos)
#define GPIO_LATCH_PIN15_NotLatched (0UL)
#define GPIO_LATCH_PIN15_Latched (1UL)


#define GPIO_LATCH_PIN14_Pos (14UL)
#define GPIO_LATCH_PIN14_Msk (0x1UL << GPIO_LATCH_PIN14_Pos)
#define GPIO_LATCH_PIN14_NotLatched (0UL)
#define GPIO_LATCH_PIN14_Latched (1UL)


#define GPIO_LATCH_PIN13_Pos (13UL)
#define GPIO_LATCH_PIN13_Msk (0x1UL << GPIO_LATCH_PIN13_Pos)
#define GPIO_LATCH_PIN13_NotLatched (0UL)
#define GPIO_LATCH_PIN13_Latched (1UL)


#define GPIO_LATCH_PIN12_Pos (12UL)
#define GPIO_LATCH_PIN12_Msk (0x1UL << GPIO_LATCH_PIN12_Pos)
#define GPIO_LATCH_PIN12_NotLatched (0UL)
#define GPIO_LATCH_PIN12_Latched (1UL)


#define GPIO_LATCH_PIN11_Pos (11UL)
#define GPIO_LATCH_PIN11_Msk (0x1UL << GPIO_LATCH_PIN11_Pos)
#define GPIO_LATCH_PIN11_NotLatched (0UL)
#define GPIO_LATCH_PIN11_Latched (1UL)


#define GPIO_LATCH_PIN10_Pos (10UL)
#define GPIO_LATCH_PIN10_Msk (0x1UL << GPIO_LATCH_PIN10_Pos)
#define GPIO_LATCH_PIN10_NotLatched (0UL)
#define GPIO_LATCH_PIN10_Latched (1UL)


#define GPIO_LATCH_PIN9_Pos (9UL)
#define GPIO_LATCH_PIN9_Msk (0x1UL << GPIO_LATCH_PIN9_Pos)
#define GPIO_LATCH_PIN9_NotLatched (0UL)
#define GPIO_LATCH_PIN9_Latched (1UL)


#define GPIO_LATCH_PIN8_Pos (8UL)
#define GPIO_LATCH_PIN8_Msk (0x1UL << GPIO_LATCH_PIN8_Pos)
#define GPIO_LATCH_PIN8_NotLatched (0UL)
#define GPIO_LATCH_PIN8_Latched (1UL)


#define GPIO_LATCH_PIN7_Pos (7UL)
#define GPIO_LATCH_PIN7_Msk (0x1UL << GPIO_LATCH_PIN7_Pos)
#define GPIO_LATCH_PIN7_NotLatched (0UL)
#define GPIO_LATCH_PIN7_Latched (1UL)


#define GPIO_LATCH_PIN6_Pos (6UL)
#define GPIO_LATCH_PIN6_Msk (0x1UL << GPIO_LATCH_PIN6_Pos)
#define GPIO_LATCH_PIN6_NotLatched (0UL)
#define GPIO_LATCH_PIN6_Latched (1UL)


#define GPIO_LATCH_PIN5_Pos (5UL)
#define GPIO_LATCH_PIN5_Msk (0x1UL << GPIO_LATCH_PIN5_Pos)
#define GPIO_LATCH_PIN5_NotLatched (0UL)
#define GPIO_LATCH_PIN5_Latched (1UL)


#define GPIO_LATCH_PIN4_Pos (4UL)
#define GPIO_LATCH_PIN4_Msk (0x1UL << GPIO_LATCH_PIN4_Pos)
#define GPIO_LATCH_PIN4_NotLatched (0UL)
#define GPIO_LATCH_PIN4_Latched (1UL)


#define GPIO_LATCH_PIN3_Pos (3UL)
#define GPIO_LATCH_PIN3_Msk (0x1UL << GPIO_LATCH_PIN3_Pos)
#define GPIO_LATCH_PIN3_NotLatched (0UL)
#define GPIO_LATCH_PIN3_Latched (1UL)


#define GPIO_LATCH_PIN2_Pos (2UL)
#define GPIO_LATCH_PIN2_Msk (0x1UL << GPIO_LATCH_PIN2_Pos)
#define GPIO_LATCH_PIN2_NotLatched (0UL)
#define GPIO_LATCH_PIN2_Latched (1UL)


#define GPIO_LATCH_PIN1_Pos (1UL)
#define GPIO_LATCH_PIN1_Msk (0x1UL << GPIO_LATCH_PIN1_Pos)
#define GPIO_LATCH_PIN1_NotLatched (0UL)
#define GPIO_LATCH_PIN1_Latched (1UL)


#define GPIO_LATCH_PIN0_Pos (0UL)
#define GPIO_LATCH_PIN0_Msk (0x1UL << GPIO_LATCH_PIN0_Pos)
#define GPIO_LATCH_PIN0_NotLatched (0UL)
#define GPIO_LATCH_PIN0_Latched (1UL)





#define GPIO_DETECTMODE_DETECTMODE_Pos (0UL)
#define GPIO_DETECTMODE_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_DETECTMODE_Pos)
#define GPIO_DETECTMODE_DETECTMODE_Default (0UL)
#define GPIO_DETECTMODE_DETECTMODE_LDETECT (1UL)





#define GPIO_PIN_CNF_SENSE_Pos (16UL)
#define GPIO_PIN_CNF_SENSE_Msk (0x3UL << GPIO_PIN_CNF_SENSE_Pos)
#define GPIO_PIN_CNF_SENSE_Disabled (0UL)
#define GPIO_PIN_CNF_SENSE_High (2UL)
#define GPIO_PIN_CNF_SENSE_Low (3UL)


#define GPIO_PIN_CNF_DRIVE_Pos (8UL)
#define GPIO_PIN_CNF_DRIVE_Msk (0x7UL << GPIO_PIN_CNF_DRIVE_Pos)
#define GPIO_PIN_CNF_DRIVE_S0S1 (0UL)
#define GPIO_PIN_CNF_DRIVE_H0S1 (1UL)
#define GPIO_PIN_CNF_DRIVE_S0H1 (2UL)
#define GPIO_PIN_CNF_DRIVE_H0H1 (3UL)
#define GPIO_PIN_CNF_DRIVE_D0S1 (4UL)
#define GPIO_PIN_CNF_DRIVE_D0H1 (5UL)
#define GPIO_PIN_CNF_DRIVE_S0D1 (6UL)
#define GPIO_PIN_CNF_DRIVE_H0D1 (7UL)


#define GPIO_PIN_CNF_PULL_Pos (2UL)
#define GPIO_PIN_CNF_PULL_Msk (0x3UL << GPIO_PIN_CNF_PULL_Pos)
#define GPIO_PIN_CNF_PULL_Disabled (0UL)
#define GPIO_PIN_CNF_PULL_Pulldown (1UL)
#define GPIO_PIN_CNF_PULL_Pullup (3UL)


#define GPIO_PIN_CNF_INPUT_Pos (1UL)
#define GPIO_PIN_CNF_INPUT_Msk (0x1UL << GPIO_PIN_CNF_INPUT_Pos)
#define GPIO_PIN_CNF_INPUT_Connect (0UL)
#define GPIO_PIN_CNF_INPUT_Disconnect (1UL)


#define GPIO_PIN_CNF_DIR_Pos (0UL)
#define GPIO_PIN_CNF_DIR_Msk (0x1UL << GPIO_PIN_CNF_DIR_Pos)
#define GPIO_PIN_CNF_DIR_Input (0UL)
#define GPIO_PIN_CNF_DIR_Output (1UL)
# 6802 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define PDM_TASKS_START_TASKS_START_Pos (0UL)
#define PDM_TASKS_START_TASKS_START_Msk (0x1UL << PDM_TASKS_START_TASKS_START_Pos)
#define PDM_TASKS_START_TASKS_START_Trigger (1UL)





#define PDM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define PDM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << PDM_TASKS_STOP_TASKS_STOP_Pos)
#define PDM_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define PDM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << PDM_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define PDM_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)





#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << PDM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)





#define PDM_EVENTS_END_EVENTS_END_Pos (0UL)
#define PDM_EVENTS_END_EVENTS_END_Msk (0x1UL << PDM_EVENTS_END_EVENTS_END_Pos)
#define PDM_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define PDM_EVENTS_END_EVENTS_END_Generated (1UL)





#define PDM_INTEN_END_Pos (2UL)
#define PDM_INTEN_END_Msk (0x1UL << PDM_INTEN_END_Pos)
#define PDM_INTEN_END_Disabled (0UL)
#define PDM_INTEN_END_Enabled (1UL)


#define PDM_INTEN_STOPPED_Pos (1UL)
#define PDM_INTEN_STOPPED_Msk (0x1UL << PDM_INTEN_STOPPED_Pos)
#define PDM_INTEN_STOPPED_Disabled (0UL)
#define PDM_INTEN_STOPPED_Enabled (1UL)


#define PDM_INTEN_STARTED_Pos (0UL)
#define PDM_INTEN_STARTED_Msk (0x1UL << PDM_INTEN_STARTED_Pos)
#define PDM_INTEN_STARTED_Disabled (0UL)
#define PDM_INTEN_STARTED_Enabled (1UL)





#define PDM_INTENSET_END_Pos (2UL)
#define PDM_INTENSET_END_Msk (0x1UL << PDM_INTENSET_END_Pos)
#define PDM_INTENSET_END_Disabled (0UL)
#define PDM_INTENSET_END_Enabled (1UL)
#define PDM_INTENSET_END_Set (1UL)


#define PDM_INTENSET_STOPPED_Pos (1UL)
#define PDM_INTENSET_STOPPED_Msk (0x1UL << PDM_INTENSET_STOPPED_Pos)
#define PDM_INTENSET_STOPPED_Disabled (0UL)
#define PDM_INTENSET_STOPPED_Enabled (1UL)
#define PDM_INTENSET_STOPPED_Set (1UL)


#define PDM_INTENSET_STARTED_Pos (0UL)
#define PDM_INTENSET_STARTED_Msk (0x1UL << PDM_INTENSET_STARTED_Pos)
#define PDM_INTENSET_STARTED_Disabled (0UL)
#define PDM_INTENSET_STARTED_Enabled (1UL)
#define PDM_INTENSET_STARTED_Set (1UL)





#define PDM_INTENCLR_END_Pos (2UL)
#define PDM_INTENCLR_END_Msk (0x1UL << PDM_INTENCLR_END_Pos)
#define PDM_INTENCLR_END_Disabled (0UL)
#define PDM_INTENCLR_END_Enabled (1UL)
#define PDM_INTENCLR_END_Clear (1UL)


#define PDM_INTENCLR_STOPPED_Pos (1UL)
#define PDM_INTENCLR_STOPPED_Msk (0x1UL << PDM_INTENCLR_STOPPED_Pos)
#define PDM_INTENCLR_STOPPED_Disabled (0UL)
#define PDM_INTENCLR_STOPPED_Enabled (1UL)
#define PDM_INTENCLR_STOPPED_Clear (1UL)


#define PDM_INTENCLR_STARTED_Pos (0UL)
#define PDM_INTENCLR_STARTED_Msk (0x1UL << PDM_INTENCLR_STARTED_Pos)
#define PDM_INTENCLR_STARTED_Disabled (0UL)
#define PDM_INTENCLR_STARTED_Enabled (1UL)
#define PDM_INTENCLR_STARTED_Clear (1UL)





#define PDM_ENABLE_ENABLE_Pos (0UL)
#define PDM_ENABLE_ENABLE_Msk (0x1UL << PDM_ENABLE_ENABLE_Pos)
#define PDM_ENABLE_ENABLE_Disabled (0UL)
#define PDM_ENABLE_ENABLE_Enabled (1UL)





#define PDM_PDMCLKCTRL_FREQ_Pos (0UL)
#define PDM_PDMCLKCTRL_FREQ_Msk (0xFFFFFFFFUL << PDM_PDMCLKCTRL_FREQ_Pos)
#define PDM_PDMCLKCTRL_FREQ_1000K (0x08000000UL)
#define PDM_PDMCLKCTRL_FREQ_Default (0x08400000UL)
#define PDM_PDMCLKCTRL_FREQ_1067K (0x08800000UL)
#define PDM_PDMCLKCTRL_FREQ_1231K (0x09800000UL)
#define PDM_PDMCLKCTRL_FREQ_1280K (0x0A000000UL)
#define PDM_PDMCLKCTRL_FREQ_1333K (0x0A800000UL)





#define PDM_MODE_EDGE_Pos (1UL)
#define PDM_MODE_EDGE_Msk (0x1UL << PDM_MODE_EDGE_Pos)
#define PDM_MODE_EDGE_LeftFalling (0UL)
#define PDM_MODE_EDGE_LeftRising (1UL)


#define PDM_MODE_OPERATION_Pos (0UL)
#define PDM_MODE_OPERATION_Msk (0x1UL << PDM_MODE_OPERATION_Pos)
#define PDM_MODE_OPERATION_Stereo (0UL)
#define PDM_MODE_OPERATION_Mono (1UL)





#define PDM_GAINL_GAINL_Pos (0UL)
#define PDM_GAINL_GAINL_Msk (0x7FUL << PDM_GAINL_GAINL_Pos)
#define PDM_GAINL_GAINL_MinGain (0x00UL)
#define PDM_GAINL_GAINL_DefaultGain (0x28UL)
#define PDM_GAINL_GAINL_MaxGain (0x50UL)





#define PDM_GAINR_GAINR_Pos (0UL)
#define PDM_GAINR_GAINR_Msk (0x7FUL << PDM_GAINR_GAINR_Pos)
#define PDM_GAINR_GAINR_MinGain (0x00UL)
#define PDM_GAINR_GAINR_DefaultGain (0x28UL)
#define PDM_GAINR_GAINR_MaxGain (0x50UL)





#define PDM_RATIO_RATIO_Pos (0UL)
#define PDM_RATIO_RATIO_Msk (0x1UL << PDM_RATIO_RATIO_Pos)
#define PDM_RATIO_RATIO_Ratio64 (0UL)
#define PDM_RATIO_RATIO_Ratio80 (1UL)





#define PDM_PSEL_CLK_CONNECT_Pos (31UL)
#define PDM_PSEL_CLK_CONNECT_Msk (0x1UL << PDM_PSEL_CLK_CONNECT_Pos)
#define PDM_PSEL_CLK_CONNECT_Connected (0UL)
#define PDM_PSEL_CLK_CONNECT_Disconnected (1UL)


#define PDM_PSEL_CLK_PORT_Pos (5UL)
#define PDM_PSEL_CLK_PORT_Msk (0x1UL << PDM_PSEL_CLK_PORT_Pos)


#define PDM_PSEL_CLK_PIN_Pos (0UL)
#define PDM_PSEL_CLK_PIN_Msk (0x1FUL << PDM_PSEL_CLK_PIN_Pos)





#define PDM_PSEL_DIN_CONNECT_Pos (31UL)
#define PDM_PSEL_DIN_CONNECT_Msk (0x1UL << PDM_PSEL_DIN_CONNECT_Pos)
#define PDM_PSEL_DIN_CONNECT_Connected (0UL)
#define PDM_PSEL_DIN_CONNECT_Disconnected (1UL)


#define PDM_PSEL_DIN_PORT_Pos (5UL)
#define PDM_PSEL_DIN_PORT_Msk (0x1UL << PDM_PSEL_DIN_PORT_Pos)


#define PDM_PSEL_DIN_PIN_Pos (0UL)
#define PDM_PSEL_DIN_PIN_Msk (0x1FUL << PDM_PSEL_DIN_PIN_Pos)





#define PDM_SAMPLE_PTR_SAMPLEPTR_Pos (0UL)
#define PDM_SAMPLE_PTR_SAMPLEPTR_Msk (0xFFFFFFFFUL << PDM_SAMPLE_PTR_SAMPLEPTR_Pos)





#define PDM_SAMPLE_MAXCNT_BUFFSIZE_Pos (0UL)
#define PDM_SAMPLE_MAXCNT_BUFFSIZE_Msk (0x7FFFUL << PDM_SAMPLE_MAXCNT_BUFFSIZE_Pos)
# 7032 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos (0UL)
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Msk (0x1UL << POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos)
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Trigger (1UL)





#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos (0UL)
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Msk (0x1UL << POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos)
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Trigger (1UL)





#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos (0UL)
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Msk (0x1UL << POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos)
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_NotGenerated (0UL)
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Generated (1UL)





#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos (0UL)
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Msk (0x1UL << POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos)
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_NotGenerated (0UL)
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Generated (1UL)





#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos (0UL)
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Msk (0x1UL << POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos)
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_NotGenerated (0UL)
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Generated (1UL)





#define POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Pos (0UL)
#define POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Msk (0x1UL << POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Pos)
#define POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_NotGenerated (0UL)
#define POWER_EVENTS_USBDETECTED_EVENTS_USBDETECTED_Generated (1UL)





#define POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Pos (0UL)
#define POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Msk (0x1UL << POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Pos)
#define POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_NotGenerated (0UL)
#define POWER_EVENTS_USBREMOVED_EVENTS_USBREMOVED_Generated (1UL)





#define POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Pos (0UL)
#define POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Msk (0x1UL << POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Pos)
#define POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_NotGenerated (0UL)
#define POWER_EVENTS_USBPWRRDY_EVENTS_USBPWRRDY_Generated (1UL)





#define POWER_INTENSET_USBPWRRDY_Pos (9UL)
#define POWER_INTENSET_USBPWRRDY_Msk (0x1UL << POWER_INTENSET_USBPWRRDY_Pos)
#define POWER_INTENSET_USBPWRRDY_Disabled (0UL)
#define POWER_INTENSET_USBPWRRDY_Enabled (1UL)
#define POWER_INTENSET_USBPWRRDY_Set (1UL)


#define POWER_INTENSET_USBREMOVED_Pos (8UL)
#define POWER_INTENSET_USBREMOVED_Msk (0x1UL << POWER_INTENSET_USBREMOVED_Pos)
#define POWER_INTENSET_USBREMOVED_Disabled (0UL)
#define POWER_INTENSET_USBREMOVED_Enabled (1UL)
#define POWER_INTENSET_USBREMOVED_Set (1UL)


#define POWER_INTENSET_USBDETECTED_Pos (7UL)
#define POWER_INTENSET_USBDETECTED_Msk (0x1UL << POWER_INTENSET_USBDETECTED_Pos)
#define POWER_INTENSET_USBDETECTED_Disabled (0UL)
#define POWER_INTENSET_USBDETECTED_Enabled (1UL)
#define POWER_INTENSET_USBDETECTED_Set (1UL)


#define POWER_INTENSET_SLEEPEXIT_Pos (6UL)
#define POWER_INTENSET_SLEEPEXIT_Msk (0x1UL << POWER_INTENSET_SLEEPEXIT_Pos)
#define POWER_INTENSET_SLEEPEXIT_Disabled (0UL)
#define POWER_INTENSET_SLEEPEXIT_Enabled (1UL)
#define POWER_INTENSET_SLEEPEXIT_Set (1UL)


#define POWER_INTENSET_SLEEPENTER_Pos (5UL)
#define POWER_INTENSET_SLEEPENTER_Msk (0x1UL << POWER_INTENSET_SLEEPENTER_Pos)
#define POWER_INTENSET_SLEEPENTER_Disabled (0UL)
#define POWER_INTENSET_SLEEPENTER_Enabled (1UL)
#define POWER_INTENSET_SLEEPENTER_Set (1UL)


#define POWER_INTENSET_POFWARN_Pos (2UL)
#define POWER_INTENSET_POFWARN_Msk (0x1UL << POWER_INTENSET_POFWARN_Pos)
#define POWER_INTENSET_POFWARN_Disabled (0UL)
#define POWER_INTENSET_POFWARN_Enabled (1UL)
#define POWER_INTENSET_POFWARN_Set (1UL)





#define POWER_INTENCLR_USBPWRRDY_Pos (9UL)
#define POWER_INTENCLR_USBPWRRDY_Msk (0x1UL << POWER_INTENCLR_USBPWRRDY_Pos)
#define POWER_INTENCLR_USBPWRRDY_Disabled (0UL)
#define POWER_INTENCLR_USBPWRRDY_Enabled (1UL)
#define POWER_INTENCLR_USBPWRRDY_Clear (1UL)


#define POWER_INTENCLR_USBREMOVED_Pos (8UL)
#define POWER_INTENCLR_USBREMOVED_Msk (0x1UL << POWER_INTENCLR_USBREMOVED_Pos)
#define POWER_INTENCLR_USBREMOVED_Disabled (0UL)
#define POWER_INTENCLR_USBREMOVED_Enabled (1UL)
#define POWER_INTENCLR_USBREMOVED_Clear (1UL)


#define POWER_INTENCLR_USBDETECTED_Pos (7UL)
#define POWER_INTENCLR_USBDETECTED_Msk (0x1UL << POWER_INTENCLR_USBDETECTED_Pos)
#define POWER_INTENCLR_USBDETECTED_Disabled (0UL)
#define POWER_INTENCLR_USBDETECTED_Enabled (1UL)
#define POWER_INTENCLR_USBDETECTED_Clear (1UL)


#define POWER_INTENCLR_SLEEPEXIT_Pos (6UL)
#define POWER_INTENCLR_SLEEPEXIT_Msk (0x1UL << POWER_INTENCLR_SLEEPEXIT_Pos)
#define POWER_INTENCLR_SLEEPEXIT_Disabled (0UL)
#define POWER_INTENCLR_SLEEPEXIT_Enabled (1UL)
#define POWER_INTENCLR_SLEEPEXIT_Clear (1UL)


#define POWER_INTENCLR_SLEEPENTER_Pos (5UL)
#define POWER_INTENCLR_SLEEPENTER_Msk (0x1UL << POWER_INTENCLR_SLEEPENTER_Pos)
#define POWER_INTENCLR_SLEEPENTER_Disabled (0UL)
#define POWER_INTENCLR_SLEEPENTER_Enabled (1UL)
#define POWER_INTENCLR_SLEEPENTER_Clear (1UL)


#define POWER_INTENCLR_POFWARN_Pos (2UL)
#define POWER_INTENCLR_POFWARN_Msk (0x1UL << POWER_INTENCLR_POFWARN_Pos)
#define POWER_INTENCLR_POFWARN_Disabled (0UL)
#define POWER_INTENCLR_POFWARN_Enabled (1UL)
#define POWER_INTENCLR_POFWARN_Clear (1UL)





#define POWER_RESETREAS_VBUS_Pos (20UL)
#define POWER_RESETREAS_VBUS_Msk (0x1UL << POWER_RESETREAS_VBUS_Pos)
#define POWER_RESETREAS_VBUS_NotDetected (0UL)
#define POWER_RESETREAS_VBUS_Detected (1UL)


#define POWER_RESETREAS_NFC_Pos (19UL)
#define POWER_RESETREAS_NFC_Msk (0x1UL << POWER_RESETREAS_NFC_Pos)
#define POWER_RESETREAS_NFC_NotDetected (0UL)
#define POWER_RESETREAS_NFC_Detected (1UL)


#define POWER_RESETREAS_DIF_Pos (18UL)
#define POWER_RESETREAS_DIF_Msk (0x1UL << POWER_RESETREAS_DIF_Pos)
#define POWER_RESETREAS_DIF_NotDetected (0UL)
#define POWER_RESETREAS_DIF_Detected (1UL)


#define POWER_RESETREAS_LPCOMP_Pos (17UL)
#define POWER_RESETREAS_LPCOMP_Msk (0x1UL << POWER_RESETREAS_LPCOMP_Pos)
#define POWER_RESETREAS_LPCOMP_NotDetected (0UL)
#define POWER_RESETREAS_LPCOMP_Detected (1UL)


#define POWER_RESETREAS_OFF_Pos (16UL)
#define POWER_RESETREAS_OFF_Msk (0x1UL << POWER_RESETREAS_OFF_Pos)
#define POWER_RESETREAS_OFF_NotDetected (0UL)
#define POWER_RESETREAS_OFF_Detected (1UL)


#define POWER_RESETREAS_LOCKUP_Pos (3UL)
#define POWER_RESETREAS_LOCKUP_Msk (0x1UL << POWER_RESETREAS_LOCKUP_Pos)
#define POWER_RESETREAS_LOCKUP_NotDetected (0UL)
#define POWER_RESETREAS_LOCKUP_Detected (1UL)


#define POWER_RESETREAS_SREQ_Pos (2UL)
#define POWER_RESETREAS_SREQ_Msk (0x1UL << POWER_RESETREAS_SREQ_Pos)
#define POWER_RESETREAS_SREQ_NotDetected (0UL)
#define POWER_RESETREAS_SREQ_Detected (1UL)


#define POWER_RESETREAS_DOG_Pos (1UL)
#define POWER_RESETREAS_DOG_Msk (0x1UL << POWER_RESETREAS_DOG_Pos)
#define POWER_RESETREAS_DOG_NotDetected (0UL)
#define POWER_RESETREAS_DOG_Detected (1UL)


#define POWER_RESETREAS_RESETPIN_Pos (0UL)
#define POWER_RESETREAS_RESETPIN_Msk (0x1UL << POWER_RESETREAS_RESETPIN_Pos)
#define POWER_RESETREAS_RESETPIN_NotDetected (0UL)
#define POWER_RESETREAS_RESETPIN_Detected (1UL)





#define POWER_RAMSTATUS_RAMBLOCK3_Pos (3UL)
#define POWER_RAMSTATUS_RAMBLOCK3_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK3_Pos)
#define POWER_RAMSTATUS_RAMBLOCK3_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK3_On (1UL)


#define POWER_RAMSTATUS_RAMBLOCK2_Pos (2UL)
#define POWER_RAMSTATUS_RAMBLOCK2_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK2_Pos)
#define POWER_RAMSTATUS_RAMBLOCK2_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK2_On (1UL)


#define POWER_RAMSTATUS_RAMBLOCK1_Pos (1UL)
#define POWER_RAMSTATUS_RAMBLOCK1_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK1_Pos)
#define POWER_RAMSTATUS_RAMBLOCK1_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK1_On (1UL)


#define POWER_RAMSTATUS_RAMBLOCK0_Pos (0UL)
#define POWER_RAMSTATUS_RAMBLOCK0_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK0_Pos)
#define POWER_RAMSTATUS_RAMBLOCK0_Off (0UL)
#define POWER_RAMSTATUS_RAMBLOCK0_On (1UL)





#define POWER_USBREGSTATUS_OUTPUTRDY_Pos (1UL)
#define POWER_USBREGSTATUS_OUTPUTRDY_Msk (0x1UL << POWER_USBREGSTATUS_OUTPUTRDY_Pos)
#define POWER_USBREGSTATUS_OUTPUTRDY_NotReady (0UL)
#define POWER_USBREGSTATUS_OUTPUTRDY_Ready (1UL)


#define POWER_USBREGSTATUS_VBUSDETECT_Pos (0UL)
#define POWER_USBREGSTATUS_VBUSDETECT_Msk (0x1UL << POWER_USBREGSTATUS_VBUSDETECT_Pos)
#define POWER_USBREGSTATUS_VBUSDETECT_NoVbus (0UL)
#define POWER_USBREGSTATUS_VBUSDETECT_VbusPresent (1UL)





#define POWER_SYSTEMOFF_SYSTEMOFF_Pos (0UL)
#define POWER_SYSTEMOFF_SYSTEMOFF_Msk (0x1UL << POWER_SYSTEMOFF_SYSTEMOFF_Pos)
#define POWER_SYSTEMOFF_SYSTEMOFF_Enter (1UL)





#define POWER_POFCON_THRESHOLDVDDH_Pos (8UL)
#define POWER_POFCON_THRESHOLDVDDH_Msk (0xFUL << POWER_POFCON_THRESHOLDVDDH_Pos)
#define POWER_POFCON_THRESHOLDVDDH_V27 (0UL)
#define POWER_POFCON_THRESHOLDVDDH_V28 (1UL)
#define POWER_POFCON_THRESHOLDVDDH_V29 (2UL)
#define POWER_POFCON_THRESHOLDVDDH_V30 (3UL)
#define POWER_POFCON_THRESHOLDVDDH_V31 (4UL)
#define POWER_POFCON_THRESHOLDVDDH_V32 (5UL)
#define POWER_POFCON_THRESHOLDVDDH_V33 (6UL)
#define POWER_POFCON_THRESHOLDVDDH_V34 (7UL)
#define POWER_POFCON_THRESHOLDVDDH_V35 (8UL)
#define POWER_POFCON_THRESHOLDVDDH_V36 (9UL)
#define POWER_POFCON_THRESHOLDVDDH_V37 (10UL)
#define POWER_POFCON_THRESHOLDVDDH_V38 (11UL)
#define POWER_POFCON_THRESHOLDVDDH_V39 (12UL)
#define POWER_POFCON_THRESHOLDVDDH_V40 (13UL)
#define POWER_POFCON_THRESHOLDVDDH_V41 (14UL)
#define POWER_POFCON_THRESHOLDVDDH_V42 (15UL)


#define POWER_POFCON_THRESHOLD_Pos (1UL)
#define POWER_POFCON_THRESHOLD_Msk (0xFUL << POWER_POFCON_THRESHOLD_Pos)
#define POWER_POFCON_THRESHOLD_V17 (4UL)
#define POWER_POFCON_THRESHOLD_V18 (5UL)
#define POWER_POFCON_THRESHOLD_V19 (6UL)
#define POWER_POFCON_THRESHOLD_V20 (7UL)
#define POWER_POFCON_THRESHOLD_V21 (8UL)
#define POWER_POFCON_THRESHOLD_V22 (9UL)
#define POWER_POFCON_THRESHOLD_V23 (10UL)
#define POWER_POFCON_THRESHOLD_V24 (11UL)
#define POWER_POFCON_THRESHOLD_V25 (12UL)
#define POWER_POFCON_THRESHOLD_V26 (13UL)
#define POWER_POFCON_THRESHOLD_V27 (14UL)
#define POWER_POFCON_THRESHOLD_V28 (15UL)


#define POWER_POFCON_POF_Pos (0UL)
#define POWER_POFCON_POF_Msk (0x1UL << POWER_POFCON_POF_Pos)
#define POWER_POFCON_POF_Disabled (0UL)
#define POWER_POFCON_POF_Enabled (1UL)





#define POWER_GPREGRET_GPREGRET_Pos (0UL)
#define POWER_GPREGRET_GPREGRET_Msk (0xFFUL << POWER_GPREGRET_GPREGRET_Pos)





#define POWER_GPREGRET2_GPREGRET_Pos (0UL)
#define POWER_GPREGRET2_GPREGRET_Msk (0xFFUL << POWER_GPREGRET2_GPREGRET_Pos)





#define POWER_DCDCEN_DCDCEN_Pos (0UL)
#define POWER_DCDCEN_DCDCEN_Msk (0x1UL << POWER_DCDCEN_DCDCEN_Pos)
#define POWER_DCDCEN_DCDCEN_Disabled (0UL)
#define POWER_DCDCEN_DCDCEN_Enabled (1UL)





#define POWER_DCDCEN0_DCDCEN_Pos (0UL)
#define POWER_DCDCEN0_DCDCEN_Msk (0x1UL << POWER_DCDCEN0_DCDCEN_Pos)
#define POWER_DCDCEN0_DCDCEN_Disabled (0UL)
#define POWER_DCDCEN0_DCDCEN_Enabled (1UL)





#define POWER_MAINREGSTATUS_MAINREGSTATUS_Pos (0UL)
#define POWER_MAINREGSTATUS_MAINREGSTATUS_Msk (0x1UL << POWER_MAINREGSTATUS_MAINREGSTATUS_Pos)
#define POWER_MAINREGSTATUS_MAINREGSTATUS_Normal (0UL)
#define POWER_MAINREGSTATUS_MAINREGSTATUS_High (1UL)





#define POWER_RAM_POWER_S15RETENTION_Pos (31UL)
#define POWER_RAM_POWER_S15RETENTION_Msk (0x1UL << POWER_RAM_POWER_S15RETENTION_Pos)
#define POWER_RAM_POWER_S15RETENTION_Off (0UL)
#define POWER_RAM_POWER_S15RETENTION_On (1UL)


#define POWER_RAM_POWER_S14RETENTION_Pos (30UL)
#define POWER_RAM_POWER_S14RETENTION_Msk (0x1UL << POWER_RAM_POWER_S14RETENTION_Pos)
#define POWER_RAM_POWER_S14RETENTION_Off (0UL)
#define POWER_RAM_POWER_S14RETENTION_On (1UL)


#define POWER_RAM_POWER_S13RETENTION_Pos (29UL)
#define POWER_RAM_POWER_S13RETENTION_Msk (0x1UL << POWER_RAM_POWER_S13RETENTION_Pos)
#define POWER_RAM_POWER_S13RETENTION_Off (0UL)
#define POWER_RAM_POWER_S13RETENTION_On (1UL)


#define POWER_RAM_POWER_S12RETENTION_Pos (28UL)
#define POWER_RAM_POWER_S12RETENTION_Msk (0x1UL << POWER_RAM_POWER_S12RETENTION_Pos)
#define POWER_RAM_POWER_S12RETENTION_Off (0UL)
#define POWER_RAM_POWER_S12RETENTION_On (1UL)


#define POWER_RAM_POWER_S11RETENTION_Pos (27UL)
#define POWER_RAM_POWER_S11RETENTION_Msk (0x1UL << POWER_RAM_POWER_S11RETENTION_Pos)
#define POWER_RAM_POWER_S11RETENTION_Off (0UL)
#define POWER_RAM_POWER_S11RETENTION_On (1UL)


#define POWER_RAM_POWER_S10RETENTION_Pos (26UL)
#define POWER_RAM_POWER_S10RETENTION_Msk (0x1UL << POWER_RAM_POWER_S10RETENTION_Pos)
#define POWER_RAM_POWER_S10RETENTION_Off (0UL)
#define POWER_RAM_POWER_S10RETENTION_On (1UL)


#define POWER_RAM_POWER_S9RETENTION_Pos (25UL)
#define POWER_RAM_POWER_S9RETENTION_Msk (0x1UL << POWER_RAM_POWER_S9RETENTION_Pos)
#define POWER_RAM_POWER_S9RETENTION_Off (0UL)
#define POWER_RAM_POWER_S9RETENTION_On (1UL)


#define POWER_RAM_POWER_S8RETENTION_Pos (24UL)
#define POWER_RAM_POWER_S8RETENTION_Msk (0x1UL << POWER_RAM_POWER_S8RETENTION_Pos)
#define POWER_RAM_POWER_S8RETENTION_Off (0UL)
#define POWER_RAM_POWER_S8RETENTION_On (1UL)


#define POWER_RAM_POWER_S7RETENTION_Pos (23UL)
#define POWER_RAM_POWER_S7RETENTION_Msk (0x1UL << POWER_RAM_POWER_S7RETENTION_Pos)
#define POWER_RAM_POWER_S7RETENTION_Off (0UL)
#define POWER_RAM_POWER_S7RETENTION_On (1UL)


#define POWER_RAM_POWER_S6RETENTION_Pos (22UL)
#define POWER_RAM_POWER_S6RETENTION_Msk (0x1UL << POWER_RAM_POWER_S6RETENTION_Pos)
#define POWER_RAM_POWER_S6RETENTION_Off (0UL)
#define POWER_RAM_POWER_S6RETENTION_On (1UL)


#define POWER_RAM_POWER_S5RETENTION_Pos (21UL)
#define POWER_RAM_POWER_S5RETENTION_Msk (0x1UL << POWER_RAM_POWER_S5RETENTION_Pos)
#define POWER_RAM_POWER_S5RETENTION_Off (0UL)
#define POWER_RAM_POWER_S5RETENTION_On (1UL)


#define POWER_RAM_POWER_S4RETENTION_Pos (20UL)
#define POWER_RAM_POWER_S4RETENTION_Msk (0x1UL << POWER_RAM_POWER_S4RETENTION_Pos)
#define POWER_RAM_POWER_S4RETENTION_Off (0UL)
#define POWER_RAM_POWER_S4RETENTION_On (1UL)


#define POWER_RAM_POWER_S3RETENTION_Pos (19UL)
#define POWER_RAM_POWER_S3RETENTION_Msk (0x1UL << POWER_RAM_POWER_S3RETENTION_Pos)
#define POWER_RAM_POWER_S3RETENTION_Off (0UL)
#define POWER_RAM_POWER_S3RETENTION_On (1UL)


#define POWER_RAM_POWER_S2RETENTION_Pos (18UL)
#define POWER_RAM_POWER_S2RETENTION_Msk (0x1UL << POWER_RAM_POWER_S2RETENTION_Pos)
#define POWER_RAM_POWER_S2RETENTION_Off (0UL)
#define POWER_RAM_POWER_S2RETENTION_On (1UL)


#define POWER_RAM_POWER_S1RETENTION_Pos (17UL)
#define POWER_RAM_POWER_S1RETENTION_Msk (0x1UL << POWER_RAM_POWER_S1RETENTION_Pos)
#define POWER_RAM_POWER_S1RETENTION_Off (0UL)
#define POWER_RAM_POWER_S1RETENTION_On (1UL)


#define POWER_RAM_POWER_S0RETENTION_Pos (16UL)
#define POWER_RAM_POWER_S0RETENTION_Msk (0x1UL << POWER_RAM_POWER_S0RETENTION_Pos)
#define POWER_RAM_POWER_S0RETENTION_Off (0UL)
#define POWER_RAM_POWER_S0RETENTION_On (1UL)


#define POWER_RAM_POWER_S15POWER_Pos (15UL)
#define POWER_RAM_POWER_S15POWER_Msk (0x1UL << POWER_RAM_POWER_S15POWER_Pos)
#define POWER_RAM_POWER_S15POWER_Off (0UL)
#define POWER_RAM_POWER_S15POWER_On (1UL)


#define POWER_RAM_POWER_S14POWER_Pos (14UL)
#define POWER_RAM_POWER_S14POWER_Msk (0x1UL << POWER_RAM_POWER_S14POWER_Pos)
#define POWER_RAM_POWER_S14POWER_Off (0UL)
#define POWER_RAM_POWER_S14POWER_On (1UL)


#define POWER_RAM_POWER_S13POWER_Pos (13UL)
#define POWER_RAM_POWER_S13POWER_Msk (0x1UL << POWER_RAM_POWER_S13POWER_Pos)
#define POWER_RAM_POWER_S13POWER_Off (0UL)
#define POWER_RAM_POWER_S13POWER_On (1UL)


#define POWER_RAM_POWER_S12POWER_Pos (12UL)
#define POWER_RAM_POWER_S12POWER_Msk (0x1UL << POWER_RAM_POWER_S12POWER_Pos)
#define POWER_RAM_POWER_S12POWER_Off (0UL)
#define POWER_RAM_POWER_S12POWER_On (1UL)


#define POWER_RAM_POWER_S11POWER_Pos (11UL)
#define POWER_RAM_POWER_S11POWER_Msk (0x1UL << POWER_RAM_POWER_S11POWER_Pos)
#define POWER_RAM_POWER_S11POWER_Off (0UL)
#define POWER_RAM_POWER_S11POWER_On (1UL)


#define POWER_RAM_POWER_S10POWER_Pos (10UL)
#define POWER_RAM_POWER_S10POWER_Msk (0x1UL << POWER_RAM_POWER_S10POWER_Pos)
#define POWER_RAM_POWER_S10POWER_Off (0UL)
#define POWER_RAM_POWER_S10POWER_On (1UL)


#define POWER_RAM_POWER_S9POWER_Pos (9UL)
#define POWER_RAM_POWER_S9POWER_Msk (0x1UL << POWER_RAM_POWER_S9POWER_Pos)
#define POWER_RAM_POWER_S9POWER_Off (0UL)
#define POWER_RAM_POWER_S9POWER_On (1UL)


#define POWER_RAM_POWER_S8POWER_Pos (8UL)
#define POWER_RAM_POWER_S8POWER_Msk (0x1UL << POWER_RAM_POWER_S8POWER_Pos)
#define POWER_RAM_POWER_S8POWER_Off (0UL)
#define POWER_RAM_POWER_S8POWER_On (1UL)


#define POWER_RAM_POWER_S7POWER_Pos (7UL)
#define POWER_RAM_POWER_S7POWER_Msk (0x1UL << POWER_RAM_POWER_S7POWER_Pos)
#define POWER_RAM_POWER_S7POWER_Off (0UL)
#define POWER_RAM_POWER_S7POWER_On (1UL)


#define POWER_RAM_POWER_S6POWER_Pos (6UL)
#define POWER_RAM_POWER_S6POWER_Msk (0x1UL << POWER_RAM_POWER_S6POWER_Pos)
#define POWER_RAM_POWER_S6POWER_Off (0UL)
#define POWER_RAM_POWER_S6POWER_On (1UL)


#define POWER_RAM_POWER_S5POWER_Pos (5UL)
#define POWER_RAM_POWER_S5POWER_Msk (0x1UL << POWER_RAM_POWER_S5POWER_Pos)
#define POWER_RAM_POWER_S5POWER_Off (0UL)
#define POWER_RAM_POWER_S5POWER_On (1UL)


#define POWER_RAM_POWER_S4POWER_Pos (4UL)
#define POWER_RAM_POWER_S4POWER_Msk (0x1UL << POWER_RAM_POWER_S4POWER_Pos)
#define POWER_RAM_POWER_S4POWER_Off (0UL)
#define POWER_RAM_POWER_S4POWER_On (1UL)


#define POWER_RAM_POWER_S3POWER_Pos (3UL)
#define POWER_RAM_POWER_S3POWER_Msk (0x1UL << POWER_RAM_POWER_S3POWER_Pos)
#define POWER_RAM_POWER_S3POWER_Off (0UL)
#define POWER_RAM_POWER_S3POWER_On (1UL)


#define POWER_RAM_POWER_S2POWER_Pos (2UL)
#define POWER_RAM_POWER_S2POWER_Msk (0x1UL << POWER_RAM_POWER_S2POWER_Pos)
#define POWER_RAM_POWER_S2POWER_Off (0UL)
#define POWER_RAM_POWER_S2POWER_On (1UL)


#define POWER_RAM_POWER_S1POWER_Pos (1UL)
#define POWER_RAM_POWER_S1POWER_Msk (0x1UL << POWER_RAM_POWER_S1POWER_Pos)
#define POWER_RAM_POWER_S1POWER_Off (0UL)
#define POWER_RAM_POWER_S1POWER_On (1UL)


#define POWER_RAM_POWER_S0POWER_Pos (0UL)
#define POWER_RAM_POWER_S0POWER_Msk (0x1UL << POWER_RAM_POWER_S0POWER_Pos)
#define POWER_RAM_POWER_S0POWER_Off (0UL)
#define POWER_RAM_POWER_S0POWER_On (1UL)





#define POWER_RAM_POWERSET_S15RETENTION_Pos (31UL)
#define POWER_RAM_POWERSET_S15RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S15RETENTION_Pos)
#define POWER_RAM_POWERSET_S15RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S14RETENTION_Pos (30UL)
#define POWER_RAM_POWERSET_S14RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S14RETENTION_Pos)
#define POWER_RAM_POWERSET_S14RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S13RETENTION_Pos (29UL)
#define POWER_RAM_POWERSET_S13RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S13RETENTION_Pos)
#define POWER_RAM_POWERSET_S13RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S12RETENTION_Pos (28UL)
#define POWER_RAM_POWERSET_S12RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S12RETENTION_Pos)
#define POWER_RAM_POWERSET_S12RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S11RETENTION_Pos (27UL)
#define POWER_RAM_POWERSET_S11RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S11RETENTION_Pos)
#define POWER_RAM_POWERSET_S11RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S10RETENTION_Pos (26UL)
#define POWER_RAM_POWERSET_S10RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S10RETENTION_Pos)
#define POWER_RAM_POWERSET_S10RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S9RETENTION_Pos (25UL)
#define POWER_RAM_POWERSET_S9RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S9RETENTION_Pos)
#define POWER_RAM_POWERSET_S9RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S8RETENTION_Pos (24UL)
#define POWER_RAM_POWERSET_S8RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S8RETENTION_Pos)
#define POWER_RAM_POWERSET_S8RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S7RETENTION_Pos (23UL)
#define POWER_RAM_POWERSET_S7RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S7RETENTION_Pos)
#define POWER_RAM_POWERSET_S7RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S6RETENTION_Pos (22UL)
#define POWER_RAM_POWERSET_S6RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S6RETENTION_Pos)
#define POWER_RAM_POWERSET_S6RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S5RETENTION_Pos (21UL)
#define POWER_RAM_POWERSET_S5RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S5RETENTION_Pos)
#define POWER_RAM_POWERSET_S5RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S4RETENTION_Pos (20UL)
#define POWER_RAM_POWERSET_S4RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S4RETENTION_Pos)
#define POWER_RAM_POWERSET_S4RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S3RETENTION_Pos (19UL)
#define POWER_RAM_POWERSET_S3RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S3RETENTION_Pos)
#define POWER_RAM_POWERSET_S3RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S2RETENTION_Pos (18UL)
#define POWER_RAM_POWERSET_S2RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S2RETENTION_Pos)
#define POWER_RAM_POWERSET_S2RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S1RETENTION_Pos (17UL)
#define POWER_RAM_POWERSET_S1RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S1RETENTION_Pos)
#define POWER_RAM_POWERSET_S1RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S0RETENTION_Pos (16UL)
#define POWER_RAM_POWERSET_S0RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S0RETENTION_Pos)
#define POWER_RAM_POWERSET_S0RETENTION_On (1UL)


#define POWER_RAM_POWERSET_S15POWER_Pos (15UL)
#define POWER_RAM_POWERSET_S15POWER_Msk (0x1UL << POWER_RAM_POWERSET_S15POWER_Pos)
#define POWER_RAM_POWERSET_S15POWER_On (1UL)


#define POWER_RAM_POWERSET_S14POWER_Pos (14UL)
#define POWER_RAM_POWERSET_S14POWER_Msk (0x1UL << POWER_RAM_POWERSET_S14POWER_Pos)
#define POWER_RAM_POWERSET_S14POWER_On (1UL)


#define POWER_RAM_POWERSET_S13POWER_Pos (13UL)
#define POWER_RAM_POWERSET_S13POWER_Msk (0x1UL << POWER_RAM_POWERSET_S13POWER_Pos)
#define POWER_RAM_POWERSET_S13POWER_On (1UL)


#define POWER_RAM_POWERSET_S12POWER_Pos (12UL)
#define POWER_RAM_POWERSET_S12POWER_Msk (0x1UL << POWER_RAM_POWERSET_S12POWER_Pos)
#define POWER_RAM_POWERSET_S12POWER_On (1UL)


#define POWER_RAM_POWERSET_S11POWER_Pos (11UL)
#define POWER_RAM_POWERSET_S11POWER_Msk (0x1UL << POWER_RAM_POWERSET_S11POWER_Pos)
#define POWER_RAM_POWERSET_S11POWER_On (1UL)


#define POWER_RAM_POWERSET_S10POWER_Pos (10UL)
#define POWER_RAM_POWERSET_S10POWER_Msk (0x1UL << POWER_RAM_POWERSET_S10POWER_Pos)
#define POWER_RAM_POWERSET_S10POWER_On (1UL)


#define POWER_RAM_POWERSET_S9POWER_Pos (9UL)
#define POWER_RAM_POWERSET_S9POWER_Msk (0x1UL << POWER_RAM_POWERSET_S9POWER_Pos)
#define POWER_RAM_POWERSET_S9POWER_On (1UL)


#define POWER_RAM_POWERSET_S8POWER_Pos (8UL)
#define POWER_RAM_POWERSET_S8POWER_Msk (0x1UL << POWER_RAM_POWERSET_S8POWER_Pos)
#define POWER_RAM_POWERSET_S8POWER_On (1UL)


#define POWER_RAM_POWERSET_S7POWER_Pos (7UL)
#define POWER_RAM_POWERSET_S7POWER_Msk (0x1UL << POWER_RAM_POWERSET_S7POWER_Pos)
#define POWER_RAM_POWERSET_S7POWER_On (1UL)


#define POWER_RAM_POWERSET_S6POWER_Pos (6UL)
#define POWER_RAM_POWERSET_S6POWER_Msk (0x1UL << POWER_RAM_POWERSET_S6POWER_Pos)
#define POWER_RAM_POWERSET_S6POWER_On (1UL)


#define POWER_RAM_POWERSET_S5POWER_Pos (5UL)
#define POWER_RAM_POWERSET_S5POWER_Msk (0x1UL << POWER_RAM_POWERSET_S5POWER_Pos)
#define POWER_RAM_POWERSET_S5POWER_On (1UL)


#define POWER_RAM_POWERSET_S4POWER_Pos (4UL)
#define POWER_RAM_POWERSET_S4POWER_Msk (0x1UL << POWER_RAM_POWERSET_S4POWER_Pos)
#define POWER_RAM_POWERSET_S4POWER_On (1UL)


#define POWER_RAM_POWERSET_S3POWER_Pos (3UL)
#define POWER_RAM_POWERSET_S3POWER_Msk (0x1UL << POWER_RAM_POWERSET_S3POWER_Pos)
#define POWER_RAM_POWERSET_S3POWER_On (1UL)


#define POWER_RAM_POWERSET_S2POWER_Pos (2UL)
#define POWER_RAM_POWERSET_S2POWER_Msk (0x1UL << POWER_RAM_POWERSET_S2POWER_Pos)
#define POWER_RAM_POWERSET_S2POWER_On (1UL)


#define POWER_RAM_POWERSET_S1POWER_Pos (1UL)
#define POWER_RAM_POWERSET_S1POWER_Msk (0x1UL << POWER_RAM_POWERSET_S1POWER_Pos)
#define POWER_RAM_POWERSET_S1POWER_On (1UL)


#define POWER_RAM_POWERSET_S0POWER_Pos (0UL)
#define POWER_RAM_POWERSET_S0POWER_Msk (0x1UL << POWER_RAM_POWERSET_S0POWER_Pos)
#define POWER_RAM_POWERSET_S0POWER_On (1UL)





#define POWER_RAM_POWERCLR_S15RETENTION_Pos (31UL)
#define POWER_RAM_POWERCLR_S15RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S15RETENTION_Pos)
#define POWER_RAM_POWERCLR_S15RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S14RETENTION_Pos (30UL)
#define POWER_RAM_POWERCLR_S14RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S14RETENTION_Pos)
#define POWER_RAM_POWERCLR_S14RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S13RETENTION_Pos (29UL)
#define POWER_RAM_POWERCLR_S13RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S13RETENTION_Pos)
#define POWER_RAM_POWERCLR_S13RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S12RETENTION_Pos (28UL)
#define POWER_RAM_POWERCLR_S12RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S12RETENTION_Pos)
#define POWER_RAM_POWERCLR_S12RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S11RETENTION_Pos (27UL)
#define POWER_RAM_POWERCLR_S11RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S11RETENTION_Pos)
#define POWER_RAM_POWERCLR_S11RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S10RETENTION_Pos (26UL)
#define POWER_RAM_POWERCLR_S10RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S10RETENTION_Pos)
#define POWER_RAM_POWERCLR_S10RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S9RETENTION_Pos (25UL)
#define POWER_RAM_POWERCLR_S9RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S9RETENTION_Pos)
#define POWER_RAM_POWERCLR_S9RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S8RETENTION_Pos (24UL)
#define POWER_RAM_POWERCLR_S8RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S8RETENTION_Pos)
#define POWER_RAM_POWERCLR_S8RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S7RETENTION_Pos (23UL)
#define POWER_RAM_POWERCLR_S7RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S7RETENTION_Pos)
#define POWER_RAM_POWERCLR_S7RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S6RETENTION_Pos (22UL)
#define POWER_RAM_POWERCLR_S6RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S6RETENTION_Pos)
#define POWER_RAM_POWERCLR_S6RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S5RETENTION_Pos (21UL)
#define POWER_RAM_POWERCLR_S5RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S5RETENTION_Pos)
#define POWER_RAM_POWERCLR_S5RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S4RETENTION_Pos (20UL)
#define POWER_RAM_POWERCLR_S4RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S4RETENTION_Pos)
#define POWER_RAM_POWERCLR_S4RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S3RETENTION_Pos (19UL)
#define POWER_RAM_POWERCLR_S3RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S3RETENTION_Pos)
#define POWER_RAM_POWERCLR_S3RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S2RETENTION_Pos (18UL)
#define POWER_RAM_POWERCLR_S2RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S2RETENTION_Pos)
#define POWER_RAM_POWERCLR_S2RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S1RETENTION_Pos (17UL)
#define POWER_RAM_POWERCLR_S1RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S1RETENTION_Pos)
#define POWER_RAM_POWERCLR_S1RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S0RETENTION_Pos (16UL)
#define POWER_RAM_POWERCLR_S0RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S0RETENTION_Pos)
#define POWER_RAM_POWERCLR_S0RETENTION_Off (1UL)


#define POWER_RAM_POWERCLR_S15POWER_Pos (15UL)
#define POWER_RAM_POWERCLR_S15POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S15POWER_Pos)
#define POWER_RAM_POWERCLR_S15POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S14POWER_Pos (14UL)
#define POWER_RAM_POWERCLR_S14POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S14POWER_Pos)
#define POWER_RAM_POWERCLR_S14POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S13POWER_Pos (13UL)
#define POWER_RAM_POWERCLR_S13POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S13POWER_Pos)
#define POWER_RAM_POWERCLR_S13POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S12POWER_Pos (12UL)
#define POWER_RAM_POWERCLR_S12POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S12POWER_Pos)
#define POWER_RAM_POWERCLR_S12POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S11POWER_Pos (11UL)
#define POWER_RAM_POWERCLR_S11POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S11POWER_Pos)
#define POWER_RAM_POWERCLR_S11POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S10POWER_Pos (10UL)
#define POWER_RAM_POWERCLR_S10POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S10POWER_Pos)
#define POWER_RAM_POWERCLR_S10POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S9POWER_Pos (9UL)
#define POWER_RAM_POWERCLR_S9POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S9POWER_Pos)
#define POWER_RAM_POWERCLR_S9POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S8POWER_Pos (8UL)
#define POWER_RAM_POWERCLR_S8POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S8POWER_Pos)
#define POWER_RAM_POWERCLR_S8POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S7POWER_Pos (7UL)
#define POWER_RAM_POWERCLR_S7POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S7POWER_Pos)
#define POWER_RAM_POWERCLR_S7POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S6POWER_Pos (6UL)
#define POWER_RAM_POWERCLR_S6POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S6POWER_Pos)
#define POWER_RAM_POWERCLR_S6POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S5POWER_Pos (5UL)
#define POWER_RAM_POWERCLR_S5POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S5POWER_Pos)
#define POWER_RAM_POWERCLR_S5POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S4POWER_Pos (4UL)
#define POWER_RAM_POWERCLR_S4POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S4POWER_Pos)
#define POWER_RAM_POWERCLR_S4POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S3POWER_Pos (3UL)
#define POWER_RAM_POWERCLR_S3POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S3POWER_Pos)
#define POWER_RAM_POWERCLR_S3POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S2POWER_Pos (2UL)
#define POWER_RAM_POWERCLR_S2POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S2POWER_Pos)
#define POWER_RAM_POWERCLR_S2POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S1POWER_Pos (1UL)
#define POWER_RAM_POWERCLR_S1POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S1POWER_Pos)
#define POWER_RAM_POWERCLR_S1POWER_Off (1UL)


#define POWER_RAM_POWERCLR_S0POWER_Pos (0UL)
#define POWER_RAM_POWERCLR_S0POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S0POWER_Pos)
#define POWER_RAM_POWERCLR_S0POWER_Off (1UL)
# 7910 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define PPI_TASKS_CHG_EN_EN_Pos (0UL)
#define PPI_TASKS_CHG_EN_EN_Msk (0x1UL << PPI_TASKS_CHG_EN_EN_Pos)
#define PPI_TASKS_CHG_EN_EN_Trigger (1UL)





#define PPI_TASKS_CHG_DIS_DIS_Pos (0UL)
#define PPI_TASKS_CHG_DIS_DIS_Msk (0x1UL << PPI_TASKS_CHG_DIS_DIS_Pos)
#define PPI_TASKS_CHG_DIS_DIS_Trigger (1UL)





#define PPI_CHEN_CH31_Pos (31UL)
#define PPI_CHEN_CH31_Msk (0x1UL << PPI_CHEN_CH31_Pos)
#define PPI_CHEN_CH31_Disabled (0UL)
#define PPI_CHEN_CH31_Enabled (1UL)


#define PPI_CHEN_CH30_Pos (30UL)
#define PPI_CHEN_CH30_Msk (0x1UL << PPI_CHEN_CH30_Pos)
#define PPI_CHEN_CH30_Disabled (0UL)
#define PPI_CHEN_CH30_Enabled (1UL)


#define PPI_CHEN_CH29_Pos (29UL)
#define PPI_CHEN_CH29_Msk (0x1UL << PPI_CHEN_CH29_Pos)
#define PPI_CHEN_CH29_Disabled (0UL)
#define PPI_CHEN_CH29_Enabled (1UL)


#define PPI_CHEN_CH28_Pos (28UL)
#define PPI_CHEN_CH28_Msk (0x1UL << PPI_CHEN_CH28_Pos)
#define PPI_CHEN_CH28_Disabled (0UL)
#define PPI_CHEN_CH28_Enabled (1UL)


#define PPI_CHEN_CH27_Pos (27UL)
#define PPI_CHEN_CH27_Msk (0x1UL << PPI_CHEN_CH27_Pos)
#define PPI_CHEN_CH27_Disabled (0UL)
#define PPI_CHEN_CH27_Enabled (1UL)


#define PPI_CHEN_CH26_Pos (26UL)
#define PPI_CHEN_CH26_Msk (0x1UL << PPI_CHEN_CH26_Pos)
#define PPI_CHEN_CH26_Disabled (0UL)
#define PPI_CHEN_CH26_Enabled (1UL)


#define PPI_CHEN_CH25_Pos (25UL)
#define PPI_CHEN_CH25_Msk (0x1UL << PPI_CHEN_CH25_Pos)
#define PPI_CHEN_CH25_Disabled (0UL)
#define PPI_CHEN_CH25_Enabled (1UL)


#define PPI_CHEN_CH24_Pos (24UL)
#define PPI_CHEN_CH24_Msk (0x1UL << PPI_CHEN_CH24_Pos)
#define PPI_CHEN_CH24_Disabled (0UL)
#define PPI_CHEN_CH24_Enabled (1UL)


#define PPI_CHEN_CH23_Pos (23UL)
#define PPI_CHEN_CH23_Msk (0x1UL << PPI_CHEN_CH23_Pos)
#define PPI_CHEN_CH23_Disabled (0UL)
#define PPI_CHEN_CH23_Enabled (1UL)


#define PPI_CHEN_CH22_Pos (22UL)
#define PPI_CHEN_CH22_Msk (0x1UL << PPI_CHEN_CH22_Pos)
#define PPI_CHEN_CH22_Disabled (0UL)
#define PPI_CHEN_CH22_Enabled (1UL)


#define PPI_CHEN_CH21_Pos (21UL)
#define PPI_CHEN_CH21_Msk (0x1UL << PPI_CHEN_CH21_Pos)
#define PPI_CHEN_CH21_Disabled (0UL)
#define PPI_CHEN_CH21_Enabled (1UL)


#define PPI_CHEN_CH20_Pos (20UL)
#define PPI_CHEN_CH20_Msk (0x1UL << PPI_CHEN_CH20_Pos)
#define PPI_CHEN_CH20_Disabled (0UL)
#define PPI_CHEN_CH20_Enabled (1UL)


#define PPI_CHEN_CH19_Pos (19UL)
#define PPI_CHEN_CH19_Msk (0x1UL << PPI_CHEN_CH19_Pos)
#define PPI_CHEN_CH19_Disabled (0UL)
#define PPI_CHEN_CH19_Enabled (1UL)


#define PPI_CHEN_CH18_Pos (18UL)
#define PPI_CHEN_CH18_Msk (0x1UL << PPI_CHEN_CH18_Pos)
#define PPI_CHEN_CH18_Disabled (0UL)
#define PPI_CHEN_CH18_Enabled (1UL)


#define PPI_CHEN_CH17_Pos (17UL)
#define PPI_CHEN_CH17_Msk (0x1UL << PPI_CHEN_CH17_Pos)
#define PPI_CHEN_CH17_Disabled (0UL)
#define PPI_CHEN_CH17_Enabled (1UL)


#define PPI_CHEN_CH16_Pos (16UL)
#define PPI_CHEN_CH16_Msk (0x1UL << PPI_CHEN_CH16_Pos)
#define PPI_CHEN_CH16_Disabled (0UL)
#define PPI_CHEN_CH16_Enabled (1UL)


#define PPI_CHEN_CH15_Pos (15UL)
#define PPI_CHEN_CH15_Msk (0x1UL << PPI_CHEN_CH15_Pos)
#define PPI_CHEN_CH15_Disabled (0UL)
#define PPI_CHEN_CH15_Enabled (1UL)


#define PPI_CHEN_CH14_Pos (14UL)
#define PPI_CHEN_CH14_Msk (0x1UL << PPI_CHEN_CH14_Pos)
#define PPI_CHEN_CH14_Disabled (0UL)
#define PPI_CHEN_CH14_Enabled (1UL)


#define PPI_CHEN_CH13_Pos (13UL)
#define PPI_CHEN_CH13_Msk (0x1UL << PPI_CHEN_CH13_Pos)
#define PPI_CHEN_CH13_Disabled (0UL)
#define PPI_CHEN_CH13_Enabled (1UL)


#define PPI_CHEN_CH12_Pos (12UL)
#define PPI_CHEN_CH12_Msk (0x1UL << PPI_CHEN_CH12_Pos)
#define PPI_CHEN_CH12_Disabled (0UL)
#define PPI_CHEN_CH12_Enabled (1UL)


#define PPI_CHEN_CH11_Pos (11UL)
#define PPI_CHEN_CH11_Msk (0x1UL << PPI_CHEN_CH11_Pos)
#define PPI_CHEN_CH11_Disabled (0UL)
#define PPI_CHEN_CH11_Enabled (1UL)


#define PPI_CHEN_CH10_Pos (10UL)
#define PPI_CHEN_CH10_Msk (0x1UL << PPI_CHEN_CH10_Pos)
#define PPI_CHEN_CH10_Disabled (0UL)
#define PPI_CHEN_CH10_Enabled (1UL)


#define PPI_CHEN_CH9_Pos (9UL)
#define PPI_CHEN_CH9_Msk (0x1UL << PPI_CHEN_CH9_Pos)
#define PPI_CHEN_CH9_Disabled (0UL)
#define PPI_CHEN_CH9_Enabled (1UL)


#define PPI_CHEN_CH8_Pos (8UL)
#define PPI_CHEN_CH8_Msk (0x1UL << PPI_CHEN_CH8_Pos)
#define PPI_CHEN_CH8_Disabled (0UL)
#define PPI_CHEN_CH8_Enabled (1UL)


#define PPI_CHEN_CH7_Pos (7UL)
#define PPI_CHEN_CH7_Msk (0x1UL << PPI_CHEN_CH7_Pos)
#define PPI_CHEN_CH7_Disabled (0UL)
#define PPI_CHEN_CH7_Enabled (1UL)


#define PPI_CHEN_CH6_Pos (6UL)
#define PPI_CHEN_CH6_Msk (0x1UL << PPI_CHEN_CH6_Pos)
#define PPI_CHEN_CH6_Disabled (0UL)
#define PPI_CHEN_CH6_Enabled (1UL)


#define PPI_CHEN_CH5_Pos (5UL)
#define PPI_CHEN_CH5_Msk (0x1UL << PPI_CHEN_CH5_Pos)
#define PPI_CHEN_CH5_Disabled (0UL)
#define PPI_CHEN_CH5_Enabled (1UL)


#define PPI_CHEN_CH4_Pos (4UL)
#define PPI_CHEN_CH4_Msk (0x1UL << PPI_CHEN_CH4_Pos)
#define PPI_CHEN_CH4_Disabled (0UL)
#define PPI_CHEN_CH4_Enabled (1UL)


#define PPI_CHEN_CH3_Pos (3UL)
#define PPI_CHEN_CH3_Msk (0x1UL << PPI_CHEN_CH3_Pos)
#define PPI_CHEN_CH3_Disabled (0UL)
#define PPI_CHEN_CH3_Enabled (1UL)


#define PPI_CHEN_CH2_Pos (2UL)
#define PPI_CHEN_CH2_Msk (0x1UL << PPI_CHEN_CH2_Pos)
#define PPI_CHEN_CH2_Disabled (0UL)
#define PPI_CHEN_CH2_Enabled (1UL)


#define PPI_CHEN_CH1_Pos (1UL)
#define PPI_CHEN_CH1_Msk (0x1UL << PPI_CHEN_CH1_Pos)
#define PPI_CHEN_CH1_Disabled (0UL)
#define PPI_CHEN_CH1_Enabled (1UL)


#define PPI_CHEN_CH0_Pos (0UL)
#define PPI_CHEN_CH0_Msk (0x1UL << PPI_CHEN_CH0_Pos)
#define PPI_CHEN_CH0_Disabled (0UL)
#define PPI_CHEN_CH0_Enabled (1UL)





#define PPI_CHENSET_CH31_Pos (31UL)
#define PPI_CHENSET_CH31_Msk (0x1UL << PPI_CHENSET_CH31_Pos)
#define PPI_CHENSET_CH31_Disabled (0UL)
#define PPI_CHENSET_CH31_Enabled (1UL)
#define PPI_CHENSET_CH31_Set (1UL)


#define PPI_CHENSET_CH30_Pos (30UL)
#define PPI_CHENSET_CH30_Msk (0x1UL << PPI_CHENSET_CH30_Pos)
#define PPI_CHENSET_CH30_Disabled (0UL)
#define PPI_CHENSET_CH30_Enabled (1UL)
#define PPI_CHENSET_CH30_Set (1UL)


#define PPI_CHENSET_CH29_Pos (29UL)
#define PPI_CHENSET_CH29_Msk (0x1UL << PPI_CHENSET_CH29_Pos)
#define PPI_CHENSET_CH29_Disabled (0UL)
#define PPI_CHENSET_CH29_Enabled (1UL)
#define PPI_CHENSET_CH29_Set (1UL)


#define PPI_CHENSET_CH28_Pos (28UL)
#define PPI_CHENSET_CH28_Msk (0x1UL << PPI_CHENSET_CH28_Pos)
#define PPI_CHENSET_CH28_Disabled (0UL)
#define PPI_CHENSET_CH28_Enabled (1UL)
#define PPI_CHENSET_CH28_Set (1UL)


#define PPI_CHENSET_CH27_Pos (27UL)
#define PPI_CHENSET_CH27_Msk (0x1UL << PPI_CHENSET_CH27_Pos)
#define PPI_CHENSET_CH27_Disabled (0UL)
#define PPI_CHENSET_CH27_Enabled (1UL)
#define PPI_CHENSET_CH27_Set (1UL)


#define PPI_CHENSET_CH26_Pos (26UL)
#define PPI_CHENSET_CH26_Msk (0x1UL << PPI_CHENSET_CH26_Pos)
#define PPI_CHENSET_CH26_Disabled (0UL)
#define PPI_CHENSET_CH26_Enabled (1UL)
#define PPI_CHENSET_CH26_Set (1UL)


#define PPI_CHENSET_CH25_Pos (25UL)
#define PPI_CHENSET_CH25_Msk (0x1UL << PPI_CHENSET_CH25_Pos)
#define PPI_CHENSET_CH25_Disabled (0UL)
#define PPI_CHENSET_CH25_Enabled (1UL)
#define PPI_CHENSET_CH25_Set (1UL)


#define PPI_CHENSET_CH24_Pos (24UL)
#define PPI_CHENSET_CH24_Msk (0x1UL << PPI_CHENSET_CH24_Pos)
#define PPI_CHENSET_CH24_Disabled (0UL)
#define PPI_CHENSET_CH24_Enabled (1UL)
#define PPI_CHENSET_CH24_Set (1UL)


#define PPI_CHENSET_CH23_Pos (23UL)
#define PPI_CHENSET_CH23_Msk (0x1UL << PPI_CHENSET_CH23_Pos)
#define PPI_CHENSET_CH23_Disabled (0UL)
#define PPI_CHENSET_CH23_Enabled (1UL)
#define PPI_CHENSET_CH23_Set (1UL)


#define PPI_CHENSET_CH22_Pos (22UL)
#define PPI_CHENSET_CH22_Msk (0x1UL << PPI_CHENSET_CH22_Pos)
#define PPI_CHENSET_CH22_Disabled (0UL)
#define PPI_CHENSET_CH22_Enabled (1UL)
#define PPI_CHENSET_CH22_Set (1UL)


#define PPI_CHENSET_CH21_Pos (21UL)
#define PPI_CHENSET_CH21_Msk (0x1UL << PPI_CHENSET_CH21_Pos)
#define PPI_CHENSET_CH21_Disabled (0UL)
#define PPI_CHENSET_CH21_Enabled (1UL)
#define PPI_CHENSET_CH21_Set (1UL)


#define PPI_CHENSET_CH20_Pos (20UL)
#define PPI_CHENSET_CH20_Msk (0x1UL << PPI_CHENSET_CH20_Pos)
#define PPI_CHENSET_CH20_Disabled (0UL)
#define PPI_CHENSET_CH20_Enabled (1UL)
#define PPI_CHENSET_CH20_Set (1UL)


#define PPI_CHENSET_CH19_Pos (19UL)
#define PPI_CHENSET_CH19_Msk (0x1UL << PPI_CHENSET_CH19_Pos)
#define PPI_CHENSET_CH19_Disabled (0UL)
#define PPI_CHENSET_CH19_Enabled (1UL)
#define PPI_CHENSET_CH19_Set (1UL)


#define PPI_CHENSET_CH18_Pos (18UL)
#define PPI_CHENSET_CH18_Msk (0x1UL << PPI_CHENSET_CH18_Pos)
#define PPI_CHENSET_CH18_Disabled (0UL)
#define PPI_CHENSET_CH18_Enabled (1UL)
#define PPI_CHENSET_CH18_Set (1UL)


#define PPI_CHENSET_CH17_Pos (17UL)
#define PPI_CHENSET_CH17_Msk (0x1UL << PPI_CHENSET_CH17_Pos)
#define PPI_CHENSET_CH17_Disabled (0UL)
#define PPI_CHENSET_CH17_Enabled (1UL)
#define PPI_CHENSET_CH17_Set (1UL)


#define PPI_CHENSET_CH16_Pos (16UL)
#define PPI_CHENSET_CH16_Msk (0x1UL << PPI_CHENSET_CH16_Pos)
#define PPI_CHENSET_CH16_Disabled (0UL)
#define PPI_CHENSET_CH16_Enabled (1UL)
#define PPI_CHENSET_CH16_Set (1UL)


#define PPI_CHENSET_CH15_Pos (15UL)
#define PPI_CHENSET_CH15_Msk (0x1UL << PPI_CHENSET_CH15_Pos)
#define PPI_CHENSET_CH15_Disabled (0UL)
#define PPI_CHENSET_CH15_Enabled (1UL)
#define PPI_CHENSET_CH15_Set (1UL)


#define PPI_CHENSET_CH14_Pos (14UL)
#define PPI_CHENSET_CH14_Msk (0x1UL << PPI_CHENSET_CH14_Pos)
#define PPI_CHENSET_CH14_Disabled (0UL)
#define PPI_CHENSET_CH14_Enabled (1UL)
#define PPI_CHENSET_CH14_Set (1UL)


#define PPI_CHENSET_CH13_Pos (13UL)
#define PPI_CHENSET_CH13_Msk (0x1UL << PPI_CHENSET_CH13_Pos)
#define PPI_CHENSET_CH13_Disabled (0UL)
#define PPI_CHENSET_CH13_Enabled (1UL)
#define PPI_CHENSET_CH13_Set (1UL)


#define PPI_CHENSET_CH12_Pos (12UL)
#define PPI_CHENSET_CH12_Msk (0x1UL << PPI_CHENSET_CH12_Pos)
#define PPI_CHENSET_CH12_Disabled (0UL)
#define PPI_CHENSET_CH12_Enabled (1UL)
#define PPI_CHENSET_CH12_Set (1UL)


#define PPI_CHENSET_CH11_Pos (11UL)
#define PPI_CHENSET_CH11_Msk (0x1UL << PPI_CHENSET_CH11_Pos)
#define PPI_CHENSET_CH11_Disabled (0UL)
#define PPI_CHENSET_CH11_Enabled (1UL)
#define PPI_CHENSET_CH11_Set (1UL)


#define PPI_CHENSET_CH10_Pos (10UL)
#define PPI_CHENSET_CH10_Msk (0x1UL << PPI_CHENSET_CH10_Pos)
#define PPI_CHENSET_CH10_Disabled (0UL)
#define PPI_CHENSET_CH10_Enabled (1UL)
#define PPI_CHENSET_CH10_Set (1UL)


#define PPI_CHENSET_CH9_Pos (9UL)
#define PPI_CHENSET_CH9_Msk (0x1UL << PPI_CHENSET_CH9_Pos)
#define PPI_CHENSET_CH9_Disabled (0UL)
#define PPI_CHENSET_CH9_Enabled (1UL)
#define PPI_CHENSET_CH9_Set (1UL)


#define PPI_CHENSET_CH8_Pos (8UL)
#define PPI_CHENSET_CH8_Msk (0x1UL << PPI_CHENSET_CH8_Pos)
#define PPI_CHENSET_CH8_Disabled (0UL)
#define PPI_CHENSET_CH8_Enabled (1UL)
#define PPI_CHENSET_CH8_Set (1UL)


#define PPI_CHENSET_CH7_Pos (7UL)
#define PPI_CHENSET_CH7_Msk (0x1UL << PPI_CHENSET_CH7_Pos)
#define PPI_CHENSET_CH7_Disabled (0UL)
#define PPI_CHENSET_CH7_Enabled (1UL)
#define PPI_CHENSET_CH7_Set (1UL)


#define PPI_CHENSET_CH6_Pos (6UL)
#define PPI_CHENSET_CH6_Msk (0x1UL << PPI_CHENSET_CH6_Pos)
#define PPI_CHENSET_CH6_Disabled (0UL)
#define PPI_CHENSET_CH6_Enabled (1UL)
#define PPI_CHENSET_CH6_Set (1UL)


#define PPI_CHENSET_CH5_Pos (5UL)
#define PPI_CHENSET_CH5_Msk (0x1UL << PPI_CHENSET_CH5_Pos)
#define PPI_CHENSET_CH5_Disabled (0UL)
#define PPI_CHENSET_CH5_Enabled (1UL)
#define PPI_CHENSET_CH5_Set (1UL)


#define PPI_CHENSET_CH4_Pos (4UL)
#define PPI_CHENSET_CH4_Msk (0x1UL << PPI_CHENSET_CH4_Pos)
#define PPI_CHENSET_CH4_Disabled (0UL)
#define PPI_CHENSET_CH4_Enabled (1UL)
#define PPI_CHENSET_CH4_Set (1UL)


#define PPI_CHENSET_CH3_Pos (3UL)
#define PPI_CHENSET_CH3_Msk (0x1UL << PPI_CHENSET_CH3_Pos)
#define PPI_CHENSET_CH3_Disabled (0UL)
#define PPI_CHENSET_CH3_Enabled (1UL)
#define PPI_CHENSET_CH3_Set (1UL)


#define PPI_CHENSET_CH2_Pos (2UL)
#define PPI_CHENSET_CH2_Msk (0x1UL << PPI_CHENSET_CH2_Pos)
#define PPI_CHENSET_CH2_Disabled (0UL)
#define PPI_CHENSET_CH2_Enabled (1UL)
#define PPI_CHENSET_CH2_Set (1UL)


#define PPI_CHENSET_CH1_Pos (1UL)
#define PPI_CHENSET_CH1_Msk (0x1UL << PPI_CHENSET_CH1_Pos)
#define PPI_CHENSET_CH1_Disabled (0UL)
#define PPI_CHENSET_CH1_Enabled (1UL)
#define PPI_CHENSET_CH1_Set (1UL)


#define PPI_CHENSET_CH0_Pos (0UL)
#define PPI_CHENSET_CH0_Msk (0x1UL << PPI_CHENSET_CH0_Pos)
#define PPI_CHENSET_CH0_Disabled (0UL)
#define PPI_CHENSET_CH0_Enabled (1UL)
#define PPI_CHENSET_CH0_Set (1UL)





#define PPI_CHENCLR_CH31_Pos (31UL)
#define PPI_CHENCLR_CH31_Msk (0x1UL << PPI_CHENCLR_CH31_Pos)
#define PPI_CHENCLR_CH31_Disabled (0UL)
#define PPI_CHENCLR_CH31_Enabled (1UL)
#define PPI_CHENCLR_CH31_Clear (1UL)


#define PPI_CHENCLR_CH30_Pos (30UL)
#define PPI_CHENCLR_CH30_Msk (0x1UL << PPI_CHENCLR_CH30_Pos)
#define PPI_CHENCLR_CH30_Disabled (0UL)
#define PPI_CHENCLR_CH30_Enabled (1UL)
#define PPI_CHENCLR_CH30_Clear (1UL)


#define PPI_CHENCLR_CH29_Pos (29UL)
#define PPI_CHENCLR_CH29_Msk (0x1UL << PPI_CHENCLR_CH29_Pos)
#define PPI_CHENCLR_CH29_Disabled (0UL)
#define PPI_CHENCLR_CH29_Enabled (1UL)
#define PPI_CHENCLR_CH29_Clear (1UL)


#define PPI_CHENCLR_CH28_Pos (28UL)
#define PPI_CHENCLR_CH28_Msk (0x1UL << PPI_CHENCLR_CH28_Pos)
#define PPI_CHENCLR_CH28_Disabled (0UL)
#define PPI_CHENCLR_CH28_Enabled (1UL)
#define PPI_CHENCLR_CH28_Clear (1UL)


#define PPI_CHENCLR_CH27_Pos (27UL)
#define PPI_CHENCLR_CH27_Msk (0x1UL << PPI_CHENCLR_CH27_Pos)
#define PPI_CHENCLR_CH27_Disabled (0UL)
#define PPI_CHENCLR_CH27_Enabled (1UL)
#define PPI_CHENCLR_CH27_Clear (1UL)


#define PPI_CHENCLR_CH26_Pos (26UL)
#define PPI_CHENCLR_CH26_Msk (0x1UL << PPI_CHENCLR_CH26_Pos)
#define PPI_CHENCLR_CH26_Disabled (0UL)
#define PPI_CHENCLR_CH26_Enabled (1UL)
#define PPI_CHENCLR_CH26_Clear (1UL)


#define PPI_CHENCLR_CH25_Pos (25UL)
#define PPI_CHENCLR_CH25_Msk (0x1UL << PPI_CHENCLR_CH25_Pos)
#define PPI_CHENCLR_CH25_Disabled (0UL)
#define PPI_CHENCLR_CH25_Enabled (1UL)
#define PPI_CHENCLR_CH25_Clear (1UL)


#define PPI_CHENCLR_CH24_Pos (24UL)
#define PPI_CHENCLR_CH24_Msk (0x1UL << PPI_CHENCLR_CH24_Pos)
#define PPI_CHENCLR_CH24_Disabled (0UL)
#define PPI_CHENCLR_CH24_Enabled (1UL)
#define PPI_CHENCLR_CH24_Clear (1UL)


#define PPI_CHENCLR_CH23_Pos (23UL)
#define PPI_CHENCLR_CH23_Msk (0x1UL << PPI_CHENCLR_CH23_Pos)
#define PPI_CHENCLR_CH23_Disabled (0UL)
#define PPI_CHENCLR_CH23_Enabled (1UL)
#define PPI_CHENCLR_CH23_Clear (1UL)


#define PPI_CHENCLR_CH22_Pos (22UL)
#define PPI_CHENCLR_CH22_Msk (0x1UL << PPI_CHENCLR_CH22_Pos)
#define PPI_CHENCLR_CH22_Disabled (0UL)
#define PPI_CHENCLR_CH22_Enabled (1UL)
#define PPI_CHENCLR_CH22_Clear (1UL)


#define PPI_CHENCLR_CH21_Pos (21UL)
#define PPI_CHENCLR_CH21_Msk (0x1UL << PPI_CHENCLR_CH21_Pos)
#define PPI_CHENCLR_CH21_Disabled (0UL)
#define PPI_CHENCLR_CH21_Enabled (1UL)
#define PPI_CHENCLR_CH21_Clear (1UL)


#define PPI_CHENCLR_CH20_Pos (20UL)
#define PPI_CHENCLR_CH20_Msk (0x1UL << PPI_CHENCLR_CH20_Pos)
#define PPI_CHENCLR_CH20_Disabled (0UL)
#define PPI_CHENCLR_CH20_Enabled (1UL)
#define PPI_CHENCLR_CH20_Clear (1UL)


#define PPI_CHENCLR_CH19_Pos (19UL)
#define PPI_CHENCLR_CH19_Msk (0x1UL << PPI_CHENCLR_CH19_Pos)
#define PPI_CHENCLR_CH19_Disabled (0UL)
#define PPI_CHENCLR_CH19_Enabled (1UL)
#define PPI_CHENCLR_CH19_Clear (1UL)


#define PPI_CHENCLR_CH18_Pos (18UL)
#define PPI_CHENCLR_CH18_Msk (0x1UL << PPI_CHENCLR_CH18_Pos)
#define PPI_CHENCLR_CH18_Disabled (0UL)
#define PPI_CHENCLR_CH18_Enabled (1UL)
#define PPI_CHENCLR_CH18_Clear (1UL)


#define PPI_CHENCLR_CH17_Pos (17UL)
#define PPI_CHENCLR_CH17_Msk (0x1UL << PPI_CHENCLR_CH17_Pos)
#define PPI_CHENCLR_CH17_Disabled (0UL)
#define PPI_CHENCLR_CH17_Enabled (1UL)
#define PPI_CHENCLR_CH17_Clear (1UL)


#define PPI_CHENCLR_CH16_Pos (16UL)
#define PPI_CHENCLR_CH16_Msk (0x1UL << PPI_CHENCLR_CH16_Pos)
#define PPI_CHENCLR_CH16_Disabled (0UL)
#define PPI_CHENCLR_CH16_Enabled (1UL)
#define PPI_CHENCLR_CH16_Clear (1UL)


#define PPI_CHENCLR_CH15_Pos (15UL)
#define PPI_CHENCLR_CH15_Msk (0x1UL << PPI_CHENCLR_CH15_Pos)
#define PPI_CHENCLR_CH15_Disabled (0UL)
#define PPI_CHENCLR_CH15_Enabled (1UL)
#define PPI_CHENCLR_CH15_Clear (1UL)


#define PPI_CHENCLR_CH14_Pos (14UL)
#define PPI_CHENCLR_CH14_Msk (0x1UL << PPI_CHENCLR_CH14_Pos)
#define PPI_CHENCLR_CH14_Disabled (0UL)
#define PPI_CHENCLR_CH14_Enabled (1UL)
#define PPI_CHENCLR_CH14_Clear (1UL)


#define PPI_CHENCLR_CH13_Pos (13UL)
#define PPI_CHENCLR_CH13_Msk (0x1UL << PPI_CHENCLR_CH13_Pos)
#define PPI_CHENCLR_CH13_Disabled (0UL)
#define PPI_CHENCLR_CH13_Enabled (1UL)
#define PPI_CHENCLR_CH13_Clear (1UL)


#define PPI_CHENCLR_CH12_Pos (12UL)
#define PPI_CHENCLR_CH12_Msk (0x1UL << PPI_CHENCLR_CH12_Pos)
#define PPI_CHENCLR_CH12_Disabled (0UL)
#define PPI_CHENCLR_CH12_Enabled (1UL)
#define PPI_CHENCLR_CH12_Clear (1UL)


#define PPI_CHENCLR_CH11_Pos (11UL)
#define PPI_CHENCLR_CH11_Msk (0x1UL << PPI_CHENCLR_CH11_Pos)
#define PPI_CHENCLR_CH11_Disabled (0UL)
#define PPI_CHENCLR_CH11_Enabled (1UL)
#define PPI_CHENCLR_CH11_Clear (1UL)


#define PPI_CHENCLR_CH10_Pos (10UL)
#define PPI_CHENCLR_CH10_Msk (0x1UL << PPI_CHENCLR_CH10_Pos)
#define PPI_CHENCLR_CH10_Disabled (0UL)
#define PPI_CHENCLR_CH10_Enabled (1UL)
#define PPI_CHENCLR_CH10_Clear (1UL)


#define PPI_CHENCLR_CH9_Pos (9UL)
#define PPI_CHENCLR_CH9_Msk (0x1UL << PPI_CHENCLR_CH9_Pos)
#define PPI_CHENCLR_CH9_Disabled (0UL)
#define PPI_CHENCLR_CH9_Enabled (1UL)
#define PPI_CHENCLR_CH9_Clear (1UL)


#define PPI_CHENCLR_CH8_Pos (8UL)
#define PPI_CHENCLR_CH8_Msk (0x1UL << PPI_CHENCLR_CH8_Pos)
#define PPI_CHENCLR_CH8_Disabled (0UL)
#define PPI_CHENCLR_CH8_Enabled (1UL)
#define PPI_CHENCLR_CH8_Clear (1UL)


#define PPI_CHENCLR_CH7_Pos (7UL)
#define PPI_CHENCLR_CH7_Msk (0x1UL << PPI_CHENCLR_CH7_Pos)
#define PPI_CHENCLR_CH7_Disabled (0UL)
#define PPI_CHENCLR_CH7_Enabled (1UL)
#define PPI_CHENCLR_CH7_Clear (1UL)


#define PPI_CHENCLR_CH6_Pos (6UL)
#define PPI_CHENCLR_CH6_Msk (0x1UL << PPI_CHENCLR_CH6_Pos)
#define PPI_CHENCLR_CH6_Disabled (0UL)
#define PPI_CHENCLR_CH6_Enabled (1UL)
#define PPI_CHENCLR_CH6_Clear (1UL)


#define PPI_CHENCLR_CH5_Pos (5UL)
#define PPI_CHENCLR_CH5_Msk (0x1UL << PPI_CHENCLR_CH5_Pos)
#define PPI_CHENCLR_CH5_Disabled (0UL)
#define PPI_CHENCLR_CH5_Enabled (1UL)
#define PPI_CHENCLR_CH5_Clear (1UL)


#define PPI_CHENCLR_CH4_Pos (4UL)
#define PPI_CHENCLR_CH4_Msk (0x1UL << PPI_CHENCLR_CH4_Pos)
#define PPI_CHENCLR_CH4_Disabled (0UL)
#define PPI_CHENCLR_CH4_Enabled (1UL)
#define PPI_CHENCLR_CH4_Clear (1UL)


#define PPI_CHENCLR_CH3_Pos (3UL)
#define PPI_CHENCLR_CH3_Msk (0x1UL << PPI_CHENCLR_CH3_Pos)
#define PPI_CHENCLR_CH3_Disabled (0UL)
#define PPI_CHENCLR_CH3_Enabled (1UL)
#define PPI_CHENCLR_CH3_Clear (1UL)


#define PPI_CHENCLR_CH2_Pos (2UL)
#define PPI_CHENCLR_CH2_Msk (0x1UL << PPI_CHENCLR_CH2_Pos)
#define PPI_CHENCLR_CH2_Disabled (0UL)
#define PPI_CHENCLR_CH2_Enabled (1UL)
#define PPI_CHENCLR_CH2_Clear (1UL)


#define PPI_CHENCLR_CH1_Pos (1UL)
#define PPI_CHENCLR_CH1_Msk (0x1UL << PPI_CHENCLR_CH1_Pos)
#define PPI_CHENCLR_CH1_Disabled (0UL)
#define PPI_CHENCLR_CH1_Enabled (1UL)
#define PPI_CHENCLR_CH1_Clear (1UL)


#define PPI_CHENCLR_CH0_Pos (0UL)
#define PPI_CHENCLR_CH0_Msk (0x1UL << PPI_CHENCLR_CH0_Pos)
#define PPI_CHENCLR_CH0_Disabled (0UL)
#define PPI_CHENCLR_CH0_Enabled (1UL)
#define PPI_CHENCLR_CH0_Clear (1UL)





#define PPI_CH_EEP_EEP_Pos (0UL)
#define PPI_CH_EEP_EEP_Msk (0xFFFFFFFFUL << PPI_CH_EEP_EEP_Pos)





#define PPI_CH_TEP_TEP_Pos (0UL)
#define PPI_CH_TEP_TEP_Msk (0xFFFFFFFFUL << PPI_CH_TEP_TEP_Pos)





#define PPI_CHG_CH31_Pos (31UL)
#define PPI_CHG_CH31_Msk (0x1UL << PPI_CHG_CH31_Pos)
#define PPI_CHG_CH31_Excluded (0UL)
#define PPI_CHG_CH31_Included (1UL)


#define PPI_CHG_CH30_Pos (30UL)
#define PPI_CHG_CH30_Msk (0x1UL << PPI_CHG_CH30_Pos)
#define PPI_CHG_CH30_Excluded (0UL)
#define PPI_CHG_CH30_Included (1UL)


#define PPI_CHG_CH29_Pos (29UL)
#define PPI_CHG_CH29_Msk (0x1UL << PPI_CHG_CH29_Pos)
#define PPI_CHG_CH29_Excluded (0UL)
#define PPI_CHG_CH29_Included (1UL)


#define PPI_CHG_CH28_Pos (28UL)
#define PPI_CHG_CH28_Msk (0x1UL << PPI_CHG_CH28_Pos)
#define PPI_CHG_CH28_Excluded (0UL)
#define PPI_CHG_CH28_Included (1UL)


#define PPI_CHG_CH27_Pos (27UL)
#define PPI_CHG_CH27_Msk (0x1UL << PPI_CHG_CH27_Pos)
#define PPI_CHG_CH27_Excluded (0UL)
#define PPI_CHG_CH27_Included (1UL)


#define PPI_CHG_CH26_Pos (26UL)
#define PPI_CHG_CH26_Msk (0x1UL << PPI_CHG_CH26_Pos)
#define PPI_CHG_CH26_Excluded (0UL)
#define PPI_CHG_CH26_Included (1UL)


#define PPI_CHG_CH25_Pos (25UL)
#define PPI_CHG_CH25_Msk (0x1UL << PPI_CHG_CH25_Pos)
#define PPI_CHG_CH25_Excluded (0UL)
#define PPI_CHG_CH25_Included (1UL)


#define PPI_CHG_CH24_Pos (24UL)
#define PPI_CHG_CH24_Msk (0x1UL << PPI_CHG_CH24_Pos)
#define PPI_CHG_CH24_Excluded (0UL)
#define PPI_CHG_CH24_Included (1UL)


#define PPI_CHG_CH23_Pos (23UL)
#define PPI_CHG_CH23_Msk (0x1UL << PPI_CHG_CH23_Pos)
#define PPI_CHG_CH23_Excluded (0UL)
#define PPI_CHG_CH23_Included (1UL)


#define PPI_CHG_CH22_Pos (22UL)
#define PPI_CHG_CH22_Msk (0x1UL << PPI_CHG_CH22_Pos)
#define PPI_CHG_CH22_Excluded (0UL)
#define PPI_CHG_CH22_Included (1UL)


#define PPI_CHG_CH21_Pos (21UL)
#define PPI_CHG_CH21_Msk (0x1UL << PPI_CHG_CH21_Pos)
#define PPI_CHG_CH21_Excluded (0UL)
#define PPI_CHG_CH21_Included (1UL)


#define PPI_CHG_CH20_Pos (20UL)
#define PPI_CHG_CH20_Msk (0x1UL << PPI_CHG_CH20_Pos)
#define PPI_CHG_CH20_Excluded (0UL)
#define PPI_CHG_CH20_Included (1UL)


#define PPI_CHG_CH19_Pos (19UL)
#define PPI_CHG_CH19_Msk (0x1UL << PPI_CHG_CH19_Pos)
#define PPI_CHG_CH19_Excluded (0UL)
#define PPI_CHG_CH19_Included (1UL)


#define PPI_CHG_CH18_Pos (18UL)
#define PPI_CHG_CH18_Msk (0x1UL << PPI_CHG_CH18_Pos)
#define PPI_CHG_CH18_Excluded (0UL)
#define PPI_CHG_CH18_Included (1UL)


#define PPI_CHG_CH17_Pos (17UL)
#define PPI_CHG_CH17_Msk (0x1UL << PPI_CHG_CH17_Pos)
#define PPI_CHG_CH17_Excluded (0UL)
#define PPI_CHG_CH17_Included (1UL)


#define PPI_CHG_CH16_Pos (16UL)
#define PPI_CHG_CH16_Msk (0x1UL << PPI_CHG_CH16_Pos)
#define PPI_CHG_CH16_Excluded (0UL)
#define PPI_CHG_CH16_Included (1UL)


#define PPI_CHG_CH15_Pos (15UL)
#define PPI_CHG_CH15_Msk (0x1UL << PPI_CHG_CH15_Pos)
#define PPI_CHG_CH15_Excluded (0UL)
#define PPI_CHG_CH15_Included (1UL)


#define PPI_CHG_CH14_Pos (14UL)
#define PPI_CHG_CH14_Msk (0x1UL << PPI_CHG_CH14_Pos)
#define PPI_CHG_CH14_Excluded (0UL)
#define PPI_CHG_CH14_Included (1UL)


#define PPI_CHG_CH13_Pos (13UL)
#define PPI_CHG_CH13_Msk (0x1UL << PPI_CHG_CH13_Pos)
#define PPI_CHG_CH13_Excluded (0UL)
#define PPI_CHG_CH13_Included (1UL)


#define PPI_CHG_CH12_Pos (12UL)
#define PPI_CHG_CH12_Msk (0x1UL << PPI_CHG_CH12_Pos)
#define PPI_CHG_CH12_Excluded (0UL)
#define PPI_CHG_CH12_Included (1UL)


#define PPI_CHG_CH11_Pos (11UL)
#define PPI_CHG_CH11_Msk (0x1UL << PPI_CHG_CH11_Pos)
#define PPI_CHG_CH11_Excluded (0UL)
#define PPI_CHG_CH11_Included (1UL)


#define PPI_CHG_CH10_Pos (10UL)
#define PPI_CHG_CH10_Msk (0x1UL << PPI_CHG_CH10_Pos)
#define PPI_CHG_CH10_Excluded (0UL)
#define PPI_CHG_CH10_Included (1UL)


#define PPI_CHG_CH9_Pos (9UL)
#define PPI_CHG_CH9_Msk (0x1UL << PPI_CHG_CH9_Pos)
#define PPI_CHG_CH9_Excluded (0UL)
#define PPI_CHG_CH9_Included (1UL)


#define PPI_CHG_CH8_Pos (8UL)
#define PPI_CHG_CH8_Msk (0x1UL << PPI_CHG_CH8_Pos)
#define PPI_CHG_CH8_Excluded (0UL)
#define PPI_CHG_CH8_Included (1UL)


#define PPI_CHG_CH7_Pos (7UL)
#define PPI_CHG_CH7_Msk (0x1UL << PPI_CHG_CH7_Pos)
#define PPI_CHG_CH7_Excluded (0UL)
#define PPI_CHG_CH7_Included (1UL)


#define PPI_CHG_CH6_Pos (6UL)
#define PPI_CHG_CH6_Msk (0x1UL << PPI_CHG_CH6_Pos)
#define PPI_CHG_CH6_Excluded (0UL)
#define PPI_CHG_CH6_Included (1UL)


#define PPI_CHG_CH5_Pos (5UL)
#define PPI_CHG_CH5_Msk (0x1UL << PPI_CHG_CH5_Pos)
#define PPI_CHG_CH5_Excluded (0UL)
#define PPI_CHG_CH5_Included (1UL)


#define PPI_CHG_CH4_Pos (4UL)
#define PPI_CHG_CH4_Msk (0x1UL << PPI_CHG_CH4_Pos)
#define PPI_CHG_CH4_Excluded (0UL)
#define PPI_CHG_CH4_Included (1UL)


#define PPI_CHG_CH3_Pos (3UL)
#define PPI_CHG_CH3_Msk (0x1UL << PPI_CHG_CH3_Pos)
#define PPI_CHG_CH3_Excluded (0UL)
#define PPI_CHG_CH3_Included (1UL)


#define PPI_CHG_CH2_Pos (2UL)
#define PPI_CHG_CH2_Msk (0x1UL << PPI_CHG_CH2_Pos)
#define PPI_CHG_CH2_Excluded (0UL)
#define PPI_CHG_CH2_Included (1UL)


#define PPI_CHG_CH1_Pos (1UL)
#define PPI_CHG_CH1_Msk (0x1UL << PPI_CHG_CH1_Pos)
#define PPI_CHG_CH1_Excluded (0UL)
#define PPI_CHG_CH1_Included (1UL)


#define PPI_CHG_CH0_Pos (0UL)
#define PPI_CHG_CH0_Msk (0x1UL << PPI_CHG_CH0_Pos)
#define PPI_CHG_CH0_Excluded (0UL)
#define PPI_CHG_CH0_Included (1UL)





#define PPI_FORK_TEP_TEP_Pos (0UL)
#define PPI_FORK_TEP_TEP_Msk (0xFFFFFFFFUL << PPI_FORK_TEP_TEP_Pos)
# 8795 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define PWM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define PWM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << PWM_TASKS_STOP_TASKS_STOP_Pos)
#define PWM_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Pos (0UL)
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Msk (0x1UL << PWM_TASKS_SEQSTART_TASKS_SEQSTART_Pos)
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Trigger (1UL)





#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Pos (0UL)
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Msk (0x1UL << PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Pos)
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Trigger (1UL)





#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << PWM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)





#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Pos (0UL)
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Msk (0x1UL << PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Pos)
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_NotGenerated (0UL)
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Generated (1UL)





#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Pos (0UL)
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Msk (0x1UL << PWM_EVENTS_SEQEND_EVENTS_SEQEND_Pos)
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_NotGenerated (0UL)
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Generated (1UL)





#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Pos (0UL)
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Msk (0x1UL << PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Pos)
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_NotGenerated (0UL)
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Generated (1UL)





#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Pos (0UL)
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Msk (0x1UL << PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Pos)
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_NotGenerated (0UL)
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Generated (1UL)





#define PWM_SHORTS_LOOPSDONE_STOP_Pos (4UL)
#define PWM_SHORTS_LOOPSDONE_STOP_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_STOP_Pos)
#define PWM_SHORTS_LOOPSDONE_STOP_Disabled (0UL)
#define PWM_SHORTS_LOOPSDONE_STOP_Enabled (1UL)


#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Pos (3UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_SEQSTART1_Pos)
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Disabled (0UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Enabled (1UL)


#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Pos (2UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_SEQSTART0_Pos)
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Disabled (0UL)
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Enabled (1UL)


#define PWM_SHORTS_SEQEND1_STOP_Pos (1UL)
#define PWM_SHORTS_SEQEND1_STOP_Msk (0x1UL << PWM_SHORTS_SEQEND1_STOP_Pos)
#define PWM_SHORTS_SEQEND1_STOP_Disabled (0UL)
#define PWM_SHORTS_SEQEND1_STOP_Enabled (1UL)


#define PWM_SHORTS_SEQEND0_STOP_Pos (0UL)
#define PWM_SHORTS_SEQEND0_STOP_Msk (0x1UL << PWM_SHORTS_SEQEND0_STOP_Pos)
#define PWM_SHORTS_SEQEND0_STOP_Disabled (0UL)
#define PWM_SHORTS_SEQEND0_STOP_Enabled (1UL)





#define PWM_INTEN_LOOPSDONE_Pos (7UL)
#define PWM_INTEN_LOOPSDONE_Msk (0x1UL << PWM_INTEN_LOOPSDONE_Pos)
#define PWM_INTEN_LOOPSDONE_Disabled (0UL)
#define PWM_INTEN_LOOPSDONE_Enabled (1UL)


#define PWM_INTEN_PWMPERIODEND_Pos (6UL)
#define PWM_INTEN_PWMPERIODEND_Msk (0x1UL << PWM_INTEN_PWMPERIODEND_Pos)
#define PWM_INTEN_PWMPERIODEND_Disabled (0UL)
#define PWM_INTEN_PWMPERIODEND_Enabled (1UL)


#define PWM_INTEN_SEQEND1_Pos (5UL)
#define PWM_INTEN_SEQEND1_Msk (0x1UL << PWM_INTEN_SEQEND1_Pos)
#define PWM_INTEN_SEQEND1_Disabled (0UL)
#define PWM_INTEN_SEQEND1_Enabled (1UL)


#define PWM_INTEN_SEQEND0_Pos (4UL)
#define PWM_INTEN_SEQEND0_Msk (0x1UL << PWM_INTEN_SEQEND0_Pos)
#define PWM_INTEN_SEQEND0_Disabled (0UL)
#define PWM_INTEN_SEQEND0_Enabled (1UL)


#define PWM_INTEN_SEQSTARTED1_Pos (3UL)
#define PWM_INTEN_SEQSTARTED1_Msk (0x1UL << PWM_INTEN_SEQSTARTED1_Pos)
#define PWM_INTEN_SEQSTARTED1_Disabled (0UL)
#define PWM_INTEN_SEQSTARTED1_Enabled (1UL)


#define PWM_INTEN_SEQSTARTED0_Pos (2UL)
#define PWM_INTEN_SEQSTARTED0_Msk (0x1UL << PWM_INTEN_SEQSTARTED0_Pos)
#define PWM_INTEN_SEQSTARTED0_Disabled (0UL)
#define PWM_INTEN_SEQSTARTED0_Enabled (1UL)


#define PWM_INTEN_STOPPED_Pos (1UL)
#define PWM_INTEN_STOPPED_Msk (0x1UL << PWM_INTEN_STOPPED_Pos)
#define PWM_INTEN_STOPPED_Disabled (0UL)
#define PWM_INTEN_STOPPED_Enabled (1UL)





#define PWM_INTENSET_LOOPSDONE_Pos (7UL)
#define PWM_INTENSET_LOOPSDONE_Msk (0x1UL << PWM_INTENSET_LOOPSDONE_Pos)
#define PWM_INTENSET_LOOPSDONE_Disabled (0UL)
#define PWM_INTENSET_LOOPSDONE_Enabled (1UL)
#define PWM_INTENSET_LOOPSDONE_Set (1UL)


#define PWM_INTENSET_PWMPERIODEND_Pos (6UL)
#define PWM_INTENSET_PWMPERIODEND_Msk (0x1UL << PWM_INTENSET_PWMPERIODEND_Pos)
#define PWM_INTENSET_PWMPERIODEND_Disabled (0UL)
#define PWM_INTENSET_PWMPERIODEND_Enabled (1UL)
#define PWM_INTENSET_PWMPERIODEND_Set (1UL)


#define PWM_INTENSET_SEQEND1_Pos (5UL)
#define PWM_INTENSET_SEQEND1_Msk (0x1UL << PWM_INTENSET_SEQEND1_Pos)
#define PWM_INTENSET_SEQEND1_Disabled (0UL)
#define PWM_INTENSET_SEQEND1_Enabled (1UL)
#define PWM_INTENSET_SEQEND1_Set (1UL)


#define PWM_INTENSET_SEQEND0_Pos (4UL)
#define PWM_INTENSET_SEQEND0_Msk (0x1UL << PWM_INTENSET_SEQEND0_Pos)
#define PWM_INTENSET_SEQEND0_Disabled (0UL)
#define PWM_INTENSET_SEQEND0_Enabled (1UL)
#define PWM_INTENSET_SEQEND0_Set (1UL)


#define PWM_INTENSET_SEQSTARTED1_Pos (3UL)
#define PWM_INTENSET_SEQSTARTED1_Msk (0x1UL << PWM_INTENSET_SEQSTARTED1_Pos)
#define PWM_INTENSET_SEQSTARTED1_Disabled (0UL)
#define PWM_INTENSET_SEQSTARTED1_Enabled (1UL)
#define PWM_INTENSET_SEQSTARTED1_Set (1UL)


#define PWM_INTENSET_SEQSTARTED0_Pos (2UL)
#define PWM_INTENSET_SEQSTARTED0_Msk (0x1UL << PWM_INTENSET_SEQSTARTED0_Pos)
#define PWM_INTENSET_SEQSTARTED0_Disabled (0UL)
#define PWM_INTENSET_SEQSTARTED0_Enabled (1UL)
#define PWM_INTENSET_SEQSTARTED0_Set (1UL)


#define PWM_INTENSET_STOPPED_Pos (1UL)
#define PWM_INTENSET_STOPPED_Msk (0x1UL << PWM_INTENSET_STOPPED_Pos)
#define PWM_INTENSET_STOPPED_Disabled (0UL)
#define PWM_INTENSET_STOPPED_Enabled (1UL)
#define PWM_INTENSET_STOPPED_Set (1UL)





#define PWM_INTENCLR_LOOPSDONE_Pos (7UL)
#define PWM_INTENCLR_LOOPSDONE_Msk (0x1UL << PWM_INTENCLR_LOOPSDONE_Pos)
#define PWM_INTENCLR_LOOPSDONE_Disabled (0UL)
#define PWM_INTENCLR_LOOPSDONE_Enabled (1UL)
#define PWM_INTENCLR_LOOPSDONE_Clear (1UL)


#define PWM_INTENCLR_PWMPERIODEND_Pos (6UL)
#define PWM_INTENCLR_PWMPERIODEND_Msk (0x1UL << PWM_INTENCLR_PWMPERIODEND_Pos)
#define PWM_INTENCLR_PWMPERIODEND_Disabled (0UL)
#define PWM_INTENCLR_PWMPERIODEND_Enabled (1UL)
#define PWM_INTENCLR_PWMPERIODEND_Clear (1UL)


#define PWM_INTENCLR_SEQEND1_Pos (5UL)
#define PWM_INTENCLR_SEQEND1_Msk (0x1UL << PWM_INTENCLR_SEQEND1_Pos)
#define PWM_INTENCLR_SEQEND1_Disabled (0UL)
#define PWM_INTENCLR_SEQEND1_Enabled (1UL)
#define PWM_INTENCLR_SEQEND1_Clear (1UL)


#define PWM_INTENCLR_SEQEND0_Pos (4UL)
#define PWM_INTENCLR_SEQEND0_Msk (0x1UL << PWM_INTENCLR_SEQEND0_Pos)
#define PWM_INTENCLR_SEQEND0_Disabled (0UL)
#define PWM_INTENCLR_SEQEND0_Enabled (1UL)
#define PWM_INTENCLR_SEQEND0_Clear (1UL)


#define PWM_INTENCLR_SEQSTARTED1_Pos (3UL)
#define PWM_INTENCLR_SEQSTARTED1_Msk (0x1UL << PWM_INTENCLR_SEQSTARTED1_Pos)
#define PWM_INTENCLR_SEQSTARTED1_Disabled (0UL)
#define PWM_INTENCLR_SEQSTARTED1_Enabled (1UL)
#define PWM_INTENCLR_SEQSTARTED1_Clear (1UL)


#define PWM_INTENCLR_SEQSTARTED0_Pos (2UL)
#define PWM_INTENCLR_SEQSTARTED0_Msk (0x1UL << PWM_INTENCLR_SEQSTARTED0_Pos)
#define PWM_INTENCLR_SEQSTARTED0_Disabled (0UL)
#define PWM_INTENCLR_SEQSTARTED0_Enabled (1UL)
#define PWM_INTENCLR_SEQSTARTED0_Clear (1UL)


#define PWM_INTENCLR_STOPPED_Pos (1UL)
#define PWM_INTENCLR_STOPPED_Msk (0x1UL << PWM_INTENCLR_STOPPED_Pos)
#define PWM_INTENCLR_STOPPED_Disabled (0UL)
#define PWM_INTENCLR_STOPPED_Enabled (1UL)
#define PWM_INTENCLR_STOPPED_Clear (1UL)





#define PWM_ENABLE_ENABLE_Pos (0UL)
#define PWM_ENABLE_ENABLE_Msk (0x1UL << PWM_ENABLE_ENABLE_Pos)
#define PWM_ENABLE_ENABLE_Disabled (0UL)
#define PWM_ENABLE_ENABLE_Enabled (1UL)





#define PWM_MODE_UPDOWN_Pos (0UL)
#define PWM_MODE_UPDOWN_Msk (0x1UL << PWM_MODE_UPDOWN_Pos)
#define PWM_MODE_UPDOWN_Up (0UL)
#define PWM_MODE_UPDOWN_UpAndDown (1UL)





#define PWM_COUNTERTOP_COUNTERTOP_Pos (0UL)
#define PWM_COUNTERTOP_COUNTERTOP_Msk (0x7FFFUL << PWM_COUNTERTOP_COUNTERTOP_Pos)





#define PWM_PRESCALER_PRESCALER_Pos (0UL)
#define PWM_PRESCALER_PRESCALER_Msk (0x7UL << PWM_PRESCALER_PRESCALER_Pos)
#define PWM_PRESCALER_PRESCALER_DIV_1 (0UL)
#define PWM_PRESCALER_PRESCALER_DIV_2 (1UL)
#define PWM_PRESCALER_PRESCALER_DIV_4 (2UL)
#define PWM_PRESCALER_PRESCALER_DIV_8 (3UL)
#define PWM_PRESCALER_PRESCALER_DIV_16 (4UL)
#define PWM_PRESCALER_PRESCALER_DIV_32 (5UL)
#define PWM_PRESCALER_PRESCALER_DIV_64 (6UL)
#define PWM_PRESCALER_PRESCALER_DIV_128 (7UL)





#define PWM_DECODER_MODE_Pos (8UL)
#define PWM_DECODER_MODE_Msk (0x1UL << PWM_DECODER_MODE_Pos)
#define PWM_DECODER_MODE_RefreshCount (0UL)
#define PWM_DECODER_MODE_NextStep (1UL)


#define PWM_DECODER_LOAD_Pos (0UL)
#define PWM_DECODER_LOAD_Msk (0x3UL << PWM_DECODER_LOAD_Pos)
#define PWM_DECODER_LOAD_Common (0UL)
#define PWM_DECODER_LOAD_Grouped (1UL)
#define PWM_DECODER_LOAD_Individual (2UL)
#define PWM_DECODER_LOAD_WaveForm (3UL)





#define PWM_LOOP_CNT_Pos (0UL)
#define PWM_LOOP_CNT_Msk (0xFFFFUL << PWM_LOOP_CNT_Pos)
#define PWM_LOOP_CNT_Disabled (0UL)





#define PWM_SEQ_PTR_PTR_Pos (0UL)
#define PWM_SEQ_PTR_PTR_Msk (0xFFFFFFFFUL << PWM_SEQ_PTR_PTR_Pos)





#define PWM_SEQ_CNT_CNT_Pos (0UL)
#define PWM_SEQ_CNT_CNT_Msk (0x7FFFUL << PWM_SEQ_CNT_CNT_Pos)
#define PWM_SEQ_CNT_CNT_Disabled (0UL)





#define PWM_SEQ_REFRESH_CNT_Pos (0UL)
#define PWM_SEQ_REFRESH_CNT_Msk (0xFFFFFFUL << PWM_SEQ_REFRESH_CNT_Pos)
#define PWM_SEQ_REFRESH_CNT_Continuous (0UL)





#define PWM_SEQ_ENDDELAY_CNT_Pos (0UL)
#define PWM_SEQ_ENDDELAY_CNT_Msk (0xFFFFFFUL << PWM_SEQ_ENDDELAY_CNT_Pos)





#define PWM_PSEL_OUT_CONNECT_Pos (31UL)
#define PWM_PSEL_OUT_CONNECT_Msk (0x1UL << PWM_PSEL_OUT_CONNECT_Pos)
#define PWM_PSEL_OUT_CONNECT_Connected (0UL)
#define PWM_PSEL_OUT_CONNECT_Disconnected (1UL)


#define PWM_PSEL_OUT_PORT_Pos (5UL)
#define PWM_PSEL_OUT_PORT_Msk (0x1UL << PWM_PSEL_OUT_PORT_Pos)


#define PWM_PSEL_OUT_PIN_Pos (0UL)
#define PWM_PSEL_OUT_PIN_Msk (0x1FUL << PWM_PSEL_OUT_PIN_Pos)
# 9162 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define QDEC_TASKS_START_TASKS_START_Pos (0UL)
#define QDEC_TASKS_START_TASKS_START_Msk (0x1UL << QDEC_TASKS_START_TASKS_START_Pos)
#define QDEC_TASKS_START_TASKS_START_Trigger (1UL)





#define QDEC_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define QDEC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << QDEC_TASKS_STOP_TASKS_STOP_Pos)
#define QDEC_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos (0UL)
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Msk (0x1UL << QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos)
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Trigger (1UL)





#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos (0UL)
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Msk (0x1UL << QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos)
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Trigger (1UL)





#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos (0UL)
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Msk (0x1UL << QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos)
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Trigger (1UL)





#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos (0UL)
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Msk (0x1UL << QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos)
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_NotGenerated (0UL)
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Generated (1UL)





#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos (0UL)
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Msk (0x1UL << QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos)
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_NotGenerated (0UL)
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Generated (1UL)





#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos (0UL)
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Msk (0x1UL << QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos)
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_NotGenerated (0UL)
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Generated (1UL)





#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos (0UL)
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Msk (0x1UL << QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos)
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_NotGenerated (0UL)
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Generated (1UL)





#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)





#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos (6UL)
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos)
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Disabled (0UL)
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Enabled (1UL)


#define QDEC_SHORTS_DBLRDY_STOP_Pos (5UL)
#define QDEC_SHORTS_DBLRDY_STOP_Msk (0x1UL << QDEC_SHORTS_DBLRDY_STOP_Pos)
#define QDEC_SHORTS_DBLRDY_STOP_Disabled (0UL)
#define QDEC_SHORTS_DBLRDY_STOP_Enabled (1UL)


#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos (4UL)
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Msk (0x1UL << QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos)
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Disabled (0UL)
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Enabled (1UL)


#define QDEC_SHORTS_REPORTRDY_STOP_Pos (3UL)
#define QDEC_SHORTS_REPORTRDY_STOP_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_STOP_Pos)
#define QDEC_SHORTS_REPORTRDY_STOP_Disabled (0UL)
#define QDEC_SHORTS_REPORTRDY_STOP_Enabled (1UL)


#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos (2UL)
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos)
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Disabled (0UL)
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Enabled (1UL)


#define QDEC_SHORTS_SAMPLERDY_STOP_Pos (1UL)
#define QDEC_SHORTS_SAMPLERDY_STOP_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_STOP_Pos)
#define QDEC_SHORTS_SAMPLERDY_STOP_Disabled (0UL)
#define QDEC_SHORTS_SAMPLERDY_STOP_Enabled (1UL)


#define QDEC_SHORTS_REPORTRDY_READCLRACC_Pos (0UL)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_READCLRACC_Pos)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Disabled (0UL)
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Enabled (1UL)





#define QDEC_INTENSET_STOPPED_Pos (4UL)
#define QDEC_INTENSET_STOPPED_Msk (0x1UL << QDEC_INTENSET_STOPPED_Pos)
#define QDEC_INTENSET_STOPPED_Disabled (0UL)
#define QDEC_INTENSET_STOPPED_Enabled (1UL)
#define QDEC_INTENSET_STOPPED_Set (1UL)


#define QDEC_INTENSET_DBLRDY_Pos (3UL)
#define QDEC_INTENSET_DBLRDY_Msk (0x1UL << QDEC_INTENSET_DBLRDY_Pos)
#define QDEC_INTENSET_DBLRDY_Disabled (0UL)
#define QDEC_INTENSET_DBLRDY_Enabled (1UL)
#define QDEC_INTENSET_DBLRDY_Set (1UL)


#define QDEC_INTENSET_ACCOF_Pos (2UL)
#define QDEC_INTENSET_ACCOF_Msk (0x1UL << QDEC_INTENSET_ACCOF_Pos)
#define QDEC_INTENSET_ACCOF_Disabled (0UL)
#define QDEC_INTENSET_ACCOF_Enabled (1UL)
#define QDEC_INTENSET_ACCOF_Set (1UL)


#define QDEC_INTENSET_REPORTRDY_Pos (1UL)
#define QDEC_INTENSET_REPORTRDY_Msk (0x1UL << QDEC_INTENSET_REPORTRDY_Pos)
#define QDEC_INTENSET_REPORTRDY_Disabled (0UL)
#define QDEC_INTENSET_REPORTRDY_Enabled (1UL)
#define QDEC_INTENSET_REPORTRDY_Set (1UL)


#define QDEC_INTENSET_SAMPLERDY_Pos (0UL)
#define QDEC_INTENSET_SAMPLERDY_Msk (0x1UL << QDEC_INTENSET_SAMPLERDY_Pos)
#define QDEC_INTENSET_SAMPLERDY_Disabled (0UL)
#define QDEC_INTENSET_SAMPLERDY_Enabled (1UL)
#define QDEC_INTENSET_SAMPLERDY_Set (1UL)





#define QDEC_INTENCLR_STOPPED_Pos (4UL)
#define QDEC_INTENCLR_STOPPED_Msk (0x1UL << QDEC_INTENCLR_STOPPED_Pos)
#define QDEC_INTENCLR_STOPPED_Disabled (0UL)
#define QDEC_INTENCLR_STOPPED_Enabled (1UL)
#define QDEC_INTENCLR_STOPPED_Clear (1UL)


#define QDEC_INTENCLR_DBLRDY_Pos (3UL)
#define QDEC_INTENCLR_DBLRDY_Msk (0x1UL << QDEC_INTENCLR_DBLRDY_Pos)
#define QDEC_INTENCLR_DBLRDY_Disabled (0UL)
#define QDEC_INTENCLR_DBLRDY_Enabled (1UL)
#define QDEC_INTENCLR_DBLRDY_Clear (1UL)


#define QDEC_INTENCLR_ACCOF_Pos (2UL)
#define QDEC_INTENCLR_ACCOF_Msk (0x1UL << QDEC_INTENCLR_ACCOF_Pos)
#define QDEC_INTENCLR_ACCOF_Disabled (0UL)
#define QDEC_INTENCLR_ACCOF_Enabled (1UL)
#define QDEC_INTENCLR_ACCOF_Clear (1UL)


#define QDEC_INTENCLR_REPORTRDY_Pos (1UL)
#define QDEC_INTENCLR_REPORTRDY_Msk (0x1UL << QDEC_INTENCLR_REPORTRDY_Pos)
#define QDEC_INTENCLR_REPORTRDY_Disabled (0UL)
#define QDEC_INTENCLR_REPORTRDY_Enabled (1UL)
#define QDEC_INTENCLR_REPORTRDY_Clear (1UL)


#define QDEC_INTENCLR_SAMPLERDY_Pos (0UL)
#define QDEC_INTENCLR_SAMPLERDY_Msk (0x1UL << QDEC_INTENCLR_SAMPLERDY_Pos)
#define QDEC_INTENCLR_SAMPLERDY_Disabled (0UL)
#define QDEC_INTENCLR_SAMPLERDY_Enabled (1UL)
#define QDEC_INTENCLR_SAMPLERDY_Clear (1UL)





#define QDEC_ENABLE_ENABLE_Pos (0UL)
#define QDEC_ENABLE_ENABLE_Msk (0x1UL << QDEC_ENABLE_ENABLE_Pos)
#define QDEC_ENABLE_ENABLE_Disabled (0UL)
#define QDEC_ENABLE_ENABLE_Enabled (1UL)





#define QDEC_LEDPOL_LEDPOL_Pos (0UL)
#define QDEC_LEDPOL_LEDPOL_Msk (0x1UL << QDEC_LEDPOL_LEDPOL_Pos)
#define QDEC_LEDPOL_LEDPOL_ActiveLow (0UL)
#define QDEC_LEDPOL_LEDPOL_ActiveHigh (1UL)





#define QDEC_SAMPLEPER_SAMPLEPER_Pos (0UL)
#define QDEC_SAMPLEPER_SAMPLEPER_Msk (0xFUL << QDEC_SAMPLEPER_SAMPLEPER_Pos)
#define QDEC_SAMPLEPER_SAMPLEPER_128us (0UL)
#define QDEC_SAMPLEPER_SAMPLEPER_256us (1UL)
#define QDEC_SAMPLEPER_SAMPLEPER_512us (2UL)
#define QDEC_SAMPLEPER_SAMPLEPER_1024us (3UL)
#define QDEC_SAMPLEPER_SAMPLEPER_2048us (4UL)
#define QDEC_SAMPLEPER_SAMPLEPER_4096us (5UL)
#define QDEC_SAMPLEPER_SAMPLEPER_8192us (6UL)
#define QDEC_SAMPLEPER_SAMPLEPER_16384us (7UL)
#define QDEC_SAMPLEPER_SAMPLEPER_32ms (8UL)
#define QDEC_SAMPLEPER_SAMPLEPER_65ms (9UL)
#define QDEC_SAMPLEPER_SAMPLEPER_131ms (10UL)





#define QDEC_SAMPLE_SAMPLE_Pos (0UL)
#define QDEC_SAMPLE_SAMPLE_Msk (0xFFFFFFFFUL << QDEC_SAMPLE_SAMPLE_Pos)





#define QDEC_REPORTPER_REPORTPER_Pos (0UL)
#define QDEC_REPORTPER_REPORTPER_Msk (0xFUL << QDEC_REPORTPER_REPORTPER_Pos)
#define QDEC_REPORTPER_REPORTPER_10Smpl (0UL)
#define QDEC_REPORTPER_REPORTPER_40Smpl (1UL)
#define QDEC_REPORTPER_REPORTPER_80Smpl (2UL)
#define QDEC_REPORTPER_REPORTPER_120Smpl (3UL)
#define QDEC_REPORTPER_REPORTPER_160Smpl (4UL)
#define QDEC_REPORTPER_REPORTPER_200Smpl (5UL)
#define QDEC_REPORTPER_REPORTPER_240Smpl (6UL)
#define QDEC_REPORTPER_REPORTPER_280Smpl (7UL)
#define QDEC_REPORTPER_REPORTPER_1Smpl (8UL)





#define QDEC_ACC_ACC_Pos (0UL)
#define QDEC_ACC_ACC_Msk (0xFFFFFFFFUL << QDEC_ACC_ACC_Pos)





#define QDEC_ACCREAD_ACCREAD_Pos (0UL)
#define QDEC_ACCREAD_ACCREAD_Msk (0xFFFFFFFFUL << QDEC_ACCREAD_ACCREAD_Pos)





#define QDEC_PSEL_LED_CONNECT_Pos (31UL)
#define QDEC_PSEL_LED_CONNECT_Msk (0x1UL << QDEC_PSEL_LED_CONNECT_Pos)
#define QDEC_PSEL_LED_CONNECT_Connected (0UL)
#define QDEC_PSEL_LED_CONNECT_Disconnected (1UL)


#define QDEC_PSEL_LED_PORT_Pos (5UL)
#define QDEC_PSEL_LED_PORT_Msk (0x1UL << QDEC_PSEL_LED_PORT_Pos)


#define QDEC_PSEL_LED_PIN_Pos (0UL)
#define QDEC_PSEL_LED_PIN_Msk (0x1FUL << QDEC_PSEL_LED_PIN_Pos)





#define QDEC_PSEL_A_CONNECT_Pos (31UL)
#define QDEC_PSEL_A_CONNECT_Msk (0x1UL << QDEC_PSEL_A_CONNECT_Pos)
#define QDEC_PSEL_A_CONNECT_Connected (0UL)
#define QDEC_PSEL_A_CONNECT_Disconnected (1UL)


#define QDEC_PSEL_A_PORT_Pos (5UL)
#define QDEC_PSEL_A_PORT_Msk (0x1UL << QDEC_PSEL_A_PORT_Pos)


#define QDEC_PSEL_A_PIN_Pos (0UL)
#define QDEC_PSEL_A_PIN_Msk (0x1FUL << QDEC_PSEL_A_PIN_Pos)





#define QDEC_PSEL_B_CONNECT_Pos (31UL)
#define QDEC_PSEL_B_CONNECT_Msk (0x1UL << QDEC_PSEL_B_CONNECT_Pos)
#define QDEC_PSEL_B_CONNECT_Connected (0UL)
#define QDEC_PSEL_B_CONNECT_Disconnected (1UL)


#define QDEC_PSEL_B_PORT_Pos (5UL)
#define QDEC_PSEL_B_PORT_Msk (0x1UL << QDEC_PSEL_B_PORT_Pos)


#define QDEC_PSEL_B_PIN_Pos (0UL)
#define QDEC_PSEL_B_PIN_Msk (0x1FUL << QDEC_PSEL_B_PIN_Pos)





#define QDEC_DBFEN_DBFEN_Pos (0UL)
#define QDEC_DBFEN_DBFEN_Msk (0x1UL << QDEC_DBFEN_DBFEN_Pos)
#define QDEC_DBFEN_DBFEN_Disabled (0UL)
#define QDEC_DBFEN_DBFEN_Enabled (1UL)





#define QDEC_LEDPRE_LEDPRE_Pos (0UL)
#define QDEC_LEDPRE_LEDPRE_Msk (0x1FFUL << QDEC_LEDPRE_LEDPRE_Pos)





#define QDEC_ACCDBL_ACCDBL_Pos (0UL)
#define QDEC_ACCDBL_ACCDBL_Msk (0xFUL << QDEC_ACCDBL_ACCDBL_Pos)





#define QDEC_ACCDBLREAD_ACCDBLREAD_Pos (0UL)
#define QDEC_ACCDBLREAD_ACCDBLREAD_Msk (0xFUL << QDEC_ACCDBLREAD_ACCDBLREAD_Pos)
# 9526 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define QSPI_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos (0UL)
#define QSPI_TASKS_ACTIVATE_TASKS_ACTIVATE_Msk (0x1UL << QSPI_TASKS_ACTIVATE_TASKS_ACTIVATE_Pos)
#define QSPI_TASKS_ACTIVATE_TASKS_ACTIVATE_Trigger (1UL)





#define QSPI_TASKS_READSTART_TASKS_READSTART_Pos (0UL)
#define QSPI_TASKS_READSTART_TASKS_READSTART_Msk (0x1UL << QSPI_TASKS_READSTART_TASKS_READSTART_Pos)
#define QSPI_TASKS_READSTART_TASKS_READSTART_Trigger (1UL)





#define QSPI_TASKS_WRITESTART_TASKS_WRITESTART_Pos (0UL)
#define QSPI_TASKS_WRITESTART_TASKS_WRITESTART_Msk (0x1UL << QSPI_TASKS_WRITESTART_TASKS_WRITESTART_Pos)
#define QSPI_TASKS_WRITESTART_TASKS_WRITESTART_Trigger (1UL)





#define QSPI_TASKS_ERASESTART_TASKS_ERASESTART_Pos (0UL)
#define QSPI_TASKS_ERASESTART_TASKS_ERASESTART_Msk (0x1UL << QSPI_TASKS_ERASESTART_TASKS_ERASESTART_Pos)
#define QSPI_TASKS_ERASESTART_TASKS_ERASESTART_Trigger (1UL)





#define QSPI_TASKS_DEACTIVATE_TASKS_DEACTIVATE_Pos (0UL)
#define QSPI_TASKS_DEACTIVATE_TASKS_DEACTIVATE_Msk (0x1UL << QSPI_TASKS_DEACTIVATE_TASKS_DEACTIVATE_Pos)
#define QSPI_TASKS_DEACTIVATE_TASKS_DEACTIVATE_Trigger (1UL)





#define QSPI_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define QSPI_EVENTS_READY_EVENTS_READY_Msk (0x1UL << QSPI_EVENTS_READY_EVENTS_READY_Pos)
#define QSPI_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define QSPI_EVENTS_READY_EVENTS_READY_Generated (1UL)





#define QSPI_INTEN_READY_Pos (0UL)
#define QSPI_INTEN_READY_Msk (0x1UL << QSPI_INTEN_READY_Pos)
#define QSPI_INTEN_READY_Disabled (0UL)
#define QSPI_INTEN_READY_Enabled (1UL)





#define QSPI_INTENSET_READY_Pos (0UL)
#define QSPI_INTENSET_READY_Msk (0x1UL << QSPI_INTENSET_READY_Pos)
#define QSPI_INTENSET_READY_Disabled (0UL)
#define QSPI_INTENSET_READY_Enabled (1UL)
#define QSPI_INTENSET_READY_Set (1UL)





#define QSPI_INTENCLR_READY_Pos (0UL)
#define QSPI_INTENCLR_READY_Msk (0x1UL << QSPI_INTENCLR_READY_Pos)
#define QSPI_INTENCLR_READY_Disabled (0UL)
#define QSPI_INTENCLR_READY_Enabled (1UL)
#define QSPI_INTENCLR_READY_Clear (1UL)





#define QSPI_ENABLE_ENABLE_Pos (0UL)
#define QSPI_ENABLE_ENABLE_Msk (0x1UL << QSPI_ENABLE_ENABLE_Pos)
#define QSPI_ENABLE_ENABLE_Disabled (0UL)
#define QSPI_ENABLE_ENABLE_Enabled (1UL)





#define QSPI_READ_SRC_SRC_Pos (0UL)
#define QSPI_READ_SRC_SRC_Msk (0xFFFFFFFFUL << QSPI_READ_SRC_SRC_Pos)





#define QSPI_READ_DST_DST_Pos (0UL)
#define QSPI_READ_DST_DST_Msk (0xFFFFFFFFUL << QSPI_READ_DST_DST_Pos)





#define QSPI_READ_CNT_CNT_Pos (0UL)
#define QSPI_READ_CNT_CNT_Msk (0x3FFFFUL << QSPI_READ_CNT_CNT_Pos)





#define QSPI_WRITE_DST_DST_Pos (0UL)
#define QSPI_WRITE_DST_DST_Msk (0xFFFFFFFFUL << QSPI_WRITE_DST_DST_Pos)





#define QSPI_WRITE_SRC_SRC_Pos (0UL)
#define QSPI_WRITE_SRC_SRC_Msk (0xFFFFFFFFUL << QSPI_WRITE_SRC_SRC_Pos)





#define QSPI_WRITE_CNT_CNT_Pos (0UL)
#define QSPI_WRITE_CNT_CNT_Msk (0x3FFFFUL << QSPI_WRITE_CNT_CNT_Pos)





#define QSPI_ERASE_PTR_PTR_Pos (0UL)
#define QSPI_ERASE_PTR_PTR_Msk (0xFFFFFFFFUL << QSPI_ERASE_PTR_PTR_Pos)





#define QSPI_ERASE_LEN_LEN_Pos (0UL)
#define QSPI_ERASE_LEN_LEN_Msk (0x3UL << QSPI_ERASE_LEN_LEN_Pos)
#define QSPI_ERASE_LEN_LEN_4KB (0UL)
#define QSPI_ERASE_LEN_LEN_64KB (1UL)
#define QSPI_ERASE_LEN_LEN_All (2UL)





#define QSPI_PSEL_SCK_CONNECT_Pos (31UL)
#define QSPI_PSEL_SCK_CONNECT_Msk (0x1UL << QSPI_PSEL_SCK_CONNECT_Pos)
#define QSPI_PSEL_SCK_CONNECT_Connected (0UL)
#define QSPI_PSEL_SCK_CONNECT_Disconnected (1UL)


#define QSPI_PSEL_SCK_PORT_Pos (5UL)
#define QSPI_PSEL_SCK_PORT_Msk (0x1UL << QSPI_PSEL_SCK_PORT_Pos)


#define QSPI_PSEL_SCK_PIN_Pos (0UL)
#define QSPI_PSEL_SCK_PIN_Msk (0x1FUL << QSPI_PSEL_SCK_PIN_Pos)





#define QSPI_PSEL_CSN_CONNECT_Pos (31UL)
#define QSPI_PSEL_CSN_CONNECT_Msk (0x1UL << QSPI_PSEL_CSN_CONNECT_Pos)
#define QSPI_PSEL_CSN_CONNECT_Connected (0UL)
#define QSPI_PSEL_CSN_CONNECT_Disconnected (1UL)


#define QSPI_PSEL_CSN_PORT_Pos (5UL)
#define QSPI_PSEL_CSN_PORT_Msk (0x1UL << QSPI_PSEL_CSN_PORT_Pos)


#define QSPI_PSEL_CSN_PIN_Pos (0UL)
#define QSPI_PSEL_CSN_PIN_Msk (0x1FUL << QSPI_PSEL_CSN_PIN_Pos)





#define QSPI_PSEL_IO0_CONNECT_Pos (31UL)
#define QSPI_PSEL_IO0_CONNECT_Msk (0x1UL << QSPI_PSEL_IO0_CONNECT_Pos)
#define QSPI_PSEL_IO0_CONNECT_Connected (0UL)
#define QSPI_PSEL_IO0_CONNECT_Disconnected (1UL)


#define QSPI_PSEL_IO0_PORT_Pos (5UL)
#define QSPI_PSEL_IO0_PORT_Msk (0x1UL << QSPI_PSEL_IO0_PORT_Pos)


#define QSPI_PSEL_IO0_PIN_Pos (0UL)
#define QSPI_PSEL_IO0_PIN_Msk (0x1FUL << QSPI_PSEL_IO0_PIN_Pos)





#define QSPI_PSEL_IO1_CONNECT_Pos (31UL)
#define QSPI_PSEL_IO1_CONNECT_Msk (0x1UL << QSPI_PSEL_IO1_CONNECT_Pos)
#define QSPI_PSEL_IO1_CONNECT_Connected (0UL)
#define QSPI_PSEL_IO1_CONNECT_Disconnected (1UL)


#define QSPI_PSEL_IO1_PORT_Pos (5UL)
#define QSPI_PSEL_IO1_PORT_Msk (0x1UL << QSPI_PSEL_IO1_PORT_Pos)


#define QSPI_PSEL_IO1_PIN_Pos (0UL)
#define QSPI_PSEL_IO1_PIN_Msk (0x1FUL << QSPI_PSEL_IO1_PIN_Pos)





#define QSPI_PSEL_IO2_CONNECT_Pos (31UL)
#define QSPI_PSEL_IO2_CONNECT_Msk (0x1UL << QSPI_PSEL_IO2_CONNECT_Pos)
#define QSPI_PSEL_IO2_CONNECT_Connected (0UL)
#define QSPI_PSEL_IO2_CONNECT_Disconnected (1UL)


#define QSPI_PSEL_IO2_PORT_Pos (5UL)
#define QSPI_PSEL_IO2_PORT_Msk (0x1UL << QSPI_PSEL_IO2_PORT_Pos)


#define QSPI_PSEL_IO2_PIN_Pos (0UL)
#define QSPI_PSEL_IO2_PIN_Msk (0x1FUL << QSPI_PSEL_IO2_PIN_Pos)





#define QSPI_PSEL_IO3_CONNECT_Pos (31UL)
#define QSPI_PSEL_IO3_CONNECT_Msk (0x1UL << QSPI_PSEL_IO3_CONNECT_Pos)
#define QSPI_PSEL_IO3_CONNECT_Connected (0UL)
#define QSPI_PSEL_IO3_CONNECT_Disconnected (1UL)


#define QSPI_PSEL_IO3_PORT_Pos (5UL)
#define QSPI_PSEL_IO3_PORT_Msk (0x1UL << QSPI_PSEL_IO3_PORT_Pos)


#define QSPI_PSEL_IO3_PIN_Pos (0UL)
#define QSPI_PSEL_IO3_PIN_Msk (0x1FUL << QSPI_PSEL_IO3_PIN_Pos)





#define QSPI_XIPOFFSET_XIPOFFSET_Pos (0UL)
#define QSPI_XIPOFFSET_XIPOFFSET_Msk (0xFFFFFFFFUL << QSPI_XIPOFFSET_XIPOFFSET_Pos)





#define QSPI_IFCONFIG0_PPSIZE_Pos (12UL)
#define QSPI_IFCONFIG0_PPSIZE_Msk (0x1UL << QSPI_IFCONFIG0_PPSIZE_Pos)
#define QSPI_IFCONFIG0_PPSIZE_256Bytes (0UL)
#define QSPI_IFCONFIG0_PPSIZE_512Bytes (1UL)


#define QSPI_IFCONFIG0_DPMENABLE_Pos (7UL)
#define QSPI_IFCONFIG0_DPMENABLE_Msk (0x1UL << QSPI_IFCONFIG0_DPMENABLE_Pos)
#define QSPI_IFCONFIG0_DPMENABLE_Disable (0UL)
#define QSPI_IFCONFIG0_DPMENABLE_Enable (1UL)


#define QSPI_IFCONFIG0_ADDRMODE_Pos (6UL)
#define QSPI_IFCONFIG0_ADDRMODE_Msk (0x1UL << QSPI_IFCONFIG0_ADDRMODE_Pos)
#define QSPI_IFCONFIG0_ADDRMODE_24BIT (0UL)
#define QSPI_IFCONFIG0_ADDRMODE_32BIT (1UL)


#define QSPI_IFCONFIG0_WRITEOC_Pos (3UL)
#define QSPI_IFCONFIG0_WRITEOC_Msk (0x7UL << QSPI_IFCONFIG0_WRITEOC_Pos)
#define QSPI_IFCONFIG0_WRITEOC_PP (0UL)
#define QSPI_IFCONFIG0_WRITEOC_PP2O (1UL)
#define QSPI_IFCONFIG0_WRITEOC_PP4O (2UL)
#define QSPI_IFCONFIG0_WRITEOC_PP4IO (3UL)


#define QSPI_IFCONFIG0_READOC_Pos (0UL)
#define QSPI_IFCONFIG0_READOC_Msk (0x7UL << QSPI_IFCONFIG0_READOC_Pos)
#define QSPI_IFCONFIG0_READOC_FASTREAD (0UL)
#define QSPI_IFCONFIG0_READOC_READ2O (1UL)
#define QSPI_IFCONFIG0_READOC_READ2IO (2UL)
#define QSPI_IFCONFIG0_READOC_READ4O (3UL)
#define QSPI_IFCONFIG0_READOC_READ4IO (4UL)





#define QSPI_IFCONFIG1_SCKFREQ_Pos (28UL)
#define QSPI_IFCONFIG1_SCKFREQ_Msk (0xFUL << QSPI_IFCONFIG1_SCKFREQ_Pos)


#define QSPI_IFCONFIG1_SPIMODE_Pos (25UL)
#define QSPI_IFCONFIG1_SPIMODE_Msk (0x1UL << QSPI_IFCONFIG1_SPIMODE_Pos)
#define QSPI_IFCONFIG1_SPIMODE_MODE0 (0UL)
#define QSPI_IFCONFIG1_SPIMODE_MODE3 (1UL)


#define QSPI_IFCONFIG1_DPMEN_Pos (24UL)
#define QSPI_IFCONFIG1_DPMEN_Msk (0x1UL << QSPI_IFCONFIG1_DPMEN_Pos)
#define QSPI_IFCONFIG1_DPMEN_Exit (0UL)
#define QSPI_IFCONFIG1_DPMEN_Enter (1UL)


#define QSPI_IFCONFIG1_SCKDELAY_Pos (0UL)
#define QSPI_IFCONFIG1_SCKDELAY_Msk (0xFFUL << QSPI_IFCONFIG1_SCKDELAY_Pos)





#define QSPI_STATUS_SREG_Pos (24UL)
#define QSPI_STATUS_SREG_Msk (0xFFUL << QSPI_STATUS_SREG_Pos)


#define QSPI_STATUS_READY_Pos (3UL)
#define QSPI_STATUS_READY_Msk (0x1UL << QSPI_STATUS_READY_Pos)
#define QSPI_STATUS_READY_BUSY (0UL)
#define QSPI_STATUS_READY_READY (1UL)


#define QSPI_STATUS_DPM_Pos (2UL)
#define QSPI_STATUS_DPM_Msk (0x1UL << QSPI_STATUS_DPM_Pos)
#define QSPI_STATUS_DPM_Disabled (0UL)
#define QSPI_STATUS_DPM_Enabled (1UL)





#define QSPI_DPMDUR_EXIT_Pos (16UL)
#define QSPI_DPMDUR_EXIT_Msk (0xFFFFUL << QSPI_DPMDUR_EXIT_Pos)


#define QSPI_DPMDUR_ENTER_Pos (0UL)
#define QSPI_DPMDUR_ENTER_Msk (0xFFFFUL << QSPI_DPMDUR_ENTER_Pos)





#define QSPI_ADDRCONF_WREN_Pos (27UL)
#define QSPI_ADDRCONF_WREN_Msk (0x1UL << QSPI_ADDRCONF_WREN_Pos)
#define QSPI_ADDRCONF_WREN_Disable (0UL)
#define QSPI_ADDRCONF_WREN_Enable (1UL)


#define QSPI_ADDRCONF_WIPWAIT_Pos (26UL)
#define QSPI_ADDRCONF_WIPWAIT_Msk (0x1UL << QSPI_ADDRCONF_WIPWAIT_Pos)
#define QSPI_ADDRCONF_WIPWAIT_Disable (0UL)
#define QSPI_ADDRCONF_WIPWAIT_Enable (1UL)


#define QSPI_ADDRCONF_MODE_Pos (24UL)
#define QSPI_ADDRCONF_MODE_Msk (0x3UL << QSPI_ADDRCONF_MODE_Pos)
#define QSPI_ADDRCONF_MODE_NoInstr (0UL)
#define QSPI_ADDRCONF_MODE_Opcode (1UL)
#define QSPI_ADDRCONF_MODE_OpByte0 (2UL)
#define QSPI_ADDRCONF_MODE_All (3UL)


#define QSPI_ADDRCONF_BYTE1_Pos (16UL)
#define QSPI_ADDRCONF_BYTE1_Msk (0xFFUL << QSPI_ADDRCONF_BYTE1_Pos)


#define QSPI_ADDRCONF_BYTE0_Pos (8UL)
#define QSPI_ADDRCONF_BYTE0_Msk (0xFFUL << QSPI_ADDRCONF_BYTE0_Pos)


#define QSPI_ADDRCONF_OPCODE_Pos (0UL)
#define QSPI_ADDRCONF_OPCODE_Msk (0xFFUL << QSPI_ADDRCONF_OPCODE_Pos)





#define QSPI_CINSTRCONF_LFSTOP_Pos (17UL)
#define QSPI_CINSTRCONF_LFSTOP_Msk (0x1UL << QSPI_CINSTRCONF_LFSTOP_Pos)
#define QSPI_CINSTRCONF_LFSTOP_Stop (1UL)


#define QSPI_CINSTRCONF_LFEN_Pos (16UL)
#define QSPI_CINSTRCONF_LFEN_Msk (0x1UL << QSPI_CINSTRCONF_LFEN_Pos)
#define QSPI_CINSTRCONF_LFEN_Disable (0UL)
#define QSPI_CINSTRCONF_LFEN_Enable (1UL)


#define QSPI_CINSTRCONF_WREN_Pos (15UL)
#define QSPI_CINSTRCONF_WREN_Msk (0x1UL << QSPI_CINSTRCONF_WREN_Pos)
#define QSPI_CINSTRCONF_WREN_Disable (0UL)
#define QSPI_CINSTRCONF_WREN_Enable (1UL)


#define QSPI_CINSTRCONF_WIPWAIT_Pos (14UL)
#define QSPI_CINSTRCONF_WIPWAIT_Msk (0x1UL << QSPI_CINSTRCONF_WIPWAIT_Pos)
#define QSPI_CINSTRCONF_WIPWAIT_Disable (0UL)
#define QSPI_CINSTRCONF_WIPWAIT_Enable (1UL)


#define QSPI_CINSTRCONF_LIO3_Pos (13UL)
#define QSPI_CINSTRCONF_LIO3_Msk (0x1UL << QSPI_CINSTRCONF_LIO3_Pos)


#define QSPI_CINSTRCONF_LIO2_Pos (12UL)
#define QSPI_CINSTRCONF_LIO2_Msk (0x1UL << QSPI_CINSTRCONF_LIO2_Pos)


#define QSPI_CINSTRCONF_LENGTH_Pos (8UL)
#define QSPI_CINSTRCONF_LENGTH_Msk (0xFUL << QSPI_CINSTRCONF_LENGTH_Pos)
#define QSPI_CINSTRCONF_LENGTH_1B (1UL)
#define QSPI_CINSTRCONF_LENGTH_2B (2UL)
#define QSPI_CINSTRCONF_LENGTH_3B (3UL)
#define QSPI_CINSTRCONF_LENGTH_4B (4UL)
#define QSPI_CINSTRCONF_LENGTH_5B (5UL)
#define QSPI_CINSTRCONF_LENGTH_6B (6UL)
#define QSPI_CINSTRCONF_LENGTH_7B (7UL)
#define QSPI_CINSTRCONF_LENGTH_8B (8UL)
#define QSPI_CINSTRCONF_LENGTH_9B (9UL)


#define QSPI_CINSTRCONF_OPCODE_Pos (0UL)
#define QSPI_CINSTRCONF_OPCODE_Msk (0xFFUL << QSPI_CINSTRCONF_OPCODE_Pos)





#define QSPI_CINSTRDAT0_BYTE3_Pos (24UL)
#define QSPI_CINSTRDAT0_BYTE3_Msk (0xFFUL << QSPI_CINSTRDAT0_BYTE3_Pos)


#define QSPI_CINSTRDAT0_BYTE2_Pos (16UL)
#define QSPI_CINSTRDAT0_BYTE2_Msk (0xFFUL << QSPI_CINSTRDAT0_BYTE2_Pos)


#define QSPI_CINSTRDAT0_BYTE1_Pos (8UL)
#define QSPI_CINSTRDAT0_BYTE1_Msk (0xFFUL << QSPI_CINSTRDAT0_BYTE1_Pos)


#define QSPI_CINSTRDAT0_BYTE0_Pos (0UL)
#define QSPI_CINSTRDAT0_BYTE0_Msk (0xFFUL << QSPI_CINSTRDAT0_BYTE0_Pos)





#define QSPI_CINSTRDAT1_BYTE7_Pos (24UL)
#define QSPI_CINSTRDAT1_BYTE7_Msk (0xFFUL << QSPI_CINSTRDAT1_BYTE7_Pos)


#define QSPI_CINSTRDAT1_BYTE6_Pos (16UL)
#define QSPI_CINSTRDAT1_BYTE6_Msk (0xFFUL << QSPI_CINSTRDAT1_BYTE6_Pos)


#define QSPI_CINSTRDAT1_BYTE5_Pos (8UL)
#define QSPI_CINSTRDAT1_BYTE5_Msk (0xFFUL << QSPI_CINSTRDAT1_BYTE5_Pos)


#define QSPI_CINSTRDAT1_BYTE4_Pos (0UL)
#define QSPI_CINSTRDAT1_BYTE4_Msk (0xFFUL << QSPI_CINSTRDAT1_BYTE4_Pos)





#define QSPI_IFTIMING_RXDELAY_Pos (8UL)
#define QSPI_IFTIMING_RXDELAY_Msk (0x7UL << QSPI_IFTIMING_RXDELAY_Pos)
# 10007 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define RADIO_TASKS_TXEN_TASKS_TXEN_Pos (0UL)
#define RADIO_TASKS_TXEN_TASKS_TXEN_Msk (0x1UL << RADIO_TASKS_TXEN_TASKS_TXEN_Pos)
#define RADIO_TASKS_TXEN_TASKS_TXEN_Trigger (1UL)





#define RADIO_TASKS_RXEN_TASKS_RXEN_Pos (0UL)
#define RADIO_TASKS_RXEN_TASKS_RXEN_Msk (0x1UL << RADIO_TASKS_RXEN_TASKS_RXEN_Pos)
#define RADIO_TASKS_RXEN_TASKS_RXEN_Trigger (1UL)





#define RADIO_TASKS_START_TASKS_START_Pos (0UL)
#define RADIO_TASKS_START_TASKS_START_Msk (0x1UL << RADIO_TASKS_START_TASKS_START_Pos)
#define RADIO_TASKS_START_TASKS_START_Trigger (1UL)





#define RADIO_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define RADIO_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RADIO_TASKS_STOP_TASKS_STOP_Pos)
#define RADIO_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL)
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos)
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Trigger (1UL)





#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos (0UL)
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Msk (0x1UL << RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos)
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Trigger (1UL)





#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos (0UL)
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Msk (0x1UL << RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos)
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Trigger (1UL)





#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos (0UL)
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Msk (0x1UL << RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos)
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Trigger (1UL)





#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos (0UL)
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Msk (0x1UL << RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos)
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Trigger (1UL)





#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos (0UL)
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Msk (0x1UL << RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos)
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Trigger (1UL)





#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos (0UL)
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Msk (0x1UL << RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos)
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Trigger (1UL)





#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos (0UL)
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Msk (0x1UL << RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos)
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Trigger (1UL)





#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos (0UL)
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Msk (0x1UL << RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos)
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Trigger (1UL)





#define RADIO_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define RADIO_EVENTS_READY_EVENTS_READY_Msk (0x1UL << RADIO_EVENTS_READY_EVENTS_READY_Pos)
#define RADIO_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define RADIO_EVENTS_READY_EVENTS_READY_Generated (1UL)





#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos (0UL)
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Msk (0x1UL << RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos)
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_NotGenerated (0UL)
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Generated (1UL)





#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos (0UL)
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Msk (0x1UL << RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos)
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_NotGenerated (0UL)
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Generated (1UL)





#define RADIO_EVENTS_END_EVENTS_END_Pos (0UL)
#define RADIO_EVENTS_END_EVENTS_END_Msk (0x1UL << RADIO_EVENTS_END_EVENTS_END_Pos)
#define RADIO_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define RADIO_EVENTS_END_EVENTS_END_Generated (1UL)





#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos (0UL)
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Msk (0x1UL << RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos)
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_NotGenerated (0UL)
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Generated (1UL)





#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos (0UL)
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Msk (0x1UL << RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos)
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_NotGenerated (0UL)
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Generated (1UL)





#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos (0UL)
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Msk (0x1UL << RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos)
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_NotGenerated (0UL)
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Generated (1UL)





#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos (0UL)
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Msk (0x1UL << RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos)
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_NotGenerated (0UL)
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Generated (1UL)





#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos (0UL)
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Msk (0x1UL << RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos)
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_NotGenerated (0UL)
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Generated (1UL)





#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos (0UL)
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Msk (0x1UL << RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos)
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_NotGenerated (0UL)
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Generated (1UL)





#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos (0UL)
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Msk (0x1UL << RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos)
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_NotGenerated (0UL)
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Generated (1UL)





#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos (0UL)
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Msk (0x1UL << RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos)
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_NotGenerated (0UL)
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Generated (1UL)





#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos (0UL)
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Msk (0x1UL << RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos)
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_NotGenerated (0UL)
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Generated (1UL)





#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos (0UL)
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Msk (0x1UL << RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos)
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_NotGenerated (0UL)
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Generated (1UL)





#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos (0UL)
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Msk (0x1UL << RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos)
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_NotGenerated (0UL)
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Generated (1UL)





#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos (0UL)
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Msk (0x1UL << RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos)
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_NotGenerated (0UL)
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Generated (1UL)





#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos (0UL)
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Msk (0x1UL << RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos)
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_NotGenerated (0UL)
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Generated (1UL)





#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos (0UL)
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Msk (0x1UL << RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos)
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_NotGenerated (0UL)
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Generated (1UL)





#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos (0UL)
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Msk (0x1UL << RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos)
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_NotGenerated (0UL)
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Generated (1UL)





#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos (0UL)
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Msk (0x1UL << RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos)
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_NotGenerated (0UL)
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Generated (1UL)





#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos (0UL)
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Msk (0x1UL << RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos)
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_NotGenerated (0UL)
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Generated (1UL)





#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos (0UL)
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Msk (0x1UL << RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos)
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_NotGenerated (0UL)
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Generated (1UL)





#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos (0UL)
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Msk (0x1UL << RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos)
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_NotGenerated (0UL)
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Generated (1UL)





#define RADIO_SHORTS_PHYEND_START_Pos (21UL)
#define RADIO_SHORTS_PHYEND_START_Msk (0x1UL << RADIO_SHORTS_PHYEND_START_Pos)
#define RADIO_SHORTS_PHYEND_START_Disabled (0UL)
#define RADIO_SHORTS_PHYEND_START_Enabled (1UL)


#define RADIO_SHORTS_PHYEND_DISABLE_Pos (20UL)
#define RADIO_SHORTS_PHYEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_PHYEND_DISABLE_Pos)
#define RADIO_SHORTS_PHYEND_DISABLE_Disabled (0UL)
#define RADIO_SHORTS_PHYEND_DISABLE_Enabled (1UL)


#define RADIO_SHORTS_RXREADY_START_Pos (19UL)
#define RADIO_SHORTS_RXREADY_START_Msk (0x1UL << RADIO_SHORTS_RXREADY_START_Pos)
#define RADIO_SHORTS_RXREADY_START_Disabled (0UL)
#define RADIO_SHORTS_RXREADY_START_Enabled (1UL)


#define RADIO_SHORTS_TXREADY_START_Pos (18UL)
#define RADIO_SHORTS_TXREADY_START_Msk (0x1UL << RADIO_SHORTS_TXREADY_START_Pos)
#define RADIO_SHORTS_TXREADY_START_Disabled (0UL)
#define RADIO_SHORTS_TXREADY_START_Enabled (1UL)


#define RADIO_SHORTS_CCAIDLE_STOP_Pos (17UL)
#define RADIO_SHORTS_CCAIDLE_STOP_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_STOP_Pos)
#define RADIO_SHORTS_CCAIDLE_STOP_Disabled (0UL)
#define RADIO_SHORTS_CCAIDLE_STOP_Enabled (1UL)


#define RADIO_SHORTS_EDEND_DISABLE_Pos (16UL)
#define RADIO_SHORTS_EDEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_EDEND_DISABLE_Pos)
#define RADIO_SHORTS_EDEND_DISABLE_Disabled (0UL)
#define RADIO_SHORTS_EDEND_DISABLE_Enabled (1UL)


#define RADIO_SHORTS_READY_EDSTART_Pos (15UL)
#define RADIO_SHORTS_READY_EDSTART_Msk (0x1UL << RADIO_SHORTS_READY_EDSTART_Pos)
#define RADIO_SHORTS_READY_EDSTART_Disabled (0UL)
#define RADIO_SHORTS_READY_EDSTART_Enabled (1UL)


#define RADIO_SHORTS_FRAMESTART_BCSTART_Pos (14UL)
#define RADIO_SHORTS_FRAMESTART_BCSTART_Msk (0x1UL << RADIO_SHORTS_FRAMESTART_BCSTART_Pos)
#define RADIO_SHORTS_FRAMESTART_BCSTART_Disabled (0UL)
#define RADIO_SHORTS_FRAMESTART_BCSTART_Enabled (1UL)


#define RADIO_SHORTS_CCABUSY_DISABLE_Pos (13UL)
#define RADIO_SHORTS_CCABUSY_DISABLE_Msk (0x1UL << RADIO_SHORTS_CCABUSY_DISABLE_Pos)
#define RADIO_SHORTS_CCABUSY_DISABLE_Disabled (0UL)
#define RADIO_SHORTS_CCABUSY_DISABLE_Enabled (1UL)


#define RADIO_SHORTS_CCAIDLE_TXEN_Pos (12UL)
#define RADIO_SHORTS_CCAIDLE_TXEN_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_TXEN_Pos)
#define RADIO_SHORTS_CCAIDLE_TXEN_Disabled (0UL)
#define RADIO_SHORTS_CCAIDLE_TXEN_Enabled (1UL)


#define RADIO_SHORTS_RXREADY_CCASTART_Pos (11UL)
#define RADIO_SHORTS_RXREADY_CCASTART_Msk (0x1UL << RADIO_SHORTS_RXREADY_CCASTART_Pos)
#define RADIO_SHORTS_RXREADY_CCASTART_Disabled (0UL)
#define RADIO_SHORTS_RXREADY_CCASTART_Enabled (1UL)


#define RADIO_SHORTS_DISABLED_RSSISTOP_Pos (8UL)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Msk (0x1UL << RADIO_SHORTS_DISABLED_RSSISTOP_Pos)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Disabled (0UL)
#define RADIO_SHORTS_DISABLED_RSSISTOP_Enabled (1UL)


#define RADIO_SHORTS_ADDRESS_BCSTART_Pos (6UL)
#define RADIO_SHORTS_ADDRESS_BCSTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_BCSTART_Pos)
#define RADIO_SHORTS_ADDRESS_BCSTART_Disabled (0UL)
#define RADIO_SHORTS_ADDRESS_BCSTART_Enabled (1UL)


#define RADIO_SHORTS_END_START_Pos (5UL)
#define RADIO_SHORTS_END_START_Msk (0x1UL << RADIO_SHORTS_END_START_Pos)
#define RADIO_SHORTS_END_START_Disabled (0UL)
#define RADIO_SHORTS_END_START_Enabled (1UL)


#define RADIO_SHORTS_ADDRESS_RSSISTART_Pos (4UL)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_RSSISTART_Pos)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Disabled (0UL)
#define RADIO_SHORTS_ADDRESS_RSSISTART_Enabled (1UL)


#define RADIO_SHORTS_DISABLED_RXEN_Pos (3UL)
#define RADIO_SHORTS_DISABLED_RXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_RXEN_Pos)
#define RADIO_SHORTS_DISABLED_RXEN_Disabled (0UL)
#define RADIO_SHORTS_DISABLED_RXEN_Enabled (1UL)


#define RADIO_SHORTS_DISABLED_TXEN_Pos (2UL)
#define RADIO_SHORTS_DISABLED_TXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_TXEN_Pos)
#define RADIO_SHORTS_DISABLED_TXEN_Disabled (0UL)
#define RADIO_SHORTS_DISABLED_TXEN_Enabled (1UL)


#define RADIO_SHORTS_END_DISABLE_Pos (1UL)
#define RADIO_SHORTS_END_DISABLE_Msk (0x1UL << RADIO_SHORTS_END_DISABLE_Pos)
#define RADIO_SHORTS_END_DISABLE_Disabled (0UL)
#define RADIO_SHORTS_END_DISABLE_Enabled (1UL)


#define RADIO_SHORTS_READY_START_Pos (0UL)
#define RADIO_SHORTS_READY_START_Msk (0x1UL << RADIO_SHORTS_READY_START_Pos)
#define RADIO_SHORTS_READY_START_Disabled (0UL)
#define RADIO_SHORTS_READY_START_Enabled (1UL)





#define RADIO_INTENSET_PHYEND_Pos (27UL)
#define RADIO_INTENSET_PHYEND_Msk (0x1UL << RADIO_INTENSET_PHYEND_Pos)
#define RADIO_INTENSET_PHYEND_Disabled (0UL)
#define RADIO_INTENSET_PHYEND_Enabled (1UL)
#define RADIO_INTENSET_PHYEND_Set (1UL)


#define RADIO_INTENSET_SYNC_Pos (26UL)
#define RADIO_INTENSET_SYNC_Msk (0x1UL << RADIO_INTENSET_SYNC_Pos)
#define RADIO_INTENSET_SYNC_Disabled (0UL)
#define RADIO_INTENSET_SYNC_Enabled (1UL)
#define RADIO_INTENSET_SYNC_Set (1UL)


#define RADIO_INTENSET_MHRMATCH_Pos (23UL)
#define RADIO_INTENSET_MHRMATCH_Msk (0x1UL << RADIO_INTENSET_MHRMATCH_Pos)
#define RADIO_INTENSET_MHRMATCH_Disabled (0UL)
#define RADIO_INTENSET_MHRMATCH_Enabled (1UL)
#define RADIO_INTENSET_MHRMATCH_Set (1UL)


#define RADIO_INTENSET_RXREADY_Pos (22UL)
#define RADIO_INTENSET_RXREADY_Msk (0x1UL << RADIO_INTENSET_RXREADY_Pos)
#define RADIO_INTENSET_RXREADY_Disabled (0UL)
#define RADIO_INTENSET_RXREADY_Enabled (1UL)
#define RADIO_INTENSET_RXREADY_Set (1UL)


#define RADIO_INTENSET_TXREADY_Pos (21UL)
#define RADIO_INTENSET_TXREADY_Msk (0x1UL << RADIO_INTENSET_TXREADY_Pos)
#define RADIO_INTENSET_TXREADY_Disabled (0UL)
#define RADIO_INTENSET_TXREADY_Enabled (1UL)
#define RADIO_INTENSET_TXREADY_Set (1UL)


#define RADIO_INTENSET_RATEBOOST_Pos (20UL)
#define RADIO_INTENSET_RATEBOOST_Msk (0x1UL << RADIO_INTENSET_RATEBOOST_Pos)
#define RADIO_INTENSET_RATEBOOST_Disabled (0UL)
#define RADIO_INTENSET_RATEBOOST_Enabled (1UL)
#define RADIO_INTENSET_RATEBOOST_Set (1UL)


#define RADIO_INTENSET_CCASTOPPED_Pos (19UL)
#define RADIO_INTENSET_CCASTOPPED_Msk (0x1UL << RADIO_INTENSET_CCASTOPPED_Pos)
#define RADIO_INTENSET_CCASTOPPED_Disabled (0UL)
#define RADIO_INTENSET_CCASTOPPED_Enabled (1UL)
#define RADIO_INTENSET_CCASTOPPED_Set (1UL)


#define RADIO_INTENSET_CCABUSY_Pos (18UL)
#define RADIO_INTENSET_CCABUSY_Msk (0x1UL << RADIO_INTENSET_CCABUSY_Pos)
#define RADIO_INTENSET_CCABUSY_Disabled (0UL)
#define RADIO_INTENSET_CCABUSY_Enabled (1UL)
#define RADIO_INTENSET_CCABUSY_Set (1UL)


#define RADIO_INTENSET_CCAIDLE_Pos (17UL)
#define RADIO_INTENSET_CCAIDLE_Msk (0x1UL << RADIO_INTENSET_CCAIDLE_Pos)
#define RADIO_INTENSET_CCAIDLE_Disabled (0UL)
#define RADIO_INTENSET_CCAIDLE_Enabled (1UL)
#define RADIO_INTENSET_CCAIDLE_Set (1UL)


#define RADIO_INTENSET_EDSTOPPED_Pos (16UL)
#define RADIO_INTENSET_EDSTOPPED_Msk (0x1UL << RADIO_INTENSET_EDSTOPPED_Pos)
#define RADIO_INTENSET_EDSTOPPED_Disabled (0UL)
#define RADIO_INTENSET_EDSTOPPED_Enabled (1UL)
#define RADIO_INTENSET_EDSTOPPED_Set (1UL)


#define RADIO_INTENSET_EDEND_Pos (15UL)
#define RADIO_INTENSET_EDEND_Msk (0x1UL << RADIO_INTENSET_EDEND_Pos)
#define RADIO_INTENSET_EDEND_Disabled (0UL)
#define RADIO_INTENSET_EDEND_Enabled (1UL)
#define RADIO_INTENSET_EDEND_Set (1UL)


#define RADIO_INTENSET_FRAMESTART_Pos (14UL)
#define RADIO_INTENSET_FRAMESTART_Msk (0x1UL << RADIO_INTENSET_FRAMESTART_Pos)
#define RADIO_INTENSET_FRAMESTART_Disabled (0UL)
#define RADIO_INTENSET_FRAMESTART_Enabled (1UL)
#define RADIO_INTENSET_FRAMESTART_Set (1UL)


#define RADIO_INTENSET_CRCERROR_Pos (13UL)
#define RADIO_INTENSET_CRCERROR_Msk (0x1UL << RADIO_INTENSET_CRCERROR_Pos)
#define RADIO_INTENSET_CRCERROR_Disabled (0UL)
#define RADIO_INTENSET_CRCERROR_Enabled (1UL)
#define RADIO_INTENSET_CRCERROR_Set (1UL)


#define RADIO_INTENSET_CRCOK_Pos (12UL)
#define RADIO_INTENSET_CRCOK_Msk (0x1UL << RADIO_INTENSET_CRCOK_Pos)
#define RADIO_INTENSET_CRCOK_Disabled (0UL)
#define RADIO_INTENSET_CRCOK_Enabled (1UL)
#define RADIO_INTENSET_CRCOK_Set (1UL)


#define RADIO_INTENSET_BCMATCH_Pos (10UL)
#define RADIO_INTENSET_BCMATCH_Msk (0x1UL << RADIO_INTENSET_BCMATCH_Pos)
#define RADIO_INTENSET_BCMATCH_Disabled (0UL)
#define RADIO_INTENSET_BCMATCH_Enabled (1UL)
#define RADIO_INTENSET_BCMATCH_Set (1UL)


#define RADIO_INTENSET_RSSIEND_Pos (7UL)
#define RADIO_INTENSET_RSSIEND_Msk (0x1UL << RADIO_INTENSET_RSSIEND_Pos)
#define RADIO_INTENSET_RSSIEND_Disabled (0UL)
#define RADIO_INTENSET_RSSIEND_Enabled (1UL)
#define RADIO_INTENSET_RSSIEND_Set (1UL)


#define RADIO_INTENSET_DEVMISS_Pos (6UL)
#define RADIO_INTENSET_DEVMISS_Msk (0x1UL << RADIO_INTENSET_DEVMISS_Pos)
#define RADIO_INTENSET_DEVMISS_Disabled (0UL)
#define RADIO_INTENSET_DEVMISS_Enabled (1UL)
#define RADIO_INTENSET_DEVMISS_Set (1UL)


#define RADIO_INTENSET_DEVMATCH_Pos (5UL)
#define RADIO_INTENSET_DEVMATCH_Msk (0x1UL << RADIO_INTENSET_DEVMATCH_Pos)
#define RADIO_INTENSET_DEVMATCH_Disabled (0UL)
#define RADIO_INTENSET_DEVMATCH_Enabled (1UL)
#define RADIO_INTENSET_DEVMATCH_Set (1UL)


#define RADIO_INTENSET_DISABLED_Pos (4UL)
#define RADIO_INTENSET_DISABLED_Msk (0x1UL << RADIO_INTENSET_DISABLED_Pos)
#define RADIO_INTENSET_DISABLED_Disabled (0UL)
#define RADIO_INTENSET_DISABLED_Enabled (1UL)
#define RADIO_INTENSET_DISABLED_Set (1UL)


#define RADIO_INTENSET_END_Pos (3UL)
#define RADIO_INTENSET_END_Msk (0x1UL << RADIO_INTENSET_END_Pos)
#define RADIO_INTENSET_END_Disabled (0UL)
#define RADIO_INTENSET_END_Enabled (1UL)
#define RADIO_INTENSET_END_Set (1UL)


#define RADIO_INTENSET_PAYLOAD_Pos (2UL)
#define RADIO_INTENSET_PAYLOAD_Msk (0x1UL << RADIO_INTENSET_PAYLOAD_Pos)
#define RADIO_INTENSET_PAYLOAD_Disabled (0UL)
#define RADIO_INTENSET_PAYLOAD_Enabled (1UL)
#define RADIO_INTENSET_PAYLOAD_Set (1UL)


#define RADIO_INTENSET_ADDRESS_Pos (1UL)
#define RADIO_INTENSET_ADDRESS_Msk (0x1UL << RADIO_INTENSET_ADDRESS_Pos)
#define RADIO_INTENSET_ADDRESS_Disabled (0UL)
#define RADIO_INTENSET_ADDRESS_Enabled (1UL)
#define RADIO_INTENSET_ADDRESS_Set (1UL)


#define RADIO_INTENSET_READY_Pos (0UL)
#define RADIO_INTENSET_READY_Msk (0x1UL << RADIO_INTENSET_READY_Pos)
#define RADIO_INTENSET_READY_Disabled (0UL)
#define RADIO_INTENSET_READY_Enabled (1UL)
#define RADIO_INTENSET_READY_Set (1UL)





#define RADIO_INTENCLR_PHYEND_Pos (27UL)
#define RADIO_INTENCLR_PHYEND_Msk (0x1UL << RADIO_INTENCLR_PHYEND_Pos)
#define RADIO_INTENCLR_PHYEND_Disabled (0UL)
#define RADIO_INTENCLR_PHYEND_Enabled (1UL)
#define RADIO_INTENCLR_PHYEND_Clear (1UL)


#define RADIO_INTENCLR_SYNC_Pos (26UL)
#define RADIO_INTENCLR_SYNC_Msk (0x1UL << RADIO_INTENCLR_SYNC_Pos)
#define RADIO_INTENCLR_SYNC_Disabled (0UL)
#define RADIO_INTENCLR_SYNC_Enabled (1UL)
#define RADIO_INTENCLR_SYNC_Clear (1UL)


#define RADIO_INTENCLR_MHRMATCH_Pos (23UL)
#define RADIO_INTENCLR_MHRMATCH_Msk (0x1UL << RADIO_INTENCLR_MHRMATCH_Pos)
#define RADIO_INTENCLR_MHRMATCH_Disabled (0UL)
#define RADIO_INTENCLR_MHRMATCH_Enabled (1UL)
#define RADIO_INTENCLR_MHRMATCH_Clear (1UL)


#define RADIO_INTENCLR_RXREADY_Pos (22UL)
#define RADIO_INTENCLR_RXREADY_Msk (0x1UL << RADIO_INTENCLR_RXREADY_Pos)
#define RADIO_INTENCLR_RXREADY_Disabled (0UL)
#define RADIO_INTENCLR_RXREADY_Enabled (1UL)
#define RADIO_INTENCLR_RXREADY_Clear (1UL)


#define RADIO_INTENCLR_TXREADY_Pos (21UL)
#define RADIO_INTENCLR_TXREADY_Msk (0x1UL << RADIO_INTENCLR_TXREADY_Pos)
#define RADIO_INTENCLR_TXREADY_Disabled (0UL)
#define RADIO_INTENCLR_TXREADY_Enabled (1UL)
#define RADIO_INTENCLR_TXREADY_Clear (1UL)


#define RADIO_INTENCLR_RATEBOOST_Pos (20UL)
#define RADIO_INTENCLR_RATEBOOST_Msk (0x1UL << RADIO_INTENCLR_RATEBOOST_Pos)
#define RADIO_INTENCLR_RATEBOOST_Disabled (0UL)
#define RADIO_INTENCLR_RATEBOOST_Enabled (1UL)
#define RADIO_INTENCLR_RATEBOOST_Clear (1UL)


#define RADIO_INTENCLR_CCASTOPPED_Pos (19UL)
#define RADIO_INTENCLR_CCASTOPPED_Msk (0x1UL << RADIO_INTENCLR_CCASTOPPED_Pos)
#define RADIO_INTENCLR_CCASTOPPED_Disabled (0UL)
#define RADIO_INTENCLR_CCASTOPPED_Enabled (1UL)
#define RADIO_INTENCLR_CCASTOPPED_Clear (1UL)


#define RADIO_INTENCLR_CCABUSY_Pos (18UL)
#define RADIO_INTENCLR_CCABUSY_Msk (0x1UL << RADIO_INTENCLR_CCABUSY_Pos)
#define RADIO_INTENCLR_CCABUSY_Disabled (0UL)
#define RADIO_INTENCLR_CCABUSY_Enabled (1UL)
#define RADIO_INTENCLR_CCABUSY_Clear (1UL)


#define RADIO_INTENCLR_CCAIDLE_Pos (17UL)
#define RADIO_INTENCLR_CCAIDLE_Msk (0x1UL << RADIO_INTENCLR_CCAIDLE_Pos)
#define RADIO_INTENCLR_CCAIDLE_Disabled (0UL)
#define RADIO_INTENCLR_CCAIDLE_Enabled (1UL)
#define RADIO_INTENCLR_CCAIDLE_Clear (1UL)


#define RADIO_INTENCLR_EDSTOPPED_Pos (16UL)
#define RADIO_INTENCLR_EDSTOPPED_Msk (0x1UL << RADIO_INTENCLR_EDSTOPPED_Pos)
#define RADIO_INTENCLR_EDSTOPPED_Disabled (0UL)
#define RADIO_INTENCLR_EDSTOPPED_Enabled (1UL)
#define RADIO_INTENCLR_EDSTOPPED_Clear (1UL)


#define RADIO_INTENCLR_EDEND_Pos (15UL)
#define RADIO_INTENCLR_EDEND_Msk (0x1UL << RADIO_INTENCLR_EDEND_Pos)
#define RADIO_INTENCLR_EDEND_Disabled (0UL)
#define RADIO_INTENCLR_EDEND_Enabled (1UL)
#define RADIO_INTENCLR_EDEND_Clear (1UL)


#define RADIO_INTENCLR_FRAMESTART_Pos (14UL)
#define RADIO_INTENCLR_FRAMESTART_Msk (0x1UL << RADIO_INTENCLR_FRAMESTART_Pos)
#define RADIO_INTENCLR_FRAMESTART_Disabled (0UL)
#define RADIO_INTENCLR_FRAMESTART_Enabled (1UL)
#define RADIO_INTENCLR_FRAMESTART_Clear (1UL)


#define RADIO_INTENCLR_CRCERROR_Pos (13UL)
#define RADIO_INTENCLR_CRCERROR_Msk (0x1UL << RADIO_INTENCLR_CRCERROR_Pos)
#define RADIO_INTENCLR_CRCERROR_Disabled (0UL)
#define RADIO_INTENCLR_CRCERROR_Enabled (1UL)
#define RADIO_INTENCLR_CRCERROR_Clear (1UL)


#define RADIO_INTENCLR_CRCOK_Pos (12UL)
#define RADIO_INTENCLR_CRCOK_Msk (0x1UL << RADIO_INTENCLR_CRCOK_Pos)
#define RADIO_INTENCLR_CRCOK_Disabled (0UL)
#define RADIO_INTENCLR_CRCOK_Enabled (1UL)
#define RADIO_INTENCLR_CRCOK_Clear (1UL)


#define RADIO_INTENCLR_BCMATCH_Pos (10UL)
#define RADIO_INTENCLR_BCMATCH_Msk (0x1UL << RADIO_INTENCLR_BCMATCH_Pos)
#define RADIO_INTENCLR_BCMATCH_Disabled (0UL)
#define RADIO_INTENCLR_BCMATCH_Enabled (1UL)
#define RADIO_INTENCLR_BCMATCH_Clear (1UL)


#define RADIO_INTENCLR_RSSIEND_Pos (7UL)
#define RADIO_INTENCLR_RSSIEND_Msk (0x1UL << RADIO_INTENCLR_RSSIEND_Pos)
#define RADIO_INTENCLR_RSSIEND_Disabled (0UL)
#define RADIO_INTENCLR_RSSIEND_Enabled (1UL)
#define RADIO_INTENCLR_RSSIEND_Clear (1UL)


#define RADIO_INTENCLR_DEVMISS_Pos (6UL)
#define RADIO_INTENCLR_DEVMISS_Msk (0x1UL << RADIO_INTENCLR_DEVMISS_Pos)
#define RADIO_INTENCLR_DEVMISS_Disabled (0UL)
#define RADIO_INTENCLR_DEVMISS_Enabled (1UL)
#define RADIO_INTENCLR_DEVMISS_Clear (1UL)


#define RADIO_INTENCLR_DEVMATCH_Pos (5UL)
#define RADIO_INTENCLR_DEVMATCH_Msk (0x1UL << RADIO_INTENCLR_DEVMATCH_Pos)
#define RADIO_INTENCLR_DEVMATCH_Disabled (0UL)
#define RADIO_INTENCLR_DEVMATCH_Enabled (1UL)
#define RADIO_INTENCLR_DEVMATCH_Clear (1UL)


#define RADIO_INTENCLR_DISABLED_Pos (4UL)
#define RADIO_INTENCLR_DISABLED_Msk (0x1UL << RADIO_INTENCLR_DISABLED_Pos)
#define RADIO_INTENCLR_DISABLED_Disabled (0UL)
#define RADIO_INTENCLR_DISABLED_Enabled (1UL)
#define RADIO_INTENCLR_DISABLED_Clear (1UL)


#define RADIO_INTENCLR_END_Pos (3UL)
#define RADIO_INTENCLR_END_Msk (0x1UL << RADIO_INTENCLR_END_Pos)
#define RADIO_INTENCLR_END_Disabled (0UL)
#define RADIO_INTENCLR_END_Enabled (1UL)
#define RADIO_INTENCLR_END_Clear (1UL)


#define RADIO_INTENCLR_PAYLOAD_Pos (2UL)
#define RADIO_INTENCLR_PAYLOAD_Msk (0x1UL << RADIO_INTENCLR_PAYLOAD_Pos)
#define RADIO_INTENCLR_PAYLOAD_Disabled (0UL)
#define RADIO_INTENCLR_PAYLOAD_Enabled (1UL)
#define RADIO_INTENCLR_PAYLOAD_Clear (1UL)


#define RADIO_INTENCLR_ADDRESS_Pos (1UL)
#define RADIO_INTENCLR_ADDRESS_Msk (0x1UL << RADIO_INTENCLR_ADDRESS_Pos)
#define RADIO_INTENCLR_ADDRESS_Disabled (0UL)
#define RADIO_INTENCLR_ADDRESS_Enabled (1UL)
#define RADIO_INTENCLR_ADDRESS_Clear (1UL)


#define RADIO_INTENCLR_READY_Pos (0UL)
#define RADIO_INTENCLR_READY_Msk (0x1UL << RADIO_INTENCLR_READY_Pos)
#define RADIO_INTENCLR_READY_Disabled (0UL)
#define RADIO_INTENCLR_READY_Enabled (1UL)
#define RADIO_INTENCLR_READY_Clear (1UL)





#define RADIO_CRCSTATUS_CRCSTATUS_Pos (0UL)
#define RADIO_CRCSTATUS_CRCSTATUS_Msk (0x1UL << RADIO_CRCSTATUS_CRCSTATUS_Pos)
#define RADIO_CRCSTATUS_CRCSTATUS_CRCError (0UL)
#define RADIO_CRCSTATUS_CRCSTATUS_CRCOk (1UL)





#define RADIO_RXMATCH_RXMATCH_Pos (0UL)
#define RADIO_RXMATCH_RXMATCH_Msk (0x7UL << RADIO_RXMATCH_RXMATCH_Pos)





#define RADIO_RXCRC_RXCRC_Pos (0UL)
#define RADIO_RXCRC_RXCRC_Msk (0xFFFFFFUL << RADIO_RXCRC_RXCRC_Pos)





#define RADIO_DAI_DAI_Pos (0UL)
#define RADIO_DAI_DAI_Msk (0x7UL << RADIO_DAI_DAI_Pos)





#define RADIO_PDUSTAT_CISTAT_Pos (1UL)
#define RADIO_PDUSTAT_CISTAT_Msk (0x3UL << RADIO_PDUSTAT_CISTAT_Pos)
#define RADIO_PDUSTAT_CISTAT_LR125kbit (0UL)
#define RADIO_PDUSTAT_CISTAT_LR500kbit (1UL)


#define RADIO_PDUSTAT_PDUSTAT_Pos (0UL)
#define RADIO_PDUSTAT_PDUSTAT_Msk (0x1UL << RADIO_PDUSTAT_PDUSTAT_Pos)
#define RADIO_PDUSTAT_PDUSTAT_LessThan (0UL)
#define RADIO_PDUSTAT_PDUSTAT_GreaterThan (1UL)





#define RADIO_PACKETPTR_PACKETPTR_Pos (0UL)
#define RADIO_PACKETPTR_PACKETPTR_Msk (0xFFFFFFFFUL << RADIO_PACKETPTR_PACKETPTR_Pos)





#define RADIO_FREQUENCY_MAP_Pos (8UL)
#define RADIO_FREQUENCY_MAP_Msk (0x1UL << RADIO_FREQUENCY_MAP_Pos)
#define RADIO_FREQUENCY_MAP_Default (0UL)
#define RADIO_FREQUENCY_MAP_Low (1UL)


#define RADIO_FREQUENCY_FREQUENCY_Pos (0UL)
#define RADIO_FREQUENCY_FREQUENCY_Msk (0x7FUL << RADIO_FREQUENCY_FREQUENCY_Pos)





#define RADIO_TXPOWER_TXPOWER_Pos (0UL)
#define RADIO_TXPOWER_TXPOWER_Msk (0xFFUL << RADIO_TXPOWER_TXPOWER_Pos)
#define RADIO_TXPOWER_TXPOWER_0dBm (0x0UL)
#define RADIO_TXPOWER_TXPOWER_Pos2dBm (0x2UL)
#define RADIO_TXPOWER_TXPOWER_Pos3dBm (0x3UL)
#define RADIO_TXPOWER_TXPOWER_Pos4dBm (0x4UL)
#define RADIO_TXPOWER_TXPOWER_Pos5dBm (0x5UL)
#define RADIO_TXPOWER_TXPOWER_Pos6dBm (0x6UL)
#define RADIO_TXPOWER_TXPOWER_Pos7dBm (0x7UL)
#define RADIO_TXPOWER_TXPOWER_Pos8dBm (0x8UL)
#define RADIO_TXPOWER_TXPOWER_Neg40dBm (0xD8UL)
#define RADIO_TXPOWER_TXPOWER_Neg30dBm (0xE2UL)
#define RADIO_TXPOWER_TXPOWER_Neg20dBm (0xECUL)
#define RADIO_TXPOWER_TXPOWER_Neg16dBm (0xF0UL)
#define RADIO_TXPOWER_TXPOWER_Neg12dBm (0xF4UL)
#define RADIO_TXPOWER_TXPOWER_Neg8dBm (0xF8UL)
#define RADIO_TXPOWER_TXPOWER_Neg4dBm (0xFCUL)





#define RADIO_MODE_MODE_Pos (0UL)
#define RADIO_MODE_MODE_Msk (0xFUL << RADIO_MODE_MODE_Pos)
#define RADIO_MODE_MODE_Nrf_1Mbit (0UL)
#define RADIO_MODE_MODE_Nrf_2Mbit (1UL)
#define RADIO_MODE_MODE_Ble_1Mbit (3UL)
#define RADIO_MODE_MODE_Ble_2Mbit (4UL)
#define RADIO_MODE_MODE_Ble_LR125Kbit (5UL)
#define RADIO_MODE_MODE_Ble_LR500Kbit (6UL)
#define RADIO_MODE_MODE_Ieee802154_250Kbit (15UL)





#define RADIO_PCNF0_TERMLEN_Pos (29UL)
#define RADIO_PCNF0_TERMLEN_Msk (0x3UL << RADIO_PCNF0_TERMLEN_Pos)


#define RADIO_PCNF0_CRCINC_Pos (26UL)
#define RADIO_PCNF0_CRCINC_Msk (0x1UL << RADIO_PCNF0_CRCINC_Pos)
#define RADIO_PCNF0_CRCINC_Exclude (0UL)
#define RADIO_PCNF0_CRCINC_Include (1UL)


#define RADIO_PCNF0_PLEN_Pos (24UL)
#define RADIO_PCNF0_PLEN_Msk (0x3UL << RADIO_PCNF0_PLEN_Pos)
#define RADIO_PCNF0_PLEN_8bit (0UL)
#define RADIO_PCNF0_PLEN_16bit (1UL)
#define RADIO_PCNF0_PLEN_32bitZero (2UL)
#define RADIO_PCNF0_PLEN_LongRange (3UL)


#define RADIO_PCNF0_CILEN_Pos (22UL)
#define RADIO_PCNF0_CILEN_Msk (0x3UL << RADIO_PCNF0_CILEN_Pos)


#define RADIO_PCNF0_S1INCL_Pos (20UL)
#define RADIO_PCNF0_S1INCL_Msk (0x1UL << RADIO_PCNF0_S1INCL_Pos)
#define RADIO_PCNF0_S1INCL_Automatic (0UL)
#define RADIO_PCNF0_S1INCL_Include (1UL)


#define RADIO_PCNF0_S1LEN_Pos (16UL)
#define RADIO_PCNF0_S1LEN_Msk (0xFUL << RADIO_PCNF0_S1LEN_Pos)


#define RADIO_PCNF0_S0LEN_Pos (8UL)
#define RADIO_PCNF0_S0LEN_Msk (0x1UL << RADIO_PCNF0_S0LEN_Pos)


#define RADIO_PCNF0_LFLEN_Pos (0UL)
#define RADIO_PCNF0_LFLEN_Msk (0xFUL << RADIO_PCNF0_LFLEN_Pos)





#define RADIO_PCNF1_WHITEEN_Pos (25UL)
#define RADIO_PCNF1_WHITEEN_Msk (0x1UL << RADIO_PCNF1_WHITEEN_Pos)
#define RADIO_PCNF1_WHITEEN_Disabled (0UL)
#define RADIO_PCNF1_WHITEEN_Enabled (1UL)


#define RADIO_PCNF1_ENDIAN_Pos (24UL)
#define RADIO_PCNF1_ENDIAN_Msk (0x1UL << RADIO_PCNF1_ENDIAN_Pos)
#define RADIO_PCNF1_ENDIAN_Little (0UL)
#define RADIO_PCNF1_ENDIAN_Big (1UL)


#define RADIO_PCNF1_BALEN_Pos (16UL)
#define RADIO_PCNF1_BALEN_Msk (0x7UL << RADIO_PCNF1_BALEN_Pos)


#define RADIO_PCNF1_STATLEN_Pos (8UL)
#define RADIO_PCNF1_STATLEN_Msk (0xFFUL << RADIO_PCNF1_STATLEN_Pos)


#define RADIO_PCNF1_MAXLEN_Pos (0UL)
#define RADIO_PCNF1_MAXLEN_Msk (0xFFUL << RADIO_PCNF1_MAXLEN_Pos)





#define RADIO_BASE0_BASE0_Pos (0UL)
#define RADIO_BASE0_BASE0_Msk (0xFFFFFFFFUL << RADIO_BASE0_BASE0_Pos)





#define RADIO_BASE1_BASE1_Pos (0UL)
#define RADIO_BASE1_BASE1_Msk (0xFFFFFFFFUL << RADIO_BASE1_BASE1_Pos)





#define RADIO_PREFIX0_AP3_Pos (24UL)
#define RADIO_PREFIX0_AP3_Msk (0xFFUL << RADIO_PREFIX0_AP3_Pos)


#define RADIO_PREFIX0_AP2_Pos (16UL)
#define RADIO_PREFIX0_AP2_Msk (0xFFUL << RADIO_PREFIX0_AP2_Pos)


#define RADIO_PREFIX0_AP1_Pos (8UL)
#define RADIO_PREFIX0_AP1_Msk (0xFFUL << RADIO_PREFIX0_AP1_Pos)


#define RADIO_PREFIX0_AP0_Pos (0UL)
#define RADIO_PREFIX0_AP0_Msk (0xFFUL << RADIO_PREFIX0_AP0_Pos)





#define RADIO_PREFIX1_AP7_Pos (24UL)
#define RADIO_PREFIX1_AP7_Msk (0xFFUL << RADIO_PREFIX1_AP7_Pos)


#define RADIO_PREFIX1_AP6_Pos (16UL)
#define RADIO_PREFIX1_AP6_Msk (0xFFUL << RADIO_PREFIX1_AP6_Pos)


#define RADIO_PREFIX1_AP5_Pos (8UL)
#define RADIO_PREFIX1_AP5_Msk (0xFFUL << RADIO_PREFIX1_AP5_Pos)


#define RADIO_PREFIX1_AP4_Pos (0UL)
#define RADIO_PREFIX1_AP4_Msk (0xFFUL << RADIO_PREFIX1_AP4_Pos)





#define RADIO_TXADDRESS_TXADDRESS_Pos (0UL)
#define RADIO_TXADDRESS_TXADDRESS_Msk (0x7UL << RADIO_TXADDRESS_TXADDRESS_Pos)





#define RADIO_RXADDRESSES_ADDR7_Pos (7UL)
#define RADIO_RXADDRESSES_ADDR7_Msk (0x1UL << RADIO_RXADDRESSES_ADDR7_Pos)
#define RADIO_RXADDRESSES_ADDR7_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR7_Enabled (1UL)


#define RADIO_RXADDRESSES_ADDR6_Pos (6UL)
#define RADIO_RXADDRESSES_ADDR6_Msk (0x1UL << RADIO_RXADDRESSES_ADDR6_Pos)
#define RADIO_RXADDRESSES_ADDR6_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR6_Enabled (1UL)


#define RADIO_RXADDRESSES_ADDR5_Pos (5UL)
#define RADIO_RXADDRESSES_ADDR5_Msk (0x1UL << RADIO_RXADDRESSES_ADDR5_Pos)
#define RADIO_RXADDRESSES_ADDR5_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR5_Enabled (1UL)


#define RADIO_RXADDRESSES_ADDR4_Pos (4UL)
#define RADIO_RXADDRESSES_ADDR4_Msk (0x1UL << RADIO_RXADDRESSES_ADDR4_Pos)
#define RADIO_RXADDRESSES_ADDR4_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR4_Enabled (1UL)


#define RADIO_RXADDRESSES_ADDR3_Pos (3UL)
#define RADIO_RXADDRESSES_ADDR3_Msk (0x1UL << RADIO_RXADDRESSES_ADDR3_Pos)
#define RADIO_RXADDRESSES_ADDR3_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR3_Enabled (1UL)


#define RADIO_RXADDRESSES_ADDR2_Pos (2UL)
#define RADIO_RXADDRESSES_ADDR2_Msk (0x1UL << RADIO_RXADDRESSES_ADDR2_Pos)
#define RADIO_RXADDRESSES_ADDR2_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR2_Enabled (1UL)


#define RADIO_RXADDRESSES_ADDR1_Pos (1UL)
#define RADIO_RXADDRESSES_ADDR1_Msk (0x1UL << RADIO_RXADDRESSES_ADDR1_Pos)
#define RADIO_RXADDRESSES_ADDR1_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR1_Enabled (1UL)


#define RADIO_RXADDRESSES_ADDR0_Pos (0UL)
#define RADIO_RXADDRESSES_ADDR0_Msk (0x1UL << RADIO_RXADDRESSES_ADDR0_Pos)
#define RADIO_RXADDRESSES_ADDR0_Disabled (0UL)
#define RADIO_RXADDRESSES_ADDR0_Enabled (1UL)





#define RADIO_CRCCNF_SKIPADDR_Pos (8UL)
#define RADIO_CRCCNF_SKIPADDR_Msk (0x3UL << RADIO_CRCCNF_SKIPADDR_Pos)
#define RADIO_CRCCNF_SKIPADDR_Include (0UL)
#define RADIO_CRCCNF_SKIPADDR_Skip (1UL)
#define RADIO_CRCCNF_SKIPADDR_Ieee802154 (2UL)


#define RADIO_CRCCNF_LEN_Pos (0UL)
#define RADIO_CRCCNF_LEN_Msk (0x3UL << RADIO_CRCCNF_LEN_Pos)
#define RADIO_CRCCNF_LEN_Disabled (0UL)
#define RADIO_CRCCNF_LEN_One (1UL)
#define RADIO_CRCCNF_LEN_Two (2UL)
#define RADIO_CRCCNF_LEN_Three (3UL)





#define RADIO_CRCPOLY_CRCPOLY_Pos (0UL)
#define RADIO_CRCPOLY_CRCPOLY_Msk (0xFFFFFFUL << RADIO_CRCPOLY_CRCPOLY_Pos)





#define RADIO_CRCINIT_CRCINIT_Pos (0UL)
#define RADIO_CRCINIT_CRCINIT_Msk (0xFFFFFFUL << RADIO_CRCINIT_CRCINIT_Pos)





#define RADIO_TIFS_TIFS_Pos (0UL)
#define RADIO_TIFS_TIFS_Msk (0x3FFUL << RADIO_TIFS_TIFS_Pos)





#define RADIO_RSSISAMPLE_RSSISAMPLE_Pos (0UL)
#define RADIO_RSSISAMPLE_RSSISAMPLE_Msk (0x7FUL << RADIO_RSSISAMPLE_RSSISAMPLE_Pos)





#define RADIO_STATE_STATE_Pos (0UL)
#define RADIO_STATE_STATE_Msk (0xFUL << RADIO_STATE_STATE_Pos)
#define RADIO_STATE_STATE_Disabled (0UL)
#define RADIO_STATE_STATE_RxRu (1UL)
#define RADIO_STATE_STATE_RxIdle (2UL)
#define RADIO_STATE_STATE_Rx (3UL)
#define RADIO_STATE_STATE_RxDisable (4UL)
#define RADIO_STATE_STATE_TxRu (9UL)
#define RADIO_STATE_STATE_TxIdle (10UL)
#define RADIO_STATE_STATE_Tx (11UL)
#define RADIO_STATE_STATE_TxDisable (12UL)





#define RADIO_DATAWHITEIV_DATAWHITEIV_Pos (0UL)
#define RADIO_DATAWHITEIV_DATAWHITEIV_Msk (0x7FUL << RADIO_DATAWHITEIV_DATAWHITEIV_Pos)





#define RADIO_BCC_BCC_Pos (0UL)
#define RADIO_BCC_BCC_Msk (0xFFFFFFFFUL << RADIO_BCC_BCC_Pos)





#define RADIO_DAB_DAB_Pos (0UL)
#define RADIO_DAB_DAB_Msk (0xFFFFFFFFUL << RADIO_DAB_DAB_Pos)





#define RADIO_DAP_DAP_Pos (0UL)
#define RADIO_DAP_DAP_Msk (0xFFFFUL << RADIO_DAP_DAP_Pos)





#define RADIO_DACNF_TXADD7_Pos (15UL)
#define RADIO_DACNF_TXADD7_Msk (0x1UL << RADIO_DACNF_TXADD7_Pos)


#define RADIO_DACNF_TXADD6_Pos (14UL)
#define RADIO_DACNF_TXADD6_Msk (0x1UL << RADIO_DACNF_TXADD6_Pos)


#define RADIO_DACNF_TXADD5_Pos (13UL)
#define RADIO_DACNF_TXADD5_Msk (0x1UL << RADIO_DACNF_TXADD5_Pos)


#define RADIO_DACNF_TXADD4_Pos (12UL)
#define RADIO_DACNF_TXADD4_Msk (0x1UL << RADIO_DACNF_TXADD4_Pos)


#define RADIO_DACNF_TXADD3_Pos (11UL)
#define RADIO_DACNF_TXADD3_Msk (0x1UL << RADIO_DACNF_TXADD3_Pos)


#define RADIO_DACNF_TXADD2_Pos (10UL)
#define RADIO_DACNF_TXADD2_Msk (0x1UL << RADIO_DACNF_TXADD2_Pos)


#define RADIO_DACNF_TXADD1_Pos (9UL)
#define RADIO_DACNF_TXADD1_Msk (0x1UL << RADIO_DACNF_TXADD1_Pos)


#define RADIO_DACNF_TXADD0_Pos (8UL)
#define RADIO_DACNF_TXADD0_Msk (0x1UL << RADIO_DACNF_TXADD0_Pos)


#define RADIO_DACNF_ENA7_Pos (7UL)
#define RADIO_DACNF_ENA7_Msk (0x1UL << RADIO_DACNF_ENA7_Pos)
#define RADIO_DACNF_ENA7_Disabled (0UL)
#define RADIO_DACNF_ENA7_Enabled (1UL)


#define RADIO_DACNF_ENA6_Pos (6UL)
#define RADIO_DACNF_ENA6_Msk (0x1UL << RADIO_DACNF_ENA6_Pos)
#define RADIO_DACNF_ENA6_Disabled (0UL)
#define RADIO_DACNF_ENA6_Enabled (1UL)


#define RADIO_DACNF_ENA5_Pos (5UL)
#define RADIO_DACNF_ENA5_Msk (0x1UL << RADIO_DACNF_ENA5_Pos)
#define RADIO_DACNF_ENA5_Disabled (0UL)
#define RADIO_DACNF_ENA5_Enabled (1UL)


#define RADIO_DACNF_ENA4_Pos (4UL)
#define RADIO_DACNF_ENA4_Msk (0x1UL << RADIO_DACNF_ENA4_Pos)
#define RADIO_DACNF_ENA4_Disabled (0UL)
#define RADIO_DACNF_ENA4_Enabled (1UL)


#define RADIO_DACNF_ENA3_Pos (3UL)
#define RADIO_DACNF_ENA3_Msk (0x1UL << RADIO_DACNF_ENA3_Pos)
#define RADIO_DACNF_ENA3_Disabled (0UL)
#define RADIO_DACNF_ENA3_Enabled (1UL)


#define RADIO_DACNF_ENA2_Pos (2UL)
#define RADIO_DACNF_ENA2_Msk (0x1UL << RADIO_DACNF_ENA2_Pos)
#define RADIO_DACNF_ENA2_Disabled (0UL)
#define RADIO_DACNF_ENA2_Enabled (1UL)


#define RADIO_DACNF_ENA1_Pos (1UL)
#define RADIO_DACNF_ENA1_Msk (0x1UL << RADIO_DACNF_ENA1_Pos)
#define RADIO_DACNF_ENA1_Disabled (0UL)
#define RADIO_DACNF_ENA1_Enabled (1UL)


#define RADIO_DACNF_ENA0_Pos (0UL)
#define RADIO_DACNF_ENA0_Msk (0x1UL << RADIO_DACNF_ENA0_Pos)
#define RADIO_DACNF_ENA0_Disabled (0UL)
#define RADIO_DACNF_ENA0_Enabled (1UL)





#define RADIO_MHRMATCHCONF_MHRMATCHCONF_Pos (0UL)
#define RADIO_MHRMATCHCONF_MHRMATCHCONF_Msk (0xFFFFFFFFUL << RADIO_MHRMATCHCONF_MHRMATCHCONF_Pos)





#define RADIO_MHRMATCHMAS_MHRMATCHMAS_Pos (0UL)
#define RADIO_MHRMATCHMAS_MHRMATCHMAS_Msk (0xFFFFFFFFUL << RADIO_MHRMATCHMAS_MHRMATCHMAS_Pos)





#define RADIO_MODECNF0_DTX_Pos (8UL)
#define RADIO_MODECNF0_DTX_Msk (0x3UL << RADIO_MODECNF0_DTX_Pos)
#define RADIO_MODECNF0_DTX_B1 (0UL)
#define RADIO_MODECNF0_DTX_B0 (1UL)
#define RADIO_MODECNF0_DTX_Center (2UL)


#define RADIO_MODECNF0_RU_Pos (0UL)
#define RADIO_MODECNF0_RU_Msk (0x1UL << RADIO_MODECNF0_RU_Pos)
#define RADIO_MODECNF0_RU_Default (0UL)
#define RADIO_MODECNF0_RU_Fast (1UL)





#define RADIO_SFD_SFD_Pos (0UL)
#define RADIO_SFD_SFD_Msk (0xFFUL << RADIO_SFD_SFD_Pos)





#define RADIO_EDCNT_EDCNT_Pos (0UL)
#define RADIO_EDCNT_EDCNT_Msk (0x1FFFFFUL << RADIO_EDCNT_EDCNT_Pos)





#define RADIO_EDSAMPLE_EDLVL_Pos (0UL)
#define RADIO_EDSAMPLE_EDLVL_Msk (0xFFUL << RADIO_EDSAMPLE_EDLVL_Pos)





#define RADIO_CCACTRL_CCACORRCNT_Pos (24UL)
#define RADIO_CCACTRL_CCACORRCNT_Msk (0xFFUL << RADIO_CCACTRL_CCACORRCNT_Pos)


#define RADIO_CCACTRL_CCACORRTHRES_Pos (16UL)
#define RADIO_CCACTRL_CCACORRTHRES_Msk (0xFFUL << RADIO_CCACTRL_CCACORRTHRES_Pos)


#define RADIO_CCACTRL_CCAEDTHRES_Pos (8UL)
#define RADIO_CCACTRL_CCAEDTHRES_Msk (0xFFUL << RADIO_CCACTRL_CCAEDTHRES_Pos)


#define RADIO_CCACTRL_CCAMODE_Pos (0UL)
#define RADIO_CCACTRL_CCAMODE_Msk (0x7UL << RADIO_CCACTRL_CCAMODE_Pos)
#define RADIO_CCACTRL_CCAMODE_EdMode (0UL)
#define RADIO_CCACTRL_CCAMODE_CarrierMode (1UL)
#define RADIO_CCACTRL_CCAMODE_CarrierAndEdMode (2UL)
#define RADIO_CCACTRL_CCAMODE_CarrierOrEdMode (3UL)
#define RADIO_CCACTRL_CCAMODE_EdModeTest1 (4UL)





#define RADIO_POWER_POWER_Pos (0UL)
#define RADIO_POWER_POWER_Msk (0x1UL << RADIO_POWER_POWER_Pos)
#define RADIO_POWER_POWER_Disabled (0UL)
#define RADIO_POWER_POWER_Enabled (1UL)
# 11305 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define RNG_TASKS_START_TASKS_START_Pos (0UL)
#define RNG_TASKS_START_TASKS_START_Msk (0x1UL << RNG_TASKS_START_TASKS_START_Pos)
#define RNG_TASKS_START_TASKS_START_Trigger (1UL)





#define RNG_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define RNG_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RNG_TASKS_STOP_TASKS_STOP_Pos)
#define RNG_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos (0UL)
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Msk (0x1UL << RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos)
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_NotGenerated (0UL)
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Generated (1UL)





#define RNG_SHORTS_VALRDY_STOP_Pos (0UL)
#define RNG_SHORTS_VALRDY_STOP_Msk (0x1UL << RNG_SHORTS_VALRDY_STOP_Pos)
#define RNG_SHORTS_VALRDY_STOP_Disabled (0UL)
#define RNG_SHORTS_VALRDY_STOP_Enabled (1UL)





#define RNG_INTENSET_VALRDY_Pos (0UL)
#define RNG_INTENSET_VALRDY_Msk (0x1UL << RNG_INTENSET_VALRDY_Pos)
#define RNG_INTENSET_VALRDY_Disabled (0UL)
#define RNG_INTENSET_VALRDY_Enabled (1UL)
#define RNG_INTENSET_VALRDY_Set (1UL)





#define RNG_INTENCLR_VALRDY_Pos (0UL)
#define RNG_INTENCLR_VALRDY_Msk (0x1UL << RNG_INTENCLR_VALRDY_Pos)
#define RNG_INTENCLR_VALRDY_Disabled (0UL)
#define RNG_INTENCLR_VALRDY_Enabled (1UL)
#define RNG_INTENCLR_VALRDY_Clear (1UL)





#define RNG_CONFIG_DERCEN_Pos (0UL)
#define RNG_CONFIG_DERCEN_Msk (0x1UL << RNG_CONFIG_DERCEN_Pos)
#define RNG_CONFIG_DERCEN_Disabled (0UL)
#define RNG_CONFIG_DERCEN_Enabled (1UL)





#define RNG_VALUE_VALUE_Pos (0UL)
#define RNG_VALUE_VALUE_Msk (0xFFUL << RNG_VALUE_VALUE_Pos)
# 11379 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define RTC_TASKS_START_TASKS_START_Pos (0UL)
#define RTC_TASKS_START_TASKS_START_Msk (0x1UL << RTC_TASKS_START_TASKS_START_Pos)
#define RTC_TASKS_START_TASKS_START_Trigger (1UL)





#define RTC_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define RTC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RTC_TASKS_STOP_TASKS_STOP_Pos)
#define RTC_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define RTC_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL)
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << RTC_TASKS_CLEAR_TASKS_CLEAR_Pos)
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Trigger (1UL)





#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos (0UL)
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Msk (0x1UL << RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos)
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Trigger (1UL)





#define RTC_EVENTS_TICK_EVENTS_TICK_Pos (0UL)
#define RTC_EVENTS_TICK_EVENTS_TICK_Msk (0x1UL << RTC_EVENTS_TICK_EVENTS_TICK_Pos)
#define RTC_EVENTS_TICK_EVENTS_TICK_NotGenerated (0UL)
#define RTC_EVENTS_TICK_EVENTS_TICK_Generated (1UL)





#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos (0UL)
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Msk (0x1UL << RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos)
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_NotGenerated (0UL)
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Generated (1UL)





#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL)
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos)
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0UL)
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Generated (1UL)





#define RTC_INTENSET_COMPARE3_Pos (19UL)
#define RTC_INTENSET_COMPARE3_Msk (0x1UL << RTC_INTENSET_COMPARE3_Pos)
#define RTC_INTENSET_COMPARE3_Disabled (0UL)
#define RTC_INTENSET_COMPARE3_Enabled (1UL)
#define RTC_INTENSET_COMPARE3_Set (1UL)


#define RTC_INTENSET_COMPARE2_Pos (18UL)
#define RTC_INTENSET_COMPARE2_Msk (0x1UL << RTC_INTENSET_COMPARE2_Pos)
#define RTC_INTENSET_COMPARE2_Disabled (0UL)
#define RTC_INTENSET_COMPARE2_Enabled (1UL)
#define RTC_INTENSET_COMPARE2_Set (1UL)


#define RTC_INTENSET_COMPARE1_Pos (17UL)
#define RTC_INTENSET_COMPARE1_Msk (0x1UL << RTC_INTENSET_COMPARE1_Pos)
#define RTC_INTENSET_COMPARE1_Disabled (0UL)
#define RTC_INTENSET_COMPARE1_Enabled (1UL)
#define RTC_INTENSET_COMPARE1_Set (1UL)


#define RTC_INTENSET_COMPARE0_Pos (16UL)
#define RTC_INTENSET_COMPARE0_Msk (0x1UL << RTC_INTENSET_COMPARE0_Pos)
#define RTC_INTENSET_COMPARE0_Disabled (0UL)
#define RTC_INTENSET_COMPARE0_Enabled (1UL)
#define RTC_INTENSET_COMPARE0_Set (1UL)


#define RTC_INTENSET_OVRFLW_Pos (1UL)
#define RTC_INTENSET_OVRFLW_Msk (0x1UL << RTC_INTENSET_OVRFLW_Pos)
#define RTC_INTENSET_OVRFLW_Disabled (0UL)
#define RTC_INTENSET_OVRFLW_Enabled (1UL)
#define RTC_INTENSET_OVRFLW_Set (1UL)


#define RTC_INTENSET_TICK_Pos (0UL)
#define RTC_INTENSET_TICK_Msk (0x1UL << RTC_INTENSET_TICK_Pos)
#define RTC_INTENSET_TICK_Disabled (0UL)
#define RTC_INTENSET_TICK_Enabled (1UL)
#define RTC_INTENSET_TICK_Set (1UL)





#define RTC_INTENCLR_COMPARE3_Pos (19UL)
#define RTC_INTENCLR_COMPARE3_Msk (0x1UL << RTC_INTENCLR_COMPARE3_Pos)
#define RTC_INTENCLR_COMPARE3_Disabled (0UL)
#define RTC_INTENCLR_COMPARE3_Enabled (1UL)
#define RTC_INTENCLR_COMPARE3_Clear (1UL)


#define RTC_INTENCLR_COMPARE2_Pos (18UL)
#define RTC_INTENCLR_COMPARE2_Msk (0x1UL << RTC_INTENCLR_COMPARE2_Pos)
#define RTC_INTENCLR_COMPARE2_Disabled (0UL)
#define RTC_INTENCLR_COMPARE2_Enabled (1UL)
#define RTC_INTENCLR_COMPARE2_Clear (1UL)


#define RTC_INTENCLR_COMPARE1_Pos (17UL)
#define RTC_INTENCLR_COMPARE1_Msk (0x1UL << RTC_INTENCLR_COMPARE1_Pos)
#define RTC_INTENCLR_COMPARE1_Disabled (0UL)
#define RTC_INTENCLR_COMPARE1_Enabled (1UL)
#define RTC_INTENCLR_COMPARE1_Clear (1UL)


#define RTC_INTENCLR_COMPARE0_Pos (16UL)
#define RTC_INTENCLR_COMPARE0_Msk (0x1UL << RTC_INTENCLR_COMPARE0_Pos)
#define RTC_INTENCLR_COMPARE0_Disabled (0UL)
#define RTC_INTENCLR_COMPARE0_Enabled (1UL)
#define RTC_INTENCLR_COMPARE0_Clear (1UL)


#define RTC_INTENCLR_OVRFLW_Pos (1UL)
#define RTC_INTENCLR_OVRFLW_Msk (0x1UL << RTC_INTENCLR_OVRFLW_Pos)
#define RTC_INTENCLR_OVRFLW_Disabled (0UL)
#define RTC_INTENCLR_OVRFLW_Enabled (1UL)
#define RTC_INTENCLR_OVRFLW_Clear (1UL)


#define RTC_INTENCLR_TICK_Pos (0UL)
#define RTC_INTENCLR_TICK_Msk (0x1UL << RTC_INTENCLR_TICK_Pos)
#define RTC_INTENCLR_TICK_Disabled (0UL)
#define RTC_INTENCLR_TICK_Enabled (1UL)
#define RTC_INTENCLR_TICK_Clear (1UL)





#define RTC_EVTEN_COMPARE3_Pos (19UL)
#define RTC_EVTEN_COMPARE3_Msk (0x1UL << RTC_EVTEN_COMPARE3_Pos)
#define RTC_EVTEN_COMPARE3_Disabled (0UL)
#define RTC_EVTEN_COMPARE3_Enabled (1UL)


#define RTC_EVTEN_COMPARE2_Pos (18UL)
#define RTC_EVTEN_COMPARE2_Msk (0x1UL << RTC_EVTEN_COMPARE2_Pos)
#define RTC_EVTEN_COMPARE2_Disabled (0UL)
#define RTC_EVTEN_COMPARE2_Enabled (1UL)


#define RTC_EVTEN_COMPARE1_Pos (17UL)
#define RTC_EVTEN_COMPARE1_Msk (0x1UL << RTC_EVTEN_COMPARE1_Pos)
#define RTC_EVTEN_COMPARE1_Disabled (0UL)
#define RTC_EVTEN_COMPARE1_Enabled (1UL)


#define RTC_EVTEN_COMPARE0_Pos (16UL)
#define RTC_EVTEN_COMPARE0_Msk (0x1UL << RTC_EVTEN_COMPARE0_Pos)
#define RTC_EVTEN_COMPARE0_Disabled (0UL)
#define RTC_EVTEN_COMPARE0_Enabled (1UL)


#define RTC_EVTEN_OVRFLW_Pos (1UL)
#define RTC_EVTEN_OVRFLW_Msk (0x1UL << RTC_EVTEN_OVRFLW_Pos)
#define RTC_EVTEN_OVRFLW_Disabled (0UL)
#define RTC_EVTEN_OVRFLW_Enabled (1UL)


#define RTC_EVTEN_TICK_Pos (0UL)
#define RTC_EVTEN_TICK_Msk (0x1UL << RTC_EVTEN_TICK_Pos)
#define RTC_EVTEN_TICK_Disabled (0UL)
#define RTC_EVTEN_TICK_Enabled (1UL)





#define RTC_EVTENSET_COMPARE3_Pos (19UL)
#define RTC_EVTENSET_COMPARE3_Msk (0x1UL << RTC_EVTENSET_COMPARE3_Pos)
#define RTC_EVTENSET_COMPARE3_Disabled (0UL)
#define RTC_EVTENSET_COMPARE3_Enabled (1UL)
#define RTC_EVTENSET_COMPARE3_Set (1UL)


#define RTC_EVTENSET_COMPARE2_Pos (18UL)
#define RTC_EVTENSET_COMPARE2_Msk (0x1UL << RTC_EVTENSET_COMPARE2_Pos)
#define RTC_EVTENSET_COMPARE2_Disabled (0UL)
#define RTC_EVTENSET_COMPARE2_Enabled (1UL)
#define RTC_EVTENSET_COMPARE2_Set (1UL)


#define RTC_EVTENSET_COMPARE1_Pos (17UL)
#define RTC_EVTENSET_COMPARE1_Msk (0x1UL << RTC_EVTENSET_COMPARE1_Pos)
#define RTC_EVTENSET_COMPARE1_Disabled (0UL)
#define RTC_EVTENSET_COMPARE1_Enabled (1UL)
#define RTC_EVTENSET_COMPARE1_Set (1UL)


#define RTC_EVTENSET_COMPARE0_Pos (16UL)
#define RTC_EVTENSET_COMPARE0_Msk (0x1UL << RTC_EVTENSET_COMPARE0_Pos)
#define RTC_EVTENSET_COMPARE0_Disabled (0UL)
#define RTC_EVTENSET_COMPARE0_Enabled (1UL)
#define RTC_EVTENSET_COMPARE0_Set (1UL)


#define RTC_EVTENSET_OVRFLW_Pos (1UL)
#define RTC_EVTENSET_OVRFLW_Msk (0x1UL << RTC_EVTENSET_OVRFLW_Pos)
#define RTC_EVTENSET_OVRFLW_Disabled (0UL)
#define RTC_EVTENSET_OVRFLW_Enabled (1UL)
#define RTC_EVTENSET_OVRFLW_Set (1UL)


#define RTC_EVTENSET_TICK_Pos (0UL)
#define RTC_EVTENSET_TICK_Msk (0x1UL << RTC_EVTENSET_TICK_Pos)
#define RTC_EVTENSET_TICK_Disabled (0UL)
#define RTC_EVTENSET_TICK_Enabled (1UL)
#define RTC_EVTENSET_TICK_Set (1UL)





#define RTC_EVTENCLR_COMPARE3_Pos (19UL)
#define RTC_EVTENCLR_COMPARE3_Msk (0x1UL << RTC_EVTENCLR_COMPARE3_Pos)
#define RTC_EVTENCLR_COMPARE3_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE3_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE3_Clear (1UL)


#define RTC_EVTENCLR_COMPARE2_Pos (18UL)
#define RTC_EVTENCLR_COMPARE2_Msk (0x1UL << RTC_EVTENCLR_COMPARE2_Pos)
#define RTC_EVTENCLR_COMPARE2_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE2_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE2_Clear (1UL)


#define RTC_EVTENCLR_COMPARE1_Pos (17UL)
#define RTC_EVTENCLR_COMPARE1_Msk (0x1UL << RTC_EVTENCLR_COMPARE1_Pos)
#define RTC_EVTENCLR_COMPARE1_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE1_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE1_Clear (1UL)


#define RTC_EVTENCLR_COMPARE0_Pos (16UL)
#define RTC_EVTENCLR_COMPARE0_Msk (0x1UL << RTC_EVTENCLR_COMPARE0_Pos)
#define RTC_EVTENCLR_COMPARE0_Disabled (0UL)
#define RTC_EVTENCLR_COMPARE0_Enabled (1UL)
#define RTC_EVTENCLR_COMPARE0_Clear (1UL)


#define RTC_EVTENCLR_OVRFLW_Pos (1UL)
#define RTC_EVTENCLR_OVRFLW_Msk (0x1UL << RTC_EVTENCLR_OVRFLW_Pos)
#define RTC_EVTENCLR_OVRFLW_Disabled (0UL)
#define RTC_EVTENCLR_OVRFLW_Enabled (1UL)
#define RTC_EVTENCLR_OVRFLW_Clear (1UL)


#define RTC_EVTENCLR_TICK_Pos (0UL)
#define RTC_EVTENCLR_TICK_Msk (0x1UL << RTC_EVTENCLR_TICK_Pos)
#define RTC_EVTENCLR_TICK_Disabled (0UL)
#define RTC_EVTENCLR_TICK_Enabled (1UL)
#define RTC_EVTENCLR_TICK_Clear (1UL)





#define RTC_COUNTER_COUNTER_Pos (0UL)
#define RTC_COUNTER_COUNTER_Msk (0xFFFFFFUL << RTC_COUNTER_COUNTER_Pos)





#define RTC_PRESCALER_PRESCALER_Pos (0UL)
#define RTC_PRESCALER_PRESCALER_Msk (0xFFFUL << RTC_PRESCALER_PRESCALER_Pos)





#define RTC_CC_COMPARE_Pos (0UL)
#define RTC_CC_COMPARE_Msk (0xFFFFFFUL << RTC_CC_COMPARE_Pos)
# 11682 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define SAADC_TASKS_START_TASKS_START_Pos (0UL)
#define SAADC_TASKS_START_TASKS_START_Msk (0x1UL << SAADC_TASKS_START_TASKS_START_Pos)
#define SAADC_TASKS_START_TASKS_START_Trigger (1UL)





#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL)
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos)
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (1UL)





#define SAADC_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define SAADC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SAADC_TASKS_STOP_TASKS_STOP_Pos)
#define SAADC_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos (0UL)
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Msk (0x1UL << SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos)
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Trigger (1UL)





#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)





#define SAADC_EVENTS_END_EVENTS_END_Pos (0UL)
#define SAADC_EVENTS_END_EVENTS_END_Msk (0x1UL << SAADC_EVENTS_END_EVENTS_END_Pos)
#define SAADC_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define SAADC_EVENTS_END_EVENTS_END_Generated (1UL)





#define SAADC_EVENTS_DONE_EVENTS_DONE_Pos (0UL)
#define SAADC_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << SAADC_EVENTS_DONE_EVENTS_DONE_Pos)
#define SAADC_EVENTS_DONE_EVENTS_DONE_NotGenerated (0UL)
#define SAADC_EVENTS_DONE_EVENTS_DONE_Generated (1UL)





#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos (0UL)
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Msk (0x1UL << SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos)
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_NotGenerated (0UL)
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Generated (1UL)





#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos (0UL)
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Msk (0x1UL << SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos)
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_NotGenerated (0UL)
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Generated (1UL)





#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)





#define SAADC_EVENTS_CH_LIMITH_LIMITH_Pos (0UL)
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Msk (0x1UL << SAADC_EVENTS_CH_LIMITH_LIMITH_Pos)
#define SAADC_EVENTS_CH_LIMITH_LIMITH_NotGenerated (0UL)
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Generated (1UL)





#define SAADC_EVENTS_CH_LIMITL_LIMITL_Pos (0UL)
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Msk (0x1UL << SAADC_EVENTS_CH_LIMITL_LIMITL_Pos)
#define SAADC_EVENTS_CH_LIMITL_LIMITL_NotGenerated (0UL)
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Generated (1UL)





#define SAADC_INTEN_CH7LIMITL_Pos (21UL)
#define SAADC_INTEN_CH7LIMITL_Msk (0x1UL << SAADC_INTEN_CH7LIMITL_Pos)
#define SAADC_INTEN_CH7LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH7LIMITL_Enabled (1UL)


#define SAADC_INTEN_CH7LIMITH_Pos (20UL)
#define SAADC_INTEN_CH7LIMITH_Msk (0x1UL << SAADC_INTEN_CH7LIMITH_Pos)
#define SAADC_INTEN_CH7LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH7LIMITH_Enabled (1UL)


#define SAADC_INTEN_CH6LIMITL_Pos (19UL)
#define SAADC_INTEN_CH6LIMITL_Msk (0x1UL << SAADC_INTEN_CH6LIMITL_Pos)
#define SAADC_INTEN_CH6LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH6LIMITL_Enabled (1UL)


#define SAADC_INTEN_CH6LIMITH_Pos (18UL)
#define SAADC_INTEN_CH6LIMITH_Msk (0x1UL << SAADC_INTEN_CH6LIMITH_Pos)
#define SAADC_INTEN_CH6LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH6LIMITH_Enabled (1UL)


#define SAADC_INTEN_CH5LIMITL_Pos (17UL)
#define SAADC_INTEN_CH5LIMITL_Msk (0x1UL << SAADC_INTEN_CH5LIMITL_Pos)
#define SAADC_INTEN_CH5LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH5LIMITL_Enabled (1UL)


#define SAADC_INTEN_CH5LIMITH_Pos (16UL)
#define SAADC_INTEN_CH5LIMITH_Msk (0x1UL << SAADC_INTEN_CH5LIMITH_Pos)
#define SAADC_INTEN_CH5LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH5LIMITH_Enabled (1UL)


#define SAADC_INTEN_CH4LIMITL_Pos (15UL)
#define SAADC_INTEN_CH4LIMITL_Msk (0x1UL << SAADC_INTEN_CH4LIMITL_Pos)
#define SAADC_INTEN_CH4LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH4LIMITL_Enabled (1UL)


#define SAADC_INTEN_CH4LIMITH_Pos (14UL)
#define SAADC_INTEN_CH4LIMITH_Msk (0x1UL << SAADC_INTEN_CH4LIMITH_Pos)
#define SAADC_INTEN_CH4LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH4LIMITH_Enabled (1UL)


#define SAADC_INTEN_CH3LIMITL_Pos (13UL)
#define SAADC_INTEN_CH3LIMITL_Msk (0x1UL << SAADC_INTEN_CH3LIMITL_Pos)
#define SAADC_INTEN_CH3LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH3LIMITL_Enabled (1UL)


#define SAADC_INTEN_CH3LIMITH_Pos (12UL)
#define SAADC_INTEN_CH3LIMITH_Msk (0x1UL << SAADC_INTEN_CH3LIMITH_Pos)
#define SAADC_INTEN_CH3LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH3LIMITH_Enabled (1UL)


#define SAADC_INTEN_CH2LIMITL_Pos (11UL)
#define SAADC_INTEN_CH2LIMITL_Msk (0x1UL << SAADC_INTEN_CH2LIMITL_Pos)
#define SAADC_INTEN_CH2LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH2LIMITL_Enabled (1UL)


#define SAADC_INTEN_CH2LIMITH_Pos (10UL)
#define SAADC_INTEN_CH2LIMITH_Msk (0x1UL << SAADC_INTEN_CH2LIMITH_Pos)
#define SAADC_INTEN_CH2LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH2LIMITH_Enabled (1UL)


#define SAADC_INTEN_CH1LIMITL_Pos (9UL)
#define SAADC_INTEN_CH1LIMITL_Msk (0x1UL << SAADC_INTEN_CH1LIMITL_Pos)
#define SAADC_INTEN_CH1LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH1LIMITL_Enabled (1UL)


#define SAADC_INTEN_CH1LIMITH_Pos (8UL)
#define SAADC_INTEN_CH1LIMITH_Msk (0x1UL << SAADC_INTEN_CH1LIMITH_Pos)
#define SAADC_INTEN_CH1LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH1LIMITH_Enabled (1UL)


#define SAADC_INTEN_CH0LIMITL_Pos (7UL)
#define SAADC_INTEN_CH0LIMITL_Msk (0x1UL << SAADC_INTEN_CH0LIMITL_Pos)
#define SAADC_INTEN_CH0LIMITL_Disabled (0UL)
#define SAADC_INTEN_CH0LIMITL_Enabled (1UL)


#define SAADC_INTEN_CH0LIMITH_Pos (6UL)
#define SAADC_INTEN_CH0LIMITH_Msk (0x1UL << SAADC_INTEN_CH0LIMITH_Pos)
#define SAADC_INTEN_CH0LIMITH_Disabled (0UL)
#define SAADC_INTEN_CH0LIMITH_Enabled (1UL)


#define SAADC_INTEN_STOPPED_Pos (5UL)
#define SAADC_INTEN_STOPPED_Msk (0x1UL << SAADC_INTEN_STOPPED_Pos)
#define SAADC_INTEN_STOPPED_Disabled (0UL)
#define SAADC_INTEN_STOPPED_Enabled (1UL)


#define SAADC_INTEN_CALIBRATEDONE_Pos (4UL)
#define SAADC_INTEN_CALIBRATEDONE_Msk (0x1UL << SAADC_INTEN_CALIBRATEDONE_Pos)
#define SAADC_INTEN_CALIBRATEDONE_Disabled (0UL)
#define SAADC_INTEN_CALIBRATEDONE_Enabled (1UL)


#define SAADC_INTEN_RESULTDONE_Pos (3UL)
#define SAADC_INTEN_RESULTDONE_Msk (0x1UL << SAADC_INTEN_RESULTDONE_Pos)
#define SAADC_INTEN_RESULTDONE_Disabled (0UL)
#define SAADC_INTEN_RESULTDONE_Enabled (1UL)


#define SAADC_INTEN_DONE_Pos (2UL)
#define SAADC_INTEN_DONE_Msk (0x1UL << SAADC_INTEN_DONE_Pos)
#define SAADC_INTEN_DONE_Disabled (0UL)
#define SAADC_INTEN_DONE_Enabled (1UL)


#define SAADC_INTEN_END_Pos (1UL)
#define SAADC_INTEN_END_Msk (0x1UL << SAADC_INTEN_END_Pos)
#define SAADC_INTEN_END_Disabled (0UL)
#define SAADC_INTEN_END_Enabled (1UL)


#define SAADC_INTEN_STARTED_Pos (0UL)
#define SAADC_INTEN_STARTED_Msk (0x1UL << SAADC_INTEN_STARTED_Pos)
#define SAADC_INTEN_STARTED_Disabled (0UL)
#define SAADC_INTEN_STARTED_Enabled (1UL)





#define SAADC_INTENSET_CH7LIMITL_Pos (21UL)
#define SAADC_INTENSET_CH7LIMITL_Msk (0x1UL << SAADC_INTENSET_CH7LIMITL_Pos)
#define SAADC_INTENSET_CH7LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH7LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH7LIMITL_Set (1UL)


#define SAADC_INTENSET_CH7LIMITH_Pos (20UL)
#define SAADC_INTENSET_CH7LIMITH_Msk (0x1UL << SAADC_INTENSET_CH7LIMITH_Pos)
#define SAADC_INTENSET_CH7LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH7LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH7LIMITH_Set (1UL)


#define SAADC_INTENSET_CH6LIMITL_Pos (19UL)
#define SAADC_INTENSET_CH6LIMITL_Msk (0x1UL << SAADC_INTENSET_CH6LIMITL_Pos)
#define SAADC_INTENSET_CH6LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH6LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH6LIMITL_Set (1UL)


#define SAADC_INTENSET_CH6LIMITH_Pos (18UL)
#define SAADC_INTENSET_CH6LIMITH_Msk (0x1UL << SAADC_INTENSET_CH6LIMITH_Pos)
#define SAADC_INTENSET_CH6LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH6LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH6LIMITH_Set (1UL)


#define SAADC_INTENSET_CH5LIMITL_Pos (17UL)
#define SAADC_INTENSET_CH5LIMITL_Msk (0x1UL << SAADC_INTENSET_CH5LIMITL_Pos)
#define SAADC_INTENSET_CH5LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH5LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH5LIMITL_Set (1UL)


#define SAADC_INTENSET_CH5LIMITH_Pos (16UL)
#define SAADC_INTENSET_CH5LIMITH_Msk (0x1UL << SAADC_INTENSET_CH5LIMITH_Pos)
#define SAADC_INTENSET_CH5LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH5LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH5LIMITH_Set (1UL)


#define SAADC_INTENSET_CH4LIMITL_Pos (15UL)
#define SAADC_INTENSET_CH4LIMITL_Msk (0x1UL << SAADC_INTENSET_CH4LIMITL_Pos)
#define SAADC_INTENSET_CH4LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH4LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH4LIMITL_Set (1UL)


#define SAADC_INTENSET_CH4LIMITH_Pos (14UL)
#define SAADC_INTENSET_CH4LIMITH_Msk (0x1UL << SAADC_INTENSET_CH4LIMITH_Pos)
#define SAADC_INTENSET_CH4LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH4LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH4LIMITH_Set (1UL)


#define SAADC_INTENSET_CH3LIMITL_Pos (13UL)
#define SAADC_INTENSET_CH3LIMITL_Msk (0x1UL << SAADC_INTENSET_CH3LIMITL_Pos)
#define SAADC_INTENSET_CH3LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH3LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH3LIMITL_Set (1UL)


#define SAADC_INTENSET_CH3LIMITH_Pos (12UL)
#define SAADC_INTENSET_CH3LIMITH_Msk (0x1UL << SAADC_INTENSET_CH3LIMITH_Pos)
#define SAADC_INTENSET_CH3LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH3LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH3LIMITH_Set (1UL)


#define SAADC_INTENSET_CH2LIMITL_Pos (11UL)
#define SAADC_INTENSET_CH2LIMITL_Msk (0x1UL << SAADC_INTENSET_CH2LIMITL_Pos)
#define SAADC_INTENSET_CH2LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH2LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH2LIMITL_Set (1UL)


#define SAADC_INTENSET_CH2LIMITH_Pos (10UL)
#define SAADC_INTENSET_CH2LIMITH_Msk (0x1UL << SAADC_INTENSET_CH2LIMITH_Pos)
#define SAADC_INTENSET_CH2LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH2LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH2LIMITH_Set (1UL)


#define SAADC_INTENSET_CH1LIMITL_Pos (9UL)
#define SAADC_INTENSET_CH1LIMITL_Msk (0x1UL << SAADC_INTENSET_CH1LIMITL_Pos)
#define SAADC_INTENSET_CH1LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH1LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH1LIMITL_Set (1UL)


#define SAADC_INTENSET_CH1LIMITH_Pos (8UL)
#define SAADC_INTENSET_CH1LIMITH_Msk (0x1UL << SAADC_INTENSET_CH1LIMITH_Pos)
#define SAADC_INTENSET_CH1LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH1LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH1LIMITH_Set (1UL)


#define SAADC_INTENSET_CH0LIMITL_Pos (7UL)
#define SAADC_INTENSET_CH0LIMITL_Msk (0x1UL << SAADC_INTENSET_CH0LIMITL_Pos)
#define SAADC_INTENSET_CH0LIMITL_Disabled (0UL)
#define SAADC_INTENSET_CH0LIMITL_Enabled (1UL)
#define SAADC_INTENSET_CH0LIMITL_Set (1UL)


#define SAADC_INTENSET_CH0LIMITH_Pos (6UL)
#define SAADC_INTENSET_CH0LIMITH_Msk (0x1UL << SAADC_INTENSET_CH0LIMITH_Pos)
#define SAADC_INTENSET_CH0LIMITH_Disabled (0UL)
#define SAADC_INTENSET_CH0LIMITH_Enabled (1UL)
#define SAADC_INTENSET_CH0LIMITH_Set (1UL)


#define SAADC_INTENSET_STOPPED_Pos (5UL)
#define SAADC_INTENSET_STOPPED_Msk (0x1UL << SAADC_INTENSET_STOPPED_Pos)
#define SAADC_INTENSET_STOPPED_Disabled (0UL)
#define SAADC_INTENSET_STOPPED_Enabled (1UL)
#define SAADC_INTENSET_STOPPED_Set (1UL)


#define SAADC_INTENSET_CALIBRATEDONE_Pos (4UL)
#define SAADC_INTENSET_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENSET_CALIBRATEDONE_Pos)
#define SAADC_INTENSET_CALIBRATEDONE_Disabled (0UL)
#define SAADC_INTENSET_CALIBRATEDONE_Enabled (1UL)
#define SAADC_INTENSET_CALIBRATEDONE_Set (1UL)


#define SAADC_INTENSET_RESULTDONE_Pos (3UL)
#define SAADC_INTENSET_RESULTDONE_Msk (0x1UL << SAADC_INTENSET_RESULTDONE_Pos)
#define SAADC_INTENSET_RESULTDONE_Disabled (0UL)
#define SAADC_INTENSET_RESULTDONE_Enabled (1UL)
#define SAADC_INTENSET_RESULTDONE_Set (1UL)


#define SAADC_INTENSET_DONE_Pos (2UL)
#define SAADC_INTENSET_DONE_Msk (0x1UL << SAADC_INTENSET_DONE_Pos)
#define SAADC_INTENSET_DONE_Disabled (0UL)
#define SAADC_INTENSET_DONE_Enabled (1UL)
#define SAADC_INTENSET_DONE_Set (1UL)


#define SAADC_INTENSET_END_Pos (1UL)
#define SAADC_INTENSET_END_Msk (0x1UL << SAADC_INTENSET_END_Pos)
#define SAADC_INTENSET_END_Disabled (0UL)
#define SAADC_INTENSET_END_Enabled (1UL)
#define SAADC_INTENSET_END_Set (1UL)


#define SAADC_INTENSET_STARTED_Pos (0UL)
#define SAADC_INTENSET_STARTED_Msk (0x1UL << SAADC_INTENSET_STARTED_Pos)
#define SAADC_INTENSET_STARTED_Disabled (0UL)
#define SAADC_INTENSET_STARTED_Enabled (1UL)
#define SAADC_INTENSET_STARTED_Set (1UL)





#define SAADC_INTENCLR_CH7LIMITL_Pos (21UL)
#define SAADC_INTENCLR_CH7LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITL_Pos)
#define SAADC_INTENCLR_CH7LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH7LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH7LIMITL_Clear (1UL)


#define SAADC_INTENCLR_CH7LIMITH_Pos (20UL)
#define SAADC_INTENCLR_CH7LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITH_Pos)
#define SAADC_INTENCLR_CH7LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH7LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH7LIMITH_Clear (1UL)


#define SAADC_INTENCLR_CH6LIMITL_Pos (19UL)
#define SAADC_INTENCLR_CH6LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITL_Pos)
#define SAADC_INTENCLR_CH6LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH6LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH6LIMITL_Clear (1UL)


#define SAADC_INTENCLR_CH6LIMITH_Pos (18UL)
#define SAADC_INTENCLR_CH6LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITH_Pos)
#define SAADC_INTENCLR_CH6LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH6LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH6LIMITH_Clear (1UL)


#define SAADC_INTENCLR_CH5LIMITL_Pos (17UL)
#define SAADC_INTENCLR_CH5LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITL_Pos)
#define SAADC_INTENCLR_CH5LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH5LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH5LIMITL_Clear (1UL)


#define SAADC_INTENCLR_CH5LIMITH_Pos (16UL)
#define SAADC_INTENCLR_CH5LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITH_Pos)
#define SAADC_INTENCLR_CH5LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH5LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH5LIMITH_Clear (1UL)


#define SAADC_INTENCLR_CH4LIMITL_Pos (15UL)
#define SAADC_INTENCLR_CH4LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITL_Pos)
#define SAADC_INTENCLR_CH4LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH4LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH4LIMITL_Clear (1UL)


#define SAADC_INTENCLR_CH4LIMITH_Pos (14UL)
#define SAADC_INTENCLR_CH4LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITH_Pos)
#define SAADC_INTENCLR_CH4LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH4LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH4LIMITH_Clear (1UL)


#define SAADC_INTENCLR_CH3LIMITL_Pos (13UL)
#define SAADC_INTENCLR_CH3LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITL_Pos)
#define SAADC_INTENCLR_CH3LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH3LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH3LIMITL_Clear (1UL)


#define SAADC_INTENCLR_CH3LIMITH_Pos (12UL)
#define SAADC_INTENCLR_CH3LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITH_Pos)
#define SAADC_INTENCLR_CH3LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH3LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH3LIMITH_Clear (1UL)


#define SAADC_INTENCLR_CH2LIMITL_Pos (11UL)
#define SAADC_INTENCLR_CH2LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITL_Pos)
#define SAADC_INTENCLR_CH2LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH2LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH2LIMITL_Clear (1UL)


#define SAADC_INTENCLR_CH2LIMITH_Pos (10UL)
#define SAADC_INTENCLR_CH2LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITH_Pos)
#define SAADC_INTENCLR_CH2LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH2LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH2LIMITH_Clear (1UL)


#define SAADC_INTENCLR_CH1LIMITL_Pos (9UL)
#define SAADC_INTENCLR_CH1LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITL_Pos)
#define SAADC_INTENCLR_CH1LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH1LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH1LIMITL_Clear (1UL)


#define SAADC_INTENCLR_CH1LIMITH_Pos (8UL)
#define SAADC_INTENCLR_CH1LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITH_Pos)
#define SAADC_INTENCLR_CH1LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH1LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH1LIMITH_Clear (1UL)


#define SAADC_INTENCLR_CH0LIMITL_Pos (7UL)
#define SAADC_INTENCLR_CH0LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITL_Pos)
#define SAADC_INTENCLR_CH0LIMITL_Disabled (0UL)
#define SAADC_INTENCLR_CH0LIMITL_Enabled (1UL)
#define SAADC_INTENCLR_CH0LIMITL_Clear (1UL)


#define SAADC_INTENCLR_CH0LIMITH_Pos (6UL)
#define SAADC_INTENCLR_CH0LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITH_Pos)
#define SAADC_INTENCLR_CH0LIMITH_Disabled (0UL)
#define SAADC_INTENCLR_CH0LIMITH_Enabled (1UL)
#define SAADC_INTENCLR_CH0LIMITH_Clear (1UL)


#define SAADC_INTENCLR_STOPPED_Pos (5UL)
#define SAADC_INTENCLR_STOPPED_Msk (0x1UL << SAADC_INTENCLR_STOPPED_Pos)
#define SAADC_INTENCLR_STOPPED_Disabled (0UL)
#define SAADC_INTENCLR_STOPPED_Enabled (1UL)
#define SAADC_INTENCLR_STOPPED_Clear (1UL)


#define SAADC_INTENCLR_CALIBRATEDONE_Pos (4UL)
#define SAADC_INTENCLR_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENCLR_CALIBRATEDONE_Pos)
#define SAADC_INTENCLR_CALIBRATEDONE_Disabled (0UL)
#define SAADC_INTENCLR_CALIBRATEDONE_Enabled (1UL)
#define SAADC_INTENCLR_CALIBRATEDONE_Clear (1UL)


#define SAADC_INTENCLR_RESULTDONE_Pos (3UL)
#define SAADC_INTENCLR_RESULTDONE_Msk (0x1UL << SAADC_INTENCLR_RESULTDONE_Pos)
#define SAADC_INTENCLR_RESULTDONE_Disabled (0UL)
#define SAADC_INTENCLR_RESULTDONE_Enabled (1UL)
#define SAADC_INTENCLR_RESULTDONE_Clear (1UL)


#define SAADC_INTENCLR_DONE_Pos (2UL)
#define SAADC_INTENCLR_DONE_Msk (0x1UL << SAADC_INTENCLR_DONE_Pos)
#define SAADC_INTENCLR_DONE_Disabled (0UL)
#define SAADC_INTENCLR_DONE_Enabled (1UL)
#define SAADC_INTENCLR_DONE_Clear (1UL)


#define SAADC_INTENCLR_END_Pos (1UL)
#define SAADC_INTENCLR_END_Msk (0x1UL << SAADC_INTENCLR_END_Pos)
#define SAADC_INTENCLR_END_Disabled (0UL)
#define SAADC_INTENCLR_END_Enabled (1UL)
#define SAADC_INTENCLR_END_Clear (1UL)


#define SAADC_INTENCLR_STARTED_Pos (0UL)
#define SAADC_INTENCLR_STARTED_Msk (0x1UL << SAADC_INTENCLR_STARTED_Pos)
#define SAADC_INTENCLR_STARTED_Disabled (0UL)
#define SAADC_INTENCLR_STARTED_Enabled (1UL)
#define SAADC_INTENCLR_STARTED_Clear (1UL)





#define SAADC_STATUS_STATUS_Pos (0UL)
#define SAADC_STATUS_STATUS_Msk (0x1UL << SAADC_STATUS_STATUS_Pos)
#define SAADC_STATUS_STATUS_Ready (0UL)
#define SAADC_STATUS_STATUS_Busy (1UL)





#define SAADC_ENABLE_ENABLE_Pos (0UL)
#define SAADC_ENABLE_ENABLE_Msk (0x1UL << SAADC_ENABLE_ENABLE_Pos)
#define SAADC_ENABLE_ENABLE_Disabled (0UL)
#define SAADC_ENABLE_ENABLE_Enabled (1UL)





#define SAADC_CH_PSELP_PSELP_Pos (0UL)
#define SAADC_CH_PSELP_PSELP_Msk (0x1FUL << SAADC_CH_PSELP_PSELP_Pos)
#define SAADC_CH_PSELP_PSELP_NC (0UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput0 (1UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput1 (2UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput2 (3UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput3 (4UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput4 (5UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput5 (6UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput6 (7UL)
#define SAADC_CH_PSELP_PSELP_AnalogInput7 (8UL)
#define SAADC_CH_PSELP_PSELP_VDD (9UL)
#define SAADC_CH_PSELP_PSELP_VDDHDIV5 (0x0DUL)





#define SAADC_CH_PSELN_PSELN_Pos (0UL)
#define SAADC_CH_PSELN_PSELN_Msk (0x1FUL << SAADC_CH_PSELN_PSELN_Pos)
#define SAADC_CH_PSELN_PSELN_NC (0UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput0 (1UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput1 (2UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput2 (3UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput3 (4UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput4 (5UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput5 (6UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput6 (7UL)
#define SAADC_CH_PSELN_PSELN_AnalogInput7 (8UL)
#define SAADC_CH_PSELN_PSELN_VDD (9UL)
#define SAADC_CH_PSELN_PSELN_VDDHDIV5 (0x0DUL)





#define SAADC_CH_CONFIG_BURST_Pos (24UL)
#define SAADC_CH_CONFIG_BURST_Msk (0x1UL << SAADC_CH_CONFIG_BURST_Pos)
#define SAADC_CH_CONFIG_BURST_Disabled (0UL)
#define SAADC_CH_CONFIG_BURST_Enabled (1UL)


#define SAADC_CH_CONFIG_MODE_Pos (20UL)
#define SAADC_CH_CONFIG_MODE_Msk (0x1UL << SAADC_CH_CONFIG_MODE_Pos)
#define SAADC_CH_CONFIG_MODE_SE (0UL)
#define SAADC_CH_CONFIG_MODE_Diff (1UL)


#define SAADC_CH_CONFIG_TACQ_Pos (16UL)
#define SAADC_CH_CONFIG_TACQ_Msk (0x7UL << SAADC_CH_CONFIG_TACQ_Pos)
#define SAADC_CH_CONFIG_TACQ_3us (0UL)
#define SAADC_CH_CONFIG_TACQ_5us (1UL)
#define SAADC_CH_CONFIG_TACQ_10us (2UL)
#define SAADC_CH_CONFIG_TACQ_15us (3UL)
#define SAADC_CH_CONFIG_TACQ_20us (4UL)
#define SAADC_CH_CONFIG_TACQ_40us (5UL)


#define SAADC_CH_CONFIG_REFSEL_Pos (12UL)
#define SAADC_CH_CONFIG_REFSEL_Msk (0x1UL << SAADC_CH_CONFIG_REFSEL_Pos)
#define SAADC_CH_CONFIG_REFSEL_Internal (0UL)
#define SAADC_CH_CONFIG_REFSEL_VDD1_4 (1UL)


#define SAADC_CH_CONFIG_GAIN_Pos (8UL)
#define SAADC_CH_CONFIG_GAIN_Msk (0x7UL << SAADC_CH_CONFIG_GAIN_Pos)
#define SAADC_CH_CONFIG_GAIN_Gain1_6 (0UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_5 (1UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_4 (2UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_3 (3UL)
#define SAADC_CH_CONFIG_GAIN_Gain1_2 (4UL)
#define SAADC_CH_CONFIG_GAIN_Gain1 (5UL)
#define SAADC_CH_CONFIG_GAIN_Gain2 (6UL)
#define SAADC_CH_CONFIG_GAIN_Gain4 (7UL)


#define SAADC_CH_CONFIG_RESN_Pos (4UL)
#define SAADC_CH_CONFIG_RESN_Msk (0x3UL << SAADC_CH_CONFIG_RESN_Pos)
#define SAADC_CH_CONFIG_RESN_Bypass (0UL)
#define SAADC_CH_CONFIG_RESN_Pulldown (1UL)
#define SAADC_CH_CONFIG_RESN_Pullup (2UL)
#define SAADC_CH_CONFIG_RESN_VDD1_2 (3UL)


#define SAADC_CH_CONFIG_RESP_Pos (0UL)
#define SAADC_CH_CONFIG_RESP_Msk (0x3UL << SAADC_CH_CONFIG_RESP_Pos)
#define SAADC_CH_CONFIG_RESP_Bypass (0UL)
#define SAADC_CH_CONFIG_RESP_Pulldown (1UL)
#define SAADC_CH_CONFIG_RESP_Pullup (2UL)
#define SAADC_CH_CONFIG_RESP_VDD1_2 (3UL)





#define SAADC_CH_LIMIT_HIGH_Pos (16UL)
#define SAADC_CH_LIMIT_HIGH_Msk (0xFFFFUL << SAADC_CH_LIMIT_HIGH_Pos)


#define SAADC_CH_LIMIT_LOW_Pos (0UL)
#define SAADC_CH_LIMIT_LOW_Msk (0xFFFFUL << SAADC_CH_LIMIT_LOW_Pos)





#define SAADC_RESOLUTION_VAL_Pos (0UL)
#define SAADC_RESOLUTION_VAL_Msk (0x7UL << SAADC_RESOLUTION_VAL_Pos)
#define SAADC_RESOLUTION_VAL_8bit (0UL)
#define SAADC_RESOLUTION_VAL_10bit (1UL)
#define SAADC_RESOLUTION_VAL_12bit (2UL)
#define SAADC_RESOLUTION_VAL_14bit (3UL)





#define SAADC_OVERSAMPLE_OVERSAMPLE_Pos (0UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Msk (0xFUL << SAADC_OVERSAMPLE_OVERSAMPLE_Pos)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Bypass (0UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over2x (1UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over4x (2UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over8x (3UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over16x (4UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over32x (5UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over64x (6UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over128x (7UL)
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over256x (8UL)





#define SAADC_SAMPLERATE_MODE_Pos (12UL)
#define SAADC_SAMPLERATE_MODE_Msk (0x1UL << SAADC_SAMPLERATE_MODE_Pos)
#define SAADC_SAMPLERATE_MODE_Task (0UL)
#define SAADC_SAMPLERATE_MODE_Timers (1UL)


#define SAADC_SAMPLERATE_CC_Pos (0UL)
#define SAADC_SAMPLERATE_CC_Msk (0x7FFUL << SAADC_SAMPLERATE_CC_Pos)





#define SAADC_RESULT_PTR_PTR_Pos (0UL)
#define SAADC_RESULT_PTR_PTR_Msk (0xFFFFFFFFUL << SAADC_RESULT_PTR_PTR_Pos)





#define SAADC_RESULT_MAXCNT_MAXCNT_Pos (0UL)
#define SAADC_RESULT_MAXCNT_MAXCNT_Msk (0x7FFFUL << SAADC_RESULT_MAXCNT_MAXCNT_Pos)





#define SAADC_RESULT_AMOUNT_AMOUNT_Pos (0UL)
#define SAADC_RESULT_AMOUNT_AMOUNT_Msk (0x7FFFUL << SAADC_RESULT_AMOUNT_AMOUNT_Pos)
# 12424 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define SPI_EVENTS_READY_EVENTS_READY_Pos (0UL)
#define SPI_EVENTS_READY_EVENTS_READY_Msk (0x1UL << SPI_EVENTS_READY_EVENTS_READY_Pos)
#define SPI_EVENTS_READY_EVENTS_READY_NotGenerated (0UL)
#define SPI_EVENTS_READY_EVENTS_READY_Generated (1UL)





#define SPI_INTENSET_READY_Pos (2UL)
#define SPI_INTENSET_READY_Msk (0x1UL << SPI_INTENSET_READY_Pos)
#define SPI_INTENSET_READY_Disabled (0UL)
#define SPI_INTENSET_READY_Enabled (1UL)
#define SPI_INTENSET_READY_Set (1UL)





#define SPI_INTENCLR_READY_Pos (2UL)
#define SPI_INTENCLR_READY_Msk (0x1UL << SPI_INTENCLR_READY_Pos)
#define SPI_INTENCLR_READY_Disabled (0UL)
#define SPI_INTENCLR_READY_Enabled (1UL)
#define SPI_INTENCLR_READY_Clear (1UL)





#define SPI_ENABLE_ENABLE_Pos (0UL)
#define SPI_ENABLE_ENABLE_Msk (0xFUL << SPI_ENABLE_ENABLE_Pos)
#define SPI_ENABLE_ENABLE_Disabled (0UL)
#define SPI_ENABLE_ENABLE_Enabled (1UL)





#define SPI_PSEL_SCK_CONNECT_Pos (31UL)
#define SPI_PSEL_SCK_CONNECT_Msk (0x1UL << SPI_PSEL_SCK_CONNECT_Pos)
#define SPI_PSEL_SCK_CONNECT_Connected (0UL)
#define SPI_PSEL_SCK_CONNECT_Disconnected (1UL)


#define SPI_PSEL_SCK_PORT_Pos (5UL)
#define SPI_PSEL_SCK_PORT_Msk (0x1UL << SPI_PSEL_SCK_PORT_Pos)


#define SPI_PSEL_SCK_PIN_Pos (0UL)
#define SPI_PSEL_SCK_PIN_Msk (0x1FUL << SPI_PSEL_SCK_PIN_Pos)





#define SPI_PSEL_MOSI_CONNECT_Pos (31UL)
#define SPI_PSEL_MOSI_CONNECT_Msk (0x1UL << SPI_PSEL_MOSI_CONNECT_Pos)
#define SPI_PSEL_MOSI_CONNECT_Connected (0UL)
#define SPI_PSEL_MOSI_CONNECT_Disconnected (1UL)


#define SPI_PSEL_MOSI_PORT_Pos (5UL)
#define SPI_PSEL_MOSI_PORT_Msk (0x1UL << SPI_PSEL_MOSI_PORT_Pos)


#define SPI_PSEL_MOSI_PIN_Pos (0UL)
#define SPI_PSEL_MOSI_PIN_Msk (0x1FUL << SPI_PSEL_MOSI_PIN_Pos)





#define SPI_PSEL_MISO_CONNECT_Pos (31UL)
#define SPI_PSEL_MISO_CONNECT_Msk (0x1UL << SPI_PSEL_MISO_CONNECT_Pos)
#define SPI_PSEL_MISO_CONNECT_Connected (0UL)
#define SPI_PSEL_MISO_CONNECT_Disconnected (1UL)


#define SPI_PSEL_MISO_PORT_Pos (5UL)
#define SPI_PSEL_MISO_PORT_Msk (0x1UL << SPI_PSEL_MISO_PORT_Pos)


#define SPI_PSEL_MISO_PIN_Pos (0UL)
#define SPI_PSEL_MISO_PIN_Msk (0x1FUL << SPI_PSEL_MISO_PIN_Pos)





#define SPI_RXD_RXD_Pos (0UL)
#define SPI_RXD_RXD_Msk (0xFFUL << SPI_RXD_RXD_Pos)





#define SPI_TXD_TXD_Pos (0UL)
#define SPI_TXD_TXD_Msk (0xFFUL << SPI_TXD_TXD_Pos)





#define SPI_FREQUENCY_FREQUENCY_Pos (0UL)
#define SPI_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << SPI_FREQUENCY_FREQUENCY_Pos)
#define SPI_FREQUENCY_FREQUENCY_K125 (0x02000000UL)
#define SPI_FREQUENCY_FREQUENCY_K250 (0x04000000UL)
#define SPI_FREQUENCY_FREQUENCY_K500 (0x08000000UL)
#define SPI_FREQUENCY_FREQUENCY_M1 (0x10000000UL)
#define SPI_FREQUENCY_FREQUENCY_M2 (0x20000000UL)
#define SPI_FREQUENCY_FREQUENCY_M4 (0x40000000UL)
#define SPI_FREQUENCY_FREQUENCY_M8 (0x80000000UL)





#define SPI_CONFIG_CPOL_Pos (2UL)
#define SPI_CONFIG_CPOL_Msk (0x1UL << SPI_CONFIG_CPOL_Pos)
#define SPI_CONFIG_CPOL_ActiveHigh (0UL)
#define SPI_CONFIG_CPOL_ActiveLow (1UL)


#define SPI_CONFIG_CPHA_Pos (1UL)
#define SPI_CONFIG_CPHA_Msk (0x1UL << SPI_CONFIG_CPHA_Pos)
#define SPI_CONFIG_CPHA_Leading (0UL)
#define SPI_CONFIG_CPHA_Trailing (1UL)


#define SPI_CONFIG_ORDER_Pos (0UL)
#define SPI_CONFIG_ORDER_Msk (0x1UL << SPI_CONFIG_ORDER_Pos)
#define SPI_CONFIG_ORDER_MsbFirst (0UL)
#define SPI_CONFIG_ORDER_LsbFirst (1UL)
# 12566 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define SPIM_TASKS_START_TASKS_START_Pos (0UL)
#define SPIM_TASKS_START_TASKS_START_Msk (0x1UL << SPIM_TASKS_START_TASKS_START_Pos)
#define SPIM_TASKS_START_TASKS_START_Trigger (1UL)





#define SPIM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define SPIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SPIM_TASKS_STOP_TASKS_STOP_Pos)
#define SPIM_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)





#define SPIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define SPIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << SPIM_TASKS_RESUME_TASKS_RESUME_Pos)
#define SPIM_TASKS_RESUME_TASKS_RESUME_Trigger (1UL)





#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)





#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL)
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL)





#define SPIM_EVENTS_END_EVENTS_END_Pos (0UL)
#define SPIM_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIM_EVENTS_END_EVENTS_END_Pos)
#define SPIM_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define SPIM_EVENTS_END_EVENTS_END_Generated (1UL)





#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL)
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos)
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0UL)
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Generated (1UL)





#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)





#define SPIM_SHORTS_END_START_Pos (17UL)
#define SPIM_SHORTS_END_START_Msk (0x1UL << SPIM_SHORTS_END_START_Pos)
#define SPIM_SHORTS_END_START_Disabled (0UL)
#define SPIM_SHORTS_END_START_Enabled (1UL)





#define SPIM_INTENSET_STARTED_Pos (19UL)
#define SPIM_INTENSET_STARTED_Msk (0x1UL << SPIM_INTENSET_STARTED_Pos)
#define SPIM_INTENSET_STARTED_Disabled (0UL)
#define SPIM_INTENSET_STARTED_Enabled (1UL)
#define SPIM_INTENSET_STARTED_Set (1UL)


#define SPIM_INTENSET_ENDTX_Pos (8UL)
#define SPIM_INTENSET_ENDTX_Msk (0x1UL << SPIM_INTENSET_ENDTX_Pos)
#define SPIM_INTENSET_ENDTX_Disabled (0UL)
#define SPIM_INTENSET_ENDTX_Enabled (1UL)
#define SPIM_INTENSET_ENDTX_Set (1UL)


#define SPIM_INTENSET_END_Pos (6UL)
#define SPIM_INTENSET_END_Msk (0x1UL << SPIM_INTENSET_END_Pos)
#define SPIM_INTENSET_END_Disabled (0UL)
#define SPIM_INTENSET_END_Enabled (1UL)
#define SPIM_INTENSET_END_Set (1UL)


#define SPIM_INTENSET_ENDRX_Pos (4UL)
#define SPIM_INTENSET_ENDRX_Msk (0x1UL << SPIM_INTENSET_ENDRX_Pos)
#define SPIM_INTENSET_ENDRX_Disabled (0UL)
#define SPIM_INTENSET_ENDRX_Enabled (1UL)
#define SPIM_INTENSET_ENDRX_Set (1UL)


#define SPIM_INTENSET_STOPPED_Pos (1UL)
#define SPIM_INTENSET_STOPPED_Msk (0x1UL << SPIM_INTENSET_STOPPED_Pos)
#define SPIM_INTENSET_STOPPED_Disabled (0UL)
#define SPIM_INTENSET_STOPPED_Enabled (1UL)
#define SPIM_INTENSET_STOPPED_Set (1UL)





#define SPIM_INTENCLR_STARTED_Pos (19UL)
#define SPIM_INTENCLR_STARTED_Msk (0x1UL << SPIM_INTENCLR_STARTED_Pos)
#define SPIM_INTENCLR_STARTED_Disabled (0UL)
#define SPIM_INTENCLR_STARTED_Enabled (1UL)
#define SPIM_INTENCLR_STARTED_Clear (1UL)


#define SPIM_INTENCLR_ENDTX_Pos (8UL)
#define SPIM_INTENCLR_ENDTX_Msk (0x1UL << SPIM_INTENCLR_ENDTX_Pos)
#define SPIM_INTENCLR_ENDTX_Disabled (0UL)
#define SPIM_INTENCLR_ENDTX_Enabled (1UL)
#define SPIM_INTENCLR_ENDTX_Clear (1UL)


#define SPIM_INTENCLR_END_Pos (6UL)
#define SPIM_INTENCLR_END_Msk (0x1UL << SPIM_INTENCLR_END_Pos)
#define SPIM_INTENCLR_END_Disabled (0UL)
#define SPIM_INTENCLR_END_Enabled (1UL)
#define SPIM_INTENCLR_END_Clear (1UL)


#define SPIM_INTENCLR_ENDRX_Pos (4UL)
#define SPIM_INTENCLR_ENDRX_Msk (0x1UL << SPIM_INTENCLR_ENDRX_Pos)
#define SPIM_INTENCLR_ENDRX_Disabled (0UL)
#define SPIM_INTENCLR_ENDRX_Enabled (1UL)
#define SPIM_INTENCLR_ENDRX_Clear (1UL)


#define SPIM_INTENCLR_STOPPED_Pos (1UL)
#define SPIM_INTENCLR_STOPPED_Msk (0x1UL << SPIM_INTENCLR_STOPPED_Pos)
#define SPIM_INTENCLR_STOPPED_Disabled (0UL)
#define SPIM_INTENCLR_STOPPED_Enabled (1UL)
#define SPIM_INTENCLR_STOPPED_Clear (1UL)





#define SPIM_STALLSTAT_RX_Pos (1UL)
#define SPIM_STALLSTAT_RX_Msk (0x1UL << SPIM_STALLSTAT_RX_Pos)
#define SPIM_STALLSTAT_RX_NOSTALL (0UL)
#define SPIM_STALLSTAT_RX_STALL (1UL)


#define SPIM_STALLSTAT_TX_Pos (0UL)
#define SPIM_STALLSTAT_TX_Msk (0x1UL << SPIM_STALLSTAT_TX_Pos)
#define SPIM_STALLSTAT_TX_NOSTALL (0UL)
#define SPIM_STALLSTAT_TX_STALL (1UL)





#define SPIM_ENABLE_ENABLE_Pos (0UL)
#define SPIM_ENABLE_ENABLE_Msk (0xFUL << SPIM_ENABLE_ENABLE_Pos)
#define SPIM_ENABLE_ENABLE_Disabled (0UL)
#define SPIM_ENABLE_ENABLE_Enabled (7UL)





#define SPIM_PSEL_SCK_CONNECT_Pos (31UL)
#define SPIM_PSEL_SCK_CONNECT_Msk (0x1UL << SPIM_PSEL_SCK_CONNECT_Pos)
#define SPIM_PSEL_SCK_CONNECT_Connected (0UL)
#define SPIM_PSEL_SCK_CONNECT_Disconnected (1UL)


#define SPIM_PSEL_SCK_PORT_Pos (5UL)
#define SPIM_PSEL_SCK_PORT_Msk (0x1UL << SPIM_PSEL_SCK_PORT_Pos)


#define SPIM_PSEL_SCK_PIN_Pos (0UL)
#define SPIM_PSEL_SCK_PIN_Msk (0x1FUL << SPIM_PSEL_SCK_PIN_Pos)





#define SPIM_PSEL_MOSI_CONNECT_Pos (31UL)
#define SPIM_PSEL_MOSI_CONNECT_Msk (0x1UL << SPIM_PSEL_MOSI_CONNECT_Pos)
#define SPIM_PSEL_MOSI_CONNECT_Connected (0UL)
#define SPIM_PSEL_MOSI_CONNECT_Disconnected (1UL)


#define SPIM_PSEL_MOSI_PORT_Pos (5UL)
#define SPIM_PSEL_MOSI_PORT_Msk (0x1UL << SPIM_PSEL_MOSI_PORT_Pos)


#define SPIM_PSEL_MOSI_PIN_Pos (0UL)
#define SPIM_PSEL_MOSI_PIN_Msk (0x1FUL << SPIM_PSEL_MOSI_PIN_Pos)





#define SPIM_PSEL_MISO_CONNECT_Pos (31UL)
#define SPIM_PSEL_MISO_CONNECT_Msk (0x1UL << SPIM_PSEL_MISO_CONNECT_Pos)
#define SPIM_PSEL_MISO_CONNECT_Connected (0UL)
#define SPIM_PSEL_MISO_CONNECT_Disconnected (1UL)


#define SPIM_PSEL_MISO_PORT_Pos (5UL)
#define SPIM_PSEL_MISO_PORT_Msk (0x1UL << SPIM_PSEL_MISO_PORT_Pos)


#define SPIM_PSEL_MISO_PIN_Pos (0UL)
#define SPIM_PSEL_MISO_PIN_Msk (0x1FUL << SPIM_PSEL_MISO_PIN_Pos)





#define SPIM_PSEL_CSN_CONNECT_Pos (31UL)
#define SPIM_PSEL_CSN_CONNECT_Msk (0x1UL << SPIM_PSEL_CSN_CONNECT_Pos)
#define SPIM_PSEL_CSN_CONNECT_Connected (0UL)
#define SPIM_PSEL_CSN_CONNECT_Disconnected (1UL)


#define SPIM_PSEL_CSN_PORT_Pos (5UL)
#define SPIM_PSEL_CSN_PORT_Msk (0x1UL << SPIM_PSEL_CSN_PORT_Pos)


#define SPIM_PSEL_CSN_PIN_Pos (0UL)
#define SPIM_PSEL_CSN_PIN_Msk (0x1FUL << SPIM_PSEL_CSN_PIN_Pos)





#define SPIM_FREQUENCY_FREQUENCY_Pos (0UL)
#define SPIM_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << SPIM_FREQUENCY_FREQUENCY_Pos)
#define SPIM_FREQUENCY_FREQUENCY_K125 (0x02000000UL)
#define SPIM_FREQUENCY_FREQUENCY_K250 (0x04000000UL)
#define SPIM_FREQUENCY_FREQUENCY_K500 (0x08000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M16 (0x0A000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M1 (0x10000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M32 (0x14000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M2 (0x20000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M4 (0x40000000UL)
#define SPIM_FREQUENCY_FREQUENCY_M8 (0x80000000UL)





#define SPIM_RXD_PTR_PTR_Pos (0UL)
#define SPIM_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIM_RXD_PTR_PTR_Pos)





#define SPIM_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define SPIM_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << SPIM_RXD_MAXCNT_MAXCNT_Pos)





#define SPIM_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define SPIM_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << SPIM_RXD_AMOUNT_AMOUNT_Pos)





#define SPIM_RXD_LIST_LIST_Pos (0UL)
#define SPIM_RXD_LIST_LIST_Msk (0x3UL << SPIM_RXD_LIST_LIST_Pos)
#define SPIM_RXD_LIST_LIST_Disabled (0UL)
#define SPIM_RXD_LIST_LIST_ArrayList (1UL)





#define SPIM_TXD_PTR_PTR_Pos (0UL)
#define SPIM_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIM_TXD_PTR_PTR_Pos)





#define SPIM_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define SPIM_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << SPIM_TXD_MAXCNT_MAXCNT_Pos)





#define SPIM_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define SPIM_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << SPIM_TXD_AMOUNT_AMOUNT_Pos)





#define SPIM_TXD_LIST_LIST_Pos (0UL)
#define SPIM_TXD_LIST_LIST_Msk (0x3UL << SPIM_TXD_LIST_LIST_Pos)
#define SPIM_TXD_LIST_LIST_Disabled (0UL)
#define SPIM_TXD_LIST_LIST_ArrayList (1UL)





#define SPIM_CONFIG_CPOL_Pos (2UL)
#define SPIM_CONFIG_CPOL_Msk (0x1UL << SPIM_CONFIG_CPOL_Pos)
#define SPIM_CONFIG_CPOL_ActiveHigh (0UL)
#define SPIM_CONFIG_CPOL_ActiveLow (1UL)


#define SPIM_CONFIG_CPHA_Pos (1UL)
#define SPIM_CONFIG_CPHA_Msk (0x1UL << SPIM_CONFIG_CPHA_Pos)
#define SPIM_CONFIG_CPHA_Leading (0UL)
#define SPIM_CONFIG_CPHA_Trailing (1UL)


#define SPIM_CONFIG_ORDER_Pos (0UL)
#define SPIM_CONFIG_ORDER_Msk (0x1UL << SPIM_CONFIG_ORDER_Pos)
#define SPIM_CONFIG_ORDER_MsbFirst (0UL)
#define SPIM_CONFIG_ORDER_LsbFirst (1UL)





#define SPIM_IFTIMING_RXDELAY_RXDELAY_Pos (0UL)
#define SPIM_IFTIMING_RXDELAY_RXDELAY_Msk (0x7UL << SPIM_IFTIMING_RXDELAY_RXDELAY_Pos)





#define SPIM_IFTIMING_CSNDUR_CSNDUR_Pos (0UL)
#define SPIM_IFTIMING_CSNDUR_CSNDUR_Msk (0xFFUL << SPIM_IFTIMING_CSNDUR_CSNDUR_Pos)





#define SPIM_CSNPOL_CSNPOL_Pos (0UL)
#define SPIM_CSNPOL_CSNPOL_Msk (0x1UL << SPIM_CSNPOL_CSNPOL_Pos)
#define SPIM_CSNPOL_CSNPOL_LOW (0UL)
#define SPIM_CSNPOL_CSNPOL_HIGH (1UL)





#define SPIM_PSELDCX_CONNECT_Pos (31UL)
#define SPIM_PSELDCX_CONNECT_Msk (0x1UL << SPIM_PSELDCX_CONNECT_Pos)
#define SPIM_PSELDCX_CONNECT_Connected (0UL)
#define SPIM_PSELDCX_CONNECT_Disconnected (1UL)


#define SPIM_PSELDCX_PORT_Pos (5UL)
#define SPIM_PSELDCX_PORT_Msk (0x1UL << SPIM_PSELDCX_PORT_Pos)


#define SPIM_PSELDCX_PIN_Pos (0UL)
#define SPIM_PSELDCX_PIN_Msk (0x1FUL << SPIM_PSELDCX_PIN_Pos)





#define SPIM_DCXCNT_DCXCNT_Pos (0UL)
#define SPIM_DCXCNT_DCXCNT_Msk (0xFUL << SPIM_DCXCNT_DCXCNT_Pos)





#define SPIM_ORC_ORC_Pos (0UL)
#define SPIM_ORC_ORC_Msk (0xFFUL << SPIM_ORC_ORC_Pos)
# 12975 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos (0UL)
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Msk (0x1UL << SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos)
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Trigger (1UL)





#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos (0UL)
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Msk (0x1UL << SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos)
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Trigger (1UL)





#define SPIS_EVENTS_END_EVENTS_END_Pos (0UL)
#define SPIS_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIS_EVENTS_END_EVENTS_END_Pos)
#define SPIS_EVENTS_END_EVENTS_END_NotGenerated (0UL)
#define SPIS_EVENTS_END_EVENTS_END_Generated (1UL)





#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL)
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL)





#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos (0UL)
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Msk (0x1UL << SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos)
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_NotGenerated (0UL)
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Generated (1UL)





#define SPIS_SHORTS_END_ACQUIRE_Pos (2UL)
#define SPIS_SHORTS_END_ACQUIRE_Msk (0x1UL << SPIS_SHORTS_END_ACQUIRE_Pos)
#define SPIS_SHORTS_END_ACQUIRE_Disabled (0UL)
#define SPIS_SHORTS_END_ACQUIRE_Enabled (1UL)





#define SPIS_INTENSET_ACQUIRED_Pos (10UL)
#define SPIS_INTENSET_ACQUIRED_Msk (0x1UL << SPIS_INTENSET_ACQUIRED_Pos)
#define SPIS_INTENSET_ACQUIRED_Disabled (0UL)
#define SPIS_INTENSET_ACQUIRED_Enabled (1UL)
#define SPIS_INTENSET_ACQUIRED_Set (1UL)


#define SPIS_INTENSET_ENDRX_Pos (4UL)
#define SPIS_INTENSET_ENDRX_Msk (0x1UL << SPIS_INTENSET_ENDRX_Pos)
#define SPIS_INTENSET_ENDRX_Disabled (0UL)
#define SPIS_INTENSET_ENDRX_Enabled (1UL)
#define SPIS_INTENSET_ENDRX_Set (1UL)


#define SPIS_INTENSET_END_Pos (1UL)
#define SPIS_INTENSET_END_Msk (0x1UL << SPIS_INTENSET_END_Pos)
#define SPIS_INTENSET_END_Disabled (0UL)
#define SPIS_INTENSET_END_Enabled (1UL)
#define SPIS_INTENSET_END_Set (1UL)





#define SPIS_INTENCLR_ACQUIRED_Pos (10UL)
#define SPIS_INTENCLR_ACQUIRED_Msk (0x1UL << SPIS_INTENCLR_ACQUIRED_Pos)
#define SPIS_INTENCLR_ACQUIRED_Disabled (0UL)
#define SPIS_INTENCLR_ACQUIRED_Enabled (1UL)
#define SPIS_INTENCLR_ACQUIRED_Clear (1UL)


#define SPIS_INTENCLR_ENDRX_Pos (4UL)
#define SPIS_INTENCLR_ENDRX_Msk (0x1UL << SPIS_INTENCLR_ENDRX_Pos)
#define SPIS_INTENCLR_ENDRX_Disabled (0UL)
#define SPIS_INTENCLR_ENDRX_Enabled (1UL)
#define SPIS_INTENCLR_ENDRX_Clear (1UL)


#define SPIS_INTENCLR_END_Pos (1UL)
#define SPIS_INTENCLR_END_Msk (0x1UL << SPIS_INTENCLR_END_Pos)
#define SPIS_INTENCLR_END_Disabled (0UL)
#define SPIS_INTENCLR_END_Enabled (1UL)
#define SPIS_INTENCLR_END_Clear (1UL)





#define SPIS_SEMSTAT_SEMSTAT_Pos (0UL)
#define SPIS_SEMSTAT_SEMSTAT_Msk (0x3UL << SPIS_SEMSTAT_SEMSTAT_Pos)
#define SPIS_SEMSTAT_SEMSTAT_Free (0UL)
#define SPIS_SEMSTAT_SEMSTAT_CPU (1UL)
#define SPIS_SEMSTAT_SEMSTAT_SPIS (2UL)
#define SPIS_SEMSTAT_SEMSTAT_CPUPending (3UL)





#define SPIS_STATUS_OVERFLOW_Pos (1UL)
#define SPIS_STATUS_OVERFLOW_Msk (0x1UL << SPIS_STATUS_OVERFLOW_Pos)
#define SPIS_STATUS_OVERFLOW_NotPresent (0UL)
#define SPIS_STATUS_OVERFLOW_Present (1UL)
#define SPIS_STATUS_OVERFLOW_Clear (1UL)


#define SPIS_STATUS_OVERREAD_Pos (0UL)
#define SPIS_STATUS_OVERREAD_Msk (0x1UL << SPIS_STATUS_OVERREAD_Pos)
#define SPIS_STATUS_OVERREAD_NotPresent (0UL)
#define SPIS_STATUS_OVERREAD_Present (1UL)
#define SPIS_STATUS_OVERREAD_Clear (1UL)





#define SPIS_ENABLE_ENABLE_Pos (0UL)
#define SPIS_ENABLE_ENABLE_Msk (0xFUL << SPIS_ENABLE_ENABLE_Pos)
#define SPIS_ENABLE_ENABLE_Disabled (0UL)
#define SPIS_ENABLE_ENABLE_Enabled (2UL)





#define SPIS_PSEL_SCK_CONNECT_Pos (31UL)
#define SPIS_PSEL_SCK_CONNECT_Msk (0x1UL << SPIS_PSEL_SCK_CONNECT_Pos)
#define SPIS_PSEL_SCK_CONNECT_Connected (0UL)
#define SPIS_PSEL_SCK_CONNECT_Disconnected (1UL)


#define SPIS_PSEL_SCK_PORT_Pos (5UL)
#define SPIS_PSEL_SCK_PORT_Msk (0x1UL << SPIS_PSEL_SCK_PORT_Pos)


#define SPIS_PSEL_SCK_PIN_Pos (0UL)
#define SPIS_PSEL_SCK_PIN_Msk (0x1FUL << SPIS_PSEL_SCK_PIN_Pos)





#define SPIS_PSEL_MISO_CONNECT_Pos (31UL)
#define SPIS_PSEL_MISO_CONNECT_Msk (0x1UL << SPIS_PSEL_MISO_CONNECT_Pos)
#define SPIS_PSEL_MISO_CONNECT_Connected (0UL)
#define SPIS_PSEL_MISO_CONNECT_Disconnected (1UL)


#define SPIS_PSEL_MISO_PORT_Pos (5UL)
#define SPIS_PSEL_MISO_PORT_Msk (0x1UL << SPIS_PSEL_MISO_PORT_Pos)


#define SPIS_PSEL_MISO_PIN_Pos (0UL)
#define SPIS_PSEL_MISO_PIN_Msk (0x1FUL << SPIS_PSEL_MISO_PIN_Pos)





#define SPIS_PSEL_MOSI_CONNECT_Pos (31UL)
#define SPIS_PSEL_MOSI_CONNECT_Msk (0x1UL << SPIS_PSEL_MOSI_CONNECT_Pos)
#define SPIS_PSEL_MOSI_CONNECT_Connected (0UL)
#define SPIS_PSEL_MOSI_CONNECT_Disconnected (1UL)


#define SPIS_PSEL_MOSI_PORT_Pos (5UL)
#define SPIS_PSEL_MOSI_PORT_Msk (0x1UL << SPIS_PSEL_MOSI_PORT_Pos)


#define SPIS_PSEL_MOSI_PIN_Pos (0UL)
#define SPIS_PSEL_MOSI_PIN_Msk (0x1FUL << SPIS_PSEL_MOSI_PIN_Pos)





#define SPIS_PSEL_CSN_CONNECT_Pos (31UL)
#define SPIS_PSEL_CSN_CONNECT_Msk (0x1UL << SPIS_PSEL_CSN_CONNECT_Pos)
#define SPIS_PSEL_CSN_CONNECT_Connected (0UL)
#define SPIS_PSEL_CSN_CONNECT_Disconnected (1UL)


#define SPIS_PSEL_CSN_PORT_Pos (5UL)
#define SPIS_PSEL_CSN_PORT_Msk (0x1UL << SPIS_PSEL_CSN_PORT_Pos)


#define SPIS_PSEL_CSN_PIN_Pos (0UL)
#define SPIS_PSEL_CSN_PIN_Msk (0x1FUL << SPIS_PSEL_CSN_PIN_Pos)





#define SPIS_RXD_PTR_PTR_Pos (0UL)
#define SPIS_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIS_RXD_PTR_PTR_Pos)





#define SPIS_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define SPIS_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << SPIS_RXD_MAXCNT_MAXCNT_Pos)





#define SPIS_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define SPIS_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << SPIS_RXD_AMOUNT_AMOUNT_Pos)





#define SPIS_RXD_LIST_LIST_Pos (0UL)
#define SPIS_RXD_LIST_LIST_Msk (0x3UL << SPIS_RXD_LIST_LIST_Pos)
#define SPIS_RXD_LIST_LIST_Disabled (0UL)
#define SPIS_RXD_LIST_LIST_ArrayList (1UL)





#define SPIS_TXD_PTR_PTR_Pos (0UL)
#define SPIS_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIS_TXD_PTR_PTR_Pos)





#define SPIS_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define SPIS_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << SPIS_TXD_MAXCNT_MAXCNT_Pos)





#define SPIS_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define SPIS_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << SPIS_TXD_AMOUNT_AMOUNT_Pos)





#define SPIS_TXD_LIST_LIST_Pos (0UL)
#define SPIS_TXD_LIST_LIST_Msk (0x3UL << SPIS_TXD_LIST_LIST_Pos)
#define SPIS_TXD_LIST_LIST_Disabled (0UL)
#define SPIS_TXD_LIST_LIST_ArrayList (1UL)





#define SPIS_CONFIG_CPOL_Pos (2UL)
#define SPIS_CONFIG_CPOL_Msk (0x1UL << SPIS_CONFIG_CPOL_Pos)
#define SPIS_CONFIG_CPOL_ActiveHigh (0UL)
#define SPIS_CONFIG_CPOL_ActiveLow (1UL)


#define SPIS_CONFIG_CPHA_Pos (1UL)
#define SPIS_CONFIG_CPHA_Msk (0x1UL << SPIS_CONFIG_CPHA_Pos)
#define SPIS_CONFIG_CPHA_Leading (0UL)
#define SPIS_CONFIG_CPHA_Trailing (1UL)


#define SPIS_CONFIG_ORDER_Pos (0UL)
#define SPIS_CONFIG_ORDER_Msk (0x1UL << SPIS_CONFIG_ORDER_Pos)
#define SPIS_CONFIG_ORDER_MsbFirst (0UL)
#define SPIS_CONFIG_ORDER_LsbFirst (1UL)





#define SPIS_DEF_DEF_Pos (0UL)
#define SPIS_DEF_DEF_Msk (0xFFUL << SPIS_DEF_DEF_Pos)





#define SPIS_ORC_ORC_Pos (0UL)
#define SPIS_ORC_ORC_Msk (0xFFUL << SPIS_ORC_ORC_Pos)
# 13279 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define TEMP_TASKS_START_TASKS_START_Pos (0UL)
#define TEMP_TASKS_START_TASKS_START_Msk (0x1UL << TEMP_TASKS_START_TASKS_START_Pos)
#define TEMP_TASKS_START_TASKS_START_Trigger (1UL)





#define TEMP_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TEMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TEMP_TASKS_STOP_TASKS_STOP_Pos)
#define TEMP_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos (0UL)
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Msk (0x1UL << TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos)
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_NotGenerated (0UL)
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Generated (1UL)





#define TEMP_INTENSET_DATARDY_Pos (0UL)
#define TEMP_INTENSET_DATARDY_Msk (0x1UL << TEMP_INTENSET_DATARDY_Pos)
#define TEMP_INTENSET_DATARDY_Disabled (0UL)
#define TEMP_INTENSET_DATARDY_Enabled (1UL)
#define TEMP_INTENSET_DATARDY_Set (1UL)





#define TEMP_INTENCLR_DATARDY_Pos (0UL)
#define TEMP_INTENCLR_DATARDY_Msk (0x1UL << TEMP_INTENCLR_DATARDY_Pos)
#define TEMP_INTENCLR_DATARDY_Disabled (0UL)
#define TEMP_INTENCLR_DATARDY_Enabled (1UL)
#define TEMP_INTENCLR_DATARDY_Clear (1UL)





#define TEMP_TEMP_TEMP_Pos (0UL)
#define TEMP_TEMP_TEMP_Msk (0xFFFFFFFFUL << TEMP_TEMP_TEMP_Pos)





#define TEMP_A0_A0_Pos (0UL)
#define TEMP_A0_A0_Msk (0xFFFUL << TEMP_A0_A0_Pos)





#define TEMP_A1_A1_Pos (0UL)
#define TEMP_A1_A1_Msk (0xFFFUL << TEMP_A1_A1_Pos)





#define TEMP_A2_A2_Pos (0UL)
#define TEMP_A2_A2_Msk (0xFFFUL << TEMP_A2_A2_Pos)





#define TEMP_A3_A3_Pos (0UL)
#define TEMP_A3_A3_Msk (0xFFFUL << TEMP_A3_A3_Pos)





#define TEMP_A4_A4_Pos (0UL)
#define TEMP_A4_A4_Msk (0xFFFUL << TEMP_A4_A4_Pos)





#define TEMP_A5_A5_Pos (0UL)
#define TEMP_A5_A5_Msk (0xFFFUL << TEMP_A5_A5_Pos)





#define TEMP_B0_B0_Pos (0UL)
#define TEMP_B0_B0_Msk (0x3FFFUL << TEMP_B0_B0_Pos)





#define TEMP_B1_B1_Pos (0UL)
#define TEMP_B1_B1_Msk (0x3FFFUL << TEMP_B1_B1_Pos)





#define TEMP_B2_B2_Pos (0UL)
#define TEMP_B2_B2_Msk (0x3FFFUL << TEMP_B2_B2_Pos)





#define TEMP_B3_B3_Pos (0UL)
#define TEMP_B3_B3_Msk (0x3FFFUL << TEMP_B3_B3_Pos)





#define TEMP_B4_B4_Pos (0UL)
#define TEMP_B4_B4_Msk (0x3FFFUL << TEMP_B4_B4_Pos)





#define TEMP_B5_B5_Pos (0UL)
#define TEMP_B5_B5_Msk (0x3FFFUL << TEMP_B5_B5_Pos)





#define TEMP_T0_T0_Pos (0UL)
#define TEMP_T0_T0_Msk (0xFFUL << TEMP_T0_T0_Pos)





#define TEMP_T1_T1_Pos (0UL)
#define TEMP_T1_T1_Msk (0xFFUL << TEMP_T1_T1_Pos)





#define TEMP_T2_T2_Pos (0UL)
#define TEMP_T2_T2_Msk (0xFFUL << TEMP_T2_T2_Pos)





#define TEMP_T3_T3_Pos (0UL)
#define TEMP_T3_T3_Msk (0xFFUL << TEMP_T3_T3_Pos)





#define TEMP_T4_T4_Pos (0UL)
#define TEMP_T4_T4_Msk (0xFFUL << TEMP_T4_T4_Pos)
# 13454 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define TIMER_TASKS_START_TASKS_START_Pos (0UL)
#define TIMER_TASKS_START_TASKS_START_Msk (0x1UL << TIMER_TASKS_START_TASKS_START_Pos)
#define TIMER_TASKS_START_TASKS_START_Trigger (1UL)





#define TIMER_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TIMER_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TIMER_TASKS_STOP_TASKS_STOP_Pos)
#define TIMER_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define TIMER_TASKS_COUNT_TASKS_COUNT_Pos (0UL)
#define TIMER_TASKS_COUNT_TASKS_COUNT_Msk (0x1UL << TIMER_TASKS_COUNT_TASKS_COUNT_Pos)
#define TIMER_TASKS_COUNT_TASKS_COUNT_Trigger (1UL)





#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL)
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos)
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Trigger (1UL)





#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos (0UL)
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Msk (0x1UL << TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos)
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Trigger (1UL)





#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos (0UL)
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Msk (0x1UL << TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos)
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Trigger (1UL)





#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL)
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos)
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0UL)
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Generated (1UL)





#define TIMER_SHORTS_COMPARE5_STOP_Pos (13UL)
#define TIMER_SHORTS_COMPARE5_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE5_STOP_Pos)
#define TIMER_SHORTS_COMPARE5_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE5_STOP_Enabled (1UL)


#define TIMER_SHORTS_COMPARE4_STOP_Pos (12UL)
#define TIMER_SHORTS_COMPARE4_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE4_STOP_Pos)
#define TIMER_SHORTS_COMPARE4_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE4_STOP_Enabled (1UL)


#define TIMER_SHORTS_COMPARE3_STOP_Pos (11UL)
#define TIMER_SHORTS_COMPARE3_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE3_STOP_Pos)
#define TIMER_SHORTS_COMPARE3_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE3_STOP_Enabled (1UL)


#define TIMER_SHORTS_COMPARE2_STOP_Pos (10UL)
#define TIMER_SHORTS_COMPARE2_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE2_STOP_Pos)
#define TIMER_SHORTS_COMPARE2_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE2_STOP_Enabled (1UL)


#define TIMER_SHORTS_COMPARE1_STOP_Pos (9UL)
#define TIMER_SHORTS_COMPARE1_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE1_STOP_Pos)
#define TIMER_SHORTS_COMPARE1_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE1_STOP_Enabled (1UL)


#define TIMER_SHORTS_COMPARE0_STOP_Pos (8UL)
#define TIMER_SHORTS_COMPARE0_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE0_STOP_Pos)
#define TIMER_SHORTS_COMPARE0_STOP_Disabled (0UL)
#define TIMER_SHORTS_COMPARE0_STOP_Enabled (1UL)


#define TIMER_SHORTS_COMPARE5_CLEAR_Pos (5UL)
#define TIMER_SHORTS_COMPARE5_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE5_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE5_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE5_CLEAR_Enabled (1UL)


#define TIMER_SHORTS_COMPARE4_CLEAR_Pos (4UL)
#define TIMER_SHORTS_COMPARE4_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE4_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE4_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE4_CLEAR_Enabled (1UL)


#define TIMER_SHORTS_COMPARE3_CLEAR_Pos (3UL)
#define TIMER_SHORTS_COMPARE3_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE3_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE3_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE3_CLEAR_Enabled (1UL)


#define TIMER_SHORTS_COMPARE2_CLEAR_Pos (2UL)
#define TIMER_SHORTS_COMPARE2_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE2_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE2_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE2_CLEAR_Enabled (1UL)


#define TIMER_SHORTS_COMPARE1_CLEAR_Pos (1UL)
#define TIMER_SHORTS_COMPARE1_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE1_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE1_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE1_CLEAR_Enabled (1UL)


#define TIMER_SHORTS_COMPARE0_CLEAR_Pos (0UL)
#define TIMER_SHORTS_COMPARE0_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE0_CLEAR_Pos)
#define TIMER_SHORTS_COMPARE0_CLEAR_Disabled (0UL)
#define TIMER_SHORTS_COMPARE0_CLEAR_Enabled (1UL)





#define TIMER_INTENSET_COMPARE5_Pos (21UL)
#define TIMER_INTENSET_COMPARE5_Msk (0x1UL << TIMER_INTENSET_COMPARE5_Pos)
#define TIMER_INTENSET_COMPARE5_Disabled (0UL)
#define TIMER_INTENSET_COMPARE5_Enabled (1UL)
#define TIMER_INTENSET_COMPARE5_Set (1UL)


#define TIMER_INTENSET_COMPARE4_Pos (20UL)
#define TIMER_INTENSET_COMPARE4_Msk (0x1UL << TIMER_INTENSET_COMPARE4_Pos)
#define TIMER_INTENSET_COMPARE4_Disabled (0UL)
#define TIMER_INTENSET_COMPARE4_Enabled (1UL)
#define TIMER_INTENSET_COMPARE4_Set (1UL)


#define TIMER_INTENSET_COMPARE3_Pos (19UL)
#define TIMER_INTENSET_COMPARE3_Msk (0x1UL << TIMER_INTENSET_COMPARE3_Pos)
#define TIMER_INTENSET_COMPARE3_Disabled (0UL)
#define TIMER_INTENSET_COMPARE3_Enabled (1UL)
#define TIMER_INTENSET_COMPARE3_Set (1UL)


#define TIMER_INTENSET_COMPARE2_Pos (18UL)
#define TIMER_INTENSET_COMPARE2_Msk (0x1UL << TIMER_INTENSET_COMPARE2_Pos)
#define TIMER_INTENSET_COMPARE2_Disabled (0UL)
#define TIMER_INTENSET_COMPARE2_Enabled (1UL)
#define TIMER_INTENSET_COMPARE2_Set (1UL)


#define TIMER_INTENSET_COMPARE1_Pos (17UL)
#define TIMER_INTENSET_COMPARE1_Msk (0x1UL << TIMER_INTENSET_COMPARE1_Pos)
#define TIMER_INTENSET_COMPARE1_Disabled (0UL)
#define TIMER_INTENSET_COMPARE1_Enabled (1UL)
#define TIMER_INTENSET_COMPARE1_Set (1UL)


#define TIMER_INTENSET_COMPARE0_Pos (16UL)
#define TIMER_INTENSET_COMPARE0_Msk (0x1UL << TIMER_INTENSET_COMPARE0_Pos)
#define TIMER_INTENSET_COMPARE0_Disabled (0UL)
#define TIMER_INTENSET_COMPARE0_Enabled (1UL)
#define TIMER_INTENSET_COMPARE0_Set (1UL)





#define TIMER_INTENCLR_COMPARE5_Pos (21UL)
#define TIMER_INTENCLR_COMPARE5_Msk (0x1UL << TIMER_INTENCLR_COMPARE5_Pos)
#define TIMER_INTENCLR_COMPARE5_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE5_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE5_Clear (1UL)


#define TIMER_INTENCLR_COMPARE4_Pos (20UL)
#define TIMER_INTENCLR_COMPARE4_Msk (0x1UL << TIMER_INTENCLR_COMPARE4_Pos)
#define TIMER_INTENCLR_COMPARE4_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE4_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE4_Clear (1UL)


#define TIMER_INTENCLR_COMPARE3_Pos (19UL)
#define TIMER_INTENCLR_COMPARE3_Msk (0x1UL << TIMER_INTENCLR_COMPARE3_Pos)
#define TIMER_INTENCLR_COMPARE3_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE3_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE3_Clear (1UL)


#define TIMER_INTENCLR_COMPARE2_Pos (18UL)
#define TIMER_INTENCLR_COMPARE2_Msk (0x1UL << TIMER_INTENCLR_COMPARE2_Pos)
#define TIMER_INTENCLR_COMPARE2_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE2_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE2_Clear (1UL)


#define TIMER_INTENCLR_COMPARE1_Pos (17UL)
#define TIMER_INTENCLR_COMPARE1_Msk (0x1UL << TIMER_INTENCLR_COMPARE1_Pos)
#define TIMER_INTENCLR_COMPARE1_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE1_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE1_Clear (1UL)


#define TIMER_INTENCLR_COMPARE0_Pos (16UL)
#define TIMER_INTENCLR_COMPARE0_Msk (0x1UL << TIMER_INTENCLR_COMPARE0_Pos)
#define TIMER_INTENCLR_COMPARE0_Disabled (0UL)
#define TIMER_INTENCLR_COMPARE0_Enabled (1UL)
#define TIMER_INTENCLR_COMPARE0_Clear (1UL)





#define TIMER_MODE_MODE_Pos (0UL)
#define TIMER_MODE_MODE_Msk (0x3UL << TIMER_MODE_MODE_Pos)
#define TIMER_MODE_MODE_Timer (0UL)
#define TIMER_MODE_MODE_Counter (1UL)
#define TIMER_MODE_MODE_LowPowerCounter (2UL)





#define TIMER_BITMODE_BITMODE_Pos (0UL)
#define TIMER_BITMODE_BITMODE_Msk (0x3UL << TIMER_BITMODE_BITMODE_Pos)
#define TIMER_BITMODE_BITMODE_16Bit (0UL)
#define TIMER_BITMODE_BITMODE_08Bit (1UL)
#define TIMER_BITMODE_BITMODE_24Bit (2UL)
#define TIMER_BITMODE_BITMODE_32Bit (3UL)





#define TIMER_PRESCALER_PRESCALER_Pos (0UL)
#define TIMER_PRESCALER_PRESCALER_Msk (0xFUL << TIMER_PRESCALER_PRESCALER_Pos)





#define TIMER_CC_CC_Pos (0UL)
#define TIMER_CC_CC_Msk (0xFFFFFFFFUL << TIMER_CC_CC_Pos)
# 13715 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define TWI_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define TWI_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << TWI_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define TWI_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL)





#define TWI_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define TWI_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << TWI_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define TWI_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)





#define TWI_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TWI_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWI_TASKS_STOP_TASKS_STOP_Pos)
#define TWI_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define TWI_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define TWI_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWI_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define TWI_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)





#define TWI_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define TWI_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWI_TASKS_RESUME_TASKS_RESUME_Pos)
#define TWI_TASKS_RESUME_TASKS_RESUME_Trigger (1UL)





#define TWI_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define TWI_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWI_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define TWI_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define TWI_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)





#define TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_Pos (0UL)
#define TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_Msk (0x1UL << TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_Pos)
#define TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_NotGenerated (0UL)
#define TWI_EVENTS_RXDREADY_EVENTS_RXDREADY_Generated (1UL)





#define TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_Pos (0UL)
#define TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_Msk (0x1UL << TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_Pos)
#define TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_NotGenerated (0UL)
#define TWI_EVENTS_TXDSENT_EVENTS_TXDSENT_Generated (1UL)





#define TWI_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define TWI_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWI_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define TWI_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define TWI_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)





#define TWI_EVENTS_BB_EVENTS_BB_Pos (0UL)
#define TWI_EVENTS_BB_EVENTS_BB_Msk (0x1UL << TWI_EVENTS_BB_EVENTS_BB_Pos)
#define TWI_EVENTS_BB_EVENTS_BB_NotGenerated (0UL)
#define TWI_EVENTS_BB_EVENTS_BB_Generated (1UL)





#define TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos (0UL)
#define TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Msk (0x1UL << TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos)
#define TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_NotGenerated (0UL)
#define TWI_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Generated (1UL)





#define TWI_SHORTS_BB_STOP_Pos (1UL)
#define TWI_SHORTS_BB_STOP_Msk (0x1UL << TWI_SHORTS_BB_STOP_Pos)
#define TWI_SHORTS_BB_STOP_Disabled (0UL)
#define TWI_SHORTS_BB_STOP_Enabled (1UL)


#define TWI_SHORTS_BB_SUSPEND_Pos (0UL)
#define TWI_SHORTS_BB_SUSPEND_Msk (0x1UL << TWI_SHORTS_BB_SUSPEND_Pos)
#define TWI_SHORTS_BB_SUSPEND_Disabled (0UL)
#define TWI_SHORTS_BB_SUSPEND_Enabled (1UL)





#define TWI_INTENSET_SUSPENDED_Pos (18UL)
#define TWI_INTENSET_SUSPENDED_Msk (0x1UL << TWI_INTENSET_SUSPENDED_Pos)
#define TWI_INTENSET_SUSPENDED_Disabled (0UL)
#define TWI_INTENSET_SUSPENDED_Enabled (1UL)
#define TWI_INTENSET_SUSPENDED_Set (1UL)


#define TWI_INTENSET_BB_Pos (14UL)
#define TWI_INTENSET_BB_Msk (0x1UL << TWI_INTENSET_BB_Pos)
#define TWI_INTENSET_BB_Disabled (0UL)
#define TWI_INTENSET_BB_Enabled (1UL)
#define TWI_INTENSET_BB_Set (1UL)


#define TWI_INTENSET_ERROR_Pos (9UL)
#define TWI_INTENSET_ERROR_Msk (0x1UL << TWI_INTENSET_ERROR_Pos)
#define TWI_INTENSET_ERROR_Disabled (0UL)
#define TWI_INTENSET_ERROR_Enabled (1UL)
#define TWI_INTENSET_ERROR_Set (1UL)


#define TWI_INTENSET_TXDSENT_Pos (7UL)
#define TWI_INTENSET_TXDSENT_Msk (0x1UL << TWI_INTENSET_TXDSENT_Pos)
#define TWI_INTENSET_TXDSENT_Disabled (0UL)
#define TWI_INTENSET_TXDSENT_Enabled (1UL)
#define TWI_INTENSET_TXDSENT_Set (1UL)


#define TWI_INTENSET_RXDREADY_Pos (2UL)
#define TWI_INTENSET_RXDREADY_Msk (0x1UL << TWI_INTENSET_RXDREADY_Pos)
#define TWI_INTENSET_RXDREADY_Disabled (0UL)
#define TWI_INTENSET_RXDREADY_Enabled (1UL)
#define TWI_INTENSET_RXDREADY_Set (1UL)


#define TWI_INTENSET_STOPPED_Pos (1UL)
#define TWI_INTENSET_STOPPED_Msk (0x1UL << TWI_INTENSET_STOPPED_Pos)
#define TWI_INTENSET_STOPPED_Disabled (0UL)
#define TWI_INTENSET_STOPPED_Enabled (1UL)
#define TWI_INTENSET_STOPPED_Set (1UL)





#define TWI_INTENCLR_SUSPENDED_Pos (18UL)
#define TWI_INTENCLR_SUSPENDED_Msk (0x1UL << TWI_INTENCLR_SUSPENDED_Pos)
#define TWI_INTENCLR_SUSPENDED_Disabled (0UL)
#define TWI_INTENCLR_SUSPENDED_Enabled (1UL)
#define TWI_INTENCLR_SUSPENDED_Clear (1UL)


#define TWI_INTENCLR_BB_Pos (14UL)
#define TWI_INTENCLR_BB_Msk (0x1UL << TWI_INTENCLR_BB_Pos)
#define TWI_INTENCLR_BB_Disabled (0UL)
#define TWI_INTENCLR_BB_Enabled (1UL)
#define TWI_INTENCLR_BB_Clear (1UL)


#define TWI_INTENCLR_ERROR_Pos (9UL)
#define TWI_INTENCLR_ERROR_Msk (0x1UL << TWI_INTENCLR_ERROR_Pos)
#define TWI_INTENCLR_ERROR_Disabled (0UL)
#define TWI_INTENCLR_ERROR_Enabled (1UL)
#define TWI_INTENCLR_ERROR_Clear (1UL)


#define TWI_INTENCLR_TXDSENT_Pos (7UL)
#define TWI_INTENCLR_TXDSENT_Msk (0x1UL << TWI_INTENCLR_TXDSENT_Pos)
#define TWI_INTENCLR_TXDSENT_Disabled (0UL)
#define TWI_INTENCLR_TXDSENT_Enabled (1UL)
#define TWI_INTENCLR_TXDSENT_Clear (1UL)


#define TWI_INTENCLR_RXDREADY_Pos (2UL)
#define TWI_INTENCLR_RXDREADY_Msk (0x1UL << TWI_INTENCLR_RXDREADY_Pos)
#define TWI_INTENCLR_RXDREADY_Disabled (0UL)
#define TWI_INTENCLR_RXDREADY_Enabled (1UL)
#define TWI_INTENCLR_RXDREADY_Clear (1UL)


#define TWI_INTENCLR_STOPPED_Pos (1UL)
#define TWI_INTENCLR_STOPPED_Msk (0x1UL << TWI_INTENCLR_STOPPED_Pos)
#define TWI_INTENCLR_STOPPED_Disabled (0UL)
#define TWI_INTENCLR_STOPPED_Enabled (1UL)
#define TWI_INTENCLR_STOPPED_Clear (1UL)





#define TWI_ERRORSRC_DNACK_Pos (2UL)
#define TWI_ERRORSRC_DNACK_Msk (0x1UL << TWI_ERRORSRC_DNACK_Pos)
#define TWI_ERRORSRC_DNACK_NotPresent (0UL)
#define TWI_ERRORSRC_DNACK_Present (1UL)


#define TWI_ERRORSRC_ANACK_Pos (1UL)
#define TWI_ERRORSRC_ANACK_Msk (0x1UL << TWI_ERRORSRC_ANACK_Pos)
#define TWI_ERRORSRC_ANACK_NotPresent (0UL)
#define TWI_ERRORSRC_ANACK_Present (1UL)


#define TWI_ERRORSRC_OVERRUN_Pos (0UL)
#define TWI_ERRORSRC_OVERRUN_Msk (0x1UL << TWI_ERRORSRC_OVERRUN_Pos)
#define TWI_ERRORSRC_OVERRUN_NotPresent (0UL)
#define TWI_ERRORSRC_OVERRUN_Present (1UL)





#define TWI_ENABLE_ENABLE_Pos (0UL)
#define TWI_ENABLE_ENABLE_Msk (0xFUL << TWI_ENABLE_ENABLE_Pos)
#define TWI_ENABLE_ENABLE_Disabled (0UL)
#define TWI_ENABLE_ENABLE_Enabled (5UL)





#define TWI_PSEL_SCL_CONNECT_Pos (31UL)
#define TWI_PSEL_SCL_CONNECT_Msk (0x1UL << TWI_PSEL_SCL_CONNECT_Pos)
#define TWI_PSEL_SCL_CONNECT_Connected (0UL)
#define TWI_PSEL_SCL_CONNECT_Disconnected (1UL)


#define TWI_PSEL_SCL_PORT_Pos (5UL)
#define TWI_PSEL_SCL_PORT_Msk (0x1UL << TWI_PSEL_SCL_PORT_Pos)


#define TWI_PSEL_SCL_PIN_Pos (0UL)
#define TWI_PSEL_SCL_PIN_Msk (0x1FUL << TWI_PSEL_SCL_PIN_Pos)





#define TWI_PSEL_SDA_CONNECT_Pos (31UL)
#define TWI_PSEL_SDA_CONNECT_Msk (0x1UL << TWI_PSEL_SDA_CONNECT_Pos)
#define TWI_PSEL_SDA_CONNECT_Connected (0UL)
#define TWI_PSEL_SDA_CONNECT_Disconnected (1UL)


#define TWI_PSEL_SDA_PORT_Pos (5UL)
#define TWI_PSEL_SDA_PORT_Msk (0x1UL << TWI_PSEL_SDA_PORT_Pos)


#define TWI_PSEL_SDA_PIN_Pos (0UL)
#define TWI_PSEL_SDA_PIN_Msk (0x1FUL << TWI_PSEL_SDA_PIN_Pos)





#define TWI_RXD_RXD_Pos (0UL)
#define TWI_RXD_RXD_Msk (0xFFUL << TWI_RXD_RXD_Pos)





#define TWI_TXD_TXD_Pos (0UL)
#define TWI_TXD_TXD_Msk (0xFFUL << TWI_TXD_TXD_Pos)





#define TWI_FREQUENCY_FREQUENCY_Pos (0UL)
#define TWI_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << TWI_FREQUENCY_FREQUENCY_Pos)
#define TWI_FREQUENCY_FREQUENCY_K100 (0x01980000UL)
#define TWI_FREQUENCY_FREQUENCY_K250 (0x04000000UL)
#define TWI_FREQUENCY_FREQUENCY_K400 (0x06680000UL)





#define TWI_ADDRESS_ADDRESS_Pos (0UL)
#define TWI_ADDRESS_ADDRESS_Msk (0x7FUL << TWI_ADDRESS_ADDRESS_Pos)
# 14013 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL)





#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)





#define TWIM_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TWIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWIM_TASKS_STOP_TASKS_STOP_Pos)
#define TWIM_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)





#define TWIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define TWIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWIM_TASKS_RESUME_TASKS_RESUME_Pos)
#define TWIM_TASKS_RESUME_TASKS_RESUME_Trigger (1UL)





#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)





#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)





#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos (0UL)
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Msk (0x1UL << TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos)
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_NotGenerated (0UL)
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Generated (1UL)





#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL)
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos)
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0UL)
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (1UL)





#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL)
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos)
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0UL)
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (1UL)





#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos (0UL)
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Msk (0x1UL << TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos)
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_NotGenerated (0UL)
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Generated (1UL)





#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos (0UL)
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Msk (0x1UL << TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos)
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_NotGenerated (0UL)
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Generated (1UL)





#define TWIM_SHORTS_LASTRX_STOP_Pos (12UL)
#define TWIM_SHORTS_LASTRX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTRX_STOP_Pos)
#define TWIM_SHORTS_LASTRX_STOP_Disabled (0UL)
#define TWIM_SHORTS_LASTRX_STOP_Enabled (1UL)


#define TWIM_SHORTS_LASTRX_SUSPEND_Pos (11UL)
#define TWIM_SHORTS_LASTRX_SUSPEND_Msk (0x1UL << TWIM_SHORTS_LASTRX_SUSPEND_Pos)
#define TWIM_SHORTS_LASTRX_SUSPEND_Disabled (0UL)
#define TWIM_SHORTS_LASTRX_SUSPEND_Enabled (1UL)


#define TWIM_SHORTS_LASTRX_STARTTX_Pos (10UL)
#define TWIM_SHORTS_LASTRX_STARTTX_Msk (0x1UL << TWIM_SHORTS_LASTRX_STARTTX_Pos)
#define TWIM_SHORTS_LASTRX_STARTTX_Disabled (0UL)
#define TWIM_SHORTS_LASTRX_STARTTX_Enabled (1UL)


#define TWIM_SHORTS_LASTTX_STOP_Pos (9UL)
#define TWIM_SHORTS_LASTTX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTTX_STOP_Pos)
#define TWIM_SHORTS_LASTTX_STOP_Disabled (0UL)
#define TWIM_SHORTS_LASTTX_STOP_Enabled (1UL)


#define TWIM_SHORTS_LASTTX_SUSPEND_Pos (8UL)
#define TWIM_SHORTS_LASTTX_SUSPEND_Msk (0x1UL << TWIM_SHORTS_LASTTX_SUSPEND_Pos)
#define TWIM_SHORTS_LASTTX_SUSPEND_Disabled (0UL)
#define TWIM_SHORTS_LASTTX_SUSPEND_Enabled (1UL)


#define TWIM_SHORTS_LASTTX_STARTRX_Pos (7UL)
#define TWIM_SHORTS_LASTTX_STARTRX_Msk (0x1UL << TWIM_SHORTS_LASTTX_STARTRX_Pos)
#define TWIM_SHORTS_LASTTX_STARTRX_Disabled (0UL)
#define TWIM_SHORTS_LASTTX_STARTRX_Enabled (1UL)





#define TWIM_INTEN_LASTTX_Pos (24UL)
#define TWIM_INTEN_LASTTX_Msk (0x1UL << TWIM_INTEN_LASTTX_Pos)
#define TWIM_INTEN_LASTTX_Disabled (0UL)
#define TWIM_INTEN_LASTTX_Enabled (1UL)


#define TWIM_INTEN_LASTRX_Pos (23UL)
#define TWIM_INTEN_LASTRX_Msk (0x1UL << TWIM_INTEN_LASTRX_Pos)
#define TWIM_INTEN_LASTRX_Disabled (0UL)
#define TWIM_INTEN_LASTRX_Enabled (1UL)


#define TWIM_INTEN_TXSTARTED_Pos (20UL)
#define TWIM_INTEN_TXSTARTED_Msk (0x1UL << TWIM_INTEN_TXSTARTED_Pos)
#define TWIM_INTEN_TXSTARTED_Disabled (0UL)
#define TWIM_INTEN_TXSTARTED_Enabled (1UL)


#define TWIM_INTEN_RXSTARTED_Pos (19UL)
#define TWIM_INTEN_RXSTARTED_Msk (0x1UL << TWIM_INTEN_RXSTARTED_Pos)
#define TWIM_INTEN_RXSTARTED_Disabled (0UL)
#define TWIM_INTEN_RXSTARTED_Enabled (1UL)


#define TWIM_INTEN_SUSPENDED_Pos (18UL)
#define TWIM_INTEN_SUSPENDED_Msk (0x1UL << TWIM_INTEN_SUSPENDED_Pos)
#define TWIM_INTEN_SUSPENDED_Disabled (0UL)
#define TWIM_INTEN_SUSPENDED_Enabled (1UL)


#define TWIM_INTEN_ERROR_Pos (9UL)
#define TWIM_INTEN_ERROR_Msk (0x1UL << TWIM_INTEN_ERROR_Pos)
#define TWIM_INTEN_ERROR_Disabled (0UL)
#define TWIM_INTEN_ERROR_Enabled (1UL)


#define TWIM_INTEN_STOPPED_Pos (1UL)
#define TWIM_INTEN_STOPPED_Msk (0x1UL << TWIM_INTEN_STOPPED_Pos)
#define TWIM_INTEN_STOPPED_Disabled (0UL)
#define TWIM_INTEN_STOPPED_Enabled (1UL)





#define TWIM_INTENSET_LASTTX_Pos (24UL)
#define TWIM_INTENSET_LASTTX_Msk (0x1UL << TWIM_INTENSET_LASTTX_Pos)
#define TWIM_INTENSET_LASTTX_Disabled (0UL)
#define TWIM_INTENSET_LASTTX_Enabled (1UL)
#define TWIM_INTENSET_LASTTX_Set (1UL)


#define TWIM_INTENSET_LASTRX_Pos (23UL)
#define TWIM_INTENSET_LASTRX_Msk (0x1UL << TWIM_INTENSET_LASTRX_Pos)
#define TWIM_INTENSET_LASTRX_Disabled (0UL)
#define TWIM_INTENSET_LASTRX_Enabled (1UL)
#define TWIM_INTENSET_LASTRX_Set (1UL)


#define TWIM_INTENSET_TXSTARTED_Pos (20UL)
#define TWIM_INTENSET_TXSTARTED_Msk (0x1UL << TWIM_INTENSET_TXSTARTED_Pos)
#define TWIM_INTENSET_TXSTARTED_Disabled (0UL)
#define TWIM_INTENSET_TXSTARTED_Enabled (1UL)
#define TWIM_INTENSET_TXSTARTED_Set (1UL)


#define TWIM_INTENSET_RXSTARTED_Pos (19UL)
#define TWIM_INTENSET_RXSTARTED_Msk (0x1UL << TWIM_INTENSET_RXSTARTED_Pos)
#define TWIM_INTENSET_RXSTARTED_Disabled (0UL)
#define TWIM_INTENSET_RXSTARTED_Enabled (1UL)
#define TWIM_INTENSET_RXSTARTED_Set (1UL)


#define TWIM_INTENSET_SUSPENDED_Pos (18UL)
#define TWIM_INTENSET_SUSPENDED_Msk (0x1UL << TWIM_INTENSET_SUSPENDED_Pos)
#define TWIM_INTENSET_SUSPENDED_Disabled (0UL)
#define TWIM_INTENSET_SUSPENDED_Enabled (1UL)
#define TWIM_INTENSET_SUSPENDED_Set (1UL)


#define TWIM_INTENSET_ERROR_Pos (9UL)
#define TWIM_INTENSET_ERROR_Msk (0x1UL << TWIM_INTENSET_ERROR_Pos)
#define TWIM_INTENSET_ERROR_Disabled (0UL)
#define TWIM_INTENSET_ERROR_Enabled (1UL)
#define TWIM_INTENSET_ERROR_Set (1UL)


#define TWIM_INTENSET_STOPPED_Pos (1UL)
#define TWIM_INTENSET_STOPPED_Msk (0x1UL << TWIM_INTENSET_STOPPED_Pos)
#define TWIM_INTENSET_STOPPED_Disabled (0UL)
#define TWIM_INTENSET_STOPPED_Enabled (1UL)
#define TWIM_INTENSET_STOPPED_Set (1UL)





#define TWIM_INTENCLR_LASTTX_Pos (24UL)
#define TWIM_INTENCLR_LASTTX_Msk (0x1UL << TWIM_INTENCLR_LASTTX_Pos)
#define TWIM_INTENCLR_LASTTX_Disabled (0UL)
#define TWIM_INTENCLR_LASTTX_Enabled (1UL)
#define TWIM_INTENCLR_LASTTX_Clear (1UL)


#define TWIM_INTENCLR_LASTRX_Pos (23UL)
#define TWIM_INTENCLR_LASTRX_Msk (0x1UL << TWIM_INTENCLR_LASTRX_Pos)
#define TWIM_INTENCLR_LASTRX_Disabled (0UL)
#define TWIM_INTENCLR_LASTRX_Enabled (1UL)
#define TWIM_INTENCLR_LASTRX_Clear (1UL)


#define TWIM_INTENCLR_TXSTARTED_Pos (20UL)
#define TWIM_INTENCLR_TXSTARTED_Msk (0x1UL << TWIM_INTENCLR_TXSTARTED_Pos)
#define TWIM_INTENCLR_TXSTARTED_Disabled (0UL)
#define TWIM_INTENCLR_TXSTARTED_Enabled (1UL)
#define TWIM_INTENCLR_TXSTARTED_Clear (1UL)


#define TWIM_INTENCLR_RXSTARTED_Pos (19UL)
#define TWIM_INTENCLR_RXSTARTED_Msk (0x1UL << TWIM_INTENCLR_RXSTARTED_Pos)
#define TWIM_INTENCLR_RXSTARTED_Disabled (0UL)
#define TWIM_INTENCLR_RXSTARTED_Enabled (1UL)
#define TWIM_INTENCLR_RXSTARTED_Clear (1UL)


#define TWIM_INTENCLR_SUSPENDED_Pos (18UL)
#define TWIM_INTENCLR_SUSPENDED_Msk (0x1UL << TWIM_INTENCLR_SUSPENDED_Pos)
#define TWIM_INTENCLR_SUSPENDED_Disabled (0UL)
#define TWIM_INTENCLR_SUSPENDED_Enabled (1UL)
#define TWIM_INTENCLR_SUSPENDED_Clear (1UL)


#define TWIM_INTENCLR_ERROR_Pos (9UL)
#define TWIM_INTENCLR_ERROR_Msk (0x1UL << TWIM_INTENCLR_ERROR_Pos)
#define TWIM_INTENCLR_ERROR_Disabled (0UL)
#define TWIM_INTENCLR_ERROR_Enabled (1UL)
#define TWIM_INTENCLR_ERROR_Clear (1UL)


#define TWIM_INTENCLR_STOPPED_Pos (1UL)
#define TWIM_INTENCLR_STOPPED_Msk (0x1UL << TWIM_INTENCLR_STOPPED_Pos)
#define TWIM_INTENCLR_STOPPED_Disabled (0UL)
#define TWIM_INTENCLR_STOPPED_Enabled (1UL)
#define TWIM_INTENCLR_STOPPED_Clear (1UL)





#define TWIM_ERRORSRC_DNACK_Pos (2UL)
#define TWIM_ERRORSRC_DNACK_Msk (0x1UL << TWIM_ERRORSRC_DNACK_Pos)
#define TWIM_ERRORSRC_DNACK_NotReceived (0UL)
#define TWIM_ERRORSRC_DNACK_Received (1UL)


#define TWIM_ERRORSRC_ANACK_Pos (1UL)
#define TWIM_ERRORSRC_ANACK_Msk (0x1UL << TWIM_ERRORSRC_ANACK_Pos)
#define TWIM_ERRORSRC_ANACK_NotReceived (0UL)
#define TWIM_ERRORSRC_ANACK_Received (1UL)


#define TWIM_ERRORSRC_OVERRUN_Pos (0UL)
#define TWIM_ERRORSRC_OVERRUN_Msk (0x1UL << TWIM_ERRORSRC_OVERRUN_Pos)
#define TWIM_ERRORSRC_OVERRUN_NotReceived (0UL)
#define TWIM_ERRORSRC_OVERRUN_Received (1UL)





#define TWIM_ENABLE_ENABLE_Pos (0UL)
#define TWIM_ENABLE_ENABLE_Msk (0xFUL << TWIM_ENABLE_ENABLE_Pos)
#define TWIM_ENABLE_ENABLE_Disabled (0UL)
#define TWIM_ENABLE_ENABLE_Enabled (6UL)





#define TWIM_PSEL_SCL_CONNECT_Pos (31UL)
#define TWIM_PSEL_SCL_CONNECT_Msk (0x1UL << TWIM_PSEL_SCL_CONNECT_Pos)
#define TWIM_PSEL_SCL_CONNECT_Connected (0UL)
#define TWIM_PSEL_SCL_CONNECT_Disconnected (1UL)


#define TWIM_PSEL_SCL_PORT_Pos (5UL)
#define TWIM_PSEL_SCL_PORT_Msk (0x1UL << TWIM_PSEL_SCL_PORT_Pos)


#define TWIM_PSEL_SCL_PIN_Pos (0UL)
#define TWIM_PSEL_SCL_PIN_Msk (0x1FUL << TWIM_PSEL_SCL_PIN_Pos)





#define TWIM_PSEL_SDA_CONNECT_Pos (31UL)
#define TWIM_PSEL_SDA_CONNECT_Msk (0x1UL << TWIM_PSEL_SDA_CONNECT_Pos)
#define TWIM_PSEL_SDA_CONNECT_Connected (0UL)
#define TWIM_PSEL_SDA_CONNECT_Disconnected (1UL)


#define TWIM_PSEL_SDA_PORT_Pos (5UL)
#define TWIM_PSEL_SDA_PORT_Msk (0x1UL << TWIM_PSEL_SDA_PORT_Pos)


#define TWIM_PSEL_SDA_PIN_Pos (0UL)
#define TWIM_PSEL_SDA_PIN_Msk (0x1FUL << TWIM_PSEL_SDA_PIN_Pos)





#define TWIM_FREQUENCY_FREQUENCY_Pos (0UL)
#define TWIM_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << TWIM_FREQUENCY_FREQUENCY_Pos)
#define TWIM_FREQUENCY_FREQUENCY_K100 (0x01980000UL)
#define TWIM_FREQUENCY_FREQUENCY_K250 (0x04000000UL)
#define TWIM_FREQUENCY_FREQUENCY_K400 (0x06400000UL)





#define TWIM_RXD_PTR_PTR_Pos (0UL)
#define TWIM_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIM_RXD_PTR_PTR_Pos)





#define TWIM_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define TWIM_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIM_RXD_MAXCNT_MAXCNT_Pos)





#define TWIM_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define TWIM_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIM_RXD_AMOUNT_AMOUNT_Pos)





#define TWIM_RXD_LIST_LIST_Pos (0UL)
#define TWIM_RXD_LIST_LIST_Msk (0x7UL << TWIM_RXD_LIST_LIST_Pos)
#define TWIM_RXD_LIST_LIST_Disabled (0UL)
#define TWIM_RXD_LIST_LIST_ArrayList (1UL)





#define TWIM_TXD_PTR_PTR_Pos (0UL)
#define TWIM_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIM_TXD_PTR_PTR_Pos)





#define TWIM_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define TWIM_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIM_TXD_MAXCNT_MAXCNT_Pos)





#define TWIM_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define TWIM_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIM_TXD_AMOUNT_AMOUNT_Pos)





#define TWIM_TXD_LIST_LIST_Pos (0UL)
#define TWIM_TXD_LIST_LIST_Msk (0x7UL << TWIM_TXD_LIST_LIST_Pos)
#define TWIM_TXD_LIST_LIST_Disabled (0UL)
#define TWIM_TXD_LIST_LIST_ArrayList (1UL)





#define TWIM_ADDRESS_ADDRESS_Pos (0UL)
#define TWIM_ADDRESS_ADDRESS_Msk (0x7FUL << TWIM_ADDRESS_ADDRESS_Pos)
# 14449 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define TWIS_TASKS_STOP_TASKS_STOP_Pos (0UL)
#define TWIS_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWIS_TASKS_STOP_TASKS_STOP_Pos)
#define TWIS_TASKS_STOP_TASKS_STOP_Trigger (1UL)





#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)





#define TWIS_TASKS_RESUME_TASKS_RESUME_Pos (0UL)
#define TWIS_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWIS_TASKS_RESUME_TASKS_RESUME_Pos)
#define TWIS_TASKS_RESUME_TASKS_RESUME_Trigger (1UL)





#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Pos (0UL)
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Msk (0x1UL << TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Pos)
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Trigger (1UL)





#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Pos (0UL)
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Msk (0x1UL << TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Pos)
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Trigger (1UL)





#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL)
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Pos)
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL)
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL)





#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWIS_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)





#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL)
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos)
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0UL)
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (1UL)





#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL)
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos)
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0UL)
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (1UL)





#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Pos (0UL)
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Msk (0x1UL << TWIS_EVENTS_WRITE_EVENTS_WRITE_Pos)
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_NotGenerated (0UL)
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Generated (1UL)





#define TWIS_EVENTS_READ_EVENTS_READ_Pos (0UL)
#define TWIS_EVENTS_READ_EVENTS_READ_Msk (0x1UL << TWIS_EVENTS_READ_EVENTS_READ_Pos)
#define TWIS_EVENTS_READ_EVENTS_READ_NotGenerated (0UL)
#define TWIS_EVENTS_READ_EVENTS_READ_Generated (1UL)





#define TWIS_SHORTS_READ_SUSPEND_Pos (14UL)
#define TWIS_SHORTS_READ_SUSPEND_Msk (0x1UL << TWIS_SHORTS_READ_SUSPEND_Pos)
#define TWIS_SHORTS_READ_SUSPEND_Disabled (0UL)
#define TWIS_SHORTS_READ_SUSPEND_Enabled (1UL)


#define TWIS_SHORTS_WRITE_SUSPEND_Pos (13UL)
#define TWIS_SHORTS_WRITE_SUSPEND_Msk (0x1UL << TWIS_SHORTS_WRITE_SUSPEND_Pos)
#define TWIS_SHORTS_WRITE_SUSPEND_Disabled (0UL)
#define TWIS_SHORTS_WRITE_SUSPEND_Enabled (1UL)





#define TWIS_INTEN_READ_Pos (26UL)
#define TWIS_INTEN_READ_Msk (0x1UL << TWIS_INTEN_READ_Pos)
#define TWIS_INTEN_READ_Disabled (0UL)
#define TWIS_INTEN_READ_Enabled (1UL)


#define TWIS_INTEN_WRITE_Pos (25UL)
#define TWIS_INTEN_WRITE_Msk (0x1UL << TWIS_INTEN_WRITE_Pos)
#define TWIS_INTEN_WRITE_Disabled (0UL)
#define TWIS_INTEN_WRITE_Enabled (1UL)


#define TWIS_INTEN_TXSTARTED_Pos (20UL)
#define TWIS_INTEN_TXSTARTED_Msk (0x1UL << TWIS_INTEN_TXSTARTED_Pos)
#define TWIS_INTEN_TXSTARTED_Disabled (0UL)
#define TWIS_INTEN_TXSTARTED_Enabled (1UL)


#define TWIS_INTEN_RXSTARTED_Pos (19UL)
#define TWIS_INTEN_RXSTARTED_Msk (0x1UL << TWIS_INTEN_RXSTARTED_Pos)
#define TWIS_INTEN_RXSTARTED_Disabled (0UL)
#define TWIS_INTEN_RXSTARTED_Enabled (1UL)


#define TWIS_INTEN_ERROR_Pos (9UL)
#define TWIS_INTEN_ERROR_Msk (0x1UL << TWIS_INTEN_ERROR_Pos)
#define TWIS_INTEN_ERROR_Disabled (0UL)
#define TWIS_INTEN_ERROR_Enabled (1UL)


#define TWIS_INTEN_STOPPED_Pos (1UL)
#define TWIS_INTEN_STOPPED_Msk (0x1UL << TWIS_INTEN_STOPPED_Pos)
#define TWIS_INTEN_STOPPED_Disabled (0UL)
#define TWIS_INTEN_STOPPED_Enabled (1UL)





#define TWIS_INTENSET_READ_Pos (26UL)
#define TWIS_INTENSET_READ_Msk (0x1UL << TWIS_INTENSET_READ_Pos)
#define TWIS_INTENSET_READ_Disabled (0UL)
#define TWIS_INTENSET_READ_Enabled (1UL)
#define TWIS_INTENSET_READ_Set (1UL)


#define TWIS_INTENSET_WRITE_Pos (25UL)
#define TWIS_INTENSET_WRITE_Msk (0x1UL << TWIS_INTENSET_WRITE_Pos)
#define TWIS_INTENSET_WRITE_Disabled (0UL)
#define TWIS_INTENSET_WRITE_Enabled (1UL)
#define TWIS_INTENSET_WRITE_Set (1UL)


#define TWIS_INTENSET_TXSTARTED_Pos (20UL)
#define TWIS_INTENSET_TXSTARTED_Msk (0x1UL << TWIS_INTENSET_TXSTARTED_Pos)
#define TWIS_INTENSET_TXSTARTED_Disabled (0UL)
#define TWIS_INTENSET_TXSTARTED_Enabled (1UL)
#define TWIS_INTENSET_TXSTARTED_Set (1UL)


#define TWIS_INTENSET_RXSTARTED_Pos (19UL)
#define TWIS_INTENSET_RXSTARTED_Msk (0x1UL << TWIS_INTENSET_RXSTARTED_Pos)
#define TWIS_INTENSET_RXSTARTED_Disabled (0UL)
#define TWIS_INTENSET_RXSTARTED_Enabled (1UL)
#define TWIS_INTENSET_RXSTARTED_Set (1UL)


#define TWIS_INTENSET_ERROR_Pos (9UL)
#define TWIS_INTENSET_ERROR_Msk (0x1UL << TWIS_INTENSET_ERROR_Pos)
#define TWIS_INTENSET_ERROR_Disabled (0UL)
#define TWIS_INTENSET_ERROR_Enabled (1UL)
#define TWIS_INTENSET_ERROR_Set (1UL)


#define TWIS_INTENSET_STOPPED_Pos (1UL)
#define TWIS_INTENSET_STOPPED_Msk (0x1UL << TWIS_INTENSET_STOPPED_Pos)
#define TWIS_INTENSET_STOPPED_Disabled (0UL)
#define TWIS_INTENSET_STOPPED_Enabled (1UL)
#define TWIS_INTENSET_STOPPED_Set (1UL)





#define TWIS_INTENCLR_READ_Pos (26UL)
#define TWIS_INTENCLR_READ_Msk (0x1UL << TWIS_INTENCLR_READ_Pos)
#define TWIS_INTENCLR_READ_Disabled (0UL)
#define TWIS_INTENCLR_READ_Enabled (1UL)
#define TWIS_INTENCLR_READ_Clear (1UL)


#define TWIS_INTENCLR_WRITE_Pos (25UL)
#define TWIS_INTENCLR_WRITE_Msk (0x1UL << TWIS_INTENCLR_WRITE_Pos)
#define TWIS_INTENCLR_WRITE_Disabled (0UL)
#define TWIS_INTENCLR_WRITE_Enabled (1UL)
#define TWIS_INTENCLR_WRITE_Clear (1UL)


#define TWIS_INTENCLR_TXSTARTED_Pos (20UL)
#define TWIS_INTENCLR_TXSTARTED_Msk (0x1UL << TWIS_INTENCLR_TXSTARTED_Pos)
#define TWIS_INTENCLR_TXSTARTED_Disabled (0UL)
#define TWIS_INTENCLR_TXSTARTED_Enabled (1UL)
#define TWIS_INTENCLR_TXSTARTED_Clear (1UL)


#define TWIS_INTENCLR_RXSTARTED_Pos (19UL)
#define TWIS_INTENCLR_RXSTARTED_Msk (0x1UL << TWIS_INTENCLR_RXSTARTED_Pos)
#define TWIS_INTENCLR_RXSTARTED_Disabled (0UL)
#define TWIS_INTENCLR_RXSTARTED_Enabled (1UL)
#define TWIS_INTENCLR_RXSTARTED_Clear (1UL)


#define TWIS_INTENCLR_ERROR_Pos (9UL)
#define TWIS_INTENCLR_ERROR_Msk (0x1UL << TWIS_INTENCLR_ERROR_Pos)
#define TWIS_INTENCLR_ERROR_Disabled (0UL)
#define TWIS_INTENCLR_ERROR_Enabled (1UL)
#define TWIS_INTENCLR_ERROR_Clear (1UL)


#define TWIS_INTENCLR_STOPPED_Pos (1UL)
#define TWIS_INTENCLR_STOPPED_Msk (0x1UL << TWIS_INTENCLR_STOPPED_Pos)
#define TWIS_INTENCLR_STOPPED_Disabled (0UL)
#define TWIS_INTENCLR_STOPPED_Enabled (1UL)
#define TWIS_INTENCLR_STOPPED_Clear (1UL)





#define TWIS_ERRORSRC_OVERREAD_Pos (3UL)
#define TWIS_ERRORSRC_OVERREAD_Msk (0x1UL << TWIS_ERRORSRC_OVERREAD_Pos)
#define TWIS_ERRORSRC_OVERREAD_NotDetected (0UL)
#define TWIS_ERRORSRC_OVERREAD_Detected (1UL)


#define TWIS_ERRORSRC_DNACK_Pos (2UL)
#define TWIS_ERRORSRC_DNACK_Msk (0x1UL << TWIS_ERRORSRC_DNACK_Pos)
#define TWIS_ERRORSRC_DNACK_NotReceived (0UL)
#define TWIS_ERRORSRC_DNACK_Received (1UL)


#define TWIS_ERRORSRC_OVERFLOW_Pos (0UL)
#define TWIS_ERRORSRC_OVERFLOW_Msk (0x1UL << TWIS_ERRORSRC_OVERFLOW_Pos)
#define TWIS_ERRORSRC_OVERFLOW_NotDetected (0UL)
#define TWIS_ERRORSRC_OVERFLOW_Detected (1UL)





#define TWIS_MATCH_MATCH_Pos (0UL)
#define TWIS_MATCH_MATCH_Msk (0x1UL << TWIS_MATCH_MATCH_Pos)





#define TWIS_ENABLE_ENABLE_Pos (0UL)
#define TWIS_ENABLE_ENABLE_Msk (0xFUL << TWIS_ENABLE_ENABLE_Pos)
#define TWIS_ENABLE_ENABLE_Disabled (0UL)
#define TWIS_ENABLE_ENABLE_Enabled (9UL)





#define TWIS_PSEL_SCL_CONNECT_Pos (31UL)
#define TWIS_PSEL_SCL_CONNECT_Msk (0x1UL << TWIS_PSEL_SCL_CONNECT_Pos)
#define TWIS_PSEL_SCL_CONNECT_Connected (0UL)
#define TWIS_PSEL_SCL_CONNECT_Disconnected (1UL)


#define TWIS_PSEL_SCL_PORT_Pos (5UL)
#define TWIS_PSEL_SCL_PORT_Msk (0x1UL << TWIS_PSEL_SCL_PORT_Pos)


#define TWIS_PSEL_SCL_PIN_Pos (0UL)
#define TWIS_PSEL_SCL_PIN_Msk (0x1FUL << TWIS_PSEL_SCL_PIN_Pos)





#define TWIS_PSEL_SDA_CONNECT_Pos (31UL)
#define TWIS_PSEL_SDA_CONNECT_Msk (0x1UL << TWIS_PSEL_SDA_CONNECT_Pos)
#define TWIS_PSEL_SDA_CONNECT_Connected (0UL)
#define TWIS_PSEL_SDA_CONNECT_Disconnected (1UL)


#define TWIS_PSEL_SDA_PORT_Pos (5UL)
#define TWIS_PSEL_SDA_PORT_Msk (0x1UL << TWIS_PSEL_SDA_PORT_Pos)


#define TWIS_PSEL_SDA_PIN_Pos (0UL)
#define TWIS_PSEL_SDA_PIN_Msk (0x1FUL << TWIS_PSEL_SDA_PIN_Pos)





#define TWIS_RXD_PTR_PTR_Pos (0UL)
#define TWIS_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIS_RXD_PTR_PTR_Pos)





#define TWIS_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define TWIS_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIS_RXD_MAXCNT_MAXCNT_Pos)





#define TWIS_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define TWIS_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIS_RXD_AMOUNT_AMOUNT_Pos)





#define TWIS_RXD_LIST_LIST_Pos (0UL)
#define TWIS_RXD_LIST_LIST_Msk (0x3UL << TWIS_RXD_LIST_LIST_Pos)
#define TWIS_RXD_LIST_LIST_Disabled (0UL)
#define TWIS_RXD_LIST_LIST_ArrayList (1UL)





#define TWIS_TXD_PTR_PTR_Pos (0UL)
#define TWIS_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIS_TXD_PTR_PTR_Pos)





#define TWIS_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define TWIS_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIS_TXD_MAXCNT_MAXCNT_Pos)





#define TWIS_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define TWIS_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIS_TXD_AMOUNT_AMOUNT_Pos)





#define TWIS_TXD_LIST_LIST_Pos (0UL)
#define TWIS_TXD_LIST_LIST_Msk (0x3UL << TWIS_TXD_LIST_LIST_Pos)
#define TWIS_TXD_LIST_LIST_Disabled (0UL)
#define TWIS_TXD_LIST_LIST_ArrayList (1UL)





#define TWIS_ADDRESS_ADDRESS_Pos (0UL)
#define TWIS_ADDRESS_ADDRESS_Msk (0x7FUL << TWIS_ADDRESS_ADDRESS_Pos)





#define TWIS_CONFIG_ADDRESS1_Pos (1UL)
#define TWIS_CONFIG_ADDRESS1_Msk (0x1UL << TWIS_CONFIG_ADDRESS1_Pos)
#define TWIS_CONFIG_ADDRESS1_Disabled (0UL)
#define TWIS_CONFIG_ADDRESS1_Enabled (1UL)


#define TWIS_CONFIG_ADDRESS0_Pos (0UL)
#define TWIS_CONFIG_ADDRESS0_Msk (0x1UL << TWIS_CONFIG_ADDRESS0_Pos)
#define TWIS_CONFIG_ADDRESS0_Disabled (0UL)
#define TWIS_CONFIG_ADDRESS0_Enabled (1UL)





#define TWIS_ORC_ORC_Pos (0UL)
#define TWIS_ORC_ORC_Msk (0xFFUL << TWIS_ORC_ORC_Pos)
# 14851 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define UART_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define UART_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << UART_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define UART_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL)





#define UART_TASKS_STOPRX_TASKS_STOPRX_Pos (0UL)
#define UART_TASKS_STOPRX_TASKS_STOPRX_Msk (0x1UL << UART_TASKS_STOPRX_TASKS_STOPRX_Pos)
#define UART_TASKS_STOPRX_TASKS_STOPRX_Trigger (1UL)





#define UART_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define UART_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << UART_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define UART_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)





#define UART_TASKS_STOPTX_TASKS_STOPTX_Pos (0UL)
#define UART_TASKS_STOPTX_TASKS_STOPTX_Msk (0x1UL << UART_TASKS_STOPTX_TASKS_STOPTX_Pos)
#define UART_TASKS_STOPTX_TASKS_STOPTX_Trigger (1UL)





#define UART_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL)
#define UART_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << UART_TASKS_SUSPEND_TASKS_SUSPEND_Pos)
#define UART_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL)





#define UART_EVENTS_CTS_EVENTS_CTS_Pos (0UL)
#define UART_EVENTS_CTS_EVENTS_CTS_Msk (0x1UL << UART_EVENTS_CTS_EVENTS_CTS_Pos)
#define UART_EVENTS_CTS_EVENTS_CTS_NotGenerated (0UL)
#define UART_EVENTS_CTS_EVENTS_CTS_Generated (1UL)





#define UART_EVENTS_NCTS_EVENTS_NCTS_Pos (0UL)
#define UART_EVENTS_NCTS_EVENTS_NCTS_Msk (0x1UL << UART_EVENTS_NCTS_EVENTS_NCTS_Pos)
#define UART_EVENTS_NCTS_EVENTS_NCTS_NotGenerated (0UL)
#define UART_EVENTS_NCTS_EVENTS_NCTS_Generated (1UL)





#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos (0UL)
#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Msk (0x1UL << UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos)
#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_NotGenerated (0UL)
#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Generated (1UL)





#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos (0UL)
#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Msk (0x1UL << UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos)
#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_NotGenerated (0UL)
#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Generated (1UL)





#define UART_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define UART_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << UART_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define UART_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define UART_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)





#define UART_EVENTS_RXTO_EVENTS_RXTO_Pos (0UL)
#define UART_EVENTS_RXTO_EVENTS_RXTO_Msk (0x1UL << UART_EVENTS_RXTO_EVENTS_RXTO_Pos)
#define UART_EVENTS_RXTO_EVENTS_RXTO_NotGenerated (0UL)
#define UART_EVENTS_RXTO_EVENTS_RXTO_Generated (1UL)





#define UART_SHORTS_NCTS_STOPRX_Pos (4UL)
#define UART_SHORTS_NCTS_STOPRX_Msk (0x1UL << UART_SHORTS_NCTS_STOPRX_Pos)
#define UART_SHORTS_NCTS_STOPRX_Disabled (0UL)
#define UART_SHORTS_NCTS_STOPRX_Enabled (1UL)


#define UART_SHORTS_CTS_STARTRX_Pos (3UL)
#define UART_SHORTS_CTS_STARTRX_Msk (0x1UL << UART_SHORTS_CTS_STARTRX_Pos)
#define UART_SHORTS_CTS_STARTRX_Disabled (0UL)
#define UART_SHORTS_CTS_STARTRX_Enabled (1UL)





#define UART_INTENSET_RXTO_Pos (17UL)
#define UART_INTENSET_RXTO_Msk (0x1UL << UART_INTENSET_RXTO_Pos)
#define UART_INTENSET_RXTO_Disabled (0UL)
#define UART_INTENSET_RXTO_Enabled (1UL)
#define UART_INTENSET_RXTO_Set (1UL)


#define UART_INTENSET_ERROR_Pos (9UL)
#define UART_INTENSET_ERROR_Msk (0x1UL << UART_INTENSET_ERROR_Pos)
#define UART_INTENSET_ERROR_Disabled (0UL)
#define UART_INTENSET_ERROR_Enabled (1UL)
#define UART_INTENSET_ERROR_Set (1UL)


#define UART_INTENSET_TXDRDY_Pos (7UL)
#define UART_INTENSET_TXDRDY_Msk (0x1UL << UART_INTENSET_TXDRDY_Pos)
#define UART_INTENSET_TXDRDY_Disabled (0UL)
#define UART_INTENSET_TXDRDY_Enabled (1UL)
#define UART_INTENSET_TXDRDY_Set (1UL)


#define UART_INTENSET_RXDRDY_Pos (2UL)
#define UART_INTENSET_RXDRDY_Msk (0x1UL << UART_INTENSET_RXDRDY_Pos)
#define UART_INTENSET_RXDRDY_Disabled (0UL)
#define UART_INTENSET_RXDRDY_Enabled (1UL)
#define UART_INTENSET_RXDRDY_Set (1UL)


#define UART_INTENSET_NCTS_Pos (1UL)
#define UART_INTENSET_NCTS_Msk (0x1UL << UART_INTENSET_NCTS_Pos)
#define UART_INTENSET_NCTS_Disabled (0UL)
#define UART_INTENSET_NCTS_Enabled (1UL)
#define UART_INTENSET_NCTS_Set (1UL)


#define UART_INTENSET_CTS_Pos (0UL)
#define UART_INTENSET_CTS_Msk (0x1UL << UART_INTENSET_CTS_Pos)
#define UART_INTENSET_CTS_Disabled (0UL)
#define UART_INTENSET_CTS_Enabled (1UL)
#define UART_INTENSET_CTS_Set (1UL)





#define UART_INTENCLR_RXTO_Pos (17UL)
#define UART_INTENCLR_RXTO_Msk (0x1UL << UART_INTENCLR_RXTO_Pos)
#define UART_INTENCLR_RXTO_Disabled (0UL)
#define UART_INTENCLR_RXTO_Enabled (1UL)
#define UART_INTENCLR_RXTO_Clear (1UL)


#define UART_INTENCLR_ERROR_Pos (9UL)
#define UART_INTENCLR_ERROR_Msk (0x1UL << UART_INTENCLR_ERROR_Pos)
#define UART_INTENCLR_ERROR_Disabled (0UL)
#define UART_INTENCLR_ERROR_Enabled (1UL)
#define UART_INTENCLR_ERROR_Clear (1UL)


#define UART_INTENCLR_TXDRDY_Pos (7UL)
#define UART_INTENCLR_TXDRDY_Msk (0x1UL << UART_INTENCLR_TXDRDY_Pos)
#define UART_INTENCLR_TXDRDY_Disabled (0UL)
#define UART_INTENCLR_TXDRDY_Enabled (1UL)
#define UART_INTENCLR_TXDRDY_Clear (1UL)


#define UART_INTENCLR_RXDRDY_Pos (2UL)
#define UART_INTENCLR_RXDRDY_Msk (0x1UL << UART_INTENCLR_RXDRDY_Pos)
#define UART_INTENCLR_RXDRDY_Disabled (0UL)
#define UART_INTENCLR_RXDRDY_Enabled (1UL)
#define UART_INTENCLR_RXDRDY_Clear (1UL)


#define UART_INTENCLR_NCTS_Pos (1UL)
#define UART_INTENCLR_NCTS_Msk (0x1UL << UART_INTENCLR_NCTS_Pos)
#define UART_INTENCLR_NCTS_Disabled (0UL)
#define UART_INTENCLR_NCTS_Enabled (1UL)
#define UART_INTENCLR_NCTS_Clear (1UL)


#define UART_INTENCLR_CTS_Pos (0UL)
#define UART_INTENCLR_CTS_Msk (0x1UL << UART_INTENCLR_CTS_Pos)
#define UART_INTENCLR_CTS_Disabled (0UL)
#define UART_INTENCLR_CTS_Enabled (1UL)
#define UART_INTENCLR_CTS_Clear (1UL)





#define UART_ERRORSRC_BREAK_Pos (3UL)
#define UART_ERRORSRC_BREAK_Msk (0x1UL << UART_ERRORSRC_BREAK_Pos)
#define UART_ERRORSRC_BREAK_NotPresent (0UL)
#define UART_ERRORSRC_BREAK_Present (1UL)


#define UART_ERRORSRC_FRAMING_Pos (2UL)
#define UART_ERRORSRC_FRAMING_Msk (0x1UL << UART_ERRORSRC_FRAMING_Pos)
#define UART_ERRORSRC_FRAMING_NotPresent (0UL)
#define UART_ERRORSRC_FRAMING_Present (1UL)


#define UART_ERRORSRC_PARITY_Pos (1UL)
#define UART_ERRORSRC_PARITY_Msk (0x1UL << UART_ERRORSRC_PARITY_Pos)
#define UART_ERRORSRC_PARITY_NotPresent (0UL)
#define UART_ERRORSRC_PARITY_Present (1UL)


#define UART_ERRORSRC_OVERRUN_Pos (0UL)
#define UART_ERRORSRC_OVERRUN_Msk (0x1UL << UART_ERRORSRC_OVERRUN_Pos)
#define UART_ERRORSRC_OVERRUN_NotPresent (0UL)
#define UART_ERRORSRC_OVERRUN_Present (1UL)





#define UART_ENABLE_ENABLE_Pos (0UL)
#define UART_ENABLE_ENABLE_Msk (0xFUL << UART_ENABLE_ENABLE_Pos)
#define UART_ENABLE_ENABLE_Disabled (0UL)
#define UART_ENABLE_ENABLE_Enabled (4UL)





#define UART_PSEL_RTS_CONNECT_Pos (31UL)
#define UART_PSEL_RTS_CONNECT_Msk (0x1UL << UART_PSEL_RTS_CONNECT_Pos)
#define UART_PSEL_RTS_CONNECT_Connected (0UL)
#define UART_PSEL_RTS_CONNECT_Disconnected (1UL)


#define UART_PSEL_RTS_PORT_Pos (5UL)
#define UART_PSEL_RTS_PORT_Msk (0x1UL << UART_PSEL_RTS_PORT_Pos)


#define UART_PSEL_RTS_PIN_Pos (0UL)
#define UART_PSEL_RTS_PIN_Msk (0x1FUL << UART_PSEL_RTS_PIN_Pos)





#define UART_PSEL_TXD_CONNECT_Pos (31UL)
#define UART_PSEL_TXD_CONNECT_Msk (0x1UL << UART_PSEL_TXD_CONNECT_Pos)
#define UART_PSEL_TXD_CONNECT_Connected (0UL)
#define UART_PSEL_TXD_CONNECT_Disconnected (1UL)


#define UART_PSEL_TXD_PORT_Pos (5UL)
#define UART_PSEL_TXD_PORT_Msk (0x1UL << UART_PSEL_TXD_PORT_Pos)


#define UART_PSEL_TXD_PIN_Pos (0UL)
#define UART_PSEL_TXD_PIN_Msk (0x1FUL << UART_PSEL_TXD_PIN_Pos)





#define UART_PSEL_CTS_CONNECT_Pos (31UL)
#define UART_PSEL_CTS_CONNECT_Msk (0x1UL << UART_PSEL_CTS_CONNECT_Pos)
#define UART_PSEL_CTS_CONNECT_Connected (0UL)
#define UART_PSEL_CTS_CONNECT_Disconnected (1UL)


#define UART_PSEL_CTS_PORT_Pos (5UL)
#define UART_PSEL_CTS_PORT_Msk (0x1UL << UART_PSEL_CTS_PORT_Pos)


#define UART_PSEL_CTS_PIN_Pos (0UL)
#define UART_PSEL_CTS_PIN_Msk (0x1FUL << UART_PSEL_CTS_PIN_Pos)





#define UART_PSEL_RXD_CONNECT_Pos (31UL)
#define UART_PSEL_RXD_CONNECT_Msk (0x1UL << UART_PSEL_RXD_CONNECT_Pos)
#define UART_PSEL_RXD_CONNECT_Connected (0UL)
#define UART_PSEL_RXD_CONNECT_Disconnected (1UL)


#define UART_PSEL_RXD_PORT_Pos (5UL)
#define UART_PSEL_RXD_PORT_Msk (0x1UL << UART_PSEL_RXD_PORT_Pos)


#define UART_PSEL_RXD_PIN_Pos (0UL)
#define UART_PSEL_RXD_PIN_Msk (0x1FUL << UART_PSEL_RXD_PIN_Pos)





#define UART_RXD_RXD_Pos (0UL)
#define UART_RXD_RXD_Msk (0xFFUL << UART_RXD_RXD_Pos)





#define UART_TXD_TXD_Pos (0UL)
#define UART_TXD_TXD_Msk (0xFFUL << UART_TXD_TXD_Pos)





#define UART_BAUDRATE_BAUDRATE_Pos (0UL)
#define UART_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UART_BAUDRATE_BAUDRATE_Pos)
#define UART_BAUDRATE_BAUDRATE_Baud1200 (0x0004F000UL)
#define UART_BAUDRATE_BAUDRATE_Baud2400 (0x0009D000UL)
#define UART_BAUDRATE_BAUDRATE_Baud4800 (0x0013B000UL)
#define UART_BAUDRATE_BAUDRATE_Baud9600 (0x00275000UL)
#define UART_BAUDRATE_BAUDRATE_Baud14400 (0x003B0000UL)
#define UART_BAUDRATE_BAUDRATE_Baud19200 (0x004EA000UL)
#define UART_BAUDRATE_BAUDRATE_Baud28800 (0x0075F000UL)
#define UART_BAUDRATE_BAUDRATE_Baud31250 (0x00800000UL)
#define UART_BAUDRATE_BAUDRATE_Baud38400 (0x009D5000UL)
#define UART_BAUDRATE_BAUDRATE_Baud56000 (0x00E50000UL)
#define UART_BAUDRATE_BAUDRATE_Baud57600 (0x00EBF000UL)
#define UART_BAUDRATE_BAUDRATE_Baud76800 (0x013A9000UL)
#define UART_BAUDRATE_BAUDRATE_Baud115200 (0x01D7E000UL)
#define UART_BAUDRATE_BAUDRATE_Baud230400 (0x03AFB000UL)
#define UART_BAUDRATE_BAUDRATE_Baud250000 (0x04000000UL)
#define UART_BAUDRATE_BAUDRATE_Baud460800 (0x075F7000UL)
#define UART_BAUDRATE_BAUDRATE_Baud921600 (0x0EBED000UL)
#define UART_BAUDRATE_BAUDRATE_Baud1M (0x10000000UL)





#define UART_CONFIG_STOP_Pos (4UL)
#define UART_CONFIG_STOP_Msk (0x1UL << UART_CONFIG_STOP_Pos)
#define UART_CONFIG_STOP_One (0UL)
#define UART_CONFIG_STOP_Two (1UL)


#define UART_CONFIG_PARITY_Pos (1UL)
#define UART_CONFIG_PARITY_Msk (0x7UL << UART_CONFIG_PARITY_Pos)
#define UART_CONFIG_PARITY_Excluded (0x0UL)
#define UART_CONFIG_PARITY_Included (0x7UL)


#define UART_CONFIG_HWFC_Pos (0UL)
#define UART_CONFIG_HWFC_Msk (0x1UL << UART_CONFIG_HWFC_Pos)
#define UART_CONFIG_HWFC_Disabled (0UL)
#define UART_CONFIG_HWFC_Enabled (1UL)
# 15218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL)
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos)
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL)





#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos (0UL)
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Msk (0x1UL << UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos)
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Trigger (1UL)





#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL)
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos)
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL)





#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos (0UL)
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Msk (0x1UL << UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos)
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Trigger (1UL)





#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos (0UL)
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Msk (0x1UL << UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos)
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Trigger (1UL)





#define UARTE_EVENTS_CTS_EVENTS_CTS_Pos (0UL)
#define UARTE_EVENTS_CTS_EVENTS_CTS_Msk (0x1UL << UARTE_EVENTS_CTS_EVENTS_CTS_Pos)
#define UARTE_EVENTS_CTS_EVENTS_CTS_NotGenerated (0UL)
#define UARTE_EVENTS_CTS_EVENTS_CTS_Generated (1UL)





#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos (0UL)
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Msk (0x1UL << UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos)
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_NotGenerated (0UL)
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Generated (1UL)





#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos (0UL)
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Msk (0x1UL << UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos)
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_NotGenerated (0UL)
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Generated (1UL)





#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL)
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos)
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL)
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL)





#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos (0UL)
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Msk (0x1UL << UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos)
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_NotGenerated (0UL)
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Generated (1UL)





#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL)
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos)
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0UL)
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Generated (1UL)





#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL)
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos)
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL)
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL)





#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos (0UL)
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Msk (0x1UL << UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos)
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_NotGenerated (0UL)
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Generated (1UL)





#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL)
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos)
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0UL)
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (1UL)





#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL)
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos)
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0UL)
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (1UL)





#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos (0UL)
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Msk (0x1UL << UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos)
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_NotGenerated (0UL)
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Generated (1UL)





#define UARTE_SHORTS_ENDRX_STOPRX_Pos (6UL)
#define UARTE_SHORTS_ENDRX_STOPRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STOPRX_Pos)
#define UARTE_SHORTS_ENDRX_STOPRX_Disabled (0UL)
#define UARTE_SHORTS_ENDRX_STOPRX_Enabled (1UL)


#define UARTE_SHORTS_ENDRX_STARTRX_Pos (5UL)
#define UARTE_SHORTS_ENDRX_STARTRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STARTRX_Pos)
#define UARTE_SHORTS_ENDRX_STARTRX_Disabled (0UL)
#define UARTE_SHORTS_ENDRX_STARTRX_Enabled (1UL)





#define UARTE_INTEN_TXSTOPPED_Pos (22UL)
#define UARTE_INTEN_TXSTOPPED_Msk (0x1UL << UARTE_INTEN_TXSTOPPED_Pos)
#define UARTE_INTEN_TXSTOPPED_Disabled (0UL)
#define UARTE_INTEN_TXSTOPPED_Enabled (1UL)


#define UARTE_INTEN_TXSTARTED_Pos (20UL)
#define UARTE_INTEN_TXSTARTED_Msk (0x1UL << UARTE_INTEN_TXSTARTED_Pos)
#define UARTE_INTEN_TXSTARTED_Disabled (0UL)
#define UARTE_INTEN_TXSTARTED_Enabled (1UL)


#define UARTE_INTEN_RXSTARTED_Pos (19UL)
#define UARTE_INTEN_RXSTARTED_Msk (0x1UL << UARTE_INTEN_RXSTARTED_Pos)
#define UARTE_INTEN_RXSTARTED_Disabled (0UL)
#define UARTE_INTEN_RXSTARTED_Enabled (1UL)


#define UARTE_INTEN_RXTO_Pos (17UL)
#define UARTE_INTEN_RXTO_Msk (0x1UL << UARTE_INTEN_RXTO_Pos)
#define UARTE_INTEN_RXTO_Disabled (0UL)
#define UARTE_INTEN_RXTO_Enabled (1UL)


#define UARTE_INTEN_ERROR_Pos (9UL)
#define UARTE_INTEN_ERROR_Msk (0x1UL << UARTE_INTEN_ERROR_Pos)
#define UARTE_INTEN_ERROR_Disabled (0UL)
#define UARTE_INTEN_ERROR_Enabled (1UL)


#define UARTE_INTEN_ENDTX_Pos (8UL)
#define UARTE_INTEN_ENDTX_Msk (0x1UL << UARTE_INTEN_ENDTX_Pos)
#define UARTE_INTEN_ENDTX_Disabled (0UL)
#define UARTE_INTEN_ENDTX_Enabled (1UL)


#define UARTE_INTEN_TXDRDY_Pos (7UL)
#define UARTE_INTEN_TXDRDY_Msk (0x1UL << UARTE_INTEN_TXDRDY_Pos)
#define UARTE_INTEN_TXDRDY_Disabled (0UL)
#define UARTE_INTEN_TXDRDY_Enabled (1UL)


#define UARTE_INTEN_ENDRX_Pos (4UL)
#define UARTE_INTEN_ENDRX_Msk (0x1UL << UARTE_INTEN_ENDRX_Pos)
#define UARTE_INTEN_ENDRX_Disabled (0UL)
#define UARTE_INTEN_ENDRX_Enabled (1UL)


#define UARTE_INTEN_RXDRDY_Pos (2UL)
#define UARTE_INTEN_RXDRDY_Msk (0x1UL << UARTE_INTEN_RXDRDY_Pos)
#define UARTE_INTEN_RXDRDY_Disabled (0UL)
#define UARTE_INTEN_RXDRDY_Enabled (1UL)


#define UARTE_INTEN_NCTS_Pos (1UL)
#define UARTE_INTEN_NCTS_Msk (0x1UL << UARTE_INTEN_NCTS_Pos)
#define UARTE_INTEN_NCTS_Disabled (0UL)
#define UARTE_INTEN_NCTS_Enabled (1UL)


#define UARTE_INTEN_CTS_Pos (0UL)
#define UARTE_INTEN_CTS_Msk (0x1UL << UARTE_INTEN_CTS_Pos)
#define UARTE_INTEN_CTS_Disabled (0UL)
#define UARTE_INTEN_CTS_Enabled (1UL)





#define UARTE_INTENSET_TXSTOPPED_Pos (22UL)
#define UARTE_INTENSET_TXSTOPPED_Msk (0x1UL << UARTE_INTENSET_TXSTOPPED_Pos)
#define UARTE_INTENSET_TXSTOPPED_Disabled (0UL)
#define UARTE_INTENSET_TXSTOPPED_Enabled (1UL)
#define UARTE_INTENSET_TXSTOPPED_Set (1UL)


#define UARTE_INTENSET_TXSTARTED_Pos (20UL)
#define UARTE_INTENSET_TXSTARTED_Msk (0x1UL << UARTE_INTENSET_TXSTARTED_Pos)
#define UARTE_INTENSET_TXSTARTED_Disabled (0UL)
#define UARTE_INTENSET_TXSTARTED_Enabled (1UL)
#define UARTE_INTENSET_TXSTARTED_Set (1UL)


#define UARTE_INTENSET_RXSTARTED_Pos (19UL)
#define UARTE_INTENSET_RXSTARTED_Msk (0x1UL << UARTE_INTENSET_RXSTARTED_Pos)
#define UARTE_INTENSET_RXSTARTED_Disabled (0UL)
#define UARTE_INTENSET_RXSTARTED_Enabled (1UL)
#define UARTE_INTENSET_RXSTARTED_Set (1UL)


#define UARTE_INTENSET_RXTO_Pos (17UL)
#define UARTE_INTENSET_RXTO_Msk (0x1UL << UARTE_INTENSET_RXTO_Pos)
#define UARTE_INTENSET_RXTO_Disabled (0UL)
#define UARTE_INTENSET_RXTO_Enabled (1UL)
#define UARTE_INTENSET_RXTO_Set (1UL)


#define UARTE_INTENSET_ERROR_Pos (9UL)
#define UARTE_INTENSET_ERROR_Msk (0x1UL << UARTE_INTENSET_ERROR_Pos)
#define UARTE_INTENSET_ERROR_Disabled (0UL)
#define UARTE_INTENSET_ERROR_Enabled (1UL)
#define UARTE_INTENSET_ERROR_Set (1UL)


#define UARTE_INTENSET_ENDTX_Pos (8UL)
#define UARTE_INTENSET_ENDTX_Msk (0x1UL << UARTE_INTENSET_ENDTX_Pos)
#define UARTE_INTENSET_ENDTX_Disabled (0UL)
#define UARTE_INTENSET_ENDTX_Enabled (1UL)
#define UARTE_INTENSET_ENDTX_Set (1UL)


#define UARTE_INTENSET_TXDRDY_Pos (7UL)
#define UARTE_INTENSET_TXDRDY_Msk (0x1UL << UARTE_INTENSET_TXDRDY_Pos)
#define UARTE_INTENSET_TXDRDY_Disabled (0UL)
#define UARTE_INTENSET_TXDRDY_Enabled (1UL)
#define UARTE_INTENSET_TXDRDY_Set (1UL)


#define UARTE_INTENSET_ENDRX_Pos (4UL)
#define UARTE_INTENSET_ENDRX_Msk (0x1UL << UARTE_INTENSET_ENDRX_Pos)
#define UARTE_INTENSET_ENDRX_Disabled (0UL)
#define UARTE_INTENSET_ENDRX_Enabled (1UL)
#define UARTE_INTENSET_ENDRX_Set (1UL)


#define UARTE_INTENSET_RXDRDY_Pos (2UL)
#define UARTE_INTENSET_RXDRDY_Msk (0x1UL << UARTE_INTENSET_RXDRDY_Pos)
#define UARTE_INTENSET_RXDRDY_Disabled (0UL)
#define UARTE_INTENSET_RXDRDY_Enabled (1UL)
#define UARTE_INTENSET_RXDRDY_Set (1UL)


#define UARTE_INTENSET_NCTS_Pos (1UL)
#define UARTE_INTENSET_NCTS_Msk (0x1UL << UARTE_INTENSET_NCTS_Pos)
#define UARTE_INTENSET_NCTS_Disabled (0UL)
#define UARTE_INTENSET_NCTS_Enabled (1UL)
#define UARTE_INTENSET_NCTS_Set (1UL)


#define UARTE_INTENSET_CTS_Pos (0UL)
#define UARTE_INTENSET_CTS_Msk (0x1UL << UARTE_INTENSET_CTS_Pos)
#define UARTE_INTENSET_CTS_Disabled (0UL)
#define UARTE_INTENSET_CTS_Enabled (1UL)
#define UARTE_INTENSET_CTS_Set (1UL)





#define UARTE_INTENCLR_TXSTOPPED_Pos (22UL)
#define UARTE_INTENCLR_TXSTOPPED_Msk (0x1UL << UARTE_INTENCLR_TXSTOPPED_Pos)
#define UARTE_INTENCLR_TXSTOPPED_Disabled (0UL)
#define UARTE_INTENCLR_TXSTOPPED_Enabled (1UL)
#define UARTE_INTENCLR_TXSTOPPED_Clear (1UL)


#define UARTE_INTENCLR_TXSTARTED_Pos (20UL)
#define UARTE_INTENCLR_TXSTARTED_Msk (0x1UL << UARTE_INTENCLR_TXSTARTED_Pos)
#define UARTE_INTENCLR_TXSTARTED_Disabled (0UL)
#define UARTE_INTENCLR_TXSTARTED_Enabled (1UL)
#define UARTE_INTENCLR_TXSTARTED_Clear (1UL)


#define UARTE_INTENCLR_RXSTARTED_Pos (19UL)
#define UARTE_INTENCLR_RXSTARTED_Msk (0x1UL << UARTE_INTENCLR_RXSTARTED_Pos)
#define UARTE_INTENCLR_RXSTARTED_Disabled (0UL)
#define UARTE_INTENCLR_RXSTARTED_Enabled (1UL)
#define UARTE_INTENCLR_RXSTARTED_Clear (1UL)


#define UARTE_INTENCLR_RXTO_Pos (17UL)
#define UARTE_INTENCLR_RXTO_Msk (0x1UL << UARTE_INTENCLR_RXTO_Pos)
#define UARTE_INTENCLR_RXTO_Disabled (0UL)
#define UARTE_INTENCLR_RXTO_Enabled (1UL)
#define UARTE_INTENCLR_RXTO_Clear (1UL)


#define UARTE_INTENCLR_ERROR_Pos (9UL)
#define UARTE_INTENCLR_ERROR_Msk (0x1UL << UARTE_INTENCLR_ERROR_Pos)
#define UARTE_INTENCLR_ERROR_Disabled (0UL)
#define UARTE_INTENCLR_ERROR_Enabled (1UL)
#define UARTE_INTENCLR_ERROR_Clear (1UL)


#define UARTE_INTENCLR_ENDTX_Pos (8UL)
#define UARTE_INTENCLR_ENDTX_Msk (0x1UL << UARTE_INTENCLR_ENDTX_Pos)
#define UARTE_INTENCLR_ENDTX_Disabled (0UL)
#define UARTE_INTENCLR_ENDTX_Enabled (1UL)
#define UARTE_INTENCLR_ENDTX_Clear (1UL)


#define UARTE_INTENCLR_TXDRDY_Pos (7UL)
#define UARTE_INTENCLR_TXDRDY_Msk (0x1UL << UARTE_INTENCLR_TXDRDY_Pos)
#define UARTE_INTENCLR_TXDRDY_Disabled (0UL)
#define UARTE_INTENCLR_TXDRDY_Enabled (1UL)
#define UARTE_INTENCLR_TXDRDY_Clear (1UL)


#define UARTE_INTENCLR_ENDRX_Pos (4UL)
#define UARTE_INTENCLR_ENDRX_Msk (0x1UL << UARTE_INTENCLR_ENDRX_Pos)
#define UARTE_INTENCLR_ENDRX_Disabled (0UL)
#define UARTE_INTENCLR_ENDRX_Enabled (1UL)
#define UARTE_INTENCLR_ENDRX_Clear (1UL)


#define UARTE_INTENCLR_RXDRDY_Pos (2UL)
#define UARTE_INTENCLR_RXDRDY_Msk (0x1UL << UARTE_INTENCLR_RXDRDY_Pos)
#define UARTE_INTENCLR_RXDRDY_Disabled (0UL)
#define UARTE_INTENCLR_RXDRDY_Enabled (1UL)
#define UARTE_INTENCLR_RXDRDY_Clear (1UL)


#define UARTE_INTENCLR_NCTS_Pos (1UL)
#define UARTE_INTENCLR_NCTS_Msk (0x1UL << UARTE_INTENCLR_NCTS_Pos)
#define UARTE_INTENCLR_NCTS_Disabled (0UL)
#define UARTE_INTENCLR_NCTS_Enabled (1UL)
#define UARTE_INTENCLR_NCTS_Clear (1UL)


#define UARTE_INTENCLR_CTS_Pos (0UL)
#define UARTE_INTENCLR_CTS_Msk (0x1UL << UARTE_INTENCLR_CTS_Pos)
#define UARTE_INTENCLR_CTS_Disabled (0UL)
#define UARTE_INTENCLR_CTS_Enabled (1UL)
#define UARTE_INTENCLR_CTS_Clear (1UL)





#define UARTE_ERRORSRC_BREAK_Pos (3UL)
#define UARTE_ERRORSRC_BREAK_Msk (0x1UL << UARTE_ERRORSRC_BREAK_Pos)
#define UARTE_ERRORSRC_BREAK_NotPresent (0UL)
#define UARTE_ERRORSRC_BREAK_Present (1UL)


#define UARTE_ERRORSRC_FRAMING_Pos (2UL)
#define UARTE_ERRORSRC_FRAMING_Msk (0x1UL << UARTE_ERRORSRC_FRAMING_Pos)
#define UARTE_ERRORSRC_FRAMING_NotPresent (0UL)
#define UARTE_ERRORSRC_FRAMING_Present (1UL)


#define UARTE_ERRORSRC_PARITY_Pos (1UL)
#define UARTE_ERRORSRC_PARITY_Msk (0x1UL << UARTE_ERRORSRC_PARITY_Pos)
#define UARTE_ERRORSRC_PARITY_NotPresent (0UL)
#define UARTE_ERRORSRC_PARITY_Present (1UL)


#define UARTE_ERRORSRC_OVERRUN_Pos (0UL)
#define UARTE_ERRORSRC_OVERRUN_Msk (0x1UL << UARTE_ERRORSRC_OVERRUN_Pos)
#define UARTE_ERRORSRC_OVERRUN_NotPresent (0UL)
#define UARTE_ERRORSRC_OVERRUN_Present (1UL)





#define UARTE_ENABLE_ENABLE_Pos (0UL)
#define UARTE_ENABLE_ENABLE_Msk (0xFUL << UARTE_ENABLE_ENABLE_Pos)
#define UARTE_ENABLE_ENABLE_Disabled (0UL)
#define UARTE_ENABLE_ENABLE_Enabled (8UL)





#define UARTE_PSEL_RTS_CONNECT_Pos (31UL)
#define UARTE_PSEL_RTS_CONNECT_Msk (0x1UL << UARTE_PSEL_RTS_CONNECT_Pos)
#define UARTE_PSEL_RTS_CONNECT_Connected (0UL)
#define UARTE_PSEL_RTS_CONNECT_Disconnected (1UL)


#define UARTE_PSEL_RTS_PORT_Pos (5UL)
#define UARTE_PSEL_RTS_PORT_Msk (0x1UL << UARTE_PSEL_RTS_PORT_Pos)


#define UARTE_PSEL_RTS_PIN_Pos (0UL)
#define UARTE_PSEL_RTS_PIN_Msk (0x1FUL << UARTE_PSEL_RTS_PIN_Pos)





#define UARTE_PSEL_TXD_CONNECT_Pos (31UL)
#define UARTE_PSEL_TXD_CONNECT_Msk (0x1UL << UARTE_PSEL_TXD_CONNECT_Pos)
#define UARTE_PSEL_TXD_CONNECT_Connected (0UL)
#define UARTE_PSEL_TXD_CONNECT_Disconnected (1UL)


#define UARTE_PSEL_TXD_PORT_Pos (5UL)
#define UARTE_PSEL_TXD_PORT_Msk (0x1UL << UARTE_PSEL_TXD_PORT_Pos)


#define UARTE_PSEL_TXD_PIN_Pos (0UL)
#define UARTE_PSEL_TXD_PIN_Msk (0x1FUL << UARTE_PSEL_TXD_PIN_Pos)





#define UARTE_PSEL_CTS_CONNECT_Pos (31UL)
#define UARTE_PSEL_CTS_CONNECT_Msk (0x1UL << UARTE_PSEL_CTS_CONNECT_Pos)
#define UARTE_PSEL_CTS_CONNECT_Connected (0UL)
#define UARTE_PSEL_CTS_CONNECT_Disconnected (1UL)


#define UARTE_PSEL_CTS_PORT_Pos (5UL)
#define UARTE_PSEL_CTS_PORT_Msk (0x1UL << UARTE_PSEL_CTS_PORT_Pos)


#define UARTE_PSEL_CTS_PIN_Pos (0UL)
#define UARTE_PSEL_CTS_PIN_Msk (0x1FUL << UARTE_PSEL_CTS_PIN_Pos)





#define UARTE_PSEL_RXD_CONNECT_Pos (31UL)
#define UARTE_PSEL_RXD_CONNECT_Msk (0x1UL << UARTE_PSEL_RXD_CONNECT_Pos)
#define UARTE_PSEL_RXD_CONNECT_Connected (0UL)
#define UARTE_PSEL_RXD_CONNECT_Disconnected (1UL)


#define UARTE_PSEL_RXD_PORT_Pos (5UL)
#define UARTE_PSEL_RXD_PORT_Msk (0x1UL << UARTE_PSEL_RXD_PORT_Pos)


#define UARTE_PSEL_RXD_PIN_Pos (0UL)
#define UARTE_PSEL_RXD_PIN_Msk (0x1FUL << UARTE_PSEL_RXD_PIN_Pos)





#define UARTE_BAUDRATE_BAUDRATE_Pos (0UL)
#define UARTE_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UARTE_BAUDRATE_BAUDRATE_Pos)
#define UARTE_BAUDRATE_BAUDRATE_Baud1200 (0x0004F000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud2400 (0x0009D000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud4800 (0x0013B000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud9600 (0x00275000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud14400 (0x003AF000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud19200 (0x004EA000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud28800 (0x0075C000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud31250 (0x00800000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud38400 (0x009D0000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud56000 (0x00E50000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud57600 (0x00EB0000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud76800 (0x013A9000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud115200 (0x01D60000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud230400 (0x03B00000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud250000 (0x04000000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud460800 (0x07400000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud921600 (0x0F000000UL)
#define UARTE_BAUDRATE_BAUDRATE_Baud1M (0x10000000UL)





#define UARTE_RXD_PTR_PTR_Pos (0UL)
#define UARTE_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_RXD_PTR_PTR_Pos)





#define UARTE_RXD_MAXCNT_MAXCNT_Pos (0UL)
#define UARTE_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << UARTE_RXD_MAXCNT_MAXCNT_Pos)





#define UARTE_RXD_AMOUNT_AMOUNT_Pos (0UL)
#define UARTE_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << UARTE_RXD_AMOUNT_AMOUNT_Pos)





#define UARTE_TXD_PTR_PTR_Pos (0UL)
#define UARTE_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_TXD_PTR_PTR_Pos)





#define UARTE_TXD_MAXCNT_MAXCNT_Pos (0UL)
#define UARTE_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << UARTE_TXD_MAXCNT_MAXCNT_Pos)





#define UARTE_TXD_AMOUNT_AMOUNT_Pos (0UL)
#define UARTE_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << UARTE_TXD_AMOUNT_AMOUNT_Pos)





#define UARTE_CONFIG_STOP_Pos (4UL)
#define UARTE_CONFIG_STOP_Msk (0x1UL << UARTE_CONFIG_STOP_Pos)
#define UARTE_CONFIG_STOP_One (0UL)
#define UARTE_CONFIG_STOP_Two (1UL)


#define UARTE_CONFIG_PARITY_Pos (1UL)
#define UARTE_CONFIG_PARITY_Msk (0x7UL << UARTE_CONFIG_PARITY_Pos)
#define UARTE_CONFIG_PARITY_Excluded (0x0UL)
#define UARTE_CONFIG_PARITY_Included (0x7UL)


#define UARTE_CONFIG_HWFC_Pos (0UL)
#define UARTE_CONFIG_HWFC_Msk (0x1UL << UARTE_CONFIG_HWFC_Pos)
#define UARTE_CONFIG_HWFC_Disabled (0UL)
#define UARTE_CONFIG_HWFC_Enabled (1UL)
# 15797 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define UICR_NRFFW_NRFFW_Pos (0UL)
#define UICR_NRFFW_NRFFW_Msk (0xFFFFFFFFUL << UICR_NRFFW_NRFFW_Pos)





#define UICR_NRFHW_NRFHW_Pos (0UL)
#define UICR_NRFHW_NRFHW_Msk (0xFFFFFFFFUL << UICR_NRFHW_NRFHW_Pos)





#define UICR_CUSTOMER_CUSTOMER_Pos (0UL)
#define UICR_CUSTOMER_CUSTOMER_Msk (0xFFFFFFFFUL << UICR_CUSTOMER_CUSTOMER_Pos)





#define UICR_PSELRESET_CONNECT_Pos (31UL)
#define UICR_PSELRESET_CONNECT_Msk (0x1UL << UICR_PSELRESET_CONNECT_Pos)
#define UICR_PSELRESET_CONNECT_Connected (0UL)
#define UICR_PSELRESET_CONNECT_Disconnected (1UL)


#define UICR_PSELRESET_PORT_Pos (5UL)
#define UICR_PSELRESET_PORT_Msk (0x1UL << UICR_PSELRESET_PORT_Pos)


#define UICR_PSELRESET_PIN_Pos (0UL)
#define UICR_PSELRESET_PIN_Msk (0x1FUL << UICR_PSELRESET_PIN_Pos)





#define UICR_APPROTECT_PALL_Pos (0UL)
#define UICR_APPROTECT_PALL_Msk (0xFFUL << UICR_APPROTECT_PALL_Pos)
#define UICR_APPROTECT_PALL_Enabled (0x00UL)
#define UICR_APPROTECT_PALL_Disabled (0xFFUL)





#define UICR_NFCPINS_PROTECT_Pos (0UL)
#define UICR_NFCPINS_PROTECT_Msk (0x1UL << UICR_NFCPINS_PROTECT_Pos)
#define UICR_NFCPINS_PROTECT_Disabled (0UL)
#define UICR_NFCPINS_PROTECT_NFC (1UL)





#define UICR_DEBUGCTRL_CPUFPBEN_Pos (8UL)
#define UICR_DEBUGCTRL_CPUFPBEN_Msk (0xFFUL << UICR_DEBUGCTRL_CPUFPBEN_Pos)
#define UICR_DEBUGCTRL_CPUFPBEN_Disabled (0x00UL)
#define UICR_DEBUGCTRL_CPUFPBEN_Enabled (0xFFUL)


#define UICR_DEBUGCTRL_CPUNIDEN_Pos (0UL)
#define UICR_DEBUGCTRL_CPUNIDEN_Msk (0xFFUL << UICR_DEBUGCTRL_CPUNIDEN_Pos)
#define UICR_DEBUGCTRL_CPUNIDEN_Disabled (0x00UL)
#define UICR_DEBUGCTRL_CPUNIDEN_Enabled (0xFFUL)





#define UICR_REGOUT0_VOUT_Pos (0UL)
#define UICR_REGOUT0_VOUT_Msk (0x7UL << UICR_REGOUT0_VOUT_Pos)
#define UICR_REGOUT0_VOUT_1V8 (0UL)
#define UICR_REGOUT0_VOUT_2V1 (1UL)
#define UICR_REGOUT0_VOUT_2V4 (2UL)
#define UICR_REGOUT0_VOUT_2V7 (3UL)
#define UICR_REGOUT0_VOUT_3V0 (4UL)
#define UICR_REGOUT0_VOUT_3V3 (5UL)
#define UICR_REGOUT0_VOUT_DEFAULT (7UL)
# 15886 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Pos (0UL)
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Msk (0x1UL << USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Pos)
#define USBD_TASKS_STARTEPIN_TASKS_STARTEPIN_Trigger (1UL)





#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Pos (0UL)
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Msk (0x1UL << USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Pos)
#define USBD_TASKS_STARTISOIN_TASKS_STARTISOIN_Trigger (1UL)





#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Pos (0UL)
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Msk (0x1UL << USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Pos)
#define USBD_TASKS_STARTEPOUT_TASKS_STARTEPOUT_Trigger (1UL)





#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Pos (0UL)
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Msk (0x1UL << USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Pos)
#define USBD_TASKS_STARTISOOUT_TASKS_STARTISOOUT_Trigger (1UL)





#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Pos (0UL)
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Msk (0x1UL << USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Pos)
#define USBD_TASKS_EP0RCVOUT_TASKS_EP0RCVOUT_Trigger (1UL)





#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Pos (0UL)
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Msk (0x1UL << USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Pos)
#define USBD_TASKS_EP0STATUS_TASKS_EP0STATUS_Trigger (1UL)





#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Pos (0UL)
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Msk (0x1UL << USBD_TASKS_EP0STALL_TASKS_EP0STALL_Pos)
#define USBD_TASKS_EP0STALL_TASKS_EP0STALL_Trigger (1UL)





#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Pos (0UL)
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Msk (0x1UL << USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Pos)
#define USBD_TASKS_DPDMDRIVE_TASKS_DPDMDRIVE_Trigger (1UL)





#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Pos (0UL)
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Msk (0x1UL << USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Pos)
#define USBD_TASKS_DPDMNODRIVE_TASKS_DPDMNODRIVE_Trigger (1UL)





#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Pos (0UL)
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Msk (0x1UL << USBD_EVENTS_USBRESET_EVENTS_USBRESET_Pos)
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_NotGenerated (0UL)
#define USBD_EVENTS_USBRESET_EVENTS_USBRESET_Generated (1UL)





#define USBD_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL)
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << USBD_EVENTS_STARTED_EVENTS_STARTED_Pos)
#define USBD_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL)
#define USBD_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL)





#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Pos (0UL)
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Msk (0x1UL << USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Pos)
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_NotGenerated (0UL)
#define USBD_EVENTS_ENDEPIN_EVENTS_ENDEPIN_Generated (1UL)





#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Pos (0UL)
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Msk (0x1UL << USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Pos)
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_NotGenerated (0UL)
#define USBD_EVENTS_EP0DATADONE_EVENTS_EP0DATADONE_Generated (1UL)





#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Pos (0UL)
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Msk (0x1UL << USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Pos)
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_NotGenerated (0UL)
#define USBD_EVENTS_ENDISOIN_EVENTS_ENDISOIN_Generated (1UL)





#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Pos (0UL)
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Msk (0x1UL << USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Pos)
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_NotGenerated (0UL)
#define USBD_EVENTS_ENDEPOUT_EVENTS_ENDEPOUT_Generated (1UL)





#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Pos (0UL)
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Msk (0x1UL << USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Pos)
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_NotGenerated (0UL)
#define USBD_EVENTS_ENDISOOUT_EVENTS_ENDISOOUT_Generated (1UL)





#define USBD_EVENTS_SOF_EVENTS_SOF_Pos (0UL)
#define USBD_EVENTS_SOF_EVENTS_SOF_Msk (0x1UL << USBD_EVENTS_SOF_EVENTS_SOF_Pos)
#define USBD_EVENTS_SOF_EVENTS_SOF_NotGenerated (0UL)
#define USBD_EVENTS_SOF_EVENTS_SOF_Generated (1UL)





#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Pos (0UL)
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Msk (0x1UL << USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Pos)
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_NotGenerated (0UL)
#define USBD_EVENTS_USBEVENT_EVENTS_USBEVENT_Generated (1UL)





#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Pos (0UL)
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Msk (0x1UL << USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Pos)
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_NotGenerated (0UL)
#define USBD_EVENTS_EP0SETUP_EVENTS_EP0SETUP_Generated (1UL)





#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Pos (0UL)
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Msk (0x1UL << USBD_EVENTS_EPDATA_EVENTS_EPDATA_Pos)
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_NotGenerated (0UL)
#define USBD_EVENTS_EPDATA_EVENTS_EPDATA_Generated (1UL)





#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Pos (4UL)
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Msk (0x1UL << USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Pos)
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Disabled (0UL)
#define USBD_SHORTS_ENDEPOUT0_EP0RCVOUT_Enabled (1UL)


#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Pos (3UL)
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Msk (0x1UL << USBD_SHORTS_ENDEPOUT0_EP0STATUS_Pos)
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Disabled (0UL)
#define USBD_SHORTS_ENDEPOUT0_EP0STATUS_Enabled (1UL)


#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Pos (2UL)
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_EP0STATUS_Pos)
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Disabled (0UL)
#define USBD_SHORTS_EP0DATADONE_EP0STATUS_Enabled (1UL)


#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Pos (1UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Pos)
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Disabled (0UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPOUT0_Enabled (1UL)


#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Pos (0UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Msk (0x1UL << USBD_SHORTS_EP0DATADONE_STARTEPIN0_Pos)
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Disabled (0UL)
#define USBD_SHORTS_EP0DATADONE_STARTEPIN0_Enabled (1UL)





#define USBD_INTEN_EPDATA_Pos (24UL)
#define USBD_INTEN_EPDATA_Msk (0x1UL << USBD_INTEN_EPDATA_Pos)
#define USBD_INTEN_EPDATA_Disabled (0UL)
#define USBD_INTEN_EPDATA_Enabled (1UL)


#define USBD_INTEN_EP0SETUP_Pos (23UL)
#define USBD_INTEN_EP0SETUP_Msk (0x1UL << USBD_INTEN_EP0SETUP_Pos)
#define USBD_INTEN_EP0SETUP_Disabled (0UL)
#define USBD_INTEN_EP0SETUP_Enabled (1UL)


#define USBD_INTEN_USBEVENT_Pos (22UL)
#define USBD_INTEN_USBEVENT_Msk (0x1UL << USBD_INTEN_USBEVENT_Pos)
#define USBD_INTEN_USBEVENT_Disabled (0UL)
#define USBD_INTEN_USBEVENT_Enabled (1UL)


#define USBD_INTEN_SOF_Pos (21UL)
#define USBD_INTEN_SOF_Msk (0x1UL << USBD_INTEN_SOF_Pos)
#define USBD_INTEN_SOF_Disabled (0UL)
#define USBD_INTEN_SOF_Enabled (1UL)


#define USBD_INTEN_ENDISOOUT_Pos (20UL)
#define USBD_INTEN_ENDISOOUT_Msk (0x1UL << USBD_INTEN_ENDISOOUT_Pos)
#define USBD_INTEN_ENDISOOUT_Disabled (0UL)
#define USBD_INTEN_ENDISOOUT_Enabled (1UL)


#define USBD_INTEN_ENDEPOUT7_Pos (19UL)
#define USBD_INTEN_ENDEPOUT7_Msk (0x1UL << USBD_INTEN_ENDEPOUT7_Pos)
#define USBD_INTEN_ENDEPOUT7_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT7_Enabled (1UL)


#define USBD_INTEN_ENDEPOUT6_Pos (18UL)
#define USBD_INTEN_ENDEPOUT6_Msk (0x1UL << USBD_INTEN_ENDEPOUT6_Pos)
#define USBD_INTEN_ENDEPOUT6_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT6_Enabled (1UL)


#define USBD_INTEN_ENDEPOUT5_Pos (17UL)
#define USBD_INTEN_ENDEPOUT5_Msk (0x1UL << USBD_INTEN_ENDEPOUT5_Pos)
#define USBD_INTEN_ENDEPOUT5_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT5_Enabled (1UL)


#define USBD_INTEN_ENDEPOUT4_Pos (16UL)
#define USBD_INTEN_ENDEPOUT4_Msk (0x1UL << USBD_INTEN_ENDEPOUT4_Pos)
#define USBD_INTEN_ENDEPOUT4_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT4_Enabled (1UL)


#define USBD_INTEN_ENDEPOUT3_Pos (15UL)
#define USBD_INTEN_ENDEPOUT3_Msk (0x1UL << USBD_INTEN_ENDEPOUT3_Pos)
#define USBD_INTEN_ENDEPOUT3_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT3_Enabled (1UL)


#define USBD_INTEN_ENDEPOUT2_Pos (14UL)
#define USBD_INTEN_ENDEPOUT2_Msk (0x1UL << USBD_INTEN_ENDEPOUT2_Pos)
#define USBD_INTEN_ENDEPOUT2_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT2_Enabled (1UL)


#define USBD_INTEN_ENDEPOUT1_Pos (13UL)
#define USBD_INTEN_ENDEPOUT1_Msk (0x1UL << USBD_INTEN_ENDEPOUT1_Pos)
#define USBD_INTEN_ENDEPOUT1_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT1_Enabled (1UL)


#define USBD_INTEN_ENDEPOUT0_Pos (12UL)
#define USBD_INTEN_ENDEPOUT0_Msk (0x1UL << USBD_INTEN_ENDEPOUT0_Pos)
#define USBD_INTEN_ENDEPOUT0_Disabled (0UL)
#define USBD_INTEN_ENDEPOUT0_Enabled (1UL)


#define USBD_INTEN_ENDISOIN_Pos (11UL)
#define USBD_INTEN_ENDISOIN_Msk (0x1UL << USBD_INTEN_ENDISOIN_Pos)
#define USBD_INTEN_ENDISOIN_Disabled (0UL)
#define USBD_INTEN_ENDISOIN_Enabled (1UL)


#define USBD_INTEN_EP0DATADONE_Pos (10UL)
#define USBD_INTEN_EP0DATADONE_Msk (0x1UL << USBD_INTEN_EP0DATADONE_Pos)
#define USBD_INTEN_EP0DATADONE_Disabled (0UL)
#define USBD_INTEN_EP0DATADONE_Enabled (1UL)


#define USBD_INTEN_ENDEPIN7_Pos (9UL)
#define USBD_INTEN_ENDEPIN7_Msk (0x1UL << USBD_INTEN_ENDEPIN7_Pos)
#define USBD_INTEN_ENDEPIN7_Disabled (0UL)
#define USBD_INTEN_ENDEPIN7_Enabled (1UL)


#define USBD_INTEN_ENDEPIN6_Pos (8UL)
#define USBD_INTEN_ENDEPIN6_Msk (0x1UL << USBD_INTEN_ENDEPIN6_Pos)
#define USBD_INTEN_ENDEPIN6_Disabled (0UL)
#define USBD_INTEN_ENDEPIN6_Enabled (1UL)


#define USBD_INTEN_ENDEPIN5_Pos (7UL)
#define USBD_INTEN_ENDEPIN5_Msk (0x1UL << USBD_INTEN_ENDEPIN5_Pos)
#define USBD_INTEN_ENDEPIN5_Disabled (0UL)
#define USBD_INTEN_ENDEPIN5_Enabled (1UL)


#define USBD_INTEN_ENDEPIN4_Pos (6UL)
#define USBD_INTEN_ENDEPIN4_Msk (0x1UL << USBD_INTEN_ENDEPIN4_Pos)
#define USBD_INTEN_ENDEPIN4_Disabled (0UL)
#define USBD_INTEN_ENDEPIN4_Enabled (1UL)


#define USBD_INTEN_ENDEPIN3_Pos (5UL)
#define USBD_INTEN_ENDEPIN3_Msk (0x1UL << USBD_INTEN_ENDEPIN3_Pos)
#define USBD_INTEN_ENDEPIN3_Disabled (0UL)
#define USBD_INTEN_ENDEPIN3_Enabled (1UL)


#define USBD_INTEN_ENDEPIN2_Pos (4UL)
#define USBD_INTEN_ENDEPIN2_Msk (0x1UL << USBD_INTEN_ENDEPIN2_Pos)
#define USBD_INTEN_ENDEPIN2_Disabled (0UL)
#define USBD_INTEN_ENDEPIN2_Enabled (1UL)


#define USBD_INTEN_ENDEPIN1_Pos (3UL)
#define USBD_INTEN_ENDEPIN1_Msk (0x1UL << USBD_INTEN_ENDEPIN1_Pos)
#define USBD_INTEN_ENDEPIN1_Disabled (0UL)
#define USBD_INTEN_ENDEPIN1_Enabled (1UL)


#define USBD_INTEN_ENDEPIN0_Pos (2UL)
#define USBD_INTEN_ENDEPIN0_Msk (0x1UL << USBD_INTEN_ENDEPIN0_Pos)
#define USBD_INTEN_ENDEPIN0_Disabled (0UL)
#define USBD_INTEN_ENDEPIN0_Enabled (1UL)


#define USBD_INTEN_STARTED_Pos (1UL)
#define USBD_INTEN_STARTED_Msk (0x1UL << USBD_INTEN_STARTED_Pos)
#define USBD_INTEN_STARTED_Disabled (0UL)
#define USBD_INTEN_STARTED_Enabled (1UL)


#define USBD_INTEN_USBRESET_Pos (0UL)
#define USBD_INTEN_USBRESET_Msk (0x1UL << USBD_INTEN_USBRESET_Pos)
#define USBD_INTEN_USBRESET_Disabled (0UL)
#define USBD_INTEN_USBRESET_Enabled (1UL)





#define USBD_INTENSET_EPDATA_Pos (24UL)
#define USBD_INTENSET_EPDATA_Msk (0x1UL << USBD_INTENSET_EPDATA_Pos)
#define USBD_INTENSET_EPDATA_Disabled (0UL)
#define USBD_INTENSET_EPDATA_Enabled (1UL)
#define USBD_INTENSET_EPDATA_Set (1UL)


#define USBD_INTENSET_EP0SETUP_Pos (23UL)
#define USBD_INTENSET_EP0SETUP_Msk (0x1UL << USBD_INTENSET_EP0SETUP_Pos)
#define USBD_INTENSET_EP0SETUP_Disabled (0UL)
#define USBD_INTENSET_EP0SETUP_Enabled (1UL)
#define USBD_INTENSET_EP0SETUP_Set (1UL)


#define USBD_INTENSET_USBEVENT_Pos (22UL)
#define USBD_INTENSET_USBEVENT_Msk (0x1UL << USBD_INTENSET_USBEVENT_Pos)
#define USBD_INTENSET_USBEVENT_Disabled (0UL)
#define USBD_INTENSET_USBEVENT_Enabled (1UL)
#define USBD_INTENSET_USBEVENT_Set (1UL)


#define USBD_INTENSET_SOF_Pos (21UL)
#define USBD_INTENSET_SOF_Msk (0x1UL << USBD_INTENSET_SOF_Pos)
#define USBD_INTENSET_SOF_Disabled (0UL)
#define USBD_INTENSET_SOF_Enabled (1UL)
#define USBD_INTENSET_SOF_Set (1UL)


#define USBD_INTENSET_ENDISOOUT_Pos (20UL)
#define USBD_INTENSET_ENDISOOUT_Msk (0x1UL << USBD_INTENSET_ENDISOOUT_Pos)
#define USBD_INTENSET_ENDISOOUT_Disabled (0UL)
#define USBD_INTENSET_ENDISOOUT_Enabled (1UL)
#define USBD_INTENSET_ENDISOOUT_Set (1UL)


#define USBD_INTENSET_ENDEPOUT7_Pos (19UL)
#define USBD_INTENSET_ENDEPOUT7_Msk (0x1UL << USBD_INTENSET_ENDEPOUT7_Pos)
#define USBD_INTENSET_ENDEPOUT7_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT7_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT7_Set (1UL)


#define USBD_INTENSET_ENDEPOUT6_Pos (18UL)
#define USBD_INTENSET_ENDEPOUT6_Msk (0x1UL << USBD_INTENSET_ENDEPOUT6_Pos)
#define USBD_INTENSET_ENDEPOUT6_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT6_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT6_Set (1UL)


#define USBD_INTENSET_ENDEPOUT5_Pos (17UL)
#define USBD_INTENSET_ENDEPOUT5_Msk (0x1UL << USBD_INTENSET_ENDEPOUT5_Pos)
#define USBD_INTENSET_ENDEPOUT5_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT5_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT5_Set (1UL)


#define USBD_INTENSET_ENDEPOUT4_Pos (16UL)
#define USBD_INTENSET_ENDEPOUT4_Msk (0x1UL << USBD_INTENSET_ENDEPOUT4_Pos)
#define USBD_INTENSET_ENDEPOUT4_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT4_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT4_Set (1UL)


#define USBD_INTENSET_ENDEPOUT3_Pos (15UL)
#define USBD_INTENSET_ENDEPOUT3_Msk (0x1UL << USBD_INTENSET_ENDEPOUT3_Pos)
#define USBD_INTENSET_ENDEPOUT3_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT3_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT3_Set (1UL)


#define USBD_INTENSET_ENDEPOUT2_Pos (14UL)
#define USBD_INTENSET_ENDEPOUT2_Msk (0x1UL << USBD_INTENSET_ENDEPOUT2_Pos)
#define USBD_INTENSET_ENDEPOUT2_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT2_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT2_Set (1UL)


#define USBD_INTENSET_ENDEPOUT1_Pos (13UL)
#define USBD_INTENSET_ENDEPOUT1_Msk (0x1UL << USBD_INTENSET_ENDEPOUT1_Pos)
#define USBD_INTENSET_ENDEPOUT1_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT1_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT1_Set (1UL)


#define USBD_INTENSET_ENDEPOUT0_Pos (12UL)
#define USBD_INTENSET_ENDEPOUT0_Msk (0x1UL << USBD_INTENSET_ENDEPOUT0_Pos)
#define USBD_INTENSET_ENDEPOUT0_Disabled (0UL)
#define USBD_INTENSET_ENDEPOUT0_Enabled (1UL)
#define USBD_INTENSET_ENDEPOUT0_Set (1UL)


#define USBD_INTENSET_ENDISOIN_Pos (11UL)
#define USBD_INTENSET_ENDISOIN_Msk (0x1UL << USBD_INTENSET_ENDISOIN_Pos)
#define USBD_INTENSET_ENDISOIN_Disabled (0UL)
#define USBD_INTENSET_ENDISOIN_Enabled (1UL)
#define USBD_INTENSET_ENDISOIN_Set (1UL)


#define USBD_INTENSET_EP0DATADONE_Pos (10UL)
#define USBD_INTENSET_EP0DATADONE_Msk (0x1UL << USBD_INTENSET_EP0DATADONE_Pos)
#define USBD_INTENSET_EP0DATADONE_Disabled (0UL)
#define USBD_INTENSET_EP0DATADONE_Enabled (1UL)
#define USBD_INTENSET_EP0DATADONE_Set (1UL)


#define USBD_INTENSET_ENDEPIN7_Pos (9UL)
#define USBD_INTENSET_ENDEPIN7_Msk (0x1UL << USBD_INTENSET_ENDEPIN7_Pos)
#define USBD_INTENSET_ENDEPIN7_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN7_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN7_Set (1UL)


#define USBD_INTENSET_ENDEPIN6_Pos (8UL)
#define USBD_INTENSET_ENDEPIN6_Msk (0x1UL << USBD_INTENSET_ENDEPIN6_Pos)
#define USBD_INTENSET_ENDEPIN6_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN6_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN6_Set (1UL)


#define USBD_INTENSET_ENDEPIN5_Pos (7UL)
#define USBD_INTENSET_ENDEPIN5_Msk (0x1UL << USBD_INTENSET_ENDEPIN5_Pos)
#define USBD_INTENSET_ENDEPIN5_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN5_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN5_Set (1UL)


#define USBD_INTENSET_ENDEPIN4_Pos (6UL)
#define USBD_INTENSET_ENDEPIN4_Msk (0x1UL << USBD_INTENSET_ENDEPIN4_Pos)
#define USBD_INTENSET_ENDEPIN4_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN4_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN4_Set (1UL)


#define USBD_INTENSET_ENDEPIN3_Pos (5UL)
#define USBD_INTENSET_ENDEPIN3_Msk (0x1UL << USBD_INTENSET_ENDEPIN3_Pos)
#define USBD_INTENSET_ENDEPIN3_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN3_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN3_Set (1UL)


#define USBD_INTENSET_ENDEPIN2_Pos (4UL)
#define USBD_INTENSET_ENDEPIN2_Msk (0x1UL << USBD_INTENSET_ENDEPIN2_Pos)
#define USBD_INTENSET_ENDEPIN2_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN2_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN2_Set (1UL)


#define USBD_INTENSET_ENDEPIN1_Pos (3UL)
#define USBD_INTENSET_ENDEPIN1_Msk (0x1UL << USBD_INTENSET_ENDEPIN1_Pos)
#define USBD_INTENSET_ENDEPIN1_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN1_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN1_Set (1UL)


#define USBD_INTENSET_ENDEPIN0_Pos (2UL)
#define USBD_INTENSET_ENDEPIN0_Msk (0x1UL << USBD_INTENSET_ENDEPIN0_Pos)
#define USBD_INTENSET_ENDEPIN0_Disabled (0UL)
#define USBD_INTENSET_ENDEPIN0_Enabled (1UL)
#define USBD_INTENSET_ENDEPIN0_Set (1UL)


#define USBD_INTENSET_STARTED_Pos (1UL)
#define USBD_INTENSET_STARTED_Msk (0x1UL << USBD_INTENSET_STARTED_Pos)
#define USBD_INTENSET_STARTED_Disabled (0UL)
#define USBD_INTENSET_STARTED_Enabled (1UL)
#define USBD_INTENSET_STARTED_Set (1UL)


#define USBD_INTENSET_USBRESET_Pos (0UL)
#define USBD_INTENSET_USBRESET_Msk (0x1UL << USBD_INTENSET_USBRESET_Pos)
#define USBD_INTENSET_USBRESET_Disabled (0UL)
#define USBD_INTENSET_USBRESET_Enabled (1UL)
#define USBD_INTENSET_USBRESET_Set (1UL)





#define USBD_INTENCLR_EPDATA_Pos (24UL)
#define USBD_INTENCLR_EPDATA_Msk (0x1UL << USBD_INTENCLR_EPDATA_Pos)
#define USBD_INTENCLR_EPDATA_Disabled (0UL)
#define USBD_INTENCLR_EPDATA_Enabled (1UL)
#define USBD_INTENCLR_EPDATA_Clear (1UL)


#define USBD_INTENCLR_EP0SETUP_Pos (23UL)
#define USBD_INTENCLR_EP0SETUP_Msk (0x1UL << USBD_INTENCLR_EP0SETUP_Pos)
#define USBD_INTENCLR_EP0SETUP_Disabled (0UL)
#define USBD_INTENCLR_EP0SETUP_Enabled (1UL)
#define USBD_INTENCLR_EP0SETUP_Clear (1UL)


#define USBD_INTENCLR_USBEVENT_Pos (22UL)
#define USBD_INTENCLR_USBEVENT_Msk (0x1UL << USBD_INTENCLR_USBEVENT_Pos)
#define USBD_INTENCLR_USBEVENT_Disabled (0UL)
#define USBD_INTENCLR_USBEVENT_Enabled (1UL)
#define USBD_INTENCLR_USBEVENT_Clear (1UL)


#define USBD_INTENCLR_SOF_Pos (21UL)
#define USBD_INTENCLR_SOF_Msk (0x1UL << USBD_INTENCLR_SOF_Pos)
#define USBD_INTENCLR_SOF_Disabled (0UL)
#define USBD_INTENCLR_SOF_Enabled (1UL)
#define USBD_INTENCLR_SOF_Clear (1UL)


#define USBD_INTENCLR_ENDISOOUT_Pos (20UL)
#define USBD_INTENCLR_ENDISOOUT_Msk (0x1UL << USBD_INTENCLR_ENDISOOUT_Pos)
#define USBD_INTENCLR_ENDISOOUT_Disabled (0UL)
#define USBD_INTENCLR_ENDISOOUT_Enabled (1UL)
#define USBD_INTENCLR_ENDISOOUT_Clear (1UL)


#define USBD_INTENCLR_ENDEPOUT7_Pos (19UL)
#define USBD_INTENCLR_ENDEPOUT7_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT7_Pos)
#define USBD_INTENCLR_ENDEPOUT7_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT7_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT7_Clear (1UL)


#define USBD_INTENCLR_ENDEPOUT6_Pos (18UL)
#define USBD_INTENCLR_ENDEPOUT6_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT6_Pos)
#define USBD_INTENCLR_ENDEPOUT6_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT6_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT6_Clear (1UL)


#define USBD_INTENCLR_ENDEPOUT5_Pos (17UL)
#define USBD_INTENCLR_ENDEPOUT5_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT5_Pos)
#define USBD_INTENCLR_ENDEPOUT5_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT5_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT5_Clear (1UL)


#define USBD_INTENCLR_ENDEPOUT4_Pos (16UL)
#define USBD_INTENCLR_ENDEPOUT4_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT4_Pos)
#define USBD_INTENCLR_ENDEPOUT4_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT4_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT4_Clear (1UL)


#define USBD_INTENCLR_ENDEPOUT3_Pos (15UL)
#define USBD_INTENCLR_ENDEPOUT3_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT3_Pos)
#define USBD_INTENCLR_ENDEPOUT3_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT3_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT3_Clear (1UL)


#define USBD_INTENCLR_ENDEPOUT2_Pos (14UL)
#define USBD_INTENCLR_ENDEPOUT2_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT2_Pos)
#define USBD_INTENCLR_ENDEPOUT2_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT2_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT2_Clear (1UL)


#define USBD_INTENCLR_ENDEPOUT1_Pos (13UL)
#define USBD_INTENCLR_ENDEPOUT1_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT1_Pos)
#define USBD_INTENCLR_ENDEPOUT1_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT1_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT1_Clear (1UL)


#define USBD_INTENCLR_ENDEPOUT0_Pos (12UL)
#define USBD_INTENCLR_ENDEPOUT0_Msk (0x1UL << USBD_INTENCLR_ENDEPOUT0_Pos)
#define USBD_INTENCLR_ENDEPOUT0_Disabled (0UL)
#define USBD_INTENCLR_ENDEPOUT0_Enabled (1UL)
#define USBD_INTENCLR_ENDEPOUT0_Clear (1UL)


#define USBD_INTENCLR_ENDISOIN_Pos (11UL)
#define USBD_INTENCLR_ENDISOIN_Msk (0x1UL << USBD_INTENCLR_ENDISOIN_Pos)
#define USBD_INTENCLR_ENDISOIN_Disabled (0UL)
#define USBD_INTENCLR_ENDISOIN_Enabled (1UL)
#define USBD_INTENCLR_ENDISOIN_Clear (1UL)


#define USBD_INTENCLR_EP0DATADONE_Pos (10UL)
#define USBD_INTENCLR_EP0DATADONE_Msk (0x1UL << USBD_INTENCLR_EP0DATADONE_Pos)
#define USBD_INTENCLR_EP0DATADONE_Disabled (0UL)
#define USBD_INTENCLR_EP0DATADONE_Enabled (1UL)
#define USBD_INTENCLR_EP0DATADONE_Clear (1UL)


#define USBD_INTENCLR_ENDEPIN7_Pos (9UL)
#define USBD_INTENCLR_ENDEPIN7_Msk (0x1UL << USBD_INTENCLR_ENDEPIN7_Pos)
#define USBD_INTENCLR_ENDEPIN7_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN7_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN7_Clear (1UL)


#define USBD_INTENCLR_ENDEPIN6_Pos (8UL)
#define USBD_INTENCLR_ENDEPIN6_Msk (0x1UL << USBD_INTENCLR_ENDEPIN6_Pos)
#define USBD_INTENCLR_ENDEPIN6_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN6_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN6_Clear (1UL)


#define USBD_INTENCLR_ENDEPIN5_Pos (7UL)
#define USBD_INTENCLR_ENDEPIN5_Msk (0x1UL << USBD_INTENCLR_ENDEPIN5_Pos)
#define USBD_INTENCLR_ENDEPIN5_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN5_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN5_Clear (1UL)


#define USBD_INTENCLR_ENDEPIN4_Pos (6UL)
#define USBD_INTENCLR_ENDEPIN4_Msk (0x1UL << USBD_INTENCLR_ENDEPIN4_Pos)
#define USBD_INTENCLR_ENDEPIN4_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN4_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN4_Clear (1UL)


#define USBD_INTENCLR_ENDEPIN3_Pos (5UL)
#define USBD_INTENCLR_ENDEPIN3_Msk (0x1UL << USBD_INTENCLR_ENDEPIN3_Pos)
#define USBD_INTENCLR_ENDEPIN3_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN3_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN3_Clear (1UL)


#define USBD_INTENCLR_ENDEPIN2_Pos (4UL)
#define USBD_INTENCLR_ENDEPIN2_Msk (0x1UL << USBD_INTENCLR_ENDEPIN2_Pos)
#define USBD_INTENCLR_ENDEPIN2_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN2_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN2_Clear (1UL)


#define USBD_INTENCLR_ENDEPIN1_Pos (3UL)
#define USBD_INTENCLR_ENDEPIN1_Msk (0x1UL << USBD_INTENCLR_ENDEPIN1_Pos)
#define USBD_INTENCLR_ENDEPIN1_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN1_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN1_Clear (1UL)


#define USBD_INTENCLR_ENDEPIN0_Pos (2UL)
#define USBD_INTENCLR_ENDEPIN0_Msk (0x1UL << USBD_INTENCLR_ENDEPIN0_Pos)
#define USBD_INTENCLR_ENDEPIN0_Disabled (0UL)
#define USBD_INTENCLR_ENDEPIN0_Enabled (1UL)
#define USBD_INTENCLR_ENDEPIN0_Clear (1UL)


#define USBD_INTENCLR_STARTED_Pos (1UL)
#define USBD_INTENCLR_STARTED_Msk (0x1UL << USBD_INTENCLR_STARTED_Pos)
#define USBD_INTENCLR_STARTED_Disabled (0UL)
#define USBD_INTENCLR_STARTED_Enabled (1UL)
#define USBD_INTENCLR_STARTED_Clear (1UL)


#define USBD_INTENCLR_USBRESET_Pos (0UL)
#define USBD_INTENCLR_USBRESET_Msk (0x1UL << USBD_INTENCLR_USBRESET_Pos)
#define USBD_INTENCLR_USBRESET_Disabled (0UL)
#define USBD_INTENCLR_USBRESET_Enabled (1UL)
#define USBD_INTENCLR_USBRESET_Clear (1UL)





#define USBD_EVENTCAUSE_READY_Pos (11UL)
#define USBD_EVENTCAUSE_READY_Msk (0x1UL << USBD_EVENTCAUSE_READY_Pos)
#define USBD_EVENTCAUSE_READY_NotDetected (0UL)
#define USBD_EVENTCAUSE_READY_Ready (1UL)


#define USBD_EVENTCAUSE_USBWUALLOWED_Pos (10UL)
#define USBD_EVENTCAUSE_USBWUALLOWED_Msk (0x1UL << USBD_EVENTCAUSE_USBWUALLOWED_Pos)
#define USBD_EVENTCAUSE_USBWUALLOWED_NotAllowed (0UL)
#define USBD_EVENTCAUSE_USBWUALLOWED_Allowed (1UL)


#define USBD_EVENTCAUSE_RESUME_Pos (9UL)
#define USBD_EVENTCAUSE_RESUME_Msk (0x1UL << USBD_EVENTCAUSE_RESUME_Pos)
#define USBD_EVENTCAUSE_RESUME_NotDetected (0UL)
#define USBD_EVENTCAUSE_RESUME_Detected (1UL)


#define USBD_EVENTCAUSE_SUSPEND_Pos (8UL)
#define USBD_EVENTCAUSE_SUSPEND_Msk (0x1UL << USBD_EVENTCAUSE_SUSPEND_Pos)
#define USBD_EVENTCAUSE_SUSPEND_NotDetected (0UL)
#define USBD_EVENTCAUSE_SUSPEND_Detected (1UL)


#define USBD_EVENTCAUSE_ISOOUTCRC_Pos (0UL)
#define USBD_EVENTCAUSE_ISOOUTCRC_Msk (0x1UL << USBD_EVENTCAUSE_ISOOUTCRC_Pos)
#define USBD_EVENTCAUSE_ISOOUTCRC_NotDetected (0UL)
#define USBD_EVENTCAUSE_ISOOUTCRC_Detected (1UL)





#define USBD_HALTED_EPIN_GETSTATUS_Pos (0UL)
#define USBD_HALTED_EPIN_GETSTATUS_Msk (0xFFFFUL << USBD_HALTED_EPIN_GETSTATUS_Pos)
#define USBD_HALTED_EPIN_GETSTATUS_NotHalted (0UL)
#define USBD_HALTED_EPIN_GETSTATUS_Halted (1UL)





#define USBD_HALTED_EPOUT_GETSTATUS_Pos (0UL)
#define USBD_HALTED_EPOUT_GETSTATUS_Msk (0xFFFFUL << USBD_HALTED_EPOUT_GETSTATUS_Pos)
#define USBD_HALTED_EPOUT_GETSTATUS_NotHalted (0UL)
#define USBD_HALTED_EPOUT_GETSTATUS_Halted (1UL)





#define USBD_EPSTATUS_EPOUT8_Pos (24UL)
#define USBD_EPSTATUS_EPOUT8_Msk (0x1UL << USBD_EPSTATUS_EPOUT8_Pos)
#define USBD_EPSTATUS_EPOUT8_NoData (0UL)
#define USBD_EPSTATUS_EPOUT8_DataDone (1UL)


#define USBD_EPSTATUS_EPOUT7_Pos (23UL)
#define USBD_EPSTATUS_EPOUT7_Msk (0x1UL << USBD_EPSTATUS_EPOUT7_Pos)
#define USBD_EPSTATUS_EPOUT7_NoData (0UL)
#define USBD_EPSTATUS_EPOUT7_DataDone (1UL)


#define USBD_EPSTATUS_EPOUT6_Pos (22UL)
#define USBD_EPSTATUS_EPOUT6_Msk (0x1UL << USBD_EPSTATUS_EPOUT6_Pos)
#define USBD_EPSTATUS_EPOUT6_NoData (0UL)
#define USBD_EPSTATUS_EPOUT6_DataDone (1UL)


#define USBD_EPSTATUS_EPOUT5_Pos (21UL)
#define USBD_EPSTATUS_EPOUT5_Msk (0x1UL << USBD_EPSTATUS_EPOUT5_Pos)
#define USBD_EPSTATUS_EPOUT5_NoData (0UL)
#define USBD_EPSTATUS_EPOUT5_DataDone (1UL)


#define USBD_EPSTATUS_EPOUT4_Pos (20UL)
#define USBD_EPSTATUS_EPOUT4_Msk (0x1UL << USBD_EPSTATUS_EPOUT4_Pos)
#define USBD_EPSTATUS_EPOUT4_NoData (0UL)
#define USBD_EPSTATUS_EPOUT4_DataDone (1UL)


#define USBD_EPSTATUS_EPOUT3_Pos (19UL)
#define USBD_EPSTATUS_EPOUT3_Msk (0x1UL << USBD_EPSTATUS_EPOUT3_Pos)
#define USBD_EPSTATUS_EPOUT3_NoData (0UL)
#define USBD_EPSTATUS_EPOUT3_DataDone (1UL)


#define USBD_EPSTATUS_EPOUT2_Pos (18UL)
#define USBD_EPSTATUS_EPOUT2_Msk (0x1UL << USBD_EPSTATUS_EPOUT2_Pos)
#define USBD_EPSTATUS_EPOUT2_NoData (0UL)
#define USBD_EPSTATUS_EPOUT2_DataDone (1UL)


#define USBD_EPSTATUS_EPOUT1_Pos (17UL)
#define USBD_EPSTATUS_EPOUT1_Msk (0x1UL << USBD_EPSTATUS_EPOUT1_Pos)
#define USBD_EPSTATUS_EPOUT1_NoData (0UL)
#define USBD_EPSTATUS_EPOUT1_DataDone (1UL)


#define USBD_EPSTATUS_EPOUT0_Pos (16UL)
#define USBD_EPSTATUS_EPOUT0_Msk (0x1UL << USBD_EPSTATUS_EPOUT0_Pos)
#define USBD_EPSTATUS_EPOUT0_NoData (0UL)
#define USBD_EPSTATUS_EPOUT0_DataDone (1UL)


#define USBD_EPSTATUS_EPIN8_Pos (8UL)
#define USBD_EPSTATUS_EPIN8_Msk (0x1UL << USBD_EPSTATUS_EPIN8_Pos)
#define USBD_EPSTATUS_EPIN8_NoData (0UL)
#define USBD_EPSTATUS_EPIN8_DataDone (1UL)


#define USBD_EPSTATUS_EPIN7_Pos (7UL)
#define USBD_EPSTATUS_EPIN7_Msk (0x1UL << USBD_EPSTATUS_EPIN7_Pos)
#define USBD_EPSTATUS_EPIN7_NoData (0UL)
#define USBD_EPSTATUS_EPIN7_DataDone (1UL)


#define USBD_EPSTATUS_EPIN6_Pos (6UL)
#define USBD_EPSTATUS_EPIN6_Msk (0x1UL << USBD_EPSTATUS_EPIN6_Pos)
#define USBD_EPSTATUS_EPIN6_NoData (0UL)
#define USBD_EPSTATUS_EPIN6_DataDone (1UL)


#define USBD_EPSTATUS_EPIN5_Pos (5UL)
#define USBD_EPSTATUS_EPIN5_Msk (0x1UL << USBD_EPSTATUS_EPIN5_Pos)
#define USBD_EPSTATUS_EPIN5_NoData (0UL)
#define USBD_EPSTATUS_EPIN5_DataDone (1UL)


#define USBD_EPSTATUS_EPIN4_Pos (4UL)
#define USBD_EPSTATUS_EPIN4_Msk (0x1UL << USBD_EPSTATUS_EPIN4_Pos)
#define USBD_EPSTATUS_EPIN4_NoData (0UL)
#define USBD_EPSTATUS_EPIN4_DataDone (1UL)


#define USBD_EPSTATUS_EPIN3_Pos (3UL)
#define USBD_EPSTATUS_EPIN3_Msk (0x1UL << USBD_EPSTATUS_EPIN3_Pos)
#define USBD_EPSTATUS_EPIN3_NoData (0UL)
#define USBD_EPSTATUS_EPIN3_DataDone (1UL)


#define USBD_EPSTATUS_EPIN2_Pos (2UL)
#define USBD_EPSTATUS_EPIN2_Msk (0x1UL << USBD_EPSTATUS_EPIN2_Pos)
#define USBD_EPSTATUS_EPIN2_NoData (0UL)
#define USBD_EPSTATUS_EPIN2_DataDone (1UL)


#define USBD_EPSTATUS_EPIN1_Pos (1UL)
#define USBD_EPSTATUS_EPIN1_Msk (0x1UL << USBD_EPSTATUS_EPIN1_Pos)
#define USBD_EPSTATUS_EPIN1_NoData (0UL)
#define USBD_EPSTATUS_EPIN1_DataDone (1UL)


#define USBD_EPSTATUS_EPIN0_Pos (0UL)
#define USBD_EPSTATUS_EPIN0_Msk (0x1UL << USBD_EPSTATUS_EPIN0_Pos)
#define USBD_EPSTATUS_EPIN0_NoData (0UL)
#define USBD_EPSTATUS_EPIN0_DataDone (1UL)





#define USBD_EPDATASTATUS_EPOUT7_Pos (23UL)
#define USBD_EPDATASTATUS_EPOUT7_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT7_Pos)
#define USBD_EPDATASTATUS_EPOUT7_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT7_Started (1UL)


#define USBD_EPDATASTATUS_EPOUT6_Pos (22UL)
#define USBD_EPDATASTATUS_EPOUT6_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT6_Pos)
#define USBD_EPDATASTATUS_EPOUT6_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT6_Started (1UL)


#define USBD_EPDATASTATUS_EPOUT5_Pos (21UL)
#define USBD_EPDATASTATUS_EPOUT5_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT5_Pos)
#define USBD_EPDATASTATUS_EPOUT5_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT5_Started (1UL)


#define USBD_EPDATASTATUS_EPOUT4_Pos (20UL)
#define USBD_EPDATASTATUS_EPOUT4_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT4_Pos)
#define USBD_EPDATASTATUS_EPOUT4_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT4_Started (1UL)


#define USBD_EPDATASTATUS_EPOUT3_Pos (19UL)
#define USBD_EPDATASTATUS_EPOUT3_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT3_Pos)
#define USBD_EPDATASTATUS_EPOUT3_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT3_Started (1UL)


#define USBD_EPDATASTATUS_EPOUT2_Pos (18UL)
#define USBD_EPDATASTATUS_EPOUT2_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT2_Pos)
#define USBD_EPDATASTATUS_EPOUT2_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT2_Started (1UL)


#define USBD_EPDATASTATUS_EPOUT1_Pos (17UL)
#define USBD_EPDATASTATUS_EPOUT1_Msk (0x1UL << USBD_EPDATASTATUS_EPOUT1_Pos)
#define USBD_EPDATASTATUS_EPOUT1_NotStarted (0UL)
#define USBD_EPDATASTATUS_EPOUT1_Started (1UL)


#define USBD_EPDATASTATUS_EPIN7_Pos (7UL)
#define USBD_EPDATASTATUS_EPIN7_Msk (0x1UL << USBD_EPDATASTATUS_EPIN7_Pos)
#define USBD_EPDATASTATUS_EPIN7_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN7_DataDone (1UL)


#define USBD_EPDATASTATUS_EPIN6_Pos (6UL)
#define USBD_EPDATASTATUS_EPIN6_Msk (0x1UL << USBD_EPDATASTATUS_EPIN6_Pos)
#define USBD_EPDATASTATUS_EPIN6_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN6_DataDone (1UL)


#define USBD_EPDATASTATUS_EPIN5_Pos (5UL)
#define USBD_EPDATASTATUS_EPIN5_Msk (0x1UL << USBD_EPDATASTATUS_EPIN5_Pos)
#define USBD_EPDATASTATUS_EPIN5_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN5_DataDone (1UL)


#define USBD_EPDATASTATUS_EPIN4_Pos (4UL)
#define USBD_EPDATASTATUS_EPIN4_Msk (0x1UL << USBD_EPDATASTATUS_EPIN4_Pos)
#define USBD_EPDATASTATUS_EPIN4_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN4_DataDone (1UL)


#define USBD_EPDATASTATUS_EPIN3_Pos (3UL)
#define USBD_EPDATASTATUS_EPIN3_Msk (0x1UL << USBD_EPDATASTATUS_EPIN3_Pos)
#define USBD_EPDATASTATUS_EPIN3_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN3_DataDone (1UL)


#define USBD_EPDATASTATUS_EPIN2_Pos (2UL)
#define USBD_EPDATASTATUS_EPIN2_Msk (0x1UL << USBD_EPDATASTATUS_EPIN2_Pos)
#define USBD_EPDATASTATUS_EPIN2_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN2_DataDone (1UL)


#define USBD_EPDATASTATUS_EPIN1_Pos (1UL)
#define USBD_EPDATASTATUS_EPIN1_Msk (0x1UL << USBD_EPDATASTATUS_EPIN1_Pos)
#define USBD_EPDATASTATUS_EPIN1_NotDone (0UL)
#define USBD_EPDATASTATUS_EPIN1_DataDone (1UL)





#define USBD_USBADDR_ADDR_Pos (0UL)
#define USBD_USBADDR_ADDR_Msk (0x7FUL << USBD_USBADDR_ADDR_Pos)





#define USBD_BMREQUESTTYPE_DIRECTION_Pos (7UL)
#define USBD_BMREQUESTTYPE_DIRECTION_Msk (0x1UL << USBD_BMREQUESTTYPE_DIRECTION_Pos)
#define USBD_BMREQUESTTYPE_DIRECTION_HostToDevice (0UL)
#define USBD_BMREQUESTTYPE_DIRECTION_DeviceToHost (1UL)


#define USBD_BMREQUESTTYPE_TYPE_Pos (5UL)
#define USBD_BMREQUESTTYPE_TYPE_Msk (0x3UL << USBD_BMREQUESTTYPE_TYPE_Pos)
#define USBD_BMREQUESTTYPE_TYPE_Standard (0UL)
#define USBD_BMREQUESTTYPE_TYPE_Class (1UL)
#define USBD_BMREQUESTTYPE_TYPE_Vendor (2UL)


#define USBD_BMREQUESTTYPE_RECIPIENT_Pos (0UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Msk (0x1FUL << USBD_BMREQUESTTYPE_RECIPIENT_Pos)
#define USBD_BMREQUESTTYPE_RECIPIENT_Device (0UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Interface (1UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Endpoint (2UL)
#define USBD_BMREQUESTTYPE_RECIPIENT_Other (3UL)





#define USBD_BREQUEST_BREQUEST_Pos (0UL)
#define USBD_BREQUEST_BREQUEST_Msk (0xFFUL << USBD_BREQUEST_BREQUEST_Pos)
#define USBD_BREQUEST_BREQUEST_STD_GET_STATUS (0UL)
#define USBD_BREQUEST_BREQUEST_STD_CLEAR_FEATURE (1UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_FEATURE (3UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_ADDRESS (5UL)
#define USBD_BREQUEST_BREQUEST_STD_GET_DESCRIPTOR (6UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_DESCRIPTOR (7UL)
#define USBD_BREQUEST_BREQUEST_STD_GET_CONFIGURATION (8UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_CONFIGURATION (9UL)
#define USBD_BREQUEST_BREQUEST_STD_GET_INTERFACE (10UL)
#define USBD_BREQUEST_BREQUEST_STD_SET_INTERFACE (11UL)
#define USBD_BREQUEST_BREQUEST_STD_SYNCH_FRAME (12UL)





#define USBD_WVALUEL_WVALUEL_Pos (0UL)
#define USBD_WVALUEL_WVALUEL_Msk (0xFFUL << USBD_WVALUEL_WVALUEL_Pos)





#define USBD_WVALUEH_WVALUEH_Pos (0UL)
#define USBD_WVALUEH_WVALUEH_Msk (0xFFUL << USBD_WVALUEH_WVALUEH_Pos)





#define USBD_WINDEXL_WINDEXL_Pos (0UL)
#define USBD_WINDEXL_WINDEXL_Msk (0xFFUL << USBD_WINDEXL_WINDEXL_Pos)





#define USBD_WINDEXH_WINDEXH_Pos (0UL)
#define USBD_WINDEXH_WINDEXH_Msk (0xFFUL << USBD_WINDEXH_WINDEXH_Pos)





#define USBD_WLENGTHL_WLENGTHL_Pos (0UL)
#define USBD_WLENGTHL_WLENGTHL_Msk (0xFFUL << USBD_WLENGTHL_WLENGTHL_Pos)





#define USBD_WLENGTHH_WLENGTHH_Pos (0UL)
#define USBD_WLENGTHH_WLENGTHH_Msk (0xFFUL << USBD_WLENGTHH_WLENGTHH_Pos)





#define USBD_SIZE_EPOUT_SIZE_Pos (0UL)
#define USBD_SIZE_EPOUT_SIZE_Msk (0x7FUL << USBD_SIZE_EPOUT_SIZE_Pos)





#define USBD_SIZE_ISOOUT_ZERO_Pos (16UL)
#define USBD_SIZE_ISOOUT_ZERO_Msk (0x1UL << USBD_SIZE_ISOOUT_ZERO_Pos)
#define USBD_SIZE_ISOOUT_ZERO_Normal (0UL)
#define USBD_SIZE_ISOOUT_ZERO_ZeroData (1UL)


#define USBD_SIZE_ISOOUT_SIZE_Pos (0UL)
#define USBD_SIZE_ISOOUT_SIZE_Msk (0x3FFUL << USBD_SIZE_ISOOUT_SIZE_Pos)





#define USBD_ENABLE_ENABLE_Pos (0UL)
#define USBD_ENABLE_ENABLE_Msk (0x1UL << USBD_ENABLE_ENABLE_Pos)
#define USBD_ENABLE_ENABLE_Disabled (0UL)
#define USBD_ENABLE_ENABLE_Enabled (1UL)





#define USBD_USBPULLUP_CONNECT_Pos (0UL)
#define USBD_USBPULLUP_CONNECT_Msk (0x1UL << USBD_USBPULLUP_CONNECT_Pos)
#define USBD_USBPULLUP_CONNECT_Disabled (0UL)
#define USBD_USBPULLUP_CONNECT_Enabled (1UL)





#define USBD_DPDMVALUE_STATE_Pos (0UL)
#define USBD_DPDMVALUE_STATE_Msk (0x1FUL << USBD_DPDMVALUE_STATE_Pos)
#define USBD_DPDMVALUE_STATE_Resume (1UL)
#define USBD_DPDMVALUE_STATE_J (2UL)
#define USBD_DPDMVALUE_STATE_K (4UL)





#define USBD_DTOGGLE_VALUE_Pos (8UL)
#define USBD_DTOGGLE_VALUE_Msk (0x3UL << USBD_DTOGGLE_VALUE_Pos)
#define USBD_DTOGGLE_VALUE_Nop (0UL)
#define USBD_DTOGGLE_VALUE_Data0 (1UL)
#define USBD_DTOGGLE_VALUE_Data1 (2UL)


#define USBD_DTOGGLE_IO_Pos (7UL)
#define USBD_DTOGGLE_IO_Msk (0x1UL << USBD_DTOGGLE_IO_Pos)
#define USBD_DTOGGLE_IO_Out (0UL)
#define USBD_DTOGGLE_IO_In (1UL)


#define USBD_DTOGGLE_EP_Pos (0UL)
#define USBD_DTOGGLE_EP_Msk (0x7UL << USBD_DTOGGLE_EP_Pos)





#define USBD_EPINEN_ISOIN_Pos (8UL)
#define USBD_EPINEN_ISOIN_Msk (0x1UL << USBD_EPINEN_ISOIN_Pos)
#define USBD_EPINEN_ISOIN_Disable (0UL)
#define USBD_EPINEN_ISOIN_Enable (1UL)


#define USBD_EPINEN_IN7_Pos (7UL)
#define USBD_EPINEN_IN7_Msk (0x1UL << USBD_EPINEN_IN7_Pos)
#define USBD_EPINEN_IN7_Disable (0UL)
#define USBD_EPINEN_IN7_Enable (1UL)


#define USBD_EPINEN_IN6_Pos (6UL)
#define USBD_EPINEN_IN6_Msk (0x1UL << USBD_EPINEN_IN6_Pos)
#define USBD_EPINEN_IN6_Disable (0UL)
#define USBD_EPINEN_IN6_Enable (1UL)


#define USBD_EPINEN_IN5_Pos (5UL)
#define USBD_EPINEN_IN5_Msk (0x1UL << USBD_EPINEN_IN5_Pos)
#define USBD_EPINEN_IN5_Disable (0UL)
#define USBD_EPINEN_IN5_Enable (1UL)


#define USBD_EPINEN_IN4_Pos (4UL)
#define USBD_EPINEN_IN4_Msk (0x1UL << USBD_EPINEN_IN4_Pos)
#define USBD_EPINEN_IN4_Disable (0UL)
#define USBD_EPINEN_IN4_Enable (1UL)


#define USBD_EPINEN_IN3_Pos (3UL)
#define USBD_EPINEN_IN3_Msk (0x1UL << USBD_EPINEN_IN3_Pos)
#define USBD_EPINEN_IN3_Disable (0UL)
#define USBD_EPINEN_IN3_Enable (1UL)


#define USBD_EPINEN_IN2_Pos (2UL)
#define USBD_EPINEN_IN2_Msk (0x1UL << USBD_EPINEN_IN2_Pos)
#define USBD_EPINEN_IN2_Disable (0UL)
#define USBD_EPINEN_IN2_Enable (1UL)


#define USBD_EPINEN_IN1_Pos (1UL)
#define USBD_EPINEN_IN1_Msk (0x1UL << USBD_EPINEN_IN1_Pos)
#define USBD_EPINEN_IN1_Disable (0UL)
#define USBD_EPINEN_IN1_Enable (1UL)


#define USBD_EPINEN_IN0_Pos (0UL)
#define USBD_EPINEN_IN0_Msk (0x1UL << USBD_EPINEN_IN0_Pos)
#define USBD_EPINEN_IN0_Disable (0UL)
#define USBD_EPINEN_IN0_Enable (1UL)





#define USBD_EPOUTEN_ISOOUT_Pos (8UL)
#define USBD_EPOUTEN_ISOOUT_Msk (0x1UL << USBD_EPOUTEN_ISOOUT_Pos)
#define USBD_EPOUTEN_ISOOUT_Disable (0UL)
#define USBD_EPOUTEN_ISOOUT_Enable (1UL)


#define USBD_EPOUTEN_OUT7_Pos (7UL)
#define USBD_EPOUTEN_OUT7_Msk (0x1UL << USBD_EPOUTEN_OUT7_Pos)
#define USBD_EPOUTEN_OUT7_Disable (0UL)
#define USBD_EPOUTEN_OUT7_Enable (1UL)


#define USBD_EPOUTEN_OUT6_Pos (6UL)
#define USBD_EPOUTEN_OUT6_Msk (0x1UL << USBD_EPOUTEN_OUT6_Pos)
#define USBD_EPOUTEN_OUT6_Disable (0UL)
#define USBD_EPOUTEN_OUT6_Enable (1UL)


#define USBD_EPOUTEN_OUT5_Pos (5UL)
#define USBD_EPOUTEN_OUT5_Msk (0x1UL << USBD_EPOUTEN_OUT5_Pos)
#define USBD_EPOUTEN_OUT5_Disable (0UL)
#define USBD_EPOUTEN_OUT5_Enable (1UL)


#define USBD_EPOUTEN_OUT4_Pos (4UL)
#define USBD_EPOUTEN_OUT4_Msk (0x1UL << USBD_EPOUTEN_OUT4_Pos)
#define USBD_EPOUTEN_OUT4_Disable (0UL)
#define USBD_EPOUTEN_OUT4_Enable (1UL)


#define USBD_EPOUTEN_OUT3_Pos (3UL)
#define USBD_EPOUTEN_OUT3_Msk (0x1UL << USBD_EPOUTEN_OUT3_Pos)
#define USBD_EPOUTEN_OUT3_Disable (0UL)
#define USBD_EPOUTEN_OUT3_Enable (1UL)


#define USBD_EPOUTEN_OUT2_Pos (2UL)
#define USBD_EPOUTEN_OUT2_Msk (0x1UL << USBD_EPOUTEN_OUT2_Pos)
#define USBD_EPOUTEN_OUT2_Disable (0UL)
#define USBD_EPOUTEN_OUT2_Enable (1UL)


#define USBD_EPOUTEN_OUT1_Pos (1UL)
#define USBD_EPOUTEN_OUT1_Msk (0x1UL << USBD_EPOUTEN_OUT1_Pos)
#define USBD_EPOUTEN_OUT1_Disable (0UL)
#define USBD_EPOUTEN_OUT1_Enable (1UL)


#define USBD_EPOUTEN_OUT0_Pos (0UL)
#define USBD_EPOUTEN_OUT0_Msk (0x1UL << USBD_EPOUTEN_OUT0_Pos)
#define USBD_EPOUTEN_OUT0_Disable (0UL)
#define USBD_EPOUTEN_OUT0_Enable (1UL)





#define USBD_EPSTALL_STALL_Pos (8UL)
#define USBD_EPSTALL_STALL_Msk (0x1UL << USBD_EPSTALL_STALL_Pos)
#define USBD_EPSTALL_STALL_UnStall (0UL)
#define USBD_EPSTALL_STALL_Stall (1UL)


#define USBD_EPSTALL_IO_Pos (7UL)
#define USBD_EPSTALL_IO_Msk (0x1UL << USBD_EPSTALL_IO_Pos)
#define USBD_EPSTALL_IO_Out (0UL)
#define USBD_EPSTALL_IO_In (1UL)


#define USBD_EPSTALL_EP_Pos (0UL)
#define USBD_EPSTALL_EP_Msk (0x7UL << USBD_EPSTALL_EP_Pos)





#define USBD_ISOSPLIT_SPLIT_Pos (0UL)
#define USBD_ISOSPLIT_SPLIT_Msk (0xFFFFUL << USBD_ISOSPLIT_SPLIT_Pos)
#define USBD_ISOSPLIT_SPLIT_OneDir (0x0000UL)
#define USBD_ISOSPLIT_SPLIT_HalfIN (0x0080UL)





#define USBD_FRAMECNTR_FRAMECNTR_Pos (0UL)
#define USBD_FRAMECNTR_FRAMECNTR_Msk (0x7FFUL << USBD_FRAMECNTR_FRAMECNTR_Pos)





#define USBD_LOWPOWER_LOWPOWER_Pos (0UL)
#define USBD_LOWPOWER_LOWPOWER_Msk (0x1UL << USBD_LOWPOWER_LOWPOWER_Pos)
#define USBD_LOWPOWER_LOWPOWER_ForceNormal (0UL)
#define USBD_LOWPOWER_LOWPOWER_LowPower (1UL)





#define USBD_ISOINCONFIG_RESPONSE_Pos (0UL)
#define USBD_ISOINCONFIG_RESPONSE_Msk (0x1UL << USBD_ISOINCONFIG_RESPONSE_Pos)
#define USBD_ISOINCONFIG_RESPONSE_NoResp (0UL)
#define USBD_ISOINCONFIG_RESPONSE_ZeroData (1UL)





#define USBD_EPIN_PTR_PTR_Pos (0UL)
#define USBD_EPIN_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_EPIN_PTR_PTR_Pos)





#define USBD_EPIN_MAXCNT_MAXCNT_Pos (0UL)
#define USBD_EPIN_MAXCNT_MAXCNT_Msk (0x7FUL << USBD_EPIN_MAXCNT_MAXCNT_Pos)





#define USBD_EPIN_AMOUNT_AMOUNT_Pos (0UL)
#define USBD_EPIN_AMOUNT_AMOUNT_Msk (0x7FUL << USBD_EPIN_AMOUNT_AMOUNT_Pos)





#define USBD_ISOIN_PTR_PTR_Pos (0UL)
#define USBD_ISOIN_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_ISOIN_PTR_PTR_Pos)





#define USBD_ISOIN_MAXCNT_MAXCNT_Pos (0UL)
#define USBD_ISOIN_MAXCNT_MAXCNT_Msk (0x3FFUL << USBD_ISOIN_MAXCNT_MAXCNT_Pos)





#define USBD_ISOIN_AMOUNT_AMOUNT_Pos (0UL)
#define USBD_ISOIN_AMOUNT_AMOUNT_Msk (0x3FFUL << USBD_ISOIN_AMOUNT_AMOUNT_Pos)





#define USBD_EPOUT_PTR_PTR_Pos (0UL)
#define USBD_EPOUT_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_EPOUT_PTR_PTR_Pos)





#define USBD_EPOUT_MAXCNT_MAXCNT_Pos (0UL)
#define USBD_EPOUT_MAXCNT_MAXCNT_Msk (0x7FUL << USBD_EPOUT_MAXCNT_MAXCNT_Pos)





#define USBD_EPOUT_AMOUNT_AMOUNT_Pos (0UL)
#define USBD_EPOUT_AMOUNT_AMOUNT_Msk (0x7FUL << USBD_EPOUT_AMOUNT_AMOUNT_Pos)





#define USBD_ISOOUT_PTR_PTR_Pos (0UL)
#define USBD_ISOOUT_PTR_PTR_Msk (0xFFFFFFFFUL << USBD_ISOOUT_PTR_PTR_Pos)





#define USBD_ISOOUT_MAXCNT_MAXCNT_Pos (0UL)
#define USBD_ISOOUT_MAXCNT_MAXCNT_Msk (0x3FFUL << USBD_ISOOUT_MAXCNT_MAXCNT_Pos)





#define USBD_ISOOUT_AMOUNT_AMOUNT_Pos (0UL)
#define USBD_ISOOUT_AMOUNT_AMOUNT_Msk (0x3FFUL << USBD_ISOOUT_AMOUNT_AMOUNT_Pos)
# 17262 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52840_bitfields.h"
#define WDT_TASKS_START_TASKS_START_Pos (0UL)
#define WDT_TASKS_START_TASKS_START_Msk (0x1UL << WDT_TASKS_START_TASKS_START_Pos)
#define WDT_TASKS_START_TASKS_START_Trigger (1UL)





#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos (0UL)
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Msk (0x1UL << WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos)
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_NotGenerated (0UL)
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Generated (1UL)





#define WDT_INTENSET_TIMEOUT_Pos (0UL)
#define WDT_INTENSET_TIMEOUT_Msk (0x1UL << WDT_INTENSET_TIMEOUT_Pos)
#define WDT_INTENSET_TIMEOUT_Disabled (0UL)
#define WDT_INTENSET_TIMEOUT_Enabled (1UL)
#define WDT_INTENSET_TIMEOUT_Set (1UL)





#define WDT_INTENCLR_TIMEOUT_Pos (0UL)
#define WDT_INTENCLR_TIMEOUT_Msk (0x1UL << WDT_INTENCLR_TIMEOUT_Pos)
#define WDT_INTENCLR_TIMEOUT_Disabled (0UL)
#define WDT_INTENCLR_TIMEOUT_Enabled (1UL)
#define WDT_INTENCLR_TIMEOUT_Clear (1UL)





#define WDT_RUNSTATUS_RUNSTATUS_Pos (0UL)
#define WDT_RUNSTATUS_RUNSTATUS_Msk (0x1UL << WDT_RUNSTATUS_RUNSTATUS_Pos)
#define WDT_RUNSTATUS_RUNSTATUS_NotRunning (0UL)
#define WDT_RUNSTATUS_RUNSTATUS_Running (1UL)





#define WDT_REQSTATUS_RR7_Pos (7UL)
#define WDT_REQSTATUS_RR7_Msk (0x1UL << WDT_REQSTATUS_RR7_Pos)
#define WDT_REQSTATUS_RR7_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR7_EnabledAndUnrequested (1UL)


#define WDT_REQSTATUS_RR6_Pos (6UL)
#define WDT_REQSTATUS_RR6_Msk (0x1UL << WDT_REQSTATUS_RR6_Pos)
#define WDT_REQSTATUS_RR6_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR6_EnabledAndUnrequested (1UL)


#define WDT_REQSTATUS_RR5_Pos (5UL)
#define WDT_REQSTATUS_RR5_Msk (0x1UL << WDT_REQSTATUS_RR5_Pos)
#define WDT_REQSTATUS_RR5_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR5_EnabledAndUnrequested (1UL)


#define WDT_REQSTATUS_RR4_Pos (4UL)
#define WDT_REQSTATUS_RR4_Msk (0x1UL << WDT_REQSTATUS_RR4_Pos)
#define WDT_REQSTATUS_RR4_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR4_EnabledAndUnrequested (1UL)


#define WDT_REQSTATUS_RR3_Pos (3UL)
#define WDT_REQSTATUS_RR3_Msk (0x1UL << WDT_REQSTATUS_RR3_Pos)
#define WDT_REQSTATUS_RR3_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR3_EnabledAndUnrequested (1UL)


#define WDT_REQSTATUS_RR2_Pos (2UL)
#define WDT_REQSTATUS_RR2_Msk (0x1UL << WDT_REQSTATUS_RR2_Pos)
#define WDT_REQSTATUS_RR2_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR2_EnabledAndUnrequested (1UL)


#define WDT_REQSTATUS_RR1_Pos (1UL)
#define WDT_REQSTATUS_RR1_Msk (0x1UL << WDT_REQSTATUS_RR1_Pos)
#define WDT_REQSTATUS_RR1_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR1_EnabledAndUnrequested (1UL)


#define WDT_REQSTATUS_RR0_Pos (0UL)
#define WDT_REQSTATUS_RR0_Msk (0x1UL << WDT_REQSTATUS_RR0_Pos)
#define WDT_REQSTATUS_RR0_DisabledOrRequested (0UL)
#define WDT_REQSTATUS_RR0_EnabledAndUnrequested (1UL)





#define WDT_CRV_CRV_Pos (0UL)
#define WDT_CRV_CRV_Msk (0xFFFFFFFFUL << WDT_CRV_CRV_Pos)





#define WDT_RREN_RR7_Pos (7UL)
#define WDT_RREN_RR7_Msk (0x1UL << WDT_RREN_RR7_Pos)
#define WDT_RREN_RR7_Disabled (0UL)
#define WDT_RREN_RR7_Enabled (1UL)


#define WDT_RREN_RR6_Pos (6UL)
#define WDT_RREN_RR6_Msk (0x1UL << WDT_RREN_RR6_Pos)
#define WDT_RREN_RR6_Disabled (0UL)
#define WDT_RREN_RR6_Enabled (1UL)


#define WDT_RREN_RR5_Pos (5UL)
#define WDT_RREN_RR5_Msk (0x1UL << WDT_RREN_RR5_Pos)
#define WDT_RREN_RR5_Disabled (0UL)
#define WDT_RREN_RR5_Enabled (1UL)


#define WDT_RREN_RR4_Pos (4UL)
#define WDT_RREN_RR4_Msk (0x1UL << WDT_RREN_RR4_Pos)
#define WDT_RREN_RR4_Disabled (0UL)
#define WDT_RREN_RR4_Enabled (1UL)


#define WDT_RREN_RR3_Pos (3UL)
#define WDT_RREN_RR3_Msk (0x1UL << WDT_RREN_RR3_Pos)
#define WDT_RREN_RR3_Disabled (0UL)
#define WDT_RREN_RR3_Enabled (1UL)


#define WDT_RREN_RR2_Pos (2UL)
#define WDT_RREN_RR2_Msk (0x1UL << WDT_RREN_RR2_Pos)
#define WDT_RREN_RR2_Disabled (0UL)
#define WDT_RREN_RR2_Enabled (1UL)


#define WDT_RREN_RR1_Pos (1UL)
#define WDT_RREN_RR1_Msk (0x1UL << WDT_RREN_RR1_Pos)
#define WDT_RREN_RR1_Disabled (0UL)
#define WDT_RREN_RR1_Enabled (1UL)


#define WDT_RREN_RR0_Pos (0UL)
#define WDT_RREN_RR0_Msk (0x1UL << WDT_RREN_RR0_Pos)
#define WDT_RREN_RR0_Disabled (0UL)
#define WDT_RREN_RR0_Enabled (1UL)





#define WDT_CONFIG_HALT_Pos (3UL)
#define WDT_CONFIG_HALT_Msk (0x1UL << WDT_CONFIG_HALT_Pos)
#define WDT_CONFIG_HALT_Pause (0UL)
#define WDT_CONFIG_HALT_Run (1UL)


#define WDT_CONFIG_SLEEP_Pos (0UL)
#define WDT_CONFIG_SLEEP_Msk (0x1UL << WDT_CONFIG_SLEEP_Pos)
#define WDT_CONFIG_SLEEP_Pause (0UL)
#define WDT_CONFIG_SLEEP_Run (1UL)





#define WDT_RR_RR_Pos (0UL)
#define WDT_RR_RR_Msk (0xFFFFFFFFUL << WDT_RR_RR_Pos)
#define WDT_RR_RR_Reload (0x6E524635UL)
# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf51_to_nrf52840.h" 1
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf51_to_nrf52840.h"
#define NRF51_TO_NRF52840_H 
# 56 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf51_to_nrf52840.h"
#define UART0_IRQHandler UARTE0_UART0_IRQHandler


#define SPI0_TWI0_IRQHandler SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQHandler


#define SPI1_TWI1_IRQHandler SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQHandler


#define ADC_IRQHandler SAADC_IRQHandler


#define LPCOMP_IRQHandler COMP_LPCOMP_IRQHandler


#define SWI0_IRQHandler SWI0_EGU0_IRQHandler


#define SWI1_IRQHandler SWI1_EGU1_IRQHandler


#define SWI2_IRQHandler SWI2_EGU2_IRQHandler


#define SWI3_IRQHandler SWI3_EGU3_IRQHandler


#define SWI4_IRQHandler SWI4_EGU4_IRQHandler


#define SWI5_IRQHandler SWI5_EGU5_IRQHandler



#define UART0_IRQn UARTE0_UART0_IRQn


#define SPI0_TWI0_IRQn SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQn


#define SPI1_TWI1_IRQn SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQn


#define ADC_IRQn SAADC_IRQn


#define LPCOMP_IRQn COMP_LPCOMP_IRQn


#define SWI0_IRQn SWI0_EGU0_IRQn


#define SWI1_IRQn SWI1_EGU1_IRQn


#define SWI2_IRQn SWI2_EGU2_IRQn


#define SWI3_IRQn SWI3_EGU3_IRQn


#define SWI4_IRQn SWI4_EGU4_IRQn


#define SWI5_IRQn SWI5_EGU5_IRQn






#define RBPCONF APPROTECT



#define UICR_RBPCONF_PALL_Pos UICR_APPROTECT_PALL_Pos


#define UICR_RBPCONF_PALL_Msk UICR_APPROTECT_PALL_Msk


#define UICR_RBPCONF_PALL_Enabled UICR_APPROTECT_PALL_Enabled


#define UICR_RBPCONF_PALL_Disabled UICR_APPROTECT_PALL_Disabled






#define NRF_GPIO NRF_P0


#define NRF_GPIO_BASE NRF_P0_BASE






#define PSELLED PSEL.LED


#define PSELA PSEL.A


#define PSELB PSEL.B






#define PSELSCK PSEL.SCK


#define PSELMISO PSEL.MISO


#define PSELMOSI PSEL.MOSI


#define PSELCSN PSEL.CSN




#define RXDPTR RXD.PTR


#define MAXRX RXD.MAXCNT


#define AMOUNTRX RXD.AMOUNT



#define SPIS_MAXRX_MAXRX_Pos SPIS_RXD_MAXCNT_MAXCNT_Pos


#define SPIS_MAXRX_MAXRX_Msk SPIS_RXD_MAXCNT_MAXCNT_Msk



#define SPIS_AMOUNTRX_AMOUNTRX_Pos SPIS_RXD_AMOUNT_AMOUNT_Pos


#define SPIS_AMOUNTRX_AMOUNTRX_Msk SPIS_RXD_AMOUNT_AMOUNT_Msk




#define TXDPTR TXD.PTR


#define MAXTX TXD.MAXCNT


#define AMOUNTTX TXD.AMOUNT



#define SPIS_MAXTX_MAXTX_Pos SPIS_TXD_MAXCNT_MAXCNT_Pos


#define SPIS_MAXTX_MAXTX_Msk SPIS_TXD_MAXCNT_MAXCNT_Msk



#define SPIS_AMOUNTTX_AMOUNTTX_Pos SPIS_TXD_AMOUNT_AMOUNT_Pos


#define SPIS_AMOUNTTX_AMOUNTTX_Msk SPIS_TXD_AMOUNT_AMOUNT_Msk






#define PSELRTS PSEL.RTS


#define PSELTXD PSEL.TXD


#define PSELCTS PSEL.CTS


#define PSELRXD PSEL.RXD





#define PSELSCL PSEL.SCL


#define PSELSDA PSEL.SDA
# 263 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf51_to_nrf52840.h"
#define ERASEPROTECTEDPAGE ERASEPCR0






#define LPCOMP_COMP_IRQHandler COMP_LPCOMP_IRQHandler


#define LPCOMP_COMP_IRQn COMP_LPCOMP_IRQn





#define LPCOMP_REFSEL_REFSEL_SupplyOneEighthPrescaling LPCOMP_REFSEL_REFSEL_Ref1_8Vdd


#define LPCOMP_REFSEL_REFSEL_SupplyTwoEighthsPrescaling LPCOMP_REFSEL_REFSEL_Ref2_8Vdd


#define LPCOMP_REFSEL_REFSEL_SupplyThreeEighthsPrescaling LPCOMP_REFSEL_REFSEL_Ref3_8Vdd


#define LPCOMP_REFSEL_REFSEL_SupplyFourEighthsPrescaling LPCOMP_REFSEL_REFSEL_Ref4_8Vdd


#define LPCOMP_REFSEL_REFSEL_SupplyFiveEighthsPrescaling LPCOMP_REFSEL_REFSEL_Ref5_8Vdd


#define LPCOMP_REFSEL_REFSEL_SupplySixEighthsPrescaling LPCOMP_REFSEL_REFSEL_Ref6_8Vdd


#define LPCOMP_REFSEL_REFSEL_SupplySevenEighthsPrescaling LPCOMP_REFSEL_REFSEL_Ref7_8Vdd






#define RADIO_CRCCNF_SKIP_ADDR_Pos RADIO_CRCCNF_SKIPADDR_Pos


#define RADIO_CRCCNF_SKIP_ADDR_Msk RADIO_CRCCNF_SKIPADDR_Msk


#define RADIO_CRCCNF_SKIP_ADDR_Include RADIO_CRCCNF_SKIPADDR_Include


#define RADIO_CRCCNF_SKIP_ADDR_Skip RADIO_CRCCNF_SKIPADDR_Skip






#define DEVICEID0 DEVICEID[0]


#define DEVICEID1 DEVICEID[1]




#define ER0 ER[0]


#define ER1 ER[1]


#define ER2 ER[2]


#define ER3 ER[3]




#define IR0 IR[0]


#define IR1 IR[1]


#define IR2 IR[2]


#define IR3 IR[3]




#define DEVICEADDR0 DEVICEADDR[0]


#define DEVICEADDR1 DEVICEADDR[1]






#define TASKS_CHG0EN TASKS_CHG[0].EN


#define TASKS_CHG0DIS TASKS_CHG[0].DIS


#define TASKS_CHG1EN TASKS_CHG[1].EN


#define TASKS_CHG1DIS TASKS_CHG[1].DIS


#define TASKS_CHG2EN TASKS_CHG[2].EN


#define TASKS_CHG2DIS TASKS_CHG[2].DIS


#define TASKS_CHG3EN TASKS_CHG[3].EN


#define TASKS_CHG3DIS TASKS_CHG[3].DIS




#define CH0_EEP CH[0].EEP


#define CH0_TEP CH[0].TEP


#define CH1_EEP CH[1].EEP


#define CH1_TEP CH[1].TEP


#define CH2_EEP CH[2].EEP


#define CH2_TEP CH[2].TEP


#define CH3_EEP CH[3].EEP


#define CH3_TEP CH[3].TEP


#define CH4_EEP CH[4].EEP


#define CH4_TEP CH[4].TEP


#define CH5_EEP CH[5].EEP


#define CH5_TEP CH[5].TEP


#define CH6_EEP CH[6].EEP


#define CH6_TEP CH[6].TEP


#define CH7_EEP CH[7].EEP


#define CH7_TEP CH[7].TEP


#define CH8_EEP CH[8].EEP


#define CH8_TEP CH[8].TEP


#define CH9_EEP CH[9].EEP


#define CH9_TEP CH[9].TEP


#define CH10_EEP CH[10].EEP


#define CH10_TEP CH[10].TEP


#define CH11_EEP CH[11].EEP


#define CH11_TEP CH[11].TEP


#define CH12_EEP CH[12].EEP


#define CH12_TEP CH[12].TEP


#define CH13_EEP CH[13].EEP


#define CH13_TEP CH[13].TEP


#define CH14_EEP CH[14].EEP


#define CH14_TEP CH[14].TEP


#define CH15_EEP CH[15].EEP


#define CH15_TEP CH[15].TEP




#define CHG0 CHG[0]


#define CHG1 CHG[1]


#define CHG2 CHG[2]


#define CHG3 CHG[3]




#define PPI_CHG0_CH15_Pos PPI_CHG_CH15_Pos


#define PPI_CHG0_CH15_Msk PPI_CHG_CH15_Msk


#define PPI_CHG0_CH15_Excluded PPI_CHG_CH15_Excluded


#define PPI_CHG0_CH15_Included PPI_CHG_CH15_Included



#define PPI_CHG0_CH14_Pos PPI_CHG_CH14_Pos


#define PPI_CHG0_CH14_Msk PPI_CHG_CH14_Msk


#define PPI_CHG0_CH14_Excluded PPI_CHG_CH14_Excluded


#define PPI_CHG0_CH14_Included PPI_CHG_CH14_Included



#define PPI_CHG0_CH13_Pos PPI_CHG_CH13_Pos


#define PPI_CHG0_CH13_Msk PPI_CHG_CH13_Msk


#define PPI_CHG0_CH13_Excluded PPI_CHG_CH13_Excluded


#define PPI_CHG0_CH13_Included PPI_CHG_CH13_Included



#define PPI_CHG0_CH12_Pos PPI_CHG_CH12_Pos


#define PPI_CHG0_CH12_Msk PPI_CHG_CH12_Msk


#define PPI_CHG0_CH12_Excluded PPI_CHG_CH12_Excluded


#define PPI_CHG0_CH12_Included PPI_CHG_CH12_Included



#define PPI_CHG0_CH11_Pos PPI_CHG_CH11_Pos


#define PPI_CHG0_CH11_Msk PPI_CHG_CH11_Msk


#define PPI_CHG0_CH11_Excluded PPI_CHG_CH11_Excluded


#define PPI_CHG0_CH11_Included PPI_CHG_CH11_Included



#define PPI_CHG0_CH10_Pos PPI_CHG_CH10_Pos


#define PPI_CHG0_CH10_Msk PPI_CHG_CH10_Msk


#define PPI_CHG0_CH10_Excluded PPI_CHG_CH10_Excluded


#define PPI_CHG0_CH10_Included PPI_CHG_CH10_Included



#define PPI_CHG0_CH9_Pos PPI_CHG_CH9_Pos


#define PPI_CHG0_CH9_Msk PPI_CHG_CH9_Msk


#define PPI_CHG0_CH9_Excluded PPI_CHG_CH9_Excluded


#define PPI_CHG0_CH9_Included PPI_CHG_CH9_Included



#define PPI_CHG0_CH8_Pos PPI_CHG_CH8_Pos


#define PPI_CHG0_CH8_Msk PPI_CHG_CH8_Msk


#define PPI_CHG0_CH8_Excluded PPI_CHG_CH8_Excluded


#define PPI_CHG0_CH8_Included PPI_CHG_CH8_Included



#define PPI_CHG0_CH7_Pos PPI_CHG_CH7_Pos


#define PPI_CHG0_CH7_Msk PPI_CHG_CH7_Msk


#define PPI_CHG0_CH7_Excluded PPI_CHG_CH7_Excluded


#define PPI_CHG0_CH7_Included PPI_CHG_CH7_Included



#define PPI_CHG0_CH6_Pos PPI_CHG_CH6_Pos


#define PPI_CHG0_CH6_Msk PPI_CHG_CH6_Msk


#define PPI_CHG0_CH6_Excluded PPI_CHG_CH6_Excluded


#define PPI_CHG0_CH6_Included PPI_CHG_CH6_Included



#define PPI_CHG0_CH5_Pos PPI_CHG_CH5_Pos


#define PPI_CHG0_CH5_Msk PPI_CHG_CH5_Msk


#define PPI_CHG0_CH5_Excluded PPI_CHG_CH5_Excluded


#define PPI_CHG0_CH5_Included PPI_CHG_CH5_Included



#define PPI_CHG0_CH4_Pos PPI_CHG_CH4_Pos


#define PPI_CHG0_CH4_Msk PPI_CHG_CH4_Msk


#define PPI_CHG0_CH4_Excluded PPI_CHG_CH4_Excluded


#define PPI_CHG0_CH4_Included PPI_CHG_CH4_Included



#define PPI_CHG0_CH3_Pos PPI_CHG_CH3_Pos


#define PPI_CHG0_CH3_Msk PPI_CHG_CH3_Msk


#define PPI_CHG0_CH3_Excluded PPI_CHG_CH3_Excluded


#define PPI_CHG0_CH3_Included PPI_CHG_CH3_Included



#define PPI_CHG0_CH2_Pos PPI_CHG_CH2_Pos


#define PPI_CHG0_CH2_Msk PPI_CHG_CH2_Msk


#define PPI_CHG0_CH2_Excluded PPI_CHG_CH2_Excluded


#define PPI_CHG0_CH2_Included PPI_CHG_CH2_Included



#define PPI_CHG0_CH1_Pos PPI_CHG_CH1_Pos


#define PPI_CHG0_CH1_Msk PPI_CHG_CH1_Msk


#define PPI_CHG0_CH1_Excluded PPI_CHG_CH1_Excluded


#define PPI_CHG0_CH1_Included PPI_CHG_CH1_Included



#define PPI_CHG0_CH0_Pos PPI_CHG_CH0_Pos


#define PPI_CHG0_CH0_Msk PPI_CHG_CH0_Msk


#define PPI_CHG0_CH0_Excluded PPI_CHG_CH0_Excluded


#define PPI_CHG0_CH0_Included PPI_CHG_CH0_Included



#define PPI_CHG1_CH15_Pos PPI_CHG_CH15_Pos


#define PPI_CHG1_CH15_Msk PPI_CHG_CH15_Msk


#define PPI_CHG1_CH15_Excluded PPI_CHG_CH15_Excluded


#define PPI_CHG1_CH15_Included PPI_CHG_CH15_Included



#define PPI_CHG1_CH14_Pos PPI_CHG_CH14_Pos


#define PPI_CHG1_CH14_Msk PPI_CHG_CH14_Msk


#define PPI_CHG1_CH14_Excluded PPI_CHG_CH14_Excluded


#define PPI_CHG1_CH14_Included PPI_CHG_CH14_Included



#define PPI_CHG1_CH13_Pos PPI_CHG_CH13_Pos


#define PPI_CHG1_CH13_Msk PPI_CHG_CH13_Msk


#define PPI_CHG1_CH13_Excluded PPI_CHG_CH13_Excluded


#define PPI_CHG1_CH13_Included PPI_CHG_CH13_Included



#define PPI_CHG1_CH12_Pos PPI_CHG_CH12_Pos


#define PPI_CHG1_CH12_Msk PPI_CHG_CH12_Msk


#define PPI_CHG1_CH12_Excluded PPI_CHG_CH12_Excluded


#define PPI_CHG1_CH12_Included PPI_CHG_CH12_Included



#define PPI_CHG1_CH11_Pos PPI_CHG_CH11_Pos


#define PPI_CHG1_CH11_Msk PPI_CHG_CH11_Msk


#define PPI_CHG1_CH11_Excluded PPI_CHG_CH11_Excluded


#define PPI_CHG1_CH11_Included PPI_CHG_CH11_Included



#define PPI_CHG1_CH10_Pos PPI_CHG_CH10_Pos


#define PPI_CHG1_CH10_Msk PPI_CHG_CH10_Msk


#define PPI_CHG1_CH10_Excluded PPI_CHG_CH10_Excluded


#define PPI_CHG1_CH10_Included PPI_CHG_CH10_Included



#define PPI_CHG1_CH9_Pos PPI_CHG_CH9_Pos


#define PPI_CHG1_CH9_Msk PPI_CHG_CH9_Msk


#define PPI_CHG1_CH9_Excluded PPI_CHG_CH9_Excluded


#define PPI_CHG1_CH9_Included PPI_CHG_CH9_Included



#define PPI_CHG1_CH8_Pos PPI_CHG_CH8_Pos


#define PPI_CHG1_CH8_Msk PPI_CHG_CH8_Msk


#define PPI_CHG1_CH8_Excluded PPI_CHG_CH8_Excluded


#define PPI_CHG1_CH8_Included PPI_CHG_CH8_Included



#define PPI_CHG1_CH7_Pos PPI_CHG_CH7_Pos


#define PPI_CHG1_CH7_Msk PPI_CHG_CH7_Msk


#define PPI_CHG1_CH7_Excluded PPI_CHG_CH7_Excluded


#define PPI_CHG1_CH7_Included PPI_CHG_CH7_Included



#define PPI_CHG1_CH6_Pos PPI_CHG_CH6_Pos


#define PPI_CHG1_CH6_Msk PPI_CHG_CH6_Msk


#define PPI_CHG1_CH6_Excluded PPI_CHG_CH6_Excluded


#define PPI_CHG1_CH6_Included PPI_CHG_CH6_Included



#define PPI_CHG1_CH5_Pos PPI_CHG_CH5_Pos


#define PPI_CHG1_CH5_Msk PPI_CHG_CH5_Msk


#define PPI_CHG1_CH5_Excluded PPI_CHG_CH5_Excluded


#define PPI_CHG1_CH5_Included PPI_CHG_CH5_Included



#define PPI_CHG1_CH4_Pos PPI_CHG_CH4_Pos


#define PPI_CHG1_CH4_Msk PPI_CHG_CH4_Msk


#define PPI_CHG1_CH4_Excluded PPI_CHG_CH4_Excluded


#define PPI_CHG1_CH4_Included PPI_CHG_CH4_Included



#define PPI_CHG1_CH3_Pos PPI_CHG_CH3_Pos


#define PPI_CHG1_CH3_Msk PPI_CHG_CH3_Msk


#define PPI_CHG1_CH3_Excluded PPI_CHG_CH3_Excluded


#define PPI_CHG1_CH3_Included PPI_CHG_CH3_Included



#define PPI_CHG1_CH2_Pos PPI_CHG_CH2_Pos


#define PPI_CHG1_CH2_Msk PPI_CHG_CH2_Msk


#define PPI_CHG1_CH2_Excluded PPI_CHG_CH2_Excluded


#define PPI_CHG1_CH2_Included PPI_CHG_CH2_Included



#define PPI_CHG1_CH1_Pos PPI_CHG_CH1_Pos


#define PPI_CHG1_CH1_Msk PPI_CHG_CH1_Msk


#define PPI_CHG1_CH1_Excluded PPI_CHG_CH1_Excluded


#define PPI_CHG1_CH1_Included PPI_CHG_CH1_Included



#define PPI_CHG1_CH0_Pos PPI_CHG_CH0_Pos


#define PPI_CHG1_CH0_Msk PPI_CHG_CH0_Msk


#define PPI_CHG1_CH0_Excluded PPI_CHG_CH0_Excluded


#define PPI_CHG1_CH0_Included PPI_CHG_CH0_Included



#define PPI_CHG2_CH15_Pos PPI_CHG_CH15_Pos


#define PPI_CHG2_CH15_Msk PPI_CHG_CH15_Msk


#define PPI_CHG2_CH15_Excluded PPI_CHG_CH15_Excluded


#define PPI_CHG2_CH15_Included PPI_CHG_CH15_Included



#define PPI_CHG2_CH14_Pos PPI_CHG_CH14_Pos


#define PPI_CHG2_CH14_Msk PPI_CHG_CH14_Msk


#define PPI_CHG2_CH14_Excluded PPI_CHG_CH14_Excluded


#define PPI_CHG2_CH14_Included PPI_CHG_CH14_Included



#define PPI_CHG2_CH13_Pos PPI_CHG_CH13_Pos


#define PPI_CHG2_CH13_Msk PPI_CHG_CH13_Msk


#define PPI_CHG2_CH13_Excluded PPI_CHG_CH13_Excluded


#define PPI_CHG2_CH13_Included PPI_CHG_CH13_Included



#define PPI_CHG2_CH12_Pos PPI_CHG_CH12_Pos


#define PPI_CHG2_CH12_Msk PPI_CHG_CH12_Msk


#define PPI_CHG2_CH12_Excluded PPI_CHG_CH12_Excluded


#define PPI_CHG2_CH12_Included PPI_CHG_CH12_Included



#define PPI_CHG2_CH11_Pos PPI_CHG_CH11_Pos


#define PPI_CHG2_CH11_Msk PPI_CHG_CH11_Msk


#define PPI_CHG2_CH11_Excluded PPI_CHG_CH11_Excluded


#define PPI_CHG2_CH11_Included PPI_CHG_CH11_Included



#define PPI_CHG2_CH10_Pos PPI_CHG_CH10_Pos


#define PPI_CHG2_CH10_Msk PPI_CHG_CH10_Msk


#define PPI_CHG2_CH10_Excluded PPI_CHG_CH10_Excluded


#define PPI_CHG2_CH10_Included PPI_CHG_CH10_Included



#define PPI_CHG2_CH9_Pos PPI_CHG_CH9_Pos


#define PPI_CHG2_CH9_Msk PPI_CHG_CH9_Msk


#define PPI_CHG2_CH9_Excluded PPI_CHG_CH9_Excluded


#define PPI_CHG2_CH9_Included PPI_CHG_CH9_Included



#define PPI_CHG2_CH8_Pos PPI_CHG_CH8_Pos


#define PPI_CHG2_CH8_Msk PPI_CHG_CH8_Msk


#define PPI_CHG2_CH8_Excluded PPI_CHG_CH8_Excluded


#define PPI_CHG2_CH8_Included PPI_CHG_CH8_Included



#define PPI_CHG2_CH7_Pos PPI_CHG_CH7_Pos


#define PPI_CHG2_CH7_Msk PPI_CHG_CH7_Msk


#define PPI_CHG2_CH7_Excluded PPI_CHG_CH7_Excluded


#define PPI_CHG2_CH7_Included PPI_CHG_CH7_Included



#define PPI_CHG2_CH6_Pos PPI_CHG_CH6_Pos


#define PPI_CHG2_CH6_Msk PPI_CHG_CH6_Msk


#define PPI_CHG2_CH6_Excluded PPI_CHG_CH6_Excluded


#define PPI_CHG2_CH6_Included PPI_CHG_CH6_Included



#define PPI_CHG2_CH5_Pos PPI_CHG_CH5_Pos


#define PPI_CHG2_CH5_Msk PPI_CHG_CH5_Msk


#define PPI_CHG2_CH5_Excluded PPI_CHG_CH5_Excluded


#define PPI_CHG2_CH5_Included PPI_CHG_CH5_Included



#define PPI_CHG2_CH4_Pos PPI_CHG_CH4_Pos


#define PPI_CHG2_CH4_Msk PPI_CHG_CH4_Msk


#define PPI_CHG2_CH4_Excluded PPI_CHG_CH4_Excluded


#define PPI_CHG2_CH4_Included PPI_CHG_CH4_Included



#define PPI_CHG2_CH3_Pos PPI_CHG_CH3_Pos


#define PPI_CHG2_CH3_Msk PPI_CHG_CH3_Msk


#define PPI_CHG2_CH3_Excluded PPI_CHG_CH3_Excluded


#define PPI_CHG2_CH3_Included PPI_CHG_CH3_Included



#define PPI_CHG2_CH2_Pos PPI_CHG_CH2_Pos


#define PPI_CHG2_CH2_Msk PPI_CHG_CH2_Msk


#define PPI_CHG2_CH2_Excluded PPI_CHG_CH2_Excluded


#define PPI_CHG2_CH2_Included PPI_CHG_CH2_Included



#define PPI_CHG2_CH1_Pos PPI_CHG_CH1_Pos


#define PPI_CHG2_CH1_Msk PPI_CHG_CH1_Msk


#define PPI_CHG2_CH1_Excluded PPI_CHG_CH1_Excluded


#define PPI_CHG2_CH1_Included PPI_CHG_CH1_Included



#define PPI_CHG2_CH0_Pos PPI_CHG_CH0_Pos


#define PPI_CHG2_CH0_Msk PPI_CHG_CH0_Msk


#define PPI_CHG2_CH0_Excluded PPI_CHG_CH0_Excluded


#define PPI_CHG2_CH0_Included PPI_CHG_CH0_Included



#define PPI_CHG3_CH15_Pos PPI_CHG_CH15_Pos


#define PPI_CHG3_CH15_Msk PPI_CHG_CH15_Msk


#define PPI_CHG3_CH15_Excluded PPI_CHG_CH15_Excluded


#define PPI_CHG3_CH15_Included PPI_CHG_CH15_Included



#define PPI_CHG3_CH14_Pos PPI_CHG_CH14_Pos


#define PPI_CHG3_CH14_Msk PPI_CHG_CH14_Msk


#define PPI_CHG3_CH14_Excluded PPI_CHG_CH14_Excluded


#define PPI_CHG3_CH14_Included PPI_CHG_CH14_Included



#define PPI_CHG3_CH13_Pos PPI_CHG_CH13_Pos


#define PPI_CHG3_CH13_Msk PPI_CHG_CH13_Msk


#define PPI_CHG3_CH13_Excluded PPI_CHG_CH13_Excluded


#define PPI_CHG3_CH13_Included PPI_CHG_CH13_Included



#define PPI_CHG3_CH12_Pos PPI_CHG_CH12_Pos


#define PPI_CHG3_CH12_Msk PPI_CHG_CH12_Msk


#define PPI_CHG3_CH12_Excluded PPI_CHG_CH12_Excluded


#define PPI_CHG3_CH12_Included PPI_CHG_CH12_Included



#define PPI_CHG3_CH11_Pos PPI_CHG_CH11_Pos


#define PPI_CHG3_CH11_Msk PPI_CHG_CH11_Msk


#define PPI_CHG3_CH11_Excluded PPI_CHG_CH11_Excluded


#define PPI_CHG3_CH11_Included PPI_CHG_CH11_Included



#define PPI_CHG3_CH10_Pos PPI_CHG_CH10_Pos


#define PPI_CHG3_CH10_Msk PPI_CHG_CH10_Msk


#define PPI_CHG3_CH10_Excluded PPI_CHG_CH10_Excluded


#define PPI_CHG3_CH10_Included PPI_CHG_CH10_Included



#define PPI_CHG3_CH9_Pos PPI_CHG_CH9_Pos


#define PPI_CHG3_CH9_Msk PPI_CHG_CH9_Msk


#define PPI_CHG3_CH9_Excluded PPI_CHG_CH9_Excluded


#define PPI_CHG3_CH9_Included PPI_CHG_CH9_Included



#define PPI_CHG3_CH8_Pos PPI_CHG_CH8_Pos


#define PPI_CHG3_CH8_Msk PPI_CHG_CH8_Msk


#define PPI_CHG3_CH8_Excluded PPI_CHG_CH8_Excluded


#define PPI_CHG3_CH8_Included PPI_CHG_CH8_Included



#define PPI_CHG3_CH7_Pos PPI_CHG_CH7_Pos


#define PPI_CHG3_CH7_Msk PPI_CHG_CH7_Msk


#define PPI_CHG3_CH7_Excluded PPI_CHG_CH7_Excluded


#define PPI_CHG3_CH7_Included PPI_CHG_CH7_Included



#define PPI_CHG3_CH6_Pos PPI_CHG_CH6_Pos


#define PPI_CHG3_CH6_Msk PPI_CHG_CH6_Msk


#define PPI_CHG3_CH6_Excluded PPI_CHG_CH6_Excluded


#define PPI_CHG3_CH6_Included PPI_CHG_CH6_Included



#define PPI_CHG3_CH5_Pos PPI_CHG_CH5_Pos


#define PPI_CHG3_CH5_Msk PPI_CHG_CH5_Msk


#define PPI_CHG3_CH5_Excluded PPI_CHG_CH5_Excluded


#define PPI_CHG3_CH5_Included PPI_CHG_CH5_Included



#define PPI_CHG3_CH4_Pos PPI_CHG_CH4_Pos


#define PPI_CHG3_CH4_Msk PPI_CHG_CH4_Msk


#define PPI_CHG3_CH4_Excluded PPI_CHG_CH4_Excluded


#define PPI_CHG3_CH4_Included PPI_CHG_CH4_Included



#define PPI_CHG3_CH3_Pos PPI_CHG_CH3_Pos


#define PPI_CHG3_CH3_Msk PPI_CHG_CH3_Msk


#define PPI_CHG3_CH3_Excluded PPI_CHG_CH3_Excluded


#define PPI_CHG3_CH3_Included PPI_CHG_CH3_Included



#define PPI_CHG3_CH2_Pos PPI_CHG_CH2_Pos


#define PPI_CHG3_CH2_Msk PPI_CHG_CH2_Msk


#define PPI_CHG3_CH2_Excluded PPI_CHG_CH2_Excluded


#define PPI_CHG3_CH2_Included PPI_CHG_CH2_Included



#define PPI_CHG3_CH1_Pos PPI_CHG_CH1_Pos


#define PPI_CHG3_CH1_Msk PPI_CHG_CH1_Msk


#define PPI_CHG3_CH1_Excluded PPI_CHG_CH1_Excluded


#define PPI_CHG3_CH1_Included PPI_CHG_CH1_Included



#define PPI_CHG3_CH0_Pos PPI_CHG_CH0_Pos


#define PPI_CHG3_CH0_Msk PPI_CHG_CH0_Msk


#define PPI_CHG3_CH0_Excluded PPI_CHG_CH0_Excluded


#define PPI_CHG3_CH0_Included PPI_CHG_CH0_Included
# 172 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52_to_nrf52840.h" 1
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52_to_nrf52840.h"
#define NRF52_TO_NRF52840_H 
# 82 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52_to_nrf52840.h"
#define LPCOMP_HYST_HYST_NoHyst LPCOMP_HYST_HYST_Disabled


#define LPCOMP_HYST_HYST_Hyst50mV LPCOMP_HYST_HYST_Enabled
# 94 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf52_to_nrf52840.h"
#define I2S_ENABLE_ENABLE_DISABLE I2S_ENABLE_ENABLE_Disabled


#define I2S_ENABLE_ENABLE_ENABLE I2S_ENABLE_ENABLE_Enabled


#define I2S_CONFIG_MODE_MODE_MASTER I2S_CONFIG_MODE_MODE_Master


#define I2S_CONFIG_MODE_MODE_SLAVE I2S_CONFIG_MODE_MODE_Slave


#define I2S_CONFIG_RXEN_RXEN_DISABLE I2S_CONFIG_RXEN_RXEN_Disabled


#define I2S_CONFIG_RXEN_RXEN_ENABLE I2S_CONFIG_RXEN_RXEN_Enabled


#define I2S_CONFIG_TXEN_TXEN_DISABLE I2S_CONFIG_TXEN_TXEN_Disabled


#define I2S_CONFIG_TXEN_TXEN_ENABLE I2S_CONFIG_TXEN_TXEN_Enabled


#define I2S_CONFIG_MCKEN_MCKEN_DISABLE I2S_CONFIG_MCKEN_MCKEN_Disabled


#define I2S_CONFIG_MCKEN_MCKEN_ENABLE I2S_CONFIG_MCKEN_MCKEN_Enabled


#define I2S_CONFIG_SWIDTH_SWIDTH_8BIT I2S_CONFIG_SWIDTH_SWIDTH_8Bit


#define I2S_CONFIG_SWIDTH_SWIDTH_16BIT I2S_CONFIG_SWIDTH_SWIDTH_16Bit


#define I2S_CONFIG_SWIDTH_SWIDTH_24BIT I2S_CONFIG_SWIDTH_SWIDTH_24Bit


#define I2S_CONFIG_ALIGN_ALIGN_LEFT I2S_CONFIG_ALIGN_ALIGN_Left


#define I2S_CONFIG_ALIGN_ALIGN_RIGHT I2S_CONFIG_ALIGN_ALIGN_Right


#define I2S_CONFIG_FORMAT_FORMAT_ALIGNED I2S_CONFIG_FORMAT_FORMAT_Aligned


#define I2S_CONFIG_CHANNELS_CHANNELS_STEREO I2S_CONFIG_CHANNELS_CHANNELS_Stereo


#define I2S_CONFIG_CHANNELS_CHANNELS_LEFT I2S_CONFIG_CHANNELS_CHANNELS_Left


#define I2S_CONFIG_CHANNELS_CHANNELS_RIGHT I2S_CONFIG_CHANNELS_CHANNELS_Right





#define LPCOMP_RESULT_RESULT_Bellow LPCOMP_RESULT_RESULT_Below
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h" 2
# 192 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/compiler_abstraction.h" 1
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/compiler_abstraction.h"
#define _COMPILER_ABSTRACTION_H 




#define NRF_STRING_CONCATENATE_IMPL(lhs,rhs) lhs ## rhs


#define NRF_STRING_CONCATENATE(lhs,rhs) NRF_STRING_CONCATENATE_IMPL(lhs, rhs)
# 172 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/compiler_abstraction.h"
#define __ALIGN(n) __attribute__((aligned(n)))







#define __UNUSED __attribute__((unused))


#define GET_SP() gcc_current_sp()

    static inline unsigned int gcc_current_sp(void)
    {
        unsigned int stack_pointer = 0;
        __asm__ __volatile__ ("mov %0, sp" : "=r"(stack_pointer));
        return stack_pointer;
    }


#define NRF_STATIC_ASSERT(cond,msg) _Static_assert(cond, msg)
# 231 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/compiler_abstraction.h"
#define NRF_MDK_VERSION_ASSERT_AT_LEAST(major,minor,micro) NRF_STATIC_ASSERT( ( (major < MDK_MAJOR_VERSION) || (major == MDK_MAJOR_VERSION && minor < MDK_MINOR_VERSION) || (major == MDK_MAJOR_VERSION && minor == MDK_MINOR_VERSION && micro < MDK_MICRO_VERSION) ), "MDK version mismatch.")







#define NRF_MDK_VERSION_ASSERT_EXACT(major,minor,micro) NRF_STATIC_ASSERT( ( (major != MDK_MAJOR_VERSION) || (major != MDK_MAJOR_VERSION) || (major != MDK_MAJOR_VERSION) ), "MDK version mismatch.")
# 193 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/modules/nrfx/mdk/nrf.h" 2
# 49 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.h" 2
# 75 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.h"
void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name);





#define NRF_ASSERT_PRESENT 0
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.h"
#define ASSERT(expr) if (NRF_ASSERT_PRESENT) { if (expr) { } else { assert_nrf_callback((uint16_t)__LINE__, (uint8_t *)__FILE__); } }
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h" 1
# 50 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h"
#define APP_ERROR_H__ 



# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 1 3
# 27 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
#define _STDIO_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3







#define _ANSIDECL_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 1 3







#define __NEWLIB_H__ 1
# 18 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _WANT_IO_C99_FORMATS 1


#define _WANT_IO_LONG_LONG 1


#define _WANT_REGISTER_FINI 1
# 37 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _REENT_CHECK_VERIFY 1





#define _MB_LEN_MAX 1
# 53 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define HAVE_INITFINI_ARRAY 1



#define _ATEXIT_DYNAMIC_ALLOC 1


#define _HAVE_LONG_DOUBLE 1


#define _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL 1


#define _LDBL_EQ_DBL 1


#define _FVWRITE_IN_STREAMIO 1


#define _FSEEK_OPTIMIZATION 1


#define _WIDE_ORIENT 1


#define _UNBUF_STREAM_OPT 1
# 95 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _RETARGETABLE_LOCKING 1
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 1 3

#define __SYS_CONFIG_H__ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN 
# 473 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 1


#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
# 5 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 2 3
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 3
#define _POINTER_INT long





#undef __RAND_MAX



#define __RAND_MAX 0x7fffffff
# 250 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 3
#define __EXPORT 



#define __IMPORT 






#define _READ_WRITE_RETURN_TYPE int





#define _READ_WRITE_BUFSIZE_TYPE int
# 12 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 31 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 3
#define _BEGIN_STD_C 
#define _END_STD_C 
#define _NOTHROW 



#define _LONG_DOUBLE long double





#define _ATTRIBUTE(attrs) __attribute__ (attrs)
# 69 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 3
#define _ELIDABLE_INLINE static __inline__



#define _NOINLINE __attribute__ ((__noinline__))
#define _NOINLINE_STATIC _NOINLINE static
# 30 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 2 3

#define _FSTDIO 

#define __need_size_t 
#define __need_NULL 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 1 3
# 43 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _SYS_CDEFS_H_ 



# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 181 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
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






# 209 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL
# 48 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 2 3

#define __PMT(args) args
#define __DOTS , ...
#define __THROW 


#define __ASMNAME(cname) __XSTRING (__USER_LABEL_PREFIX__) cname


#define __ptr_t void *
#define __long_double_t long double

#define __attribute_malloc__ 
#define __attribute_pure__ 
#define __attribute_format_strfmon__(a,b) 
#define __flexarr [0]


#define __bounded 
#define __unbounded 
#define __ptrvalue 
# 78 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __has_extension __has_feature


#define __has_feature(x) 0
# 94 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __BEGIN_DECLS 
#define __END_DECLS 
# 107 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __GNUCLIKE_ASM 3
#define __GNUCLIKE_MATH_BUILTIN_CONSTANTS 



#define __GNUCLIKE___TYPEOF 1
#define __GNUCLIKE___OFFSETOF 1
#define __GNUCLIKE___SECTION 1


#define __GNUCLIKE_CTOR_SECTION_HANDLING 1


#define __GNUCLIKE_BUILTIN_CONSTANT_P 1






#define __GNUCLIKE_BUILTIN_VARARGS 1
#define __GNUCLIKE_BUILTIN_STDARG 1
#define __GNUCLIKE_BUILTIN_VAALIST 1



#define __GNUC_VA_LIST_COMPATIBILITY 1






#define __compiler_membar() __asm __volatile(" " : : : "memory")



#define __GNUCLIKE_BUILTIN_NEXT_ARG 1
#define __GNUCLIKE_MATH_BUILTIN_RELOPS 


#define __GNUCLIKE_BUILTIN_MEMCPY 1


#define __CC_SUPPORTS_INLINE 1
#define __CC_SUPPORTS___INLINE 1
#define __CC_SUPPORTS___INLINE__ 1

#define __CC_SUPPORTS___FUNC__ 1
#define __CC_SUPPORTS_WARNING 1

#define __CC_SUPPORTS_VARADIC_XXX 1

#define __CC_SUPPORTS_DYNAMIC_ARRAY_INIT 1
# 177 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __P(protos) protos
#define __CONCAT1(x,y) x ## y
#define __CONCAT(x,y) __CONCAT1(x,y)
#define __STRING(x) #x
#define __XSTRING(x) __STRING(x)

#define __const const
#define __signed signed
#define __volatile volatile
# 230 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __weak_symbol __attribute__((__weak__))
# 243 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __dead2 __attribute__((__noreturn__))
#define __pure2 __attribute__((__const__))
#define __unused __attribute__((__unused__))
#define __used __attribute__((__used__))
#define __packed __attribute__((__packed__))
#define __aligned(x) __attribute__((__aligned__(x)))
#define __section(x) __attribute__((__section__(x)))


#define __alloc_size(x) __attribute__((__alloc_size__(x)))
#define __alloc_size2(n,x) __attribute__((__alloc_size__(n, x)))





#define __alloc_align(x) __attribute__((__alloc_align__(x)))
# 280 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Alignas(x) __aligned(x)






#define _Alignof(x) __alignof(x)
# 296 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Atomic(T) struct { T volatile __val; }





#define _Noreturn __dead2
# 331 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Thread_local __thread
# 351 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __generic(expr,t,yes,no) __builtin_choose_expr( __builtin_types_compatible_p(__typeof(expr), t), yes, no)
# 366 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __min_size(x) static (x)





#define __malloc_like __attribute__((__malloc__))
#define __pure __attribute__((__pure__))






#define __always_inline __inline__ __attribute__((__always_inline__))





#define __noinline __attribute__ ((__noinline__))





#define __nonnull(x) __attribute__((__nonnull__ x))
#define __nonnull_all __attribute__((__nonnull__))






#define __fastcall __attribute__((__fastcall__))
#define __result_use_check __attribute__((__warn_unused_result__))






#define __returns_twice __attribute__((__returns_twice__))





#define __unreachable() __builtin_unreachable()
# 434 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __restrict restrict
# 467 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __predict_true(exp) __builtin_expect((exp), 1)
#define __predict_false(exp) __builtin_expect((exp), 0)






#define __null_sentinel __attribute__((__sentinel__))
#define __exported __attribute__((__visibility__("default")))


#define __hidden __attribute__((__visibility__("hidden")))
# 489 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __offsetof(type,field) offsetof(type, field)
#define __rangeof(type,start,end) (__offsetof(type, end) - __offsetof(type, start))
# 500 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __containerof(x,s,m) ({ const volatile __typeof(((s *)0)->m) *__x = (x); __DEQUALIFY(s *, (const volatile char *)__x - __offsetof(s, m));})
# 522 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))

#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))

#define __format_arg(fmtarg) __attribute__((__format_arg__ (fmtarg)))
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))

#define __strftimelike(fmtarg,firstvararg) __attribute__((__format__ (__strftime__, fmtarg, firstvararg)))
# 539 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __printf0like(fmtarg,firstvararg) 




#define __strong_reference(sym,aliassym) extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))




#define __weak_reference(sym,alias) __asm__(".weak " #alias); __asm__(".equ " #alias ", " #sym)


#define __warn_references(sym,msg) __asm__(".section .gnu.warning." #sym); __asm__(".asciz \"" msg "\""); __asm__(".previous")



#define __sym_compat(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@" #verid)

#define __sym_default(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@@" #verid)
# 593 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __FBSDID(s) struct __hack



#define __RCSID(s) struct __hack



#define __RCSID_SOURCE(s) struct __hack



#define __SCCSID(s) struct __hack



#define __COPYRIGHT(s) struct __hack



#define __DECONST(type,var) ((type)(__uintptr_t)(const void *)(var))



#define __DEVOLATILE(type,var) ((type)(__uintptr_t)(volatile void *)(var))



#define __DEQUALIFY(type,var) ((type)(__uintptr_t)(const volatile void *)(var))






#define _Nonnull 
#define _Nullable 
#define _Null_unspecified 
#define __NULLABILITY_PRAGMA_PUSH 
#define __NULLABILITY_PRAGMA_POP 
# 653 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __arg_type_tag(arg_kind,arg_idx,type_tag_idx) 
#define __datatype_type_tag(kind,type) 
# 672 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __lock_annotate(x) 





#define __lockable __lock_annotate(lockable)


#define __locks_exclusive(...) __lock_annotate(exclusive_lock_function(__VA_ARGS__))

#define __locks_shared(...) __lock_annotate(shared_lock_function(__VA_ARGS__))



#define __trylocks_exclusive(...) __lock_annotate(exclusive_trylock_function(__VA_ARGS__))

#define __trylocks_shared(...) __lock_annotate(shared_trylock_function(__VA_ARGS__))



#define __unlocks(...) __lock_annotate(unlock_function(__VA_ARGS__))


#define __asserts_exclusive(...) __lock_annotate(assert_exclusive_lock(__VA_ARGS__))

#define __asserts_shared(...) __lock_annotate(assert_shared_lock(__VA_ARGS__))



#define __requires_exclusive(...) __lock_annotate(exclusive_locks_required(__VA_ARGS__))

#define __requires_shared(...) __lock_annotate(shared_locks_required(__VA_ARGS__))

#define __requires_unlocked(...) __lock_annotate(locks_excluded(__VA_ARGS__))



#define __no_lock_analysis __lock_annotate(no_thread_safety_analysis)


#define __guarded_by(x) __lock_annotate(guarded_by(x))
#define __pt_guarded_by(x) __lock_annotate(pt_guarded_by(x))
# 36 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 39 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _STDDEF_H 
#define _STDDEF_H_ 

#define _ANSI_STDDEF_H 
# 131 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _PTRDIFF_T 
#define _T_PTRDIFF_ 
#define _T_PTRDIFF 
#define __PTRDIFF_T 
#define _PTRDIFF_T_ 
#define _BSD_PTRDIFF_T_ 
#define ___int_ptrdiff_t_h 
#define _GCC_PTRDIFF_T 
#define _PTRDIFF_T_DECLARED 



typedef int ptrdiff_t;
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 260 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
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
# 287 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef _BSD_WCHAR_T_
# 321 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 37 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 2 3


#define __need___va_list 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdarg.h" 1 3 4
# 34 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdarg.h" 3 4
#undef __need___va_list




#define __GNUC_VA_LIST 
typedef __builtin_va_list __gnuc_va_list;
# 41 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 2 3
# 60 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 1 3
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _SYS_REENT_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 1 3
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#define _SYS__TYPES_H 

#define __need_size_t 
#define __need_wint_t 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t




#define _WINT_T 




typedef unsigned int wint_t;

#undef __need_wint_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 25 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_types.h" 1 3





#define _MACHINE__TYPES_H 
# 28 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 127 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#undef __size_t



typedef unsigned int __size_t;
# 146 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#define unsigned signed
typedef signed int _ssize_t;
#undef unsigned
# 158 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;



#define _CLOCK_T_ unsigned long


typedef unsigned long __clock_t;




#define _TIME_T_ __int_least64_t

typedef __int_least64_t __time_t;


#define _CLOCKID_T_ unsigned long


typedef unsigned long __clockid_t;

#define _TIMER_T_ unsigned long
typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3

#define _NULL 0



#define __Long long
typedef unsigned long __ULong;
# 34 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/lock.h" 1 3

#define __SYS_LOCK_H__ 
# 33 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;
#define _LOCK_RECURSIVE_T _LOCK_T

#define __LOCK_INIT(class,lock) extern struct __lock __lock_ ## lock; class _LOCK_T lock = &__lock_ ## lock

#define __LOCK_INIT_RECURSIVE(class,lock) __LOCK_INIT(class,lock)

extern void __retarget_lock_init(_LOCK_T *lock);
#define __lock_init(lock) __retarget_lock_init(&lock)
extern void __retarget_lock_init_recursive(_LOCK_T *lock);
#define __lock_init_recursive(lock) __retarget_lock_init_recursive(&lock)
extern void __retarget_lock_close(_LOCK_T lock);
#define __lock_close(lock) __retarget_lock_close(lock)
extern void __retarget_lock_close_recursive(_LOCK_T lock);
#define __lock_close_recursive(lock) __retarget_lock_close_recursive(lock)
extern void __retarget_lock_acquire(_LOCK_T lock);
#define __lock_acquire(lock) __retarget_lock_acquire(lock)
extern void __retarget_lock_acquire_recursive(_LOCK_T lock);
#define __lock_acquire_recursive(lock) __retarget_lock_acquire_recursive(lock)
extern int __retarget_lock_try_acquire(_LOCK_T lock);
#define __lock_try_acquire(lock) __retarget_lock_try_acquire(lock)
extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);
#define __lock_try_acquire_recursive(lock) __retarget_lock_try_acquire_recursive(lock)

extern void __retarget_lock_release(_LOCK_T lock);
#define __lock_release(lock) __retarget_lock_release(lock)
extern void __retarget_lock_release_recursive(_LOCK_T lock);
#define __lock_release_recursive(lock) __retarget_lock_release_recursive(lock)
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
typedef _LOCK_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};





#define _ATEXIT_SIZE 32

struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
#define _ATEXIT_INIT {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}





#define _REENT_INIT_ATEXIT _NULL, _ATEXIT_INIT,
# 122 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 183 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_SMALL_CHECK_INIT(ptr) 


struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 292 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 317 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _RAND48_SEED_0 (0x330e)
#define _RAND48_SEED_1 (0xabcd)
#define _RAND48_SEED_2 (0x1234)
#define _RAND48_MULT_0 (0xe66d)
#define _RAND48_MULT_1 (0xdeec)
#define _RAND48_MULT_2 (0x0005)
#define _RAND48_ADD (0x000b)
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};


#define _REENT_EMERGENCY_SIZE 25
#define _REENT_ASCTIME_SIZE 26
#define _REENT_SIGNAL_SIZE 24
# 613 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {
#define _N_LISTS 30
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};





#define _REENT_STDIO_STREAM(var,index) &(var)->__sf[index]


#define _REENT_INIT(var) { 0, _REENT_STDIO_STREAM(&(var), 0), _REENT_STDIO_STREAM(&(var), 1), _REENT_STDIO_STREAM(&(var), 2), 0, "", 0, _NULL, 0, _NULL, _NULL, 0, _NULL, _NULL, 0, _NULL, { { 0, _NULL, "", {0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 1, { {_RAND48_SEED_0, _RAND48_SEED_1, _RAND48_SEED_2}, {_RAND48_MULT_0, _RAND48_MULT_1, _RAND48_MULT_2}, _RAND48_ADD }, {0, {0}}, {0, {0}}, {0, {0}}, "", "", 0, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}} } }, _REENT_INIT_ATEXIT _NULL, {_NULL, 0, _NULL} }
# 751 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_INIT_PTR_ZEROED(var) { (var)->_stdin = _REENT_STDIO_STREAM(var, 0); (var)->_stdout = _REENT_STDIO_STREAM(var, 1); (var)->_stderr = _REENT_STDIO_STREAM(var, 2); (var)->_new._reent._rand_next = 1; (var)->_new._reent._r48._seed[0] = _RAND48_SEED_0; (var)->_new._reent._r48._seed[1] = _RAND48_SEED_1; (var)->_new._reent._r48._seed[2] = _RAND48_SEED_2; (var)->_new._reent._r48._mult[0] = _RAND48_MULT_0; (var)->_new._reent._r48._mult[1] = _RAND48_MULT_1; (var)->_new._reent._r48._mult[2] = _RAND48_MULT_2; (var)->_new._reent._r48._add = _RAND48_ADD; }
# 765 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_CHECK_RAND48(ptr) 
#define _REENT_CHECK_MP(ptr) 
#define _REENT_CHECK_TM(ptr) 
#define _REENT_CHECK_ASCTIME_BUF(ptr) 
#define _REENT_CHECK_EMERGENCY(ptr) 
#define _REENT_CHECK_MISC(ptr) 
#define _REENT_CHECK_SIGNAL_BUF(ptr) 

#define _REENT_SIGNGAM(ptr) ((ptr)->_new._reent._gamma_signgam)
#define _REENT_RAND_NEXT(ptr) ((ptr)->_new._reent._rand_next)
#define _REENT_RAND48_SEED(ptr) ((ptr)->_new._reent._r48._seed)
#define _REENT_RAND48_MULT(ptr) ((ptr)->_new._reent._r48._mult)
#define _REENT_RAND48_ADD(ptr) ((ptr)->_new._reent._r48._add)
#define _REENT_MP_RESULT(ptr) ((ptr)->_result)
#define _REENT_MP_RESULT_K(ptr) ((ptr)->_result_k)
#define _REENT_MP_P5S(ptr) ((ptr)->_p5s)
#define _REENT_MP_FREELIST(ptr) ((ptr)->_freelist)
#define _REENT_ASCTIME_BUF(ptr) ((ptr)->_new._reent._asctime_buf)
#define _REENT_TM(ptr) (&(ptr)->_new._reent._localtime_buf)
#define _REENT_EMERGENCY(ptr) ((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr) ((ptr)->_new._reent._strtok_last)
#define _REENT_MBLEN_STATE(ptr) ((ptr)->_new._reent._mblen_state)
#define _REENT_MBTOWC_STATE(ptr) ((ptr)->_new._reent._mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr) ((ptr)->_new._reent._wctomb_state)
#define _REENT_MBRLEN_STATE(ptr) ((ptr)->_new._reent._mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr) ((ptr)->_new._reent._mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_new._reent._mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr) ((ptr)->_new._reent._wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_new._reent._wcsrtombs_state)
#define _REENT_L64A_BUF(ptr) ((ptr)->_new._reent._l64a_buf)
#define _REENT_SIGNAL_BUF(ptr) ((ptr)->_new._reent._signal_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._getdate_err))



#define _REENT_INIT_PTR(var) { memset((var), 0, sizeof(*(var))); _REENT_INIT_PTR_ZEROED(var); }







#define _Kmax (sizeof (size_t) << 3)







#define __ATTRIBUTE_IMPURE_PTR__ 


extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 832 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT _impure_ptr


#define _GLOBAL_REENT _global_impure_ptr





#define _GLOBAL_ATEXIT (_GLOBAL_REENT->_atexit)
# 61 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 1 3
# 28 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __uint8_t u_int8_t;


typedef __uint16_t u_int16_t;


typedef __uint32_t u_int32_t;


typedef __uint64_t u_int64_t;

typedef __intptr_t register_t;
#define __BIT_TYPES_DEFINED__ 1



#define _SYS_TYPES_H 
# 97 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __blkcnt_t blkcnt_t;
#define _BLKCNT_T_DECLARED 



typedef __blksize_t blksize_t;
#define _BLKSIZE_T_DECLARED 



typedef unsigned long clock_t;
#define __clock_t_defined 
#define _CLOCK_T_DECLARED 



typedef __int_least64_t time_t;
#define __time_t_defined 
#define _TIME_T_DECLARED 



typedef long daddr_t;
#define __daddr_t_defined 


typedef char * caddr_t;
#define __caddr_t_defined 



typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
#define _FSBLKCNT_T_DECLARED 



typedef __id_t id_t;
#define _ID_T_DECLARED 



typedef __ino_t ino_t;
#define _INO_T_DECLARED 
# 157 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __off_t off_t;
#define _OFF_T_DECLARED 


typedef __dev_t dev_t;
#define _DEV_T_DECLARED 


typedef __uid_t uid_t;
#define _UID_T_DECLARED 


typedef __gid_t gid_t;
#define _GID_T_DECLARED 



typedef __pid_t pid_t;
#define _PID_T_DECLARED 



typedef __key_t key_t;
#define _KEY_T_DECLARED 



typedef _ssize_t ssize_t;
#define _SSIZE_T_DECLARED 



typedef __mode_t mode_t;
#define _MODE_T_DECLARED 



typedef __nlink_t nlink_t;
#define _NLINK_T_DECLARED 



typedef __clockid_t clockid_t;
#define __clockid_t_defined 
#define _CLOCKID_T_DECLARED 



typedef __timer_t timer_t;
#define __timer_t_defined 
#define _TIMER_T_DECLARED 



typedef __useconds_t useconds_t;
#define _USECONDS_T_DECLARED 



typedef __suseconds_t suseconds_t;
#define _SUSECONDS_T_DECLARED 


typedef __int64_t sbintime_t;


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_pthreadtypes.h" 1 3
# 19 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_pthreadtypes.h" 3
#define _SYS__PTHREADTYPES_H_ 
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/types.h" 1 3
# 225 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 2 3



#undef __need_inttypes
# 62 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 2 3




typedef __FILE FILE;
#define __FILE_defined 





typedef _fpos_t fpos_t;





# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/stdio.h" 1 3

#define _NEWLIB_STDIO_H 
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/stdio.h" 3
#define _flockfile(fp) (((fp)->_flags & __SSTR) ? 0 : __lock_acquire_recursive((fp)->_lock))







#define _funlockfile(fp) (((fp)->_flags & __SSTR) ? 0 : __lock_release_recursive((fp)->_lock))
# 80 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 2 3

#define __SLBF 0x0001
#define __SNBF 0x0002
#define __SRD 0x0004
#define __SWR 0x0008

#define __SRW 0x0010
#define __SEOF 0x0020
#define __SERR 0x0040
#define __SMBF 0x0080
#define __SAPP 0x0100
#define __SSTR 0x0200
#define __SOPT 0x0400
#define __SNPT 0x0800
#define __SOFF 0x1000
#define __SORD 0x2000



#define __SL64 0x8000


#define __SNLK 0x0001
#define __SWID 0x2000
# 114 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
#define _IOFBF 0
#define _IOLBF 1
#define _IONBF 2

#define EOF (-1)




#define BUFSIZ 1024





#define FOPEN_MAX 20





#define FILENAME_MAX 1024





#define L_tmpnam FILENAME_MAX







#define SEEK_SET 0


#define SEEK_CUR 1


#define SEEK_END 2


#define TMP_MAX 26

#define stdin (_REENT->_stdin)
#define stdout (_REENT->_stdout)
#define stderr (_REENT->_stderr)

#define _stdin_r(x) ((x)->_stdin)
#define _stdout_r(x) ((x)->_stdout)
#define _stderr_r(x) ((x)->_stderr)







#define __VALIST __gnuc_va_list
# 186 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
FILE * tmpfile (void);
char * tmpnam (char *);



int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *restrict, const char *restrict, FILE *restrict);
void setbuf (FILE *restrict, char *restrict);
int setvbuf (FILE *restrict, char *restrict, int, size_t);
int fprintf (FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf (FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int printf (const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int scanf (const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int sscanf (const char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int vfprintf (FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int vsprintf (char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int fgetc (FILE *);
char * fgets (char *restrict, int, FILE *restrict);
int fputc (int, FILE *);
int fputs (const char *restrict, FILE *restrict);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t fwrite (const void *restrict , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *restrict, fpos_t *restrict);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *restrict _name, const char *restrict _type);
int sprintf (char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int remove (const char *);
int rename (const char *, const char *);
# 266 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
int snprintf (char *restrict, size_t, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf (char *restrict, size_t, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vfscanf (FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsscanf (const char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
# 396 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
int _asiprintf_r (struct _reent *, char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
char * _asnprintf_r (struct _reent *, char *restrict, size_t *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _asprintf_r (struct _reent *, char **restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _diprintf_r (struct _reent *, int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _dprintf_r (struct _reent *, int, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *restrict, int, FILE *restrict);
char * _fgets_unlocked_r (struct _reent *, char *restrict, int, FILE *restrict);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fiscanf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
FILE * _fmemopen_r (struct _reent *, void *restrict, size_t, const char *restrict);
FILE * _fopen_r (struct _reent *, const char *restrict, const char *restrict);
FILE * _freopen_r (struct _reent *, const char *restrict, const char *restrict, FILE *restrict);
int _fprintf_r (struct _reent *, FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *restrict, FILE *restrict);
int _fputs_unlocked_r (struct _reent *, const char *restrict, FILE *restrict);
size_t _fread_r (struct _reent *, void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t _fread_unlocked_r (struct _reent *, void *restrict, size_t _size, size_t _n, FILE *restrict);
int _fscanf_r (struct _reent *, FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t _fwrite_unlocked_r (struct _reent *, const void *restrict, size_t _size, size_t _n, FILE *restrict);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _iscanf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *,
      const char *_old, const char *_new);
int _scanf_r (struct _reent *, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int _siprintf_r (struct _reent *, char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _siscanf_r (struct _reent *, const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _snprintf_r (struct _reent *, char *restrict, size_t, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _sprintf_r (struct _reent *, char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _sscanf_r (struct _reent *, const char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdprintf_r (struct _reent *, int, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vfprintf_r (struct _reent *, FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfscanf_r (struct _reent *, FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vprintf_r (struct _reent *, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _vscanf_r (struct _reent *, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsnprintf_r (struct _reent *, char *restrict, size_t, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsprintf_r (struct _reent *, char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsscanf_r (struct _reent *, const char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));



int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);
# 577 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);
# 654 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
#define __sgetc_raw_r(__ptr,__f) (--(__f)->_r < 0 ? __srget_r(__ptr, __f) : (int)(*(__f)->_p++))
# 683 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
#define __sgetc_r(__ptr,__p) __sgetc_raw_r(__ptr, __p)



static __inline__ int __sputc_r(struct _reent *_ptr, int _c, FILE *_p) {




 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf_r(_ptr, _c, _p));
}
# 719 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
#define __sfeof(p) ((int)(((p)->_flags & __SEOF) != 0))
#define __sferror(p) ((int)(((p)->_flags & __SERR) != 0))
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define __sfileno(p) ((p)->_file)



#define feof(p) __sfeof(p)
#define ferror(p) __sferror(p)
#define clearerr(p) __sclearerr(p)
# 741 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3
static __inline int
_getchar_unlocked(void)
{
 struct _reent *_ptr;

 _ptr = _impure_ptr;
 return ((--(((_ptr)->_stdin))->_r < 0 ? __srget_r(_ptr, ((_ptr)->_stdin)) : (int)(*(((_ptr)->_stdin))->_p++)));
}

static __inline int
_putchar_unlocked(int _c)
{
 struct _reent *_ptr;

 _ptr = _impure_ptr;
 return (__sputc_r(_ptr, _c, ((_ptr)->_stdout)));
}
# 797 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdio.h" 3

# 55 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h" 2
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 1 3 4
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define _STDBOOL_H 



#define bool _Bool
#define true 1
#define false 0
# 52 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 56 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/sdk_errors.h" 1
# 70 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/sdk_errors.h"
#define SDK_ERRORS_H__ 


# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/softdevice/s140/headers/nrf_error.h" 1
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/softdevice/s140/headers/nrf_error.h"
#define NRF_ERROR_H__ 







#define NRF_ERROR_BASE_NUM (0x0)
#define NRF_ERROR_SDM_BASE_NUM (0x1000)
#define NRF_ERROR_SOC_BASE_NUM (0x2000)
#define NRF_ERROR_STK_BASE_NUM (0x3000)


#define NRF_SUCCESS (NRF_ERROR_BASE_NUM + 0)
#define NRF_ERROR_SVC_HANDLER_MISSING (NRF_ERROR_BASE_NUM + 1)
#define NRF_ERROR_SOFTDEVICE_NOT_ENABLED (NRF_ERROR_BASE_NUM + 2)
#define NRF_ERROR_INTERNAL (NRF_ERROR_BASE_NUM + 3)
#define NRF_ERROR_NO_MEM (NRF_ERROR_BASE_NUM + 4)
#define NRF_ERROR_NOT_FOUND (NRF_ERROR_BASE_NUM + 5)
#define NRF_ERROR_NOT_SUPPORTED (NRF_ERROR_BASE_NUM + 6)
#define NRF_ERROR_INVALID_PARAM (NRF_ERROR_BASE_NUM + 7)
#define NRF_ERROR_INVALID_STATE (NRF_ERROR_BASE_NUM + 8)
#define NRF_ERROR_INVALID_LENGTH (NRF_ERROR_BASE_NUM + 9)
#define NRF_ERROR_INVALID_FLAGS (NRF_ERROR_BASE_NUM + 10)
#define NRF_ERROR_INVALID_DATA (NRF_ERROR_BASE_NUM + 11)
#define NRF_ERROR_DATA_SIZE (NRF_ERROR_BASE_NUM + 12)
#define NRF_ERROR_TIMEOUT (NRF_ERROR_BASE_NUM + 13)
#define NRF_ERROR_NULL (NRF_ERROR_BASE_NUM + 14)
#define NRF_ERROR_FORBIDDEN (NRF_ERROR_BASE_NUM + 15)
#define NRF_ERROR_INVALID_ADDR (NRF_ERROR_BASE_NUM + 16)
#define NRF_ERROR_BUSY (NRF_ERROR_BASE_NUM + 17)
#define NRF_ERROR_CONN_COUNT (NRF_ERROR_BASE_NUM + 18)
#define NRF_ERROR_RESOURCES (NRF_ERROR_BASE_NUM + 19)
# 74 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/sdk_errors.h" 2
# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/sdk_errors.h"
#define NRF_ERROR_SDK_ERROR_BASE (NRF_ERROR_BASE_NUM + 0x8000)
#define NRF_ERROR_SDK_COMMON_ERROR_BASE (NRF_ERROR_BASE_NUM + 0x0080)






#define NRF_ERROR_MEMORY_MANAGER_ERR_BASE (0x8100)
#define NRF_ERROR_PERIPH_DRIVERS_ERR_BASE (0x8200)
#define NRF_ERROR_GAZELLE_ERR_BASE (0x8300)
#define NRF_ERROR_BLE_IPSP_ERR_BASE (0x8400)
#define NRF_ERROR_CRYPTO_ERR_BASE (0x8500)
#define NRF_ERROR_FDS_ERR_BASE (0x8600)







#define NRF_ERROR_IOT_ERR_BASE_START (0xA000)
#define NRF_ERROR_IOT_ERR_BASE_STOP (0xAFFF)







#define NRF_ERROR_MODULE_NOT_INITIALIZED (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0000)
#define NRF_ERROR_MUTEX_INIT_FAILED (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0001)
#define NRF_ERROR_MUTEX_LOCK_FAILED (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0002)
#define NRF_ERROR_MUTEX_UNLOCK_FAILED (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0003)
#define NRF_ERROR_MUTEX_COND_INIT_FAILED (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0004)
#define NRF_ERROR_MODULE_ALREADY_INITIALIZED (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0005)
#define NRF_ERROR_STORAGE_FULL (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0006)
#define NRF_ERROR_API_NOT_IMPLEMENTED (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0010)
#define NRF_ERROR_FEATURE_NOT_ENABLED (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0011)
#define NRF_ERROR_IO_PENDING (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0012)







#define NRF_ERROR_DRV_TWI_ERR_OVERRUN (NRF_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0000)
#define NRF_ERROR_DRV_TWI_ERR_ANACK (NRF_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0001)
#define NRF_ERROR_DRV_TWI_ERR_DNACK (NRF_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0002)
# 141 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/sdk_errors.h"
#define NRF_ERROR_BLE_IPSP_RX_PKT_TRUNCATED (NRF_ERROR_BLE_IPSP_ERR_BASE + 0x0000)
#define NRF_ERROR_BLE_IPSP_CHANNEL_ALREADY_EXISTS (NRF_ERROR_BLE_IPSP_ERR_BASE + 0x0001)
#define NRF_ERROR_BLE_IPSP_LINK_DISCONNECTED (NRF_ERROR_BLE_IPSP_ERR_BASE + 0x0002)
#define NRF_ERROR_BLE_IPSP_PEER_REJECTED (NRF_ERROR_BLE_IPSP_ERR_BASE + 0x0003)
# 159 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/sdk_errors.h"

# 159 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/sdk_errors.h"
typedef uint32_t ret_code_t;
# 58 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h" 1
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define NORDIC_COMMON_H__ 
# 80 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define NRF_MODULE_ENABLED(module) ((defined(module ## _ENABLED) && (module ## _ENABLED)) ? 1 : 0)




#define MSB_32(a) (((a) & 0xFF000000) >> 24)

#define LSB_32(a) ((a) & 0x000000FF)



#define MSB_16(a) (((a) & 0xFF00) >> 8)

#define LSB_16(a) ((a) & 0x00FF)



#define MIN(a,b) ((a) < (b) ? (a) : (b))


#define MAX(a,b) ((a) < (b) ? (b) : (a))
# 116 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define CONCAT_2(p1,p2) CONCAT_2_(p1, p2)

#define CONCAT_2_(p1,p2) p1 ##p2
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define CONCAT_3(p1,p2,p3) CONCAT_3_(p1, p2, p3)

#define CONCAT_3_(p1,p2,p3) p1 ##p2 ##p3

#define STRINGIFY_(val) #val


#define STRINGIFY(val) STRINGIFY_(val)



#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))






#define SET_BIT(W,B) ((W) |= (uint32_t)(1U << (B)))







#define CLR_BIT(W,B) ((W) &= (~(uint32_t)(1U << (B))))
# 172 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nordic_common.h"
#define IS_SET(W,B) (((W) >> (B)) & 1)

#define BIT_0 0x01
#define BIT_1 0x02
#define BIT_2 0x04
#define BIT_3 0x08
#define BIT_4 0x10
#define BIT_5 0x20
#define BIT_6 0x40
#define BIT_7 0x80
#define BIT_8 0x0100
#define BIT_9 0x0200
#define BIT_10 0x0400
#define BIT_11 0x0800
#define BIT_12 0x1000
#define BIT_13 0x2000
#define BIT_14 0x4000
#define BIT_15 0x8000
#define BIT_16 0x00010000
#define BIT_17 0x00020000
#define BIT_18 0x00040000
#define BIT_19 0x00080000
#define BIT_20 0x00100000
#define BIT_21 0x00200000
#define BIT_22 0x00400000
#define BIT_23 0x00800000
#define BIT_24 0x01000000
#define BIT_25 0x02000000
#define BIT_26 0x04000000
#define BIT_27 0x08000000
#define BIT_28 0x10000000
#define BIT_29 0x20000000
#define BIT_30 0x40000000
#define BIT_31 0x80000000

#define UNUSED_VARIABLE(X) ((void)(X))
#define UNUSED_PARAMETER(X) UNUSED_VARIABLE(X)
#define UNUSED_RETURN_VALUE(X) UNUSED_VARIABLE(X)
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error_weak.h" 1
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error_weak.h"
#define APP_ERROR_WEAK_H__ 
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error_weak.h"
void app_error_fault_handler(uint32_t id, uint32_t pc, uint32_t info);
# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h" 2
# 70 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h"
#define NRF_FAULT_ID_SDK_RANGE_START (0x00004000)



#define NRF_FAULT_ID_SDK_ERROR (NRF_FAULT_ID_SDK_RANGE_START + 1)
#define NRF_FAULT_ID_SDK_ASSERT (NRF_FAULT_ID_SDK_RANGE_START + 2)




typedef struct
{
    uint32_t line_num;
    uint8_t const * p_file_name;
    uint32_t err_code;
} error_info_t;



typedef struct
{
    uint32_t line_num;
    uint8_t const * p_file_name;
} assert_info_t;



#define APP_ERROR_ERROR_INFO_OFFSET_LINE_NUM (offsetof(error_info_t, line_num))
#define APP_ERROR_ERROR_INFO_OFFSET_P_FILE_NAME (offsetof(error_info_t, p_file_name))
#define APP_ERROR_ERROR_INFO_OFFSET_ERR_CODE (offsetof(error_info_t, err_code))
#define APP_ERROR_ERROR_INFO_SIZE (sizeof(error_info_t))
#define APP_ERROR_ERROR_INFO_SIZE_ALIGNED_8BYTE ALIGN_NUM(APP_ERROR_ERROR_INFO_SIZE, sizeof(uint64_t))
# 111 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h"
void app_error_handler(uint32_t error_code, uint32_t line_num, const uint8_t * p_file_name);





void app_error_handler_bare(ret_code_t error_code);
# 127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h"
void app_error_save_and_stop(uint32_t id, uint32_t pc, uint32_t info);
# 137 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h"
void app_error_log_handle(uint32_t id, uint32_t pc, uint32_t info);







#define APP_ERROR_HANDLER(ERR_CODE) do { app_error_handler((ERR_CODE), __LINE__, (uint8_t*) __FILE__); } while (0)
# 161 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h"
#define APP_ERROR_CHECK(ERR_CODE) do { const uint32_t LOCAL_ERR_CODE = (ERR_CODE); if (LOCAL_ERR_CODE != NRF_SUCCESS) { APP_ERROR_HANDLER(LOCAL_ERR_CODE); } } while (0)
# 175 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/app_error.h"
#define APP_ERROR_CHECK_BOOL(BOOLEAN_VALUE) do { const uint32_t LOCAL_BOOLEAN_VALUE = (BOOLEAN_VALUE); if (!LOCAL_BOOLEAN_VALUE) { APP_ERROR_HANDLER(0); } } while (0)
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/nRF5_SDK/nRF5_SDK_17.0.2_d674dde/components/libraries/util/nrf_assert.c" 2


__attribute__((weak)) void assert_nrf_callback(uint16_t line_num, const uint8_t * file_name)
{
    assert_info_t assert_info =
    {
        .line_num = line_num,
        .p_file_name = file_name,
    };
    app_error_fault_handler(((0x00004000) + 2), 0, (uint32_t)(&assert_info));

    ((void)(assert_info));
}
