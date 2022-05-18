# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
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
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 1 3


#define _MATH_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 1 3
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _SYS_REENT_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3







#define _ANSIDECL_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 1 3







#define __NEWLIB_H__ 1





# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3



#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.3.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 3
#define __NEWLIB_PATCHLEVEL__ 0
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 2 3



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
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 1 3
# 22 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define _SYS_FEATURES_H 
# 33 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))






#define __GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)
# 249 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __ATFILE_VISIBLE 0





#define __BSD_VISIBLE 0





#define __GNU_VISIBLE 0







#define __ISO_C_VISIBLE 1999







#define __LARGEFILE_VISIBLE 0





#define __MISC_VISIBLE 0
# 299 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __POSIX_VISIBLE 0





#define __SVID_VISIBLE 0
# 319 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __XSI_VISIBLE 0
# 330 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __SSP_FORTIFY_LEVEL 0
# 6 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 2 3
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
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
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




# 143 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
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





typedef unsigned int size_t;
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
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3





#define _MACHINE__DEFAULT_TYPES_H 
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
#define __EXP(x) __ ##x ##__
# 26 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
#define __have_longlong64 1






#define __have_long32 1







typedef signed char __int8_t;

typedef unsigned char __uint8_t;



#define ___int8_t_defined 1







typedef short int __int16_t;

typedef short unsigned int __uint16_t;



#define ___int16_t_defined 1
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long int __int32_t;

typedef long unsigned int __uint32_t;



#define ___int32_t_defined 1
# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;



#define ___int64_t_defined 1
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;



#define ___int_least8_t_defined 1
# 160 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;



#define ___int_least16_t_defined 1
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;



#define ___int_least32_t_defined 1
# 200 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;



#define ___int_least64_t_defined 1







typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 244 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
#undef __EXP
# 8 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_types.h" 2 3
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
# 6 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 1 3
# 43 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _SYS_CDEFS_H_ 



# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
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
# 7 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 8 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 2 3




#define _M_LN2 0.693147180559945309417





#define HUGE_VAL (__builtin_huge_val())



#define HUGE_VALF (__builtin_huge_valf())



#define HUGE_VALL (__builtin_huge_vall())



#define INFINITY (__builtin_inff())



#define NAN (__builtin_nanf(""))
# 86 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 3
extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);






extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);
# 145 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 3
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define __TMP_FLT_EVAL_METHOD 



    typedef float float_t;
    typedef double double_t;
# 168 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 3
#undef FLT_EVAL_METHOD


#define FP_NAN 0
#define FP_INFINITE 1
#define FP_ZERO 2
#define FP_SUBNORMAL 3
#define FP_NORMAL 4


#define FP_ILOGB0 (-__INT_MAX__)


#define FP_ILOGBNAN __INT_MAX__



#define MATH_ERRNO 1


#define MATH_ERREXCEPT 2


#define math_errhandling MATH_ERRNO


extern int __isinff (float x);
extern int __isinfd (double x);
extern int __isnanf (float x);
extern int __isnand (double x);
extern int __fpclassifyf (float x);
extern int __fpclassifyd (double x);
extern int __signbitf (float x);
extern int __signbitd (double x);
# 211 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 3
#define fpclassify(__x) (__builtin_fpclassify (FP_NAN, FP_INFINITE, FP_NORMAL, FP_SUBNORMAL, FP_ZERO, __x))



#define isfinite(__x) (__builtin_isfinite (__x))


#define isinf(__x) (__builtin_isinf_sign (__x))


#define isnan(__x) (__builtin_isnan (__x))

#define isnormal(__x) (__builtin_isnormal (__x))
# 244 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 3
#define signbit(__x) ((sizeof(__x) == sizeof(float)) ? __builtin_signbitf(__x) : (sizeof(__x) == sizeof(double)) ? __builtin_signbit (__x) : __builtin_signbitl(__x))
# 260 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 3
#define isgreater(__x,__y) (__builtin_isgreater (__x, __y))
#define isgreaterequal(__x,__y) (__builtin_isgreaterequal (__x, __y))
#define isless(__x,__y) (__builtin_isless (__x, __y))
#define islessequal(__x,__y) (__builtin_islessequal (__x, __y))
#define islessgreater(__x,__y) (__builtin_islessgreater (__x, __y))
#define isunordered(__x,__y) (__builtin_isunordered (__x, __y))
# 290 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 3
extern double infinity (void);
extern double nan (const char *);
extern double copysign (double, double);
extern double logb (double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);

extern double exp2 (double);
extern double scalbln (double, long int);
extern double tgamma (double);
extern double nearbyint (double);
extern long int lrint (double);
extern long long int llrint (double);
extern double round (double);
extern long int lround (double);
extern long long int llround (double);
extern double trunc (double);
extern double remquo (double, double, int *);
extern double fdim (double, double);
extern double fmax (double, double);
extern double fmin (double, double);
extern double fma (double, double, double);


extern double log1p (double);
extern double expm1 (double);



extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double lgamma (double);
extern double erf (double);
extern double erfc (double);
extern double log2 (double);

#define log2(x) (log (x) / _M_LN2)



extern double hypot (double, double);






extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);


extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);




extern float exp2f (float);
extern float scalblnf (float, long int);
extern float tgammaf (float);
extern float nearbyintf (float);
extern long int lrintf (float);
extern long long int llrintf (float);
extern float roundf (float);
extern long int lroundf (float);
extern long long int llroundf (float);
extern float truncf (float);
extern float remquof (float, float, int *);
extern float fdimf (float, float);
extern float fmaxf (float, float);
extern float fminf (float, float);
extern float fmaf (float, float, float);

extern float infinityf (void);
extern float nanf (const char *);
extern float copysignf (float, float);
extern float logbf (float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);


extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float lgammaf (float);
extern float erff (float);
extern float erfcf (float);
extern float log2f (float);
extern float hypotf (float, float);
# 422 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 3
extern long double atanl (long double);
extern long double cosl (long double);
extern long double sinl (long double);
extern long double tanl (long double);
extern long double tanhl (long double);
extern long double frexpl (long double, int *);
extern long double modfl (long double, long double *);
extern long double ceill (long double);
extern long double fabsl (long double);
extern long double floorl (long double);
extern long double log1pl (long double);
extern long double expm1l (long double);




extern long double acosl (long double);
extern long double asinl (long double);
extern long double atan2l (long double, long double);
extern long double coshl (long double);
extern long double sinhl (long double);
extern long double expl (long double);
extern long double ldexpl (long double, int);
extern long double logl (long double);
extern long double log10l (long double);
extern long double powl (long double, long double);
extern long double sqrtl (long double);
extern long double fmodl (long double, long double);
extern long double hypotl (long double, long double);


extern long double copysignl (long double, long double);
extern long double nanl (const char *);
extern int ilogbl (long double);
extern long double asinhl (long double);
extern long double cbrtl (long double);
extern long double nextafterl (long double, long double);
extern float nexttowardf (float, long double);
extern double nexttoward (double, long double);
extern long double nexttowardl (long double, long double);
extern long double logbl (long double);
extern long double log2l (long double);
extern long double rintl (long double);
extern long double scalbnl (long double, int);
extern long double exp2l (long double);
extern long double scalblnl (long double, long);
extern long double tgammal (long double);
extern long double nearbyintl (long double);
extern long int lrintl (long double);
extern long long int llrintl (long double);
extern long double roundl (long double);
extern long lroundl (long double);
extern long long int llroundl (long double);
extern long double truncl (long double);
extern long double remquol (long double, long double, int *);
extern long double fdiml (long double, long double);
extern long double fmaxl (long double, long double);
extern long double fminl (long double, long double);
extern long double fmal (long double, long double, long double);

extern long double acoshl (long double);
extern long double atanhl (long double);
extern long double remainderl (long double, long double);
extern long double lgammal (long double);
extern long double erfl (long double);
extern long double erfcl (long double);
# 623 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/math.h" 3

# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 1 3







#define _STRING_H_ 






#define __need_size_t 
#define __need_NULL 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 18 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3
# 27 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3


void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *restrict, const void *restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);
# 86 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
char *_strdup_r (struct _reent *, const char *);



char *_strndup_r (struct _reent *, const char *, size_t);
# 112 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
char * _strerror_r (struct _reent *, int, int, int *);
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
char *strsignal (int __signo);
# 175 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/string.h" 1 3
# 176 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3


# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define __UTILITIES_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 1 3 4
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define _STDINT_H 


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
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h" 2





#define SUCCESS 1



#define FAIL 0
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define MIN(a,b) ( ( ( a ) < ( b ) ) ? ( a ) : ( b ) )
# 63 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define MAX(a,b) ( ( ( a ) > ( b ) ) ? ( a ) : ( b ) )
# 72 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
#define POW2(n) ( 1 << n )





# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
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
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
int32_t randr( int32_t min, int32_t max );
# 114 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void memcpy1( uint8_t *dst, const uint8_t *src, uint16_t size );
# 123 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void memcpyr( uint8_t *dst, const uint8_t *src, uint16_t size );
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void memset1( uint8_t *dst, uint8_t value, uint16_t size );







int8_t Nibble2HexChar( uint8_t a );
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
uint32_t Crc32( uint8_t *buffer, uint16_t length );







uint32_t Crc32Init( void );
# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
uint32_t Crc32Update( uint32_t crcInit, uint8_t *buffer, uint16_t length );
# 180 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
uint32_t Crc32Finalize( uint32_t crc );




#define CRITICAL_SECTION_BEGIN() uint32_t mask; BoardCriticalSectionBegin( &mask )




#define CRITICAL_SECTION_END() BoardCriticalSectionEnd( &mask )
# 203 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/boards/utilities.h"
void BoardCriticalSectionBegin( uint32_t *mask );






void BoardCriticalSectionEnd( uint32_t *mask );
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
#define __TIMER_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 2
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 1 3 4
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define _STDBOOL_H 



#define bool _Bool
#define true 1
#define false 0
# 52 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 2





typedef struct TimerEvent_s
{
    uint32_t Timestamp;
    uint32_t ReloadValue;
    
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsStarted;
    
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsNext2Expire;
    void ( *Callback )( void* context );
    void *Context;
    struct TimerEvent_s *Next;
}TimerEvent_t;





typedef uint32_t TimerTime_t;
#define TIMERTIME_T_MAX ( ( uint32_t )~0 )
# 66 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
void TimerInit( TimerEvent_t *obj, void ( *callback )( void *context ) );







void TimerSetContext( TimerEvent_t *obj, void* context );




void TimerIrqHandler( void );






void TimerStart( TimerEvent_t *obj );
# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"

# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
_Bool 
# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
    TimerIsStarted( TimerEvent_t *obj );






void TimerStop( TimerEvent_t *obj );






void TimerReset( TimerEvent_t *obj );







void TimerSetValue( TimerEvent_t *obj, uint32_t value );






TimerTime_t TimerGetCurrentTime( void );
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerGetElapsedTime( TimerTime_t past );
# 146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerTempCompensation( TimerTime_t period, float temperature );




void TimerProcess( void );
# 27 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/delay.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/delay.h"
#define __DELAY_H__ 
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/delay.h"
void Delay( float s );




void DelayMs( uint32_t ms );
# 28 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
#define __RADIO_H__ 
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
typedef enum
{
    MODEM_FSK = 0,
    MODEM_LORA,
}RadioModems_t;




typedef enum
{
    RF_IDLE = 0,
    RF_RX_RUNNING,
    RF_TX_RUNNING,
    RF_CAD,
}RadioState_t;




typedef struct
{



    void ( *TxDone )( void );



    void ( *TxTimeout )( void );
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *RxDone )( uint8_t *payload, uint16_t size, int16_t rssi, int8_t snr );



    void ( *RxTimeout )( void );



    void ( *RxError )( void );





    void ( *FhssChangeChannel )( uint8_t currentChannel );






    void ( *CadDone ) ( 
# 98 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                       _Bool 
# 98 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                            channelActivityDetected );




    void ( *GnssDone )( void );




    void ( *WifiDone )( void );
}RadioEvents_t;




struct Radio_s
{





    void ( *Init )( RadioEvents_t *events );





    RadioState_t ( *GetStatus )( void );





    void ( *SetModem )( RadioModems_t modem );





    void ( *SetChannel )( uint32_t freq );
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
   _Bool 
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
           ( *IsChannelFree )( uint32_t freq, uint32_t rxBandwidth, int16_t rssiThresh, uint32_t maxCarrierSenseTime );
# 163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    uint32_t ( *Random )( void );
# 203 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *SetRxConfig )( RadioModems_t modem, uint32_t bandwidth,
                              uint32_t datarate, uint8_t coderate,
                              uint32_t bandwidthAfc, uint16_t preambleLen,
                              uint16_t symbTimeout, 
# 206 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                                   _Bool 
# 206 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                        fixLen,
                              uint8_t payloadLen,
                              
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                             _Bool 
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                  crcOn, 
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                         _Bool 
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                              freqHopOn, uint8_t hopPeriod,
                              
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                             _Bool 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                  iqInverted, 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                              _Bool 
# 209 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                   rxContinuous );
# 245 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *SetTxConfig )( RadioModems_t modem, int8_t power, uint32_t fdev,
                              uint32_t bandwidth, uint32_t datarate,
                              uint8_t coderate, uint16_t preambleLen,
                              
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                             _Bool 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                  fixLen, 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                          _Bool 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                               crcOn, 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                                      _Bool 
# 248 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                           freqHopOn,
                              uint8_t hopPeriod, 
# 249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                                _Bool 
# 249 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                     iqInverted, uint32_t timeout );






    
# 256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
   _Bool 
# 256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
           ( *CheckRfFrequency )( uint32_t frequency );
# 283 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    uint32_t ( *TimeOnAir )( RadioModems_t modem, uint32_t bandwidth,
                              uint32_t datarate, uint8_t coderate,
                              uint16_t preambleLen, 
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                                   _Bool 
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                                        fixLen, uint8_t payloadLen,
                              
# 286 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                             _Bool 
# 286 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                  crcOn );







    void ( *Send )( uint8_t *buffer, uint8_t size );



    void ( *Sleep )( void );



    void ( *Standby )( void );





    void ( *Rx )( uint32_t timeout );



    void ( *StartCad )( void );







    void ( *SetTxContinuousWave )( uint32_t freq, int8_t power, uint16_t time );





    int16_t ( *Rssi )( RadioModems_t modem );






    void ( *Write )( uint32_t addr, uint8_t data );






    uint8_t ( *Read )( uint32_t addr );







    void ( *WriteBuffer )( uint32_t addr, uint8_t *buffer, uint8_t size );







    void ( *ReadBuffer )( uint32_t addr, uint8_t *buffer, uint8_t size );






    void ( *SetMaxPayloadLength )( RadioModems_t modem, uint8_t max );







    void ( *SetPublicNetwork )( 
# 371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h" 3 4
                                  _Bool 
# 371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
                                       enable );





    uint32_t ( *GetWakeupTime )( void );



    void ( *IrqProcess )( void );
# 393 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *RxBoosted )( uint32_t timeout );
# 402 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/radio.h"
    void ( *SetRxDutyCycle ) ( uint32_t rxTime, uint32_t sleepTime );
};







extern const struct Radio_s Radio;
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
#define __SX126x_H__ 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h" 1
# 28 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h"
#define __GPIO_H__ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/pinName-board.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/pinName-board.h"
#define __PIN_NAME_BOARD_H__ 




#define MCU_PINS P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/pinName-ioe.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/pinName-ioe.h"
#define __PIN_NAME_IOE_H__ 


#define IOE_PINS IOE_0, IOE_1, IOE_2, IOE_3, IOE_4, IOE_5, IOE_6, IOE_7, IOE_8, IOE_9, IOE_10, IOE_11, IOE_12, IOE_13, IOE_14, IOE_15
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h" 2




typedef enum
{
    P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47,
    IOE_0, IOE_1, IOE_2, IOE_3, IOE_4, IOE_5, IOE_6, IOE_7, IOE_8, IOE_9, IOE_10, IOE_11, IOE_12, IOE_13, IOE_14, IOE_15,


    NC = (int)0xFFFFFFFF
}PinNames;




typedef enum
{
    PIN_INPUT = 0,
    PIN_OUTPUT,
    PIN_ALTERNATE_FCT,
    PIN_ANALOGIC
}PinModes;




typedef enum
{
    PIN_NO_PULL = 0,
    PIN_PULL_UP,
    PIN_PULL_DOWN
}PinTypes;




typedef enum
{
    PIN_PUSH_PULL = 0,
    PIN_OPEN_DRAIN
}PinConfigs;




typedef enum
{
    NO_IRQ = 0,
    IRQ_RISING_EDGE,
    IRQ_FALLING_EDGE,
    IRQ_RISING_FALLING_EDGE
}IrqModes;




typedef enum
{
    IRQ_VERY_LOW_PRIORITY = 0,
    IRQ_LOW_PRIORITY,
    IRQ_MEDIUM_PRIORITY,
    IRQ_HIGH_PRIORITY,
    IRQ_VERY_HIGH_PRIORITY
}IrqPriorities;




typedef void( GpioIrqHandler )( void* context );




typedef struct
{
    PinNames pin;
    uint16_t pinIndex;
    void *port;
    uint16_t portIndex;
    PinTypes pull;
    void* Context;
    GpioIrqHandler* IrqHandler;
}Gpio_t;
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h"
void GpioInit( Gpio_t *obj, PinNames pin, PinModes mode, PinConfigs config, PinTypes type, uint32_t value );







void GpioSetContext( Gpio_t *obj, void* context );
# 155 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h"
void GpioSetInterrupt( Gpio_t *obj, IrqModes irqMode, IrqPriorities irqPriority, GpioIrqHandler *irqHandler );






void GpioRemoveInterrupt( Gpio_t *obj );







void GpioWrite( Gpio_t *obj, uint32_t value );






void GpioToggle( Gpio_t *obj );







uint32_t GpioRead( Gpio_t *obj );
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/spi_.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/spi_.h"
#define __SPI__H__ 






# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/gpio.h" 1
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/spi_.h" 2




typedef enum
{
    SPI_1,
    SPI_2,
}SpiId_t;




typedef struct Spi_s
{
    SpiId_t SpiId;
    Gpio_t Mosi;
    Gpio_t Miso;
    Gpio_t Sclk;
    Gpio_t Nss;
}Spi_t;
# 66 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/spi_.h"
void SpiInit( Spi_t *obj, SpiId_t spiId, PinNames mosi, PinNames miso, PinNames sclk, PinNames nss );






void SpiDeInit( Spi_t *obj );
# 86 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/spi_.h"
void SpiFormat( Spi_t *obj, int8_t bits, int8_t cpol, int8_t cpha, int8_t slave );







void SpiFrequency( Spi_t *obj, uint32_t hz );
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/spi_.h"
uint16_t SpiInOut( Spi_t *obj, uint16_t outData );
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h" 2


#define SX1261 1
#define SX1262 2




#define RADIO_WAKEUP_TIME 3




#define AUTO_RX_TX_OFFSET 2




#define CRC_IBM_SEED 0xFFFF




#define CRC_CCITT_SEED 0x1D0F




#define CRC_POLYNOMIAL_IBM 0x8005




#define CRC_POLYNOMIAL_CCITT 0x1021





#define REG_LR_CRCSEEDBASEADDR 0x06BC




#define REG_LR_CRCPOLYBASEADDR 0x06BE




#define REG_LR_WHITSEEDBASEADDR_MSB 0x06B8
#define REG_LR_WHITSEEDBASEADDR_LSB 0x06B9




#define REG_LR_PACKETPARAMS 0x0704




#define REG_LR_PAYLOADLENGTH 0x0702




#define REG_LR_SYNCH_TIMEOUT 0x0706




#define REG_LR_SYNCWORDBASEADDRESS 0x06C0




#define REG_LR_SYNCWORD 0x0740




#define LORA_MAC_PRIVATE_SYNCWORD 0x1424




#define LORA_MAC_PUBLIC_SYNCWORD 0x3444





#define RANDOM_NUMBER_GENERATORBASEADDR 0x0819




#define REG_ANA_LNA 0x08E2




#define REG_ANA_MIXER 0x08E5




#define REG_RX_GAIN 0x08AC




#define REG_XTA_TRIM 0x0911




#define REG_OCP 0x08E7




typedef union RadioStatus_u
{
    uint8_t Value;
    struct
    {
        uint8_t : 1;
        uint8_t CmdStatus : 3;
        uint8_t ChipMode : 3;
        uint8_t : 1;
    }Fields;
}RadioStatus_t;




typedef enum
{
    IRQ_HEADER_ERROR_CODE = 0x01,
    IRQ_SYNCWORD_ERROR_CODE = 0x02,
    IRQ_CRC_ERROR_CODE = 0x04,
}IrqErrorCode_t;

enum IrqPblSyncHeaderCode_t
{
    IRQ_PBL_DETECT_CODE = 0x01,
    IRQ_SYNCWORD_VALID_CODE = 0x02,
    IRQ_HEADER_VALID_CODE = 0x04,
};




typedef enum
{
    MODE_SLEEP = 0x00,
    MODE_STDBY_RC,
    MODE_STDBY_XOSC,
    MODE_FS,
    MODE_TX,
    MODE_RX,
    MODE_RX_DC,
    MODE_CAD
}RadioOperatingModes_t;







typedef enum
{
    STDBY_RC = 0x00,
    STDBY_XOSC = 0x01,
}RadioStandbyModes_t;







typedef enum
{
    USE_LDO = 0x00,
    USE_DCDC = 0x01,
}RadioRegulatorMode_t;




typedef enum
{
    PACKET_TYPE_GFSK = 0x00,
    PACKET_TYPE_LORA = 0x01,
    PACKET_TYPE_NONE = 0x0F,
}RadioPacketTypes_t;




typedef enum
{
    RADIO_RAMP_10_US = 0x00,
    RADIO_RAMP_20_US = 0x01,
    RADIO_RAMP_40_US = 0x02,
    RADIO_RAMP_80_US = 0x03,
    RADIO_RAMP_200_US = 0x04,
    RADIO_RAMP_800_US = 0x05,
    RADIO_RAMP_1700_US = 0x06,
    RADIO_RAMP_3400_US = 0x07,
}RadioRampTimes_t;




typedef enum
{
    LORA_CAD_01_SYMBOL = 0x00,
    LORA_CAD_02_SYMBOL = 0x01,
    LORA_CAD_04_SYMBOL = 0x02,
    LORA_CAD_08_SYMBOL = 0x03,
    LORA_CAD_16_SYMBOL = 0x04,
}RadioLoRaCadSymbols_t;




typedef enum
{
    LORA_CAD_ONLY = 0x00,
    LORA_CAD_RX = 0x01,
    LORA_CAD_LBT = 0x10,
}RadioCadExitModes_t;




typedef enum
{
    MOD_SHAPING_OFF = 0x00,
    MOD_SHAPING_G_BT_03 = 0x08,
    MOD_SHAPING_G_BT_05 = 0x09,
    MOD_SHAPING_G_BT_07 = 0x0A,
    MOD_SHAPING_G_BT_1 = 0x0B,
}RadioModShapings_t;




typedef enum
{
    RX_BW_4800 = 0x1F,
    RX_BW_5800 = 0x17,
    RX_BW_7300 = 0x0F,
    RX_BW_9700 = 0x1E,
    RX_BW_11700 = 0x16,
    RX_BW_14600 = 0x0E,
    RX_BW_19500 = 0x1D,
    RX_BW_23400 = 0x15,
    RX_BW_29300 = 0x0D,
    RX_BW_39000 = 0x1C,
    RX_BW_46900 = 0x14,
    RX_BW_58600 = 0x0C,
    RX_BW_78200 = 0x1B,
    RX_BW_93800 = 0x13,
    RX_BW_117300 = 0x0B,
    RX_BW_156200 = 0x1A,
    RX_BW_187200 = 0x12,
    RX_BW_234300 = 0x0A,
    RX_BW_312000 = 0x19,
    RX_BW_373600 = 0x11,
    RX_BW_467000 = 0x09,
}RadioRxBandwidth_t;




typedef enum
{
    LORA_SF5 = 0x05,
    LORA_SF6 = 0x06,
    LORA_SF7 = 0x07,
    LORA_SF8 = 0x08,
    LORA_SF9 = 0x09,
    LORA_SF10 = 0x0A,
    LORA_SF11 = 0x0B,
    LORA_SF12 = 0x0C,
}RadioLoRaSpreadingFactors_t;




typedef enum
{
    LORA_BW_500 = 6,
    LORA_BW_250 = 5,
    LORA_BW_125 = 4,
    LORA_BW_062 = 3,
    LORA_BW_041 = 10,
    LORA_BW_031 = 2,
    LORA_BW_020 = 9,
    LORA_BW_015 = 1,
    LORA_BW_010 = 8,
    LORA_BW_007 = 0,
}RadioLoRaBandwidths_t;




typedef enum
{
    LORA_CR_4_5 = 0x01,
    LORA_CR_4_6 = 0x02,
    LORA_CR_4_7 = 0x03,
    LORA_CR_4_8 = 0x04,
}RadioLoRaCodingRates_t;




typedef enum
{
    RADIO_PREAMBLE_DETECTOR_OFF = 0x00,
    RADIO_PREAMBLE_DETECTOR_08_BITS = 0x04,
    RADIO_PREAMBLE_DETECTOR_16_BITS = 0x05,
    RADIO_PREAMBLE_DETECTOR_24_BITS = 0x06,
    RADIO_PREAMBLE_DETECTOR_32_BITS = 0x07,
}RadioPreambleDetection_t;




typedef enum
{
    RADIO_ADDRESSCOMP_FILT_OFF = 0x00,
    RADIO_ADDRESSCOMP_FILT_NODE = 0x01,
    RADIO_ADDRESSCOMP_FILT_NODE_BROAD = 0x02,
}RadioAddressComp_t;




typedef enum
{
    RADIO_PACKET_FIXED_LENGTH = 0x00,
    RADIO_PACKET_VARIABLE_LENGTH = 0x01,
}RadioPacketLengthModes_t;




typedef enum
{
    RADIO_CRC_OFF = 0x01,
    RADIO_CRC_1_BYTES = 0x00,
    RADIO_CRC_2_BYTES = 0x02,
    RADIO_CRC_1_BYTES_INV = 0x04,
    RADIO_CRC_2_BYTES_INV = 0x06,
    RADIO_CRC_2_BYTES_IBM = 0xF1,
    RADIO_CRC_2_BYTES_CCIT = 0xF2,
}RadioCrcTypes_t;




typedef enum
{
    RADIO_DC_FREE_OFF = 0x00,
    RADIO_DC_FREEWHITENING = 0x01,
}RadioDcFree_t;




typedef enum
{
    LORA_PACKET_VARIABLE_LENGTH = 0x00,
    LORA_PACKET_FIXED_LENGTH = 0x01,
    LORA_PACKET_EXPLICIT = LORA_PACKET_VARIABLE_LENGTH,
    LORA_PACKET_IMPLICIT = LORA_PACKET_FIXED_LENGTH,
}RadioLoRaPacketLengthsMode_t;




typedef enum
{
    LORA_CRC_ON = 0x01,
    LORA_CRC_OFF = 0x00,
}RadioLoRaCrcModes_t;




typedef enum
{
    LORA_IQ_NORMAL = 0x00,
    LORA_IQ_INVERTED = 0x01,
}RadioLoRaIQModes_t;




typedef enum
{
    TCXO_CTRL_1_6V = 0x00,
    TCXO_CTRL_1_7V = 0x01,
    TCXO_CTRL_1_8V = 0x02,
    TCXO_CTRL_2_2V = 0x03,
    TCXO_CTRL_2_4V = 0x04,
    TCXO_CTRL_2_7V = 0x05,
    TCXO_CTRL_3_0V = 0x06,
    TCXO_CTRL_3_3V = 0x07,
}RadioTcxoCtrlVoltage_t;






typedef enum
{
    IRQ_RADIO_NONE = 0x0000,
    IRQ_TX_DONE = 0x0001,
    IRQ_RX_DONE = 0x0002,
    IRQ_PREAMBLE_DETECTED = 0x0004,
    IRQ_SYNCWORD_VALID = 0x0008,
    IRQ_HEADER_VALID = 0x0010,
    IRQ_HEADER_ERROR = 0x0020,
    IRQ_CRC_ERROR = 0x0040,
    IRQ_CAD_DONE = 0x0080,
    IRQ_CAD_ACTIVITY_DETECTED = 0x0100,
    IRQ_RX_TX_TIMEOUT = 0x0200,
    IRQ_RADIO_ALL = 0xFFFF,
}RadioIrqMasks_t;




typedef enum RadioCommands_e
{
    RADIO_GET_STATUS = 0xC0,
    RADIO_WRITE_REGISTER = 0x0D,
    RADIO_READ_REGISTER = 0x1D,
    RADIO_WRITE_BUFFER = 0x0E,
    RADIO_READ_BUFFER = 0x1E,
    RADIO_SET_SLEEP = 0x84,
    RADIO_SET_STANDBY = 0x80,
    RADIO_SET_FS = 0xC1,
    RADIO_SET_TX = 0x83,
    RADIO_SET_RX = 0x82,
    RADIO_SET_RXDUTYCYCLE = 0x94,
    RADIO_SET_CAD = 0xC5,
    RADIO_SET_TXCONTINUOUSWAVE = 0xD1,
    RADIO_SET_TXCONTINUOUSPREAMBLE = 0xD2,
    RADIO_SET_PACKETTYPE = 0x8A,
    RADIO_GET_PACKETTYPE = 0x11,
    RADIO_SET_RFFREQUENCY = 0x86,
    RADIO_SET_TXPARAMS = 0x8E,
    RADIO_SET_PACONFIG = 0x95,
    RADIO_SET_CADPARAMS = 0x88,
    RADIO_SET_BUFFERBASEADDRESS = 0x8F,
    RADIO_SET_MODULATIONPARAMS = 0x8B,
    RADIO_SET_PACKETPARAMS = 0x8C,
    RADIO_GET_RXBUFFERSTATUS = 0x13,
    RADIO_GET_PACKETSTATUS = 0x14,
    RADIO_GET_RSSIINST = 0x15,
    RADIO_GET_STATS = 0x10,
    RADIO_RESET_STATS = 0x00,
    RADIO_CFG_DIOIRQ = 0x08,
    RADIO_GET_IRQSTATUS = 0x12,
    RADIO_CLR_IRQSTATUS = 0x02,
    RADIO_CALIBRATE = 0x89,
    RADIO_CALIBRATEIMAGE = 0x98,
    RADIO_SET_REGULATORMODE = 0x96,
    RADIO_GET_ERROR = 0x17,
    RADIO_CLR_ERROR = 0x07,
    RADIO_SET_TCXOMODE = 0x97,
    RADIO_SET_TXFALLBACKMODE = 0x93,
    RADIO_SET_RFSWITCHMODE = 0x9D,
    RADIO_SET_STOPRXTIMERONPREAMBLE = 0x9F,
    RADIO_SET_LORASYMBTIMEOUT = 0xA0,
}RadioCommands_t;




typedef struct
{
    RadioPacketTypes_t PacketType;
    struct
    {
        struct
        {
            uint32_t BitRate;
            uint32_t Fdev;
            RadioModShapings_t ModulationShaping;
            uint8_t Bandwidth;
        }Gfsk;
        struct
        {
            RadioLoRaSpreadingFactors_t SpreadingFactor;
            RadioLoRaBandwidths_t Bandwidth;
            RadioLoRaCodingRates_t CodingRate;
            uint8_t LowDatarateOptimize;
        }LoRa;
    }Params;
}ModulationParams_t;




typedef struct
{
    RadioPacketTypes_t PacketType;
    struct
    {



        struct
        {
            uint16_t PreambleLength;
            RadioPreambleDetection_t PreambleMinDetect;
            uint8_t SyncWordLength;
            RadioAddressComp_t AddrComp;
            RadioPacketLengthModes_t HeaderType;
            uint8_t PayloadLength;
            RadioCrcTypes_t CrcLength;
            RadioDcFree_t DcFree;
        }Gfsk;



        struct
        {
            uint16_t PreambleLength;
            RadioLoRaPacketLengthsMode_t HeaderType;
            uint8_t PayloadLength;
            RadioLoRaCrcModes_t CrcMode;
            RadioLoRaIQModes_t InvertIQ;
        }LoRa;
    }Params;
}PacketParams_t;




typedef struct
{
    RadioPacketTypes_t packetType;
    struct
    {
        struct
        {
            uint8_t RxStatus;
            int8_t RssiAvg;
            int8_t RssiSync;
            uint32_t FreqError;
        }Gfsk;
        struct
        {
            int8_t RssiPkt;
            int8_t SnrPkt;
            int8_t SignalRssiPkt;
            uint32_t FreqError;
        }LoRa;
    }Params;
}PacketStatus_t;




typedef struct
{
    RadioPacketTypes_t packetType;
    uint16_t PacketReceived;
    uint16_t CrcOk;
    uint16_t LengthError;
}RxCounter_t;




typedef union
{
    struct
    {
        uint8_t RC64KEnable : 1;
        uint8_t RC13MEnable : 1;
        uint8_t PLLEnable : 1;
        uint8_t ADCPulseEnable : 1;
        uint8_t ADCBulkNEnable : 1;
        uint8_t ADCBulkPEnable : 1;
        uint8_t ImgEnable : 1;
        uint8_t : 1;
    }Fields;
    uint8_t Value;
}CalibrationParams_t;




typedef union
{
    struct
    {
        uint8_t WakeUpRTC : 1;
        uint8_t Reset : 1;
        uint8_t WarmStart : 1;
        uint8_t Reserved : 5;
    }Fields;
    uint8_t Value;
}SleepParams_t;




typedef union
{
    struct
    {
        uint8_t Rc64kCalib : 1;
        uint8_t Rc13mCalib : 1;
        uint8_t PllCalib : 1;
        uint8_t AdcCalib : 1;
        uint8_t ImgCalib : 1;
        uint8_t XoscStart : 1;
        uint8_t PllLock : 1;
        uint8_t : 1;
        uint8_t PaRamp : 1;
        uint8_t : 7;
    }Fields;
    uint16_t Value;
}RadioError_t;




typedef struct SX126x_s
{
    Gpio_t Reset;
    Gpio_t BUSY;
    Gpio_t DIO1;
    Gpio_t DIO2;
    Gpio_t DIO3;
    Spi_t Spi;
    PacketParams_t PacketParams;
    PacketStatus_t PacketStatus;
    ModulationParams_t ModulationParams;
}SX126x_t;




typedef void ( DioIrqHandler )( void* context );
# 703 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
typedef struct
{
    void ( *txDone )( void );
    void ( *rxDone )( void );
    void ( *rxPreambleDetect )( void );
    void ( *rxSyncWordDone )( void );
    void ( *rxHeaderDone )( 
# 709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h" 3 4
                           _Bool 
# 709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
                                isOk );
    void ( *txTimeout )( void );
    void ( *rxTimeout )( void );
    void ( *rxError )( IrqErrorCode_t errCode );
    void ( *cadDone )( 
# 713 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h" 3 4
                      _Bool 
# 713 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
                           cadFlag );
}SX126xCallbacks_t;
# 725 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xInit( DioIrqHandler dioIrq );




void SX126xCheckDeviceReady( void );







void SX126xSetPayload( uint8_t *payload, uint8_t size );
# 748 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
uint8_t SX126xGetPayload( uint8_t *payload, uint8_t *size, uint8_t maxSize );
# 757 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xSendPayload( uint8_t *payload, uint8_t size, uint32_t timeout );
# 766 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
uint8_t SX126xSetSyncWord( uint8_t *syncWord );







void SX126xSetCrcSeed( uint16_t seed );







void SX126xSetCrcPolynomial( uint16_t polynomial );






void SX126xSetWhiteningSeed( uint16_t seed );
# 808 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
uint32_t SX126xGetRandom( void );







void SX126xSetSleep( SleepParams_t sleepConfig );






void SX126xSetStandby( RadioStandbyModes_t mode );




void SX126xSetFs( void );






void SX126xSetTx( uint32_t timeout );






void SX126xSetRx( uint32_t timeout );






void SX126xSetRxBoosted( uint32_t timeout );







void SX126xSetRxDutyCycle( uint32_t rxTime, uint32_t sleepTime );




void SX126xSetCad( void );




void SX126xSetTxContinuousWave( void );




void SX126xSetTxInfinitePreamble( void );







void SX126xSetStopRxTimerOnPreambleDetect( 
# 880 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h" 3 4
                                          _Bool 
# 880 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
                                               enable );






void SX126xSetLoRaSymbNumTimeout( uint8_t SymbNum );






void SX126xSetRegulatorMode( RadioRegulatorMode_t mode );






void SX126xCalibrate( CalibrationParams_t calibParam );






void SX126xCalibrateImage( uint32_t freq );






void SX126xSetLongPreamble( uint8_t enable );
# 925 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xSetPaConfig( uint8_t paDutyCycle, uint8_t hpMax, uint8_t deviceSel, uint8_t paLut );






void SX126xSetRxTxFallbackMode( uint8_t fallbackMode );
# 941 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xWriteRegisters( uint16_t address, uint8_t *buffer, uint16_t size );
# 950 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xReadRegisters( uint16_t address, uint8_t *buffer, uint16_t size );
# 959 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xWriteBuffer( uint8_t offset, uint8_t *buffer, uint8_t size );
# 968 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xReadBuffer( uint8_t offset, uint8_t *buffer, uint8_t size );
# 978 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xSetDioIrqParams( uint16_t irqMask, uint16_t dio1Mask, uint16_t dio2Mask, uint16_t dio3Mask );






uint16_t SX126xGetIrqStatus( void );






void SX126xSetDio2AsRfSwitchCtrl( uint8_t enable );







void SX126xSetDio3AsTcxoCtrl( RadioTcxoCtrlVoltage_t tcxoVoltage, uint32_t timeout );






void SX126xSetRfFrequency( uint32_t frequency );
# 1017 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xSetPacketType( RadioPacketTypes_t packetType );






RadioPacketTypes_t SX126xGetPacketType( void );







void SX126xSetTxParams( int8_t power, RadioRampTimes_t rampTime );






void SX126xSetModulationParams( ModulationParams_t *modParams );






void SX126xSetPacketParams( PacketParams_t *packetParams );
# 1061 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h"
void SX126xSetCadParams( RadioLoRaCadSymbols_t cadSymbolNum, uint8_t cadDetPeak, uint8_t cadDetMin, RadioCadExitModes_t cadExitMode, uint32_t cadTimeout );







void SX126xSetBufferBaseAddress( uint8_t txBaseAddress, uint8_t rxBaseAddress );






RadioStatus_t SX126xGetStatus( void );






int8_t SX126xGetRssiInst( void );







void SX126xGetRxBufferStatus( uint8_t *payloadLength, uint8_t *rxStartBuffer );






void SX126xGetPacketStatus( PacketStatus_t *pktStatus );






RadioError_t SX126xGetDeviceErrors( void );




void SX126xClearDeviceErrors( void );






void SX126xClearIrqStatus( uint16_t irq );
# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h"
#define __SX126x_BOARD_H__ 
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/sx126x.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h" 2




void SX126xIoInit( void );






void SX126xIoIrqInit( DioIrqHandler *dioIrq );






void SX126xIoDeInit( void );




void SX126xIoTcxoInit( void );




void SX126xIoRfSwitchInit( void );




void SX126xIoDbgInit( void );




void SX126xReset( void );




void SX126xWaitOnBusy( void );




void SX126xWakeup( void );
# 91 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h"
void SX126xWriteCommand( RadioCommands_t opcode, uint8_t *buffer, uint16_t size );
# 102 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h"
uint8_t SX126xReadCommand( RadioCommands_t opcode, uint8_t *buffer, uint16_t size );







void SX126xWriteRegister( uint16_t address, uint8_t value );
# 119 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h"
uint8_t SX126xReadRegister( uint16_t address );






void SX126xSetRfTxPower( int8_t power );






uint8_t SX126xGetDeviceId( void );




void SX126xAntSwOn( void );






void SX126xAntSwOff( void );








# 153 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h" 3 4
_Bool 
# 153 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h"
    SX126xCheckRfFrequency( uint32_t frequency );






uint32_t SX126xGetBoardTcxoWakeupTime( void );






uint32_t SX126xGetDio1PinState( void );






RadioOperatingModes_t SX126xGetOperatingMode( void );
# 184 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/sx126x-board.h"
void SX126xSetOperatingMode( RadioOperatingModes_t mode );




extern SX126x_t SX126x;
# 31 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/board.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/board.h"
#define __BOARD_H__ 
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/board.h"
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
# 86 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak4630/board.h"
uint8_t BoardGetBatteryLevel( void );






uint32_t BoardGetRandomSeed( void );






void BoardGetUniqueId( uint8_t *id );




void BoardLowPowerHandler( void );






uint8_t GetBoardPowerSource( void );






Version_t BoardGetVersion( void );
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/system/udrv_system.h" 1

#define _UDRV_SYSTEM_H_ 







# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/timer/udrv_timer.h" 1

#define _UDRV_TIMER_H_ 







typedef enum {
        TIMER_0 = 0,
        TIMER_1 = 1,
        TIMER_2 = 2,
        TIMER_3 = 3,
        TIMER_4 = 4,
        TIMER_ID_MAX = 5,
} TimerID_E;

typedef enum {
        SYSTIMER_LORAWAN = 0,
        SYSTIMER_TRANSPARENT_MODE = 1,
        SYSTIMER_PROTOCOL_MODE = 2,
        SYSTIMER_LED = 3,
        SYSTIMER_LCT = 4,
        SYSTIMER_ID_MAX = 5,
} SysTimerID_E;

typedef enum hwtmr_op_mode {
    HTMR_ONESHOT = 0,
    HTMR_PERIODIC = 1,
} TimerMode_E;

typedef void (*timer_handler) (void *m_data);


struct udrv_timer_api {
    void (*TIMER_INIT) (void);
    int32_t (*TIMER_CREATE) (TimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
    int32_t (*TIMER_START) (TimerID_E timer_id, uint32_t count, void *m_data);
    int32_t (*TIMER_STOP) (TimerID_E timer_id);
};

void udrv_timer_init (void);
int32_t udrv_timer_create (TimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
int32_t udrv_timer_start (TimerID_E timer_id, uint32_t count, void *m_data);
int32_t udrv_timer_stop (TimerID_E timer_id);

int32_t udrv_system_timer_create (SysTimerID_E timer_id, timer_handler tmr_handler, TimerMode_E mode);
int32_t udrv_system_timer_start (SysTimerID_E timer_id, uint32_t count, void *m_data);
int32_t udrv_system_timer_stop (SysTimerID_E timer_id);

void udrv_system_timer_handler_handler (void *pdata);
# 11 "/home/jenkins/workspace/RUI_Release/rui-v3/component/udrv/system/udrv_system.h" 2

#define RANDOM_LENGTH 4
#define SEED_LENGTH 4


#define EVENT_QUEUE_SIZE (32)
#define EVENT_DATA_SIZE (8)




typedef enum
{
    UDRV_SYS_EVT_OP_SERIAL_UART = 0x00,

    UDRV_SYS_EVT_OP_SERIAL_USB,


    UDRV_SYS_EVT_OP_SERIAL_BLE,


    UDRV_SYS_EVT_OP_LORAWAN,
    UDRV_SYS_EVT_OP_LORAWAN_JOIN_CB,

    UDRV_SYS_EVT_OP_USER_APP,
    UDRV_SYS_EVT_OP_USER_TIMER,
    UDRV_SYS_EVT_OP_SYS_TIMER,

    UDRV_SYS_EVT_OP_SERIAL_NFC,

    UDRV_SYS_EVT_OP_SERIAL_FALLBACK,
    UDRV_SYS_EVT_OP_RTC,
    UDRV_SYS_EVT_OP_GPIO_INTERRUPT,
} udrv_system_event_op_t;

typedef struct
{
    udrv_system_event_op_t request;
    void *p_context;
} udrv_system_event_t;

void udrv_system_event_init(void);

int32_t udrv_system_event_produce(udrv_system_event_t *event);

void udrv_system_event_consume(void);

void udrv_system_reboot(void);


void udrv_system_critical_section_begin(uint32_t *mask);

void udrv_system_critical_section_end (uint32_t *mask);

unsigned long udrv_system_random (unsigned long maxvalue);

void udrv_system_randomseed(unsigned long seed);

int32_t udrv_system_user_app_timer_create (timer_handler tmr_handler, TimerMode_E mode);

int32_t udrv_system_user_app_timer_start (uint32_t count, void *m_data);

int32_t udrv_system_user_app_timer_stop (void);
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 2

extern 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
      _Bool 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
           udrv_powersave_in_sleep;
static udrv_system_event_t rui_lora_event = {.request = UDRV_SYS_EVT_OP_LORAWAN, .p_context = 
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                                             ((void *)0)
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                                                 };






void RadioInit( RadioEvents_t *events );






RadioState_t RadioGetStatus( void );






void RadioSetModem( RadioModems_t modem );






void RadioSetChannel( uint32_t freq );
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"

# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
_Bool 
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
    RadioIsChannelFree( uint32_t freq, uint32_t rxBandwidth, int16_t rssiThresh, uint32_t maxCarrierSenseTime );
# 89 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
uint32_t RadioRandom( void );
# 130 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
void RadioSetRxConfig( RadioModems_t modem, uint32_t bandwidth,
                          uint32_t datarate, uint8_t coderate,
                          uint32_t bandwidthAfc, uint16_t preambleLen,
                          uint16_t symbTimeout, 
# 133 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                               _Bool 
# 133 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                    fixLen,
                          uint8_t payloadLen,
                          
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                         _Bool 
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                              crcOn, 
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                     _Bool 
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                          FreqHopOn, uint8_t HopPeriod,
                          
# 136 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                         _Bool 
# 136 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                              iqInverted, 
# 136 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                          _Bool 
# 136 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                               rxContinuous );
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
void RadioSetTxConfig( RadioModems_t modem, int8_t power, uint32_t fdev,
                          uint32_t bandwidth, uint32_t datarate,
                          uint8_t coderate, uint16_t preambleLen,
                          
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                         _Bool 
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                              fixLen, 
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                      _Bool 
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                           crcOn, 
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                  _Bool 
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                       FreqHopOn,
                          uint8_t HopPeriod, 
# 177 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                            _Bool 
# 177 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                 iqInverted, uint32_t timeout );








# 185 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
_Bool 
# 185 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
    RadioCheckRfFrequency( uint32_t frequency );
# 213 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
uint32_t RadioTimeOnAir( RadioModems_t modem, uint32_t bandwidth,
                              uint32_t datarate, uint8_t coderate,
                              uint16_t preambleLen, 
# 215 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                   _Bool 
# 215 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                        fixLen, uint8_t payloadLen,
                              
# 216 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                             _Bool 
# 216 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                  crcOn );
# 225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
void RadioSend( uint8_t *buffer, uint8_t size );




void RadioSleep( void );




void RadioStandby( void );






void RadioRx( uint32_t timeout );




void RadioStartCad( void );
# 256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
void RadioSetTxContinuousWave( uint32_t freq, int8_t power, uint16_t time );






int16_t RadioRssi( RadioModems_t modem );







void RadioWrite( uint32_t addr, uint8_t data );







uint8_t RadioRead( uint32_t addr );
# 288 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
void RadioWriteBuffer( uint32_t addr, uint8_t *buffer, uint8_t size );
# 297 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
void RadioReadBuffer( uint32_t addr, uint8_t *buffer, uint8_t size );







void RadioSetMaxPayloadLength( RadioModems_t modem, uint8_t max );
# 314 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
void RadioSetPublicNetwork( 
# 314 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                           _Bool 
# 314 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                enable );






uint32_t RadioGetWakeupTime( void );




void RadioIrqProcess( void );






void RadioRxBoosted( uint32_t timeout );







void RadioSetRxDutyCycle( uint32_t rxTime, uint32_t sleepTime );




const struct Radio_s Radio =
{
    RadioInit,
    RadioGetStatus,
    RadioSetModem,
    RadioSetChannel,
    RadioIsChannelFree,
    RadioRandom,
    RadioSetRxConfig,
    RadioSetTxConfig,
    RadioCheckRfFrequency,
    RadioTimeOnAir,
    RadioSend,
    RadioSleep,
    RadioStandby,
    RadioRx,
    RadioStartCad,
    RadioSetTxContinuousWave,
    RadioRssi,
    RadioWrite,
    RadioRead,
    RadioWriteBuffer,
    RadioReadBuffer,
    RadioSetMaxPayloadLength,
    RadioSetPublicNetwork,
    RadioGetWakeupTime,
    RadioIrqProcess,

    RadioRxBoosted,
    RadioSetRxDutyCycle
};
# 386 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
typedef struct
{
    uint32_t bandwidth;
    uint8_t RegValue;
}FskBandwidth_t;




const FskBandwidth_t FskBandwidths[] =
{
    { 4800 , 0x1F },
    { 5800 , 0x17 },
    { 7300 , 0x0F },
    { 9700 , 0x1E },
    { 11700 , 0x16 },
    { 14600 , 0x0E },
    { 19500 , 0x1D },
    { 23400 , 0x15 },
    { 29300 , 0x0D },
    { 39000 , 0x1C },
    { 46900 , 0x14 },
    { 58600 , 0x0C },
    { 78200 , 0x1B },
    { 93800 , 0x13 },
    { 117300, 0x0B },
    { 156200, 0x1A },
    { 187200, 0x12 },
    { 234300, 0x0A },
    { 312000, 0x19 },
    { 373600, 0x11 },
    { 467000, 0x09 },
    { 500000, 0x00 },
};

const RadioLoRaBandwidths_t Bandwidths[] = { LORA_BW_125, LORA_BW_250, LORA_BW_500 };

uint8_t MaxPayloadLength = 0xFF;

uint32_t TxTimeout = 0;
uint32_t RxTimeout = 0;


# 428 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
_Bool 
# 428 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
    RxContinuous = 
# 428 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                   0
# 428 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                        ;


PacketStatus_t RadioPktStatus;
uint8_t RadioRxPayload[255];


# 434 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
_Bool 
# 434 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
    IrqFired = 
# 434 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
               0
# 434 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                    ;
# 443 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
void RadioOnDioIrq( void* context );




void RadioOnTxTimeoutIrq( void* context );




void RadioOnRxTimeoutIrq( void* context );
# 463 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
typedef struct
{
    
# 465 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
   _Bool 
# 465 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
        Previous;
    
# 466 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
   _Bool 
# 466 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
        Current;
}RadioPublicNetwork_t;

static RadioPublicNetwork_t RadioPublicNetwork = { 
# 469 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                  0 
# 469 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                        };




static RadioEvents_t* RadioEvents;
# 483 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
SX126x_t SX126x;




TimerEvent_t TxTimeoutTimer;
TimerEvent_t RxTimeoutTimer;







static uint8_t RadioGetFskBandwidthRegValue( uint32_t bandwidth )
{
    uint8_t i;

    if( bandwidth == 0 )
    {
        return( 0x1F );
    }

    for( i = 0; i < ( sizeof( FskBandwidths ) / sizeof( FskBandwidth_t ) ) - 1; i++ )
    {
        if( ( bandwidth >= FskBandwidths[i].bandwidth ) && ( bandwidth < FskBandwidths[i + 1].bandwidth ) )
        {
            return FskBandwidths[i+1].RegValue;
        }
    }

    while( 1 );
}

void RadioInit( RadioEvents_t *events )
{
    RadioEvents = events;

    SX126xInit( RadioOnDioIrq );
    SX126xSetStandby( STDBY_RC );
    SX126xSetRegulatorMode( USE_DCDC );

    SX126xSetBufferBaseAddress( 0x00, 0x00 );
    SX126xSetTxParams( 0, RADIO_RAMP_200_US );
    SX126xSetDioIrqParams( IRQ_RADIO_ALL, IRQ_RADIO_ALL, IRQ_RADIO_NONE, IRQ_RADIO_NONE );


    TimerInit( &TxTimeoutTimer, RadioOnTxTimeoutIrq );
    TimerInit( &RxTimeoutTimer, RadioOnRxTimeoutIrq );

    IrqFired = 
# 533 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
              0
# 533 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                   ;
}

RadioState_t RadioGetStatus( void )
{
    switch( SX126xGetOperatingMode( ) )
    {
        case MODE_TX:
            return RF_TX_RUNNING;
        case MODE_RX:
            return RF_RX_RUNNING;
        case MODE_CAD:
            return RF_CAD;
        default:
            return RF_IDLE;
    }
}

void RadioSetModem( RadioModems_t modem )
{
    switch( modem )
    {
    default:
    case MODEM_FSK:
        SX126xSetPacketType( PACKET_TYPE_GFSK );


        RadioPublicNetwork.Current = 
# 560 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                    0
# 560 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                         ;
        break;
    case MODEM_LORA:
        SX126xSetPacketType( PACKET_TYPE_LORA );

        if( RadioPublicNetwork.Current != RadioPublicNetwork.Previous )
        {
            RadioPublicNetwork.Current = RadioPublicNetwork.Previous;
            RadioSetPublicNetwork( RadioPublicNetwork.Current );
        }
        break;
    }
}

void RadioSetChannel( uint32_t freq )
{
    SX126xSetRfFrequency( freq );
}


# 579 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
_Bool 
# 579 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
    RadioIsChannelFree( uint32_t freq, uint32_t rxBandwidth, int16_t rssiThresh, uint32_t maxCarrierSenseTime )
{
    
# 581 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
   _Bool 
# 581 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
            status = 
# 581 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                               1
# 581 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                   ;
    int16_t rssi = 0;
    uint32_t carrierSenseTime = 0;

    RadioSetModem( MODEM_FSK );

    RadioSetChannel( freq );


    RadioSetRxConfig( MODEM_FSK, rxBandwidth, 600, 0, rxBandwidth, 3, 0, 
# 590 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                        0
# 590 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                             ,
                      0, 
# 591 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                        0
# 591 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                             , 0, 0, 
# 591 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                     0
# 591 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                          , 
# 591 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                            1 
# 591 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                 );
    RadioRx( 0 );

    DelayMs( 1 );

    carrierSenseTime = TimerGetCurrentTime( );


    while( TimerGetElapsedTime( carrierSenseTime ) < maxCarrierSenseTime )
    {
        rssi = RadioRssi( MODEM_FSK );

        if( rssi > rssiThresh )
        {
            status = 
# 605 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                    0
# 605 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                         ;
            break;
        }
    }
    RadioSleep( );
    return status;
}

uint32_t RadioRandom( void )
{
    uint32_t rnd = 0;





    RadioSetModem( MODEM_LORA );


    SX126xSetDioIrqParams( IRQ_RADIO_NONE, IRQ_RADIO_NONE, IRQ_RADIO_NONE, IRQ_RADIO_NONE );

    rnd = SX126xGetRandom( );

    return rnd;
}

void RadioSetRxConfig( RadioModems_t modem, uint32_t bandwidth,
                         uint32_t datarate, uint8_t coderate,
                         uint32_t bandwidthAfc, uint16_t preambleLen,
                         uint16_t symbTimeout, 
# 634 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                              _Bool 
# 634 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                   fixLen,
                         uint8_t payloadLen,
                         
# 636 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                        _Bool 
# 636 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                             crcOn, 
# 636 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                    _Bool 
# 636 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                         freqHopOn, uint8_t hopPeriod,
                         
# 637 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                        _Bool 
# 637 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                             iqInverted, 
# 637 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                         _Bool 
# 637 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                              rxContinuous )
{

    RxContinuous = rxContinuous;
    if( rxContinuous == 
# 641 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                       1 
# 641 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                            )
    {
        symbTimeout = 0;
    }
    if( fixLen == 
# 645 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                 1 
# 645 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                      )
    {
        MaxPayloadLength = payloadLen;
    }
    else
    {
        MaxPayloadLength = 0xFF;
    }

    switch( modem )
    {
        case MODEM_FSK:
            SX126xSetStopRxTimerOnPreambleDetect( 
# 657 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                 0 
# 657 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                       );
            SX126x.ModulationParams.PacketType = PACKET_TYPE_GFSK;

            SX126x.ModulationParams.Params.Gfsk.BitRate = datarate;
            SX126x.ModulationParams.Params.Gfsk.ModulationShaping = MOD_SHAPING_G_BT_1;
            SX126x.ModulationParams.Params.Gfsk.Bandwidth = RadioGetFskBandwidthRegValue( bandwidth << 1 );

            SX126x.PacketParams.PacketType = PACKET_TYPE_GFSK;
            SX126x.PacketParams.Params.Gfsk.PreambleLength = ( preambleLen << 3 );
            SX126x.PacketParams.Params.Gfsk.PreambleMinDetect = RADIO_PREAMBLE_DETECTOR_08_BITS;
            SX126x.PacketParams.Params.Gfsk.SyncWordLength = 3 << 3;
            SX126x.PacketParams.Params.Gfsk.AddrComp = RADIO_ADDRESSCOMP_FILT_OFF;
            SX126x.PacketParams.Params.Gfsk.HeaderType = ( fixLen == 
# 669 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                    1 
# 669 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                         ) ? RADIO_PACKET_FIXED_LENGTH : RADIO_PACKET_VARIABLE_LENGTH;
            SX126x.PacketParams.Params.Gfsk.PayloadLength = MaxPayloadLength;
            if( crcOn == 
# 671 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                        1 
# 671 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                             )
            {
                SX126x.PacketParams.Params.Gfsk.CrcLength = RADIO_CRC_2_BYTES_CCIT;
            }
            else
            {
                SX126x.PacketParams.Params.Gfsk.CrcLength = RADIO_CRC_OFF;
            }
            SX126x.PacketParams.Params.Gfsk.DcFree = RADIO_DC_FREEWHITENING;

            RadioStandby( );
            RadioSetModem( ( SX126x.ModulationParams.PacketType == PACKET_TYPE_GFSK ) ? MODEM_FSK : MODEM_LORA );
            SX126xSetModulationParams( &SX126x.ModulationParams );
            SX126xSetPacketParams( &SX126x.PacketParams );
            SX126xSetSyncWord( ( uint8_t[] ){ 0xC1, 0x94, 0xC1, 0x00, 0x00, 0x00, 0x00, 0x00 } );
            SX126xSetWhiteningSeed( 0x01FF );

            RxTimeout = ( uint32_t )symbTimeout * 8000UL / datarate;
            break;

        case MODEM_LORA:
            SX126xSetStopRxTimerOnPreambleDetect( 
# 692 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                 0 
# 692 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                       );
            SX126x.ModulationParams.PacketType = PACKET_TYPE_LORA;
            SX126x.ModulationParams.Params.LoRa.SpreadingFactor = ( RadioLoRaSpreadingFactors_t )datarate;
            SX126x.ModulationParams.Params.LoRa.Bandwidth = Bandwidths[bandwidth];
            SX126x.ModulationParams.Params.LoRa.CodingRate = ( RadioLoRaCodingRates_t )coderate;

            if( ( ( bandwidth == 0 ) && ( ( datarate == 11 ) || ( datarate == 12 ) ) ) ||
            ( ( bandwidth == 1 ) && ( datarate == 12 ) ) )
            {
                SX126x.ModulationParams.Params.LoRa.LowDatarateOptimize = 0x01;
            }
            else
            {
                SX126x.ModulationParams.Params.LoRa.LowDatarateOptimize = 0x00;
            }

            SX126x.PacketParams.PacketType = PACKET_TYPE_LORA;

            if( ( SX126x.ModulationParams.Params.LoRa.SpreadingFactor == LORA_SF5 ) ||
                ( SX126x.ModulationParams.Params.LoRa.SpreadingFactor == LORA_SF6 ) )
            {
                if( preambleLen < 12 )
                {
                    SX126x.PacketParams.Params.LoRa.PreambleLength = 12;
                }
                else
                {
                    SX126x.PacketParams.Params.LoRa.PreambleLength = preambleLen;
                }
            }
            else
            {
                SX126x.PacketParams.Params.LoRa.PreambleLength = preambleLen;
            }

            SX126x.PacketParams.Params.LoRa.HeaderType = ( RadioLoRaPacketLengthsMode_t )fixLen;

            SX126x.PacketParams.Params.LoRa.PayloadLength = MaxPayloadLength;
            SX126x.PacketParams.Params.LoRa.CrcMode = ( RadioLoRaCrcModes_t )crcOn;
            SX126x.PacketParams.Params.LoRa.InvertIQ = ( RadioLoRaIQModes_t )iqInverted;

            RadioStandby( );
            RadioSetModem( ( SX126x.ModulationParams.PacketType == PACKET_TYPE_GFSK ) ? MODEM_FSK : MODEM_LORA );
            SX126xSetModulationParams( &SX126x.ModulationParams );
            SX126xSetPacketParams( &SX126x.PacketParams );
            SX126xSetLoRaSymbNumTimeout( symbTimeout );


            if( SX126x.PacketParams.Params.LoRa.InvertIQ == LORA_IQ_INVERTED )
            {

                SX126xWriteRegister( 0x0736, SX126xReadRegister( 0x0736 ) & ~( 1 << 2 ) );
            }
            else
            {

                SX126xWriteRegister( 0x0736, SX126xReadRegister( 0x0736 ) | ( 1 << 2 ) );
            }



            RxTimeout = 0xFFFF;

            break;
    }
}

void RadioSetTxConfig( RadioModems_t modem, int8_t power, uint32_t fdev,
                        uint32_t bandwidth, uint32_t datarate,
                        uint8_t coderate, uint16_t preambleLen,
                        
# 762 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                       _Bool 
# 762 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                            fixLen, 
# 762 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                    _Bool 
# 762 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                         crcOn, 
# 762 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                _Bool 
# 762 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                     freqHopOn,
                        uint8_t hopPeriod, 
# 763 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                          _Bool 
# 763 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                               iqInverted, uint32_t timeout )
{

    switch( modem )
    {
        case MODEM_FSK:
            SX126x.ModulationParams.PacketType = PACKET_TYPE_GFSK;
            SX126x.ModulationParams.Params.Gfsk.BitRate = datarate;

            SX126x.ModulationParams.Params.Gfsk.ModulationShaping = MOD_SHAPING_G_BT_1;
            SX126x.ModulationParams.Params.Gfsk.Bandwidth = RadioGetFskBandwidthRegValue( bandwidth << 1 );
            SX126x.ModulationParams.Params.Gfsk.Fdev = fdev;

            SX126x.PacketParams.PacketType = PACKET_TYPE_GFSK;
            SX126x.PacketParams.Params.Gfsk.PreambleLength = ( preambleLen << 3 );
            SX126x.PacketParams.Params.Gfsk.PreambleMinDetect = RADIO_PREAMBLE_DETECTOR_08_BITS;
            SX126x.PacketParams.Params.Gfsk.SyncWordLength = 3 << 3 ;
            SX126x.PacketParams.Params.Gfsk.AddrComp = RADIO_ADDRESSCOMP_FILT_OFF;
            SX126x.PacketParams.Params.Gfsk.HeaderType = ( fixLen == 
# 781 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                    1 
# 781 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                         ) ? RADIO_PACKET_FIXED_LENGTH : RADIO_PACKET_VARIABLE_LENGTH;

            if( crcOn == 
# 783 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                        1 
# 783 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                             )
            {
                SX126x.PacketParams.Params.Gfsk.CrcLength = RADIO_CRC_2_BYTES_CCIT;
            }
            else
            {
                SX126x.PacketParams.Params.Gfsk.CrcLength = RADIO_CRC_OFF;
            }
            SX126x.PacketParams.Params.Gfsk.DcFree = RADIO_DC_FREEWHITENING;

            RadioStandby( );
            RadioSetModem( ( SX126x.ModulationParams.PacketType == PACKET_TYPE_GFSK ) ? MODEM_FSK : MODEM_LORA );
            SX126xSetModulationParams( &SX126x.ModulationParams );
            SX126xSetPacketParams( &SX126x.PacketParams );
            SX126xSetSyncWord( ( uint8_t[] ){ 0xC1, 0x94, 0xC1, 0x00, 0x00, 0x00, 0x00, 0x00 } );
            SX126xSetWhiteningSeed( 0x01FF );
            break;

        case MODEM_LORA:
            SX126x.ModulationParams.PacketType = PACKET_TYPE_LORA;
            SX126x.ModulationParams.Params.LoRa.SpreadingFactor = ( RadioLoRaSpreadingFactors_t ) datarate;
            SX126x.ModulationParams.Params.LoRa.Bandwidth = Bandwidths[bandwidth];
            SX126x.ModulationParams.Params.LoRa.CodingRate= ( RadioLoRaCodingRates_t )coderate;

            if( ( ( bandwidth == 0 ) && ( ( datarate == 11 ) || ( datarate == 12 ) ) ) ||
            ( ( bandwidth == 1 ) && ( datarate == 12 ) ) )
            {
                SX126x.ModulationParams.Params.LoRa.LowDatarateOptimize = 0x01;
            }
            else
            {
                SX126x.ModulationParams.Params.LoRa.LowDatarateOptimize = 0x00;
            }

            SX126x.PacketParams.PacketType = PACKET_TYPE_LORA;

            if( ( SX126x.ModulationParams.Params.LoRa.SpreadingFactor == LORA_SF5 ) ||
                ( SX126x.ModulationParams.Params.LoRa.SpreadingFactor == LORA_SF6 ) )
            {
                if( preambleLen < 12 )
                {
                    SX126x.PacketParams.Params.LoRa.PreambleLength = 12;
                }
                else
                {
                    SX126x.PacketParams.Params.LoRa.PreambleLength = preambleLen;
                }
            }
            else
            {
                SX126x.PacketParams.Params.LoRa.PreambleLength = preambleLen;
            }

            SX126x.PacketParams.Params.LoRa.HeaderType = ( RadioLoRaPacketLengthsMode_t )fixLen;
            SX126x.PacketParams.Params.LoRa.PayloadLength = MaxPayloadLength;
            SX126x.PacketParams.Params.LoRa.CrcMode = ( RadioLoRaCrcModes_t )crcOn;
            SX126x.PacketParams.Params.LoRa.InvertIQ = ( RadioLoRaIQModes_t )iqInverted;

            RadioStandby( );
            RadioSetModem( ( SX126x.ModulationParams.PacketType == PACKET_TYPE_GFSK ) ? MODEM_FSK : MODEM_LORA );
            SX126xSetModulationParams( &SX126x.ModulationParams );
            SX126xSetPacketParams( &SX126x.PacketParams );
            break;
    }


    if( ( modem == MODEM_LORA ) && ( SX126x.ModulationParams.Params.LoRa.Bandwidth == LORA_BW_500 ) )
    {

        SX126xWriteRegister( 0x0889, SX126xReadRegister( 0x0889 ) & ~( 1 << 2 ) );
    }
    else
    {

        SX126xWriteRegister( 0x0889, SX126xReadRegister( 0x0889 ) | ( 1 << 2 ) );
    }


    SX126xSetRfTxPower( power );
    TxTimeout = timeout;
}


# 865 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
_Bool 
# 865 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
    RadioCheckRfFrequency( uint32_t frequency )
{
    return 
# 867 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
          1
# 867 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
              ;
}

static uint32_t RadioGetLoRaBandwidthInHz( RadioLoRaBandwidths_t bw )
{
    uint32_t bandwidthInHz = 0;

    switch( bw )
    {
    case LORA_BW_007:
        bandwidthInHz = 7812UL;
        break;
    case LORA_BW_010:
        bandwidthInHz = 10417UL;
        break;
    case LORA_BW_015:
        bandwidthInHz = 15625UL;
        break;
    case LORA_BW_020:
        bandwidthInHz = 20833UL;
        break;
    case LORA_BW_031:
        bandwidthInHz = 31250UL;
        break;
    case LORA_BW_041:
        bandwidthInHz = 41667UL;
        break;
    case LORA_BW_062:
        bandwidthInHz = 62500UL;
        break;
    case LORA_BW_125:
        bandwidthInHz = 125000UL;
        break;
    case LORA_BW_250:
        bandwidthInHz = 250000UL;
        break;
    case LORA_BW_500:
        bandwidthInHz = 500000UL;
        break;
    }

    return bandwidthInHz;
}

static uint32_t RadioGetGfskTimeOnAirNumerator( uint32_t datarate, uint8_t coderate,
                              uint16_t preambleLen, 
# 912 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                   _Bool 
# 912 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                        fixLen, uint8_t payloadLen,
                              
# 913 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                             _Bool 
# 913 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                  crcOn )
{
    const RadioAddressComp_t addrComp = RADIO_ADDRESSCOMP_FILT_OFF;
    const uint8_t syncWordLength = 3;

    return ( preambleLen << 3 ) +
           ( ( fixLen == 
# 919 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                        0 
# 919 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                              ) ? 8 : 0 ) +
             ( syncWordLength << 3 ) +
             ( ( payloadLen +
               ( addrComp == RADIO_ADDRESSCOMP_FILT_OFF ? 0 : 1 ) +
               ( ( crcOn == 
# 923 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                           1 
# 923 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                ) ? 2 : 0 )
               ) << 3
             );
}

static uint32_t RadioGetLoRaTimeOnAirNumerator( uint32_t bandwidth,
                              uint32_t datarate, uint8_t coderate,
                              uint16_t preambleLen, 
# 930 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                   _Bool 
# 930 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                        fixLen, uint8_t payloadLen,
                              
# 931 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                             _Bool 
# 931 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                  crcOn )
{
    int32_t crDenom = coderate + 4;
    
# 934 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
   _Bool 
# 934 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
           lowDatareOptimize = 
# 934 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                               0
# 934 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                    ;



    if( ( datarate == 5 ) || ( datarate == 6 ) )
    {
        if( preambleLen < 12 )
        {
            preambleLen = 12;
        }
    }

    if( ( ( bandwidth == 0 ) && ( ( datarate == 11 ) || ( datarate == 12 ) ) ) ||
        ( ( bandwidth == 1 ) && ( datarate == 12 ) ) )
    {
        lowDatareOptimize = 
# 949 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                           1
# 949 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                               ;
    }

    int32_t ceilDenominator;
    int32_t ceilNumerator = ( payloadLen << 3 ) +
                            ( crcOn ? 16 : 0 ) -
                            ( 4 * datarate ) +
                            ( fixLen ? 0 : 20 );

    if( datarate <= 6 )
    {
        ceilDenominator = 4 * datarate;
    }
    else
    {
        ceilNumerator += 8;

        if( lowDatareOptimize == 
# 966 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                1 
# 966 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                     )
        {
            ceilDenominator = 4 * ( datarate - 2 );
        }
        else
        {
            ceilDenominator = 4 * datarate;
        }
    }

    if( ceilNumerator < 0 )
    {
        ceilNumerator = 0;
    }


    int32_t intermediate =
        ( ( ceilNumerator + ceilDenominator - 1 ) / ceilDenominator ) * crDenom + preambleLen + 12;

    if( datarate <= 6 )
    {
        intermediate += 2;
    }

    return ( uint32_t )( ( 4 * intermediate + 1 ) * ( 1 << ( datarate - 2 ) ) );
}

uint32_t RadioTimeOnAir( RadioModems_t modem, uint32_t bandwidth,
                              uint32_t datarate, uint8_t coderate,
                              uint16_t preambleLen, 
# 995 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                   _Bool 
# 995 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                        fixLen, uint8_t payloadLen,
                              
# 996 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                             _Bool 
# 996 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                  crcOn )
{
    uint32_t numerator = 0;
    uint32_t denominator = 1;

    switch( modem )
    {
    case MODEM_FSK:
        {
            numerator = 1000U * RadioGetGfskTimeOnAirNumerator( datarate, coderate,
                                                                  preambleLen, fixLen,
                                                                  payloadLen, crcOn );
            denominator = datarate;
        }
        break;
    case MODEM_LORA:
        {
            numerator = 1000U * RadioGetLoRaTimeOnAirNumerator( bandwidth, datarate,
                                                                  coderate, preambleLen,
                                                                  fixLen, payloadLen, crcOn );
            denominator = RadioGetLoRaBandwidthInHz( Bandwidths[bandwidth] );
        }
        break;
    }

    return ( numerator + denominator - 1 ) / denominator;
}

void RadioSend( uint8_t *buffer, uint8_t size )
{
    SX126xSetDioIrqParams( IRQ_TX_DONE | IRQ_RX_TX_TIMEOUT,
                           IRQ_TX_DONE | IRQ_RX_TX_TIMEOUT,
                           IRQ_RADIO_NONE,
                           IRQ_RADIO_NONE );

    if( SX126xGetPacketType( ) == PACKET_TYPE_LORA )
    {
        SX126x.PacketParams.Params.LoRa.PayloadLength = size;
    }
    else
    {
        SX126x.PacketParams.Params.Gfsk.PayloadLength = size;
    }
    SX126xSetPacketParams( &SX126x.PacketParams );

    SX126xSendPayload( buffer, size, 0 );
    TimerSetValue( &TxTimeoutTimer, TxTimeout );
    TimerStart( &TxTimeoutTimer );
}

void RadioSleep( void )
{
    SleepParams_t params = { 0 };

    params.Fields.WarmStart = 1;
    SX126xSetSleep( params );

    DelayMs( 2 );
}

void RadioStandby( void )
{
    SX126xSetStandby( STDBY_RC );
}

void RadioRx( uint32_t timeout )
{
    SX126xSetDioIrqParams( IRQ_RADIO_ALL,
                           IRQ_RADIO_ALL,
                           IRQ_RADIO_NONE,
                           IRQ_RADIO_NONE );

    if( timeout != 0 )
    {
        TimerSetValue( &RxTimeoutTimer, timeout );
        TimerStart( &RxTimeoutTimer );
    }

    if( RxContinuous == 
# 1074 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                       1 
# 1074 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                            )
    {
        SX126xSetRx( 0xFFFFFF );
    }
    else
    {
        SX126xSetRx( RxTimeout << 6 );
    }
}

void RadioRxBoosted( uint32_t timeout )
{
    SX126xSetDioIrqParams( IRQ_RADIO_ALL,
                           IRQ_RADIO_ALL,
                           IRQ_RADIO_NONE,
                           IRQ_RADIO_NONE );

    if( timeout != 0 )
    {
        TimerSetValue( &RxTimeoutTimer, timeout );
        TimerStart( &RxTimeoutTimer );
    }

    if( RxContinuous == 
# 1097 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                       1 
# 1097 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                            )
    {
        SX126xSetRxBoosted( 0xFFFFFF );
    }
    else
    {
        SX126xSetRxBoosted( RxTimeout << 6 );
    }
}

void RadioSetRxDutyCycle( uint32_t rxTime, uint32_t sleepTime )
{
    SX126xSetRxDutyCycle( rxTime, sleepTime );
}

void RadioStartCad( void )
{
    SX126xSetDioIrqParams( IRQ_CAD_DONE | IRQ_CAD_ACTIVITY_DETECTED, IRQ_CAD_DONE | IRQ_CAD_ACTIVITY_DETECTED, IRQ_RADIO_NONE, IRQ_RADIO_NONE );
    SX126xSetCad( );
}

void RadioSetTxContinuousWave( uint32_t freq, int8_t power, uint16_t time )
{
    uint32_t timeout = ( uint32_t )time * 1000;

    SX126xSetRfFrequency( freq );
    SX126xSetRfTxPower( power );
    SX126xSetTxContinuousWave( );

    TimerSetValue( &TxTimeoutTimer, timeout );
    TimerStart( &TxTimeoutTimer );
}

int16_t RadioRssi( RadioModems_t modem )
{
    return SX126xGetRssiInst( );
}

void RadioWrite( uint32_t addr, uint8_t data )
{
    SX126xWriteRegister( addr, data );
}

uint8_t RadioRead( uint32_t addr )
{
    return SX126xReadRegister( addr );
}

void RadioWriteBuffer( uint32_t addr, uint8_t *buffer, uint8_t size )
{
    SX126xWriteRegisters( addr, buffer, size );
}

void RadioReadBuffer( uint32_t addr, uint8_t *buffer, uint8_t size )
{
    SX126xReadRegisters( addr, buffer, size );
}

void RadioSetMaxPayloadLength( RadioModems_t modem, uint8_t max )
{
    if( modem == MODEM_LORA )
    {
        SX126x.PacketParams.Params.LoRa.PayloadLength = MaxPayloadLength = max;
        SX126xSetPacketParams( &SX126x.PacketParams );
    }
    else
    {
        if( SX126x.PacketParams.Params.Gfsk.HeaderType == RADIO_PACKET_VARIABLE_LENGTH )
        {
            SX126x.PacketParams.Params.Gfsk.PayloadLength = MaxPayloadLength = max;
            SX126xSetPacketParams( &SX126x.PacketParams );
        }
    }
}

void RadioSetPublicNetwork( 
# 1172 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                           _Bool 
# 1172 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                enable )
{
    RadioPublicNetwork.Current = RadioPublicNetwork.Previous = enable;

    RadioSetModem( MODEM_LORA );
    if( enable == 
# 1177 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                 1 
# 1177 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                      )
    {

        SX126xWriteRegister( 0x0740, ( 0x3444 >> 8 ) & 0xFF );
        SX126xWriteRegister( 0x0740 + 1, 0x3444 & 0xFF );
    }
    else
    {

        SX126xWriteRegister( 0x0740, ( 0x1424 >> 8 ) & 0xFF );
        SX126xWriteRegister( 0x0740 + 1, 0x1424 & 0xFF );
    }
}

uint32_t RadioGetWakeupTime( void )
{
    return SX126xGetBoardTcxoWakeupTime( ) + 3;
}

void RadioOnTxTimeoutIrq( void* context )
{
    if( ( RadioEvents != 
# 1198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                        ((void *)0) 
# 1198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                             ) && ( RadioEvents->TxTimeout != 
# 1198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                              ((void *)0) 
# 1198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                   ) )
    {
        RadioEvents->TxTimeout( );
        udrv_system_event_produce(&rui_lora_event);
        udrv_powersave_in_sleep = 
# 1202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                 0
# 1202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                      ;
    }
}

void RadioOnRxTimeoutIrq( void* context )
{
    if( ( RadioEvents != 
# 1208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                        ((void *)0) 
# 1208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                             ) && ( RadioEvents->RxTimeout != 
# 1208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                              ((void *)0) 
# 1208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                   ) )
    {
        RadioEvents->RxTimeout( );
        udrv_system_event_produce(&rui_lora_event);
        udrv_powersave_in_sleep = 
# 1212 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                 0
# 1212 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                      ;
    }
}

void RadioOnDioIrq( void* context )
{
    IrqFired = 
# 1218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
              1
# 1218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                  ;
    udrv_system_event_produce(&rui_lora_event);
    udrv_powersave_in_sleep = 
# 1220 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                             0
# 1220 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                  ;
}

void RadioIrqProcess( void )
{
    if( IrqFired == 
# 1225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                   1 
# 1225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                        )
    {
        uint32_t mask; BoardCriticalSectionBegin( &mask );

        IrqFired = 
# 1229 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                  0
# 1229 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                       ;
        BoardCriticalSectionEnd( &mask );

        uint16_t irqRegs = SX126xGetIrqStatus( );
        SX126xClearIrqStatus( irqRegs );

        if( ( irqRegs & IRQ_TX_DONE ) == IRQ_TX_DONE )
        {
            TimerStop( &TxTimeoutTimer );

            SX126xSetOperatingMode( MODE_STDBY_RC );
            if( ( RadioEvents != 
# 1240 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                ((void *)0) 
# 1240 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                     ) && ( RadioEvents->TxDone != 
# 1240 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                   ((void *)0) 
# 1240 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                        ) )
            {
                RadioEvents->TxDone( );
            }
        }

        if( ( irqRegs & IRQ_RX_DONE ) == IRQ_RX_DONE )
        {
            if( ( irqRegs & IRQ_CRC_ERROR ) == IRQ_CRC_ERROR )
            {
                if( RxContinuous == 
# 1250 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                   0 
# 1250 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                         )
                {

                    SX126xSetOperatingMode( MODE_STDBY_RC );
                }
                if( ( RadioEvents != 
# 1255 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                    ((void *)0) 
# 1255 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                         ) && ( RadioEvents->RxError ) )
                {
                    RadioEvents->RxError( );
                }
            }
            else
            {
                uint8_t size;

                TimerStop( &RxTimeoutTimer );
                if( RxContinuous == 
# 1265 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                   0 
# 1265 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                         )
                {

                    SX126xSetOperatingMode( MODE_STDBY_RC );



                    SX126xWriteRegister( 0x0902, 0x00 );

                    SX126xWriteRegister( 0x0944, SX126xReadRegister( 0x0944 ) | ( 1 << 1 ) );

                }
                SX126xGetPayload( RadioRxPayload, &size , 255 );
                SX126xGetPacketStatus( &RadioPktStatus );
                if( ( RadioEvents != 
# 1279 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                    ((void *)0) 
# 1279 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                         ) && ( RadioEvents->RxDone != 
# 1279 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                       ((void *)0) 
# 1279 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                            ) )
                {
                    RadioEvents->RxDone( RadioRxPayload, size, RadioPktStatus.Params.LoRa.RssiPkt, RadioPktStatus.Params.LoRa.SnrPkt );
                }
            }
        }

        if( ( irqRegs & IRQ_CAD_DONE ) == IRQ_CAD_DONE )
        {

            SX126xSetOperatingMode( MODE_STDBY_RC );
            if( ( RadioEvents != 
# 1290 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                ((void *)0) 
# 1290 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                     ) && ( RadioEvents->CadDone != 
# 1290 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                    ((void *)0) 
# 1290 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                         ) )
            {
                RadioEvents->CadDone( ( ( irqRegs & IRQ_CAD_ACTIVITY_DETECTED ) == IRQ_CAD_ACTIVITY_DETECTED ) );
            }
        }

        if( ( irqRegs & IRQ_RX_TX_TIMEOUT ) == IRQ_RX_TX_TIMEOUT )
        {
            if( SX126xGetOperatingMode( ) == MODE_TX )
            {
                TimerStop( &TxTimeoutTimer );

                SX126xSetOperatingMode( MODE_STDBY_RC );
                if( ( RadioEvents != 
# 1303 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                    ((void *)0) 
# 1303 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                         ) && ( RadioEvents->TxTimeout != 
# 1303 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                          ((void *)0) 
# 1303 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                               ) )
                {
                    RadioEvents->TxTimeout( );
                }
            }
            else if( SX126xGetOperatingMode( ) == MODE_RX )
            {
                TimerStop( &RxTimeoutTimer );

                SX126xSetOperatingMode( MODE_STDBY_RC );
                if( ( RadioEvents != 
# 1313 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                    ((void *)0) 
# 1313 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                         ) && ( RadioEvents->RxTimeout != 
# 1313 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                          ((void *)0) 
# 1313 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                               ) )
                {
                    RadioEvents->RxTimeout( );
                }
            }
        }

        if( ( irqRegs & IRQ_PREAMBLE_DETECTED ) == IRQ_PREAMBLE_DETECTED )
        {

        }

        if( ( irqRegs & IRQ_SYNCWORD_VALID ) == IRQ_SYNCWORD_VALID )
        {

        }

        if( ( irqRegs & IRQ_HEADER_VALID ) == IRQ_HEADER_VALID )
        {

        }

        if( ( irqRegs & IRQ_HEADER_ERROR ) == IRQ_HEADER_ERROR )
        {
            TimerStop( &RxTimeoutTimer );
            if( RxContinuous == 
# 1338 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                               0 
# 1338 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                     )
            {

                SX126xSetOperatingMode( MODE_STDBY_RC );
            }
            if( ( RadioEvents != 
# 1343 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                ((void *)0) 
# 1343 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                     ) && ( RadioEvents->RxTimeout != 
# 1343 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c" 3 4
                                                                      ((void *)0) 
# 1343 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/radio/sx126x/radio.c"
                                                                           ) )
            {
                RadioEvents->RxTimeout( );
            }
        }
    }
}
