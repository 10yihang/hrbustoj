
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 42 > 0
static unsigned char *bytecode_data[42];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_Crypto(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$AES(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$ARC2(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$DES(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$DES3(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$PKCS1_v1_5(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_EKSBlowfish(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_cbc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ccm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_cfb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ctr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_eax(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ecb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_gcm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ocb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_ofb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_openpgp(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Cipher$_mode_siv(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$BLAKE2s(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$CMAC(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$HMAC(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$MD5(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA1(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA224(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA256(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA384(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Hash$SHA512(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$IO(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$IO$PEM(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$IO$PKCS8(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$IO$_PBES(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$Numbers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$Primality(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$_IntegerBase(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$_IntegerCustom(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$_IntegerGMP(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Math$_IntegerNative(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Protocol(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Protocol$KDF(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$PublicKey(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$PublicKey$RSA(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$PublicKey$_openssh(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Random(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Random$random(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$Padding(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$_cpu_features(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$_file_system(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$_raw_api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$asn1(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$number(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$py3compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Crypto$Util$strxor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_html5lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_htmlparser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$builder$_lxml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$css(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$dammit(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$element(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bs4$formatter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$assets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$cd(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$constant(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$legacy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_charset_normalizer$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contest_page(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contest_page_ranklist(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contest_page_statistics(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contest_page_status(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_contest_problem_info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$errors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$fake(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$log(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$settings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_fake_useragent$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_global_var(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_hrbustoj(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$cssselect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$_setmixin(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_lxml$html$defs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_array_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_char_codes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_dtype_like(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nbit(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_nested_sequence(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_typing$_shape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_utils$_inspect(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_machar(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$dates(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_config$display(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$tslibs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_libs$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$_version_meson(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$extensions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$indexers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$interchange(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$api$typing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$arrays(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$_optional(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$compressors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$numpy$function(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pickle_compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$compat$pyarrow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$_numba$executor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$accessor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$algorithms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$apply(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$datetimelike_accumulations(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_accumulations(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$masked_reductions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$putmask(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$quantile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$replace(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$take(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$array_algos$transforms(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arraylike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_arrow_string_mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_mixins(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$_ranges(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$_arrow_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$arrow$extension_types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$boolean(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$categorical(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimelike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$datetimes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$floating(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$integer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$interval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$masked(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$numpy_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$period(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$accessor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$sparse$scipy_sparse(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$string_arrow(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$arrays$timedeltas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$align(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$check(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$engines(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$eval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expr(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$expressions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$parsing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$pytables(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$computation$scope(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$config_init(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$construction(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$astype(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$cast(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$concat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$dtypes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$inference(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$dtypes$missing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$flags(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$frame(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$categorical(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$generic(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$groupby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$grouper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$indexing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$numba_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$groupby$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers$objects(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexers$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$accessors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$category(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimelike(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$datetimes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$extension(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$frozen(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$interval(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$multi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$period(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$range(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexes$timedeltas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$indexing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$buffer(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$column(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$dataframe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$dataframe_protocol(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$from_dataframe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$interchange$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$array_manager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$blocks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$concat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$construction(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$managers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$internals$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$describe(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$selectn(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$methods$to_dict(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$missing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$nanops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$array_ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$dispatch(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$docstrings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$invalid(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$mask_ops(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$ops$missing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$resample(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$concat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$encoding(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$melt(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$merge(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$pivot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$reshape(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$tile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$reshape$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$roperator(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$sample(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$series(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$shared_docs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$sorting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$accessor(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$strings$object_array(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$datetimes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$numeric(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$timedeltas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$tools$times(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$hashing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$util$numba_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$doc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$ewm(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$expanding(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$numba_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$online(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$core$window$rolling(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$errors(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$clipboards(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$common(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_base(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odfreader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_odswriter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_openpyxl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_pyxlsb(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlrd(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$excel$_xlsxwriter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$feather_format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$_color_data(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$console(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$css(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$csvs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$excel(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$format(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$html(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$printing(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$string(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$style_render(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$formats$xml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$gbq(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$html(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_json(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_normalize(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$json$_table_schema(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$orc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parquet(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$arrow_parser_wrapper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$base_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$c_parser_wrapper(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$python_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$parsers$readers(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pickle(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$pytables(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas7bdat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_constants(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sas_xport(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sas$sasreader(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$spss(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$sql(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$stata(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$io$xml(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$boxplot(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$converter(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$core(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$groupby(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$hist(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$misc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$style(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$timeseries(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_matplotlib$tools(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$plotting$_misc(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$frequencies(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$tseries$offsets(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_decorators(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_print_versions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$_validators(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pandas$util$version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pkg_resources$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_problemlist(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_problemlist_problem_info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_problemlist_status(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$lazy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzfile(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pytz$tzinfo(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$__meta__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_match(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_parser(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$css_types(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$pretty(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_soupsieve$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_submit(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_base_connection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_request_methods(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_version(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$proxy(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_match_hostname(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssltransport(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$util(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zstandard(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_zstandard$backend_cffi(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"Crypto", modulecode_Crypto, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"Crypto.Cipher", modulecode_Crypto$Cipher, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"Crypto.Cipher.AES", modulecode_Crypto$Cipher$AES, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\101\105\123\56\160\171"
#endif
},
    {"Crypto.Cipher.ARC2", modulecode_Crypto$Cipher$ARC2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\101\122\103\62\56\160\171"
#endif
},
    {"Crypto.Cipher.DES", modulecode_Crypto$Cipher$DES, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\104\105\123\56\160\171"
#endif
},
    {"Crypto.Cipher.DES3", modulecode_Crypto$Cipher$DES3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\104\105\123\63\56\160\171"
#endif
},
    {"Crypto.Cipher.PKCS1_v1_5", modulecode_Crypto$Cipher$PKCS1_v1_5, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\120\113\103\123\61\137\166\61\137\65\56\160\171"
#endif
},
    {"Crypto.Cipher._EKSBlowfish", modulecode_Crypto$Cipher$_EKSBlowfish, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\105\113\123\102\154\157\167\146\151\163\150\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_cbc", modulecode_Crypto$Cipher$_mode_cbc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\143\142\143\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_ccm", modulecode_Crypto$Cipher$_mode_ccm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\143\143\155\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_cfb", modulecode_Crypto$Cipher$_mode_cfb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\143\146\142\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_ctr", modulecode_Crypto$Cipher$_mode_ctr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\143\164\162\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_eax", modulecode_Crypto$Cipher$_mode_eax, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\145\141\170\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_ecb", modulecode_Crypto$Cipher$_mode_ecb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\145\143\142\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_gcm", modulecode_Crypto$Cipher$_mode_gcm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\147\143\155\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_ocb", modulecode_Crypto$Cipher$_mode_ocb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\157\143\142\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_ofb", modulecode_Crypto$Cipher$_mode_ofb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\157\146\142\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_openpgp", modulecode_Crypto$Cipher$_mode_openpgp, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\157\160\145\156\160\147\160\56\160\171"
#endif
},
    {"Crypto.Cipher._mode_siv", modulecode_Crypto$Cipher$_mode_siv, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\103\151\160\150\145\162\134\137\155\157\144\145\137\163\151\166\56\160\171"
#endif
},
    {"Crypto.Hash", modulecode_Crypto$Hash, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"Crypto.Hash.BLAKE2s", modulecode_Crypto$Hash$BLAKE2s, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\102\114\101\113\105\62\163\56\160\171"
#endif
},
    {"Crypto.Hash.CMAC", modulecode_Crypto$Hash$CMAC, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\103\115\101\103\56\160\171"
#endif
},
    {"Crypto.Hash.HMAC", modulecode_Crypto$Hash$HMAC, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\110\115\101\103\56\160\171"
#endif
},
    {"Crypto.Hash.MD5", modulecode_Crypto$Hash$MD5, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\115\104\65\56\160\171"
#endif
},
    {"Crypto.Hash.SHA1", modulecode_Crypto$Hash$SHA1, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\123\110\101\61\56\160\171"
#endif
},
    {"Crypto.Hash.SHA224", modulecode_Crypto$Hash$SHA224, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\123\110\101\62\62\64\56\160\171"
#endif
},
    {"Crypto.Hash.SHA256", modulecode_Crypto$Hash$SHA256, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\123\110\101\62\65\66\56\160\171"
#endif
},
    {"Crypto.Hash.SHA384", modulecode_Crypto$Hash$SHA384, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\123\110\101\63\70\64\56\160\171"
#endif
},
    {"Crypto.Hash.SHA512", modulecode_Crypto$Hash$SHA512, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\110\141\163\150\134\123\110\101\65\61\62\56\160\171"
#endif
},
    {"Crypto.IO", modulecode_Crypto$IO, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\111\117\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"Crypto.IO.PEM", modulecode_Crypto$IO$PEM, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\111\117\134\120\105\115\56\160\171"
#endif
},
    {"Crypto.IO.PKCS8", modulecode_Crypto$IO$PKCS8, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\111\117\134\120\113\103\123\70\56\160\171"
#endif
},
    {"Crypto.IO._PBES", modulecode_Crypto$IO$_PBES, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\111\117\134\137\120\102\105\123\56\160\171"
#endif
},
    {"Crypto.Math", modulecode_Crypto$Math, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\115\141\164\150\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"Crypto.Math.Numbers", modulecode_Crypto$Math$Numbers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\115\141\164\150\134\116\165\155\142\145\162\163\56\160\171"
#endif
},
    {"Crypto.Math.Primality", modulecode_Crypto$Math$Primality, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\115\141\164\150\134\120\162\151\155\141\154\151\164\171\56\160\171"
#endif
},
    {"Crypto.Math._IntegerBase", modulecode_Crypto$Math$_IntegerBase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\115\141\164\150\134\137\111\156\164\145\147\145\162\102\141\163\145\56\160\171"
#endif
},
    {"Crypto.Math._IntegerCustom", modulecode_Crypto$Math$_IntegerCustom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\115\141\164\150\134\137\111\156\164\145\147\145\162\103\165\163\164\157\155\56\160\171"
#endif
},
    {"Crypto.Math._IntegerGMP", modulecode_Crypto$Math$_IntegerGMP, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\115\141\164\150\134\137\111\156\164\145\147\145\162\107\115\120\56\160\171"
#endif
},
    {"Crypto.Math._IntegerNative", modulecode_Crypto$Math$_IntegerNative, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\115\141\164\150\134\137\111\156\164\145\147\145\162\116\141\164\151\166\145\56\160\171"
#endif
},
    {"Crypto.Protocol", modulecode_Crypto$Protocol, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\120\162\157\164\157\143\157\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"Crypto.Protocol.KDF", modulecode_Crypto$Protocol$KDF, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\120\162\157\164\157\143\157\154\134\113\104\106\56\160\171"
#endif
},
    {"Crypto.PublicKey", modulecode_Crypto$PublicKey, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\120\165\142\154\151\143\113\145\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"Crypto.PublicKey.RSA", modulecode_Crypto$PublicKey$RSA, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\120\165\142\154\151\143\113\145\171\134\122\123\101\56\160\171"
#endif
},
    {"Crypto.PublicKey._openssh", modulecode_Crypto$PublicKey$_openssh, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\120\165\142\154\151\143\113\145\171\134\137\157\160\145\156\163\163\150\56\160\171"
#endif
},
    {"Crypto.Random", modulecode_Crypto$Random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\122\141\156\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"Crypto.Random.random", modulecode_Crypto$Random$random, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\122\141\156\144\157\155\134\162\141\156\144\157\155\56\160\171"
#endif
},
    {"Crypto.Util", modulecode_Crypto$Util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\125\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"Crypto.Util.Padding", modulecode_Crypto$Util$Padding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\125\164\151\154\134\120\141\144\144\151\156\147\56\160\171"
#endif
},
    {"Crypto.Util._cpu_features", modulecode_Crypto$Util$_cpu_features, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\125\164\151\154\134\137\143\160\165\137\146\145\141\164\165\162\145\163\56\160\171"
#endif
},
    {"Crypto.Util._file_system", modulecode_Crypto$Util$_file_system, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\125\164\151\154\134\137\146\151\154\145\137\163\171\163\164\145\155\56\160\171"
#endif
},
    {"Crypto.Util._raw_api", modulecode_Crypto$Util$_raw_api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\125\164\151\154\134\137\162\141\167\137\141\160\151\56\160\171"
#endif
},
    {"Crypto.Util.asn1", modulecode_Crypto$Util$asn1, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\125\164\151\154\134\141\163\156\61\56\160\171"
#endif
},
    {"Crypto.Util.number", modulecode_Crypto$Util$number, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\125\164\151\154\134\156\165\155\142\145\162\56\160\171"
#endif
},
    {"Crypto.Util.py3compat", modulecode_Crypto$Util$py3compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\125\164\151\154\134\160\171\63\143\157\155\160\141\164\56\160\171"
#endif
},
    {"Crypto.Util.strxor", modulecode_Crypto$Util$strxor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\103\162\171\160\164\157\134\125\164\151\154\134\163\164\162\170\157\162\56\160\171"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\150\162\142\165\163\164\157\152\56\160\171"
#endif
},
    {"bs4", modulecode_bs4, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"bs4.builder", modulecode_bs4$builder, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\142\165\151\154\144\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"bs4.builder._html5lib", modulecode_bs4$builder$_html5lib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\142\165\151\154\144\145\162\134\137\150\164\155\154\65\154\151\142\56\160\171"
#endif
},
    {"bs4.builder._htmlparser", modulecode_bs4$builder$_htmlparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\142\165\151\154\144\145\162\134\137\150\164\155\154\160\141\162\163\145\162\56\160\171"
#endif
},
    {"bs4.builder._lxml", modulecode_bs4$builder$_lxml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\142\165\151\154\144\145\162\134\137\154\170\155\154\56\160\171"
#endif
},
    {"bs4.css", modulecode_bs4$css, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\143\163\163\56\160\171"
#endif
},
    {"bs4.dammit", modulecode_bs4$dammit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\144\141\155\155\151\164\56\160\171"
#endif
},
    {"bs4.element", modulecode_bs4$element, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\145\154\145\155\145\156\164\56\160\171"
#endif
},
    {"bs4.formatter", modulecode_bs4$formatter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\142\163\64\134\146\157\162\155\141\164\164\145\162\56\160\171"
#endif
},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"certifi.core", modulecode_certifi$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\145\162\164\151\146\151\134\143\157\162\145\56\160\171"
#endif
},
    {"charset_normalizer", modulecode_charset_normalizer, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"charset_normalizer.api", modulecode_charset_normalizer$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\141\160\151\56\160\171"
#endif
},
    {"charset_normalizer.assets", modulecode_charset_normalizer$assets, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\141\163\163\145\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"charset_normalizer.cd", modulecode_charset_normalizer$cd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\143\144\56\160\171"
#endif
},
    {"charset_normalizer.constant", modulecode_charset_normalizer$constant, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\143\157\156\163\164\141\156\164\56\160\171"
#endif
},
    {"charset_normalizer.legacy", modulecode_charset_normalizer$legacy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\154\145\147\141\143\171\56\160\171"
#endif
},
    {"charset_normalizer.models", modulecode_charset_normalizer$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\155\157\144\145\154\163\56\160\171"
#endif
},
    {"charset_normalizer.utils", modulecode_charset_normalizer$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\165\164\151\154\163\56\160\171"
#endif
},
    {"charset_normalizer.version", modulecode_charset_normalizer$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\143\150\141\162\163\145\164\137\156\157\162\155\141\154\151\172\145\162\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"contest_page", modulecode_contest_page, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\143\157\156\164\145\163\164\137\160\141\147\145\56\160\171"
#endif
},
    {"contest_page_ranklist", modulecode_contest_page_ranklist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\143\157\156\164\145\163\164\137\160\141\147\145\137\162\141\156\153\154\151\163\164\56\160\171"
#endif
},
    {"contest_page_statistics", modulecode_contest_page_statistics, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\143\157\156\164\145\163\164\137\160\141\147\145\137\163\164\141\164\151\163\164\151\143\163\56\160\171"
#endif
},
    {"contest_page_status", modulecode_contest_page_status, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\143\157\156\164\145\163\164\137\160\141\147\145\137\163\164\141\164\165\163\56\160\171"
#endif
},
    {"contest_problem_info", modulecode_contest_problem_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\143\157\156\164\145\163\164\137\160\162\157\142\154\145\155\137\151\156\146\157\56\160\171"
#endif
},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\145\141\163\164\145\162\56\160\171"
#endif
},
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\160\141\162\163\145\162\134\151\163\157\160\141\162\163\145\162\56\160\171"
#endif
},
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\162\145\154\141\164\151\166\145\144\145\154\164\141\56\160\171"
#endif
},
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\162\162\165\154\145\56\160\171"
#endif
},
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\137\146\141\143\164\157\162\151\145\163\56\160\171"
#endif
},
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\164\172\56\160\171"
#endif
},
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\164\172\134\167\151\156\56\160\171"
#endif
},
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\144\141\164\145\165\164\151\154\134\172\157\156\145\151\156\146\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"fake_useragent", modulecode_fake_useragent, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\141\153\145\137\165\163\145\162\141\147\145\156\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"fake_useragent.data", modulecode_fake_useragent$data, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\141\153\145\137\165\163\145\162\141\147\145\156\164\134\144\141\164\141"
#endif
},
    {"fake_useragent.errors", modulecode_fake_useragent$errors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\141\153\145\137\165\163\145\162\141\147\145\156\164\134\145\162\162\157\162\163\56\160\171"
#endif
},
    {"fake_useragent.fake", modulecode_fake_useragent$fake, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\141\153\145\137\165\163\145\162\141\147\145\156\164\134\146\141\153\145\56\160\171"
#endif
},
    {"fake_useragent.log", modulecode_fake_useragent$log, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\141\153\145\137\165\163\145\162\141\147\145\156\164\134\154\157\147\56\160\171"
#endif
},
    {"fake_useragent.settings", modulecode_fake_useragent$settings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\141\153\145\137\165\163\145\162\141\147\145\156\164\134\163\145\164\164\151\156\147\163\56\160\171"
#endif
},
    {"fake_useragent.utils", modulecode_fake_useragent$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\146\141\153\145\137\165\163\145\162\141\147\145\156\164\134\165\164\151\154\163\56\160\171"
#endif
},
    {"global_var", modulecode_global_var, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\147\154\157\142\141\154\137\166\141\162\56\160\171"
#endif
},
    {"hrbustoj", modulecode_hrbustoj, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\150\162\142\165\163\164\157\152\56\160\171"
#endif
},
    {"idna", modulecode_idna, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"idna.core", modulecode_idna$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\143\157\162\145\56\160\171"
#endif
},
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\151\144\156\141\144\141\164\141\56\160\171"
#endif
},
    {"idna.intranges", modulecode_idna$intranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\151\156\164\162\141\156\147\145\163\56\160\171"
#endif
},
    {"idna.package_data", modulecode_idna$package_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\160\141\143\153\141\147\145\137\144\141\164\141\56\160\171"
#endif
},
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\151\144\156\141\134\165\164\163\64\66\144\141\164\141\56\160\171"
#endif
},
    {"lxml", modulecode_lxml, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"lxml.cssselect", modulecode_lxml$cssselect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\143\163\163\163\145\154\145\143\164\56\160\171"
#endif
},
    {"lxml.html", modulecode_lxml$html, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\150\164\155\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"lxml.html._setmixin", modulecode_lxml$html$_setmixin, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\150\164\155\154\134\137\163\145\164\155\151\170\151\156\56\160\171"
#endif
},
    {"lxml.html.defs", modulecode_lxml$html$defs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\154\170\155\154\134\150\164\155\154\134\144\145\146\163\56\160\171"
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\143\157\156\146\151\147\137\137\56\160\171"
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\144\151\163\164\162\151\142\165\164\157\162\137\151\156\151\164\56\160\171"
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\160\171\164\145\163\164\164\145\163\164\145\162\56\160\171"
#endif
},
    {"numpy._typing", modulecode_numpy$_typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy._typing._array_like", modulecode_numpy$_typing$_array_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\141\162\162\141\171\137\154\151\153\145\56\160\171"
#endif
},
    {"numpy._typing._char_codes", modulecode_numpy$_typing$_char_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\143\150\141\162\137\143\157\144\145\163\56\160\171"
#endif
},
    {"numpy._typing._dtype_like", modulecode_numpy$_typing$_dtype_like, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\144\164\171\160\145\137\154\151\153\145\56\160\171"
#endif
},
    {"numpy._typing._nbit", modulecode_numpy$_typing$_nbit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\156\142\151\164\56\160\171"
#endif
},
    {"numpy._typing._nested_sequence", modulecode_numpy$_typing$_nested_sequence, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\156\145\163\164\145\144\137\163\145\161\165\145\156\143\145\56\160\171"
#endif
},
    {"numpy._typing._scalars", modulecode_numpy$_typing$_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy._typing._shape", modulecode_numpy$_typing$_shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\164\171\160\151\156\147\134\137\163\150\141\160\145\56\160\171"
#endif
},
    {"numpy._utils", modulecode_numpy$_utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\165\164\151\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy._utils._inspect", modulecode_numpy$_utils$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\165\164\151\154\163\134\137\151\156\163\160\145\143\164\56\160\171"
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\160\171\63\153\56\160\171"
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\163\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\56\160\171"
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\137\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\151\156\164\145\162\156\141\154\56\160\171"
#endif
},
    {"numpy.core._machar", modulecode_numpy$core$_machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\141\143\150\141\162\56\160\171"
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\163\164\162\151\156\147\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\164\171\160\145\137\141\154\151\141\163\145\163\56\160\171"
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\165\146\165\156\143\137\143\157\156\146\151\147\56\160\171"
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\141\162\162\141\171\160\162\151\156\164\56\160\171"
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\144\145\146\143\150\141\162\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\145\151\156\163\165\155\146\165\156\143\56\160\171"
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\162\157\155\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\147\145\164\154\151\155\151\164\163\56\160\171"
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\145\155\155\141\160\56\160\171"
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\165\154\164\151\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\157\166\145\162\162\151\144\145\163\56\160\171"
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\165\155\141\164\150\56\160\171"
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\164\171\160\145\163\154\151\142\56\160\171"
#endif
},
    {"numpy.dtypes", modulecode_numpy$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\144\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.exceptions", modulecode_numpy$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\56\160\171"
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\150\145\154\160\145\162\56\160\171"
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\144\141\164\141\163\157\165\162\143\145\56\160\171"
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\151\157\164\157\157\154\163\56\160\171"
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\160\141\144\56\160\171"
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\163\145\164\157\160\163\56\160\171"
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\164\145\162\141\164\157\162\56\160\171"
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\150\151\163\164\157\147\162\141\155\163\56\160\171"
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\151\156\144\145\170\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\141\156\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\160\171\151\157\56\160\171"
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\143\151\155\141\164\150\56\160\171"
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\164\162\151\144\145\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\167\157\144\151\155\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\171\160\145\137\143\150\145\143\153\56\160\171"
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\146\165\156\143\154\151\153\145\56\160\171"
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\154\151\156\141\154\147\56\160\171"
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\143\157\162\145\56\160\171"
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\145\170\164\162\141\163\56\160\171"
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\155\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\144\145\146\155\141\164\162\151\170\56\160\171"
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\160\157\154\171\142\141\163\145\56\160\171"
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\143\150\145\142\171\163\150\145\166\56\160\171"
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\56\160\171"
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\137\145\56\160\171"
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\141\147\165\145\162\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\145\147\145\156\144\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\160\151\143\153\154\145\56\160\171"
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pandas", modulecode_pandas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._config", modulecode_pandas$_config, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._config.config", modulecode_pandas$_config$config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\143\157\156\146\151\147\56\160\171"
#endif
},
    {"pandas._config.dates", modulecode_pandas$_config$dates, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\144\141\164\145\163\56\160\171"
#endif
},
    {"pandas._config.display", modulecode_pandas$_config$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\143\157\156\146\151\147\134\144\151\163\160\154\141\171\56\160\171"
#endif
},
    {"pandas._libs", modulecode_pandas$_libs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\154\151\142\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._libs.tslibs", modulecode_pandas$_libs$tslibs, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\154\151\142\163\134\164\163\154\151\142\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._libs.window", modulecode_pandas$_libs$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\154\151\142\163\134\167\151\156\144\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas._typing", modulecode_pandas$_typing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\164\171\160\151\156\147\56\160\171"
#endif
},
    {"pandas._version", modulecode_pandas$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pandas._version_meson", modulecode_pandas$_version_meson, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\137\166\145\162\163\151\157\156\137\155\145\163\157\156\56\160\171"
#endif
},
    {"pandas.api", modulecode_pandas$api, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.extensions", modulecode_pandas$api$extensions, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\145\170\164\145\156\163\151\157\156\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.indexers", modulecode_pandas$api$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\151\156\144\145\170\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.interchange", modulecode_pandas$api$interchange, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\151\156\164\145\162\143\150\141\156\147\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.types", modulecode_pandas$api$types, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.api.typing", modulecode_pandas$api$typing, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\160\151\134\164\171\160\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.arrays", modulecode_pandas$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\141\162\162\141\171\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.compat", modulecode_pandas$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.compat._constants", modulecode_pandas$compat$_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"pandas.compat._optional", modulecode_pandas$compat$_optional, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\137\157\160\164\151\157\156\141\154\56\160\171"
#endif
},
    {"pandas.compat.compressors", modulecode_pandas$compat$compressors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\143\157\155\160\162\145\163\163\157\162\163\56\160\171"
#endif
},
    {"pandas.compat.numpy", modulecode_pandas$compat$numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.compat.numpy.function", modulecode_pandas$compat$numpy$function, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\156\165\155\160\171\134\146\165\156\143\164\151\157\156\56\160\171"
#endif
},
    {"pandas.compat.pickle_compat", modulecode_pandas$compat$pickle_compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\160\151\143\153\154\145\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pandas.compat.pyarrow", modulecode_pandas$compat$pyarrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\155\160\141\164\134\160\171\141\162\162\157\167\56\160\171"
#endif
},
    {"pandas.core", modulecode_pandas$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core._numba", modulecode_pandas$core$_numba, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core._numba.executor", modulecode_pandas$core$_numba$executor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\137\156\165\155\142\141\134\145\170\145\143\165\164\157\162\56\160\171"
#endif
},
    {"pandas.core.accessor", modulecode_pandas$core$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\143\143\145\163\163\157\162\56\160\171"
#endif
},
    {"pandas.core.algorithms", modulecode_pandas$core$algorithms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\154\147\157\162\151\164\150\155\163\56\160\171"
#endif
},
    {"pandas.core.api", modulecode_pandas$core$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.apply", modulecode_pandas$core$apply, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\160\160\154\171\56\160\171"
#endif
},
    {"pandas.core.array_algos", modulecode_pandas$core$array_algos, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.array_algos.datetimelike_accumulations", modulecode_pandas$core$array_algos$datetimelike_accumulations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\144\141\164\145\164\151\155\145\154\151\153\145\137\141\143\143\165\155\165\154\141\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.array_algos.masked_accumulations", modulecode_pandas$core$array_algos$masked_accumulations, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\155\141\163\153\145\144\137\141\143\143\165\155\165\154\141\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.array_algos.masked_reductions", modulecode_pandas$core$array_algos$masked_reductions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\155\141\163\153\145\144\137\162\145\144\165\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.array_algos.putmask", modulecode_pandas$core$array_algos$putmask, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\160\165\164\155\141\163\153\56\160\171"
#endif
},
    {"pandas.core.array_algos.quantile", modulecode_pandas$core$array_algos$quantile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\161\165\141\156\164\151\154\145\56\160\171"
#endif
},
    {"pandas.core.array_algos.replace", modulecode_pandas$core$array_algos$replace, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\162\145\160\154\141\143\145\56\160\171"
#endif
},
    {"pandas.core.array_algos.take", modulecode_pandas$core$array_algos$take, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\164\141\153\145\56\160\171"
#endif
},
    {"pandas.core.array_algos.transforms", modulecode_pandas$core$array_algos$transforms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\137\141\154\147\157\163\134\164\162\141\156\163\146\157\162\155\163\56\160\171"
#endif
},
    {"pandas.core.arraylike", modulecode_pandas$core$arraylike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\154\151\153\145\56\160\171"
#endif
},
    {"pandas.core.arrays", modulecode_pandas$core$arrays, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.arrays._arrow_string_mixins", modulecode_pandas$core$arrays$_arrow_string_mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\141\162\162\157\167\137\163\164\162\151\156\147\137\155\151\170\151\156\163\56\160\171"
#endif
},
    {"pandas.core.arrays._mixins", modulecode_pandas$core$arrays$_mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\155\151\170\151\156\163\56\160\171"
#endif
},
    {"pandas.core.arrays._ranges", modulecode_pandas$core$arrays$_ranges, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\137\162\141\156\147\145\163\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow", modulecode_pandas$core$arrays$arrow, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow._arrow_utils", modulecode_pandas$core$arrays$arrow$_arrow_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\137\141\162\162\157\167\137\165\164\151\154\163\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow.array", modulecode_pandas$core$arrays$arrow$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\141\162\162\141\171\56\160\171"
#endif
},
    {"pandas.core.arrays.arrow.extension_types", modulecode_pandas$core$arrays$arrow$extension_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\141\162\162\157\167\134\145\170\164\145\156\163\151\157\156\137\164\171\160\145\163\56\160\171"
#endif
},
    {"pandas.core.arrays.base", modulecode_pandas$core$arrays$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.arrays.boolean", modulecode_pandas$core$arrays$boolean, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\142\157\157\154\145\141\156\56\160\171"
#endif
},
    {"pandas.core.arrays.categorical", modulecode_pandas$core$arrays$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\143\141\164\145\147\157\162\151\143\141\154\56\160\171"
#endif
},
    {"pandas.core.arrays.datetimelike", modulecode_pandas$core$arrays$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\144\141\164\145\164\151\155\145\154\151\153\145\56\160\171"
#endif
},
    {"pandas.core.arrays.datetimes", modulecode_pandas$core$arrays$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\144\141\164\145\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.arrays.floating", modulecode_pandas$core$arrays$floating, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\146\154\157\141\164\151\156\147\56\160\171"
#endif
},
    {"pandas.core.arrays.integer", modulecode_pandas$core$arrays$integer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\151\156\164\145\147\145\162\56\160\171"
#endif
},
    {"pandas.core.arrays.interval", modulecode_pandas$core$arrays$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\151\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"pandas.core.arrays.masked", modulecode_pandas$core$arrays$masked, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\155\141\163\153\145\144\56\160\171"
#endif
},
    {"pandas.core.arrays.numeric", modulecode_pandas$core$arrays$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.arrays.numpy_", modulecode_pandas$core$arrays$numpy_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\156\165\155\160\171\137\56\160\171"
#endif
},
    {"pandas.core.arrays.period", modulecode_pandas$core$arrays$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\160\145\162\151\157\144\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse", modulecode_pandas$core$arrays$sparse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.accessor", modulecode_pandas$core$arrays$sparse$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\141\143\143\145\163\163\157\162\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.array", modulecode_pandas$core$arrays$sparse$array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\141\162\162\141\171\56\160\171"
#endif
},
    {"pandas.core.arrays.sparse.scipy_sparse", modulecode_pandas$core$arrays$sparse$scipy_sparse, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\160\141\162\163\145\134\163\143\151\160\171\137\163\160\141\162\163\145\56\160\171"
#endif
},
    {"pandas.core.arrays.string_", modulecode_pandas$core$arrays$string_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\164\162\151\156\147\137\56\160\171"
#endif
},
    {"pandas.core.arrays.string_arrow", modulecode_pandas$core$arrays$string_arrow, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\163\164\162\151\156\147\137\141\162\162\157\167\56\160\171"
#endif
},
    {"pandas.core.arrays.timedeltas", modulecode_pandas$core$arrays$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\141\162\162\141\171\163\134\164\151\155\145\144\145\154\164\141\163\56\160\171"
#endif
},
    {"pandas.core.base", modulecode_pandas$core$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.common", modulecode_pandas$core$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.computation", modulecode_pandas$core$computation, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.computation.align", modulecode_pandas$core$computation$align, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\141\154\151\147\156\56\160\171"
#endif
},
    {"pandas.core.computation.api", modulecode_pandas$core$computation$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.computation.check", modulecode_pandas$core$computation$check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\143\150\145\143\153\56\160\171"
#endif
},
    {"pandas.core.computation.common", modulecode_pandas$core$computation$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.computation.engines", modulecode_pandas$core$computation$engines, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\156\147\151\156\145\163\56\160\171"
#endif
},
    {"pandas.core.computation.eval", modulecode_pandas$core$computation$eval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\166\141\154\56\160\171"
#endif
},
    {"pandas.core.computation.expr", modulecode_pandas$core$computation$expr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\170\160\162\56\160\171"
#endif
},
    {"pandas.core.computation.expressions", modulecode_pandas$core$computation$expressions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\145\170\160\162\145\163\163\151\157\156\163\56\160\171"
#endif
},
    {"pandas.core.computation.ops", modulecode_pandas$core$computation$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\157\160\163\56\160\171"
#endif
},
    {"pandas.core.computation.parsing", modulecode_pandas$core$computation$parsing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\160\141\162\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.computation.pytables", modulecode_pandas$core$computation$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\160\171\164\141\142\154\145\163\56\160\171"
#endif
},
    {"pandas.core.computation.scope", modulecode_pandas$core$computation$scope, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\155\160\165\164\141\164\151\157\156\134\163\143\157\160\145\56\160\171"
#endif
},
    {"pandas.core.config_init", modulecode_pandas$core$config_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\156\146\151\147\137\151\156\151\164\56\160\171"
#endif
},
    {"pandas.core.construction", modulecode_pandas$core$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\143\157\156\163\164\162\165\143\164\151\157\156\56\160\171"
#endif
},
    {"pandas.core.dtypes", modulecode_pandas$core$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.dtypes.api", modulecode_pandas$core$dtypes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.dtypes.astype", modulecode_pandas$core$dtypes$astype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\141\163\164\171\160\145\56\160\171"
#endif
},
    {"pandas.core.dtypes.base", modulecode_pandas$core$dtypes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.dtypes.cast", modulecode_pandas$core$dtypes$cast, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\143\141\163\164\56\160\171"
#endif
},
    {"pandas.core.dtypes.common", modulecode_pandas$core$dtypes$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.dtypes.concat", modulecode_pandas$core$dtypes$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\143\157\156\143\141\164\56\160\171"
#endif
},
    {"pandas.core.dtypes.dtypes", modulecode_pandas$core$dtypes$dtypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\144\164\171\160\145\163\56\160\171"
#endif
},
    {"pandas.core.dtypes.generic", modulecode_pandas$core$dtypes$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\147\145\156\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.dtypes.inference", modulecode_pandas$core$dtypes$inference, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\151\156\146\145\162\145\156\143\145\56\160\171"
#endif
},
    {"pandas.core.dtypes.missing", modulecode_pandas$core$dtypes$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\144\164\171\160\145\163\134\155\151\163\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.flags", modulecode_pandas$core$flags, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\146\154\141\147\163\56\160\171"
#endif
},
    {"pandas.core.frame", modulecode_pandas$core$frame, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\146\162\141\155\145\56\160\171"
#endif
},
    {"pandas.core.generic", modulecode_pandas$core$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\145\156\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.groupby", modulecode_pandas$core$groupby, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.groupby.base", modulecode_pandas$core$groupby$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.groupby.categorical", modulecode_pandas$core$groupby$categorical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\143\141\164\145\147\157\162\151\143\141\154\56\160\171"
#endif
},
    {"pandas.core.groupby.generic", modulecode_pandas$core$groupby$generic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\147\145\156\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.groupby.groupby", modulecode_pandas$core$groupby$groupby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\147\162\157\165\160\142\171\56\160\171"
#endif
},
    {"pandas.core.groupby.grouper", modulecode_pandas$core$groupby$grouper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\147\162\157\165\160\145\162\56\160\171"
#endif
},
    {"pandas.core.groupby.indexing", modulecode_pandas$core$groupby$indexing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\151\156\144\145\170\151\156\147\56\160\171"
#endif
},
    {"pandas.core.groupby.numba_", modulecode_pandas$core$groupby$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\156\165\155\142\141\137\56\160\171"
#endif
},
    {"pandas.core.groupby.ops", modulecode_pandas$core$groupby$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\147\162\157\165\160\142\171\134\157\160\163\56\160\171"
#endif
},
    {"pandas.core.indexers", modulecode_pandas$core$indexers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.indexers.objects", modulecode_pandas$core$indexers$objects, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\162\163\134\157\142\152\145\143\164\163\56\160\171"
#endif
},
    {"pandas.core.indexers.utils", modulecode_pandas$core$indexers$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\162\163\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pandas.core.indexes", modulecode_pandas$core$indexes, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.indexes.accessors", modulecode_pandas$core$indexes$accessors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\141\143\143\145\163\163\157\162\163\56\160\171"
#endif
},
    {"pandas.core.indexes.api", modulecode_pandas$core$indexes$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.indexes.base", modulecode_pandas$core$indexes$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.indexes.category", modulecode_pandas$core$indexes$category, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\143\141\164\145\147\157\162\171\56\160\171"
#endif
},
    {"pandas.core.indexes.datetimelike", modulecode_pandas$core$indexes$datetimelike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\144\141\164\145\164\151\155\145\154\151\153\145\56\160\171"
#endif
},
    {"pandas.core.indexes.datetimes", modulecode_pandas$core$indexes$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\144\141\164\145\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.indexes.extension", modulecode_pandas$core$indexes$extension, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\145\170\164\145\156\163\151\157\156\56\160\171"
#endif
},
    {"pandas.core.indexes.frozen", modulecode_pandas$core$indexes$frozen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\146\162\157\172\145\156\56\160\171"
#endif
},
    {"pandas.core.indexes.interval", modulecode_pandas$core$indexes$interval, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\151\156\164\145\162\166\141\154\56\160\171"
#endif
},
    {"pandas.core.indexes.multi", modulecode_pandas$core$indexes$multi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\155\165\154\164\151\56\160\171"
#endif
},
    {"pandas.core.indexes.period", modulecode_pandas$core$indexes$period, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\160\145\162\151\157\144\56\160\171"
#endif
},
    {"pandas.core.indexes.range", modulecode_pandas$core$indexes$range, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\162\141\156\147\145\56\160\171"
#endif
},
    {"pandas.core.indexes.timedeltas", modulecode_pandas$core$indexes$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\145\163\134\164\151\155\145\144\145\154\164\141\163\56\160\171"
#endif
},
    {"pandas.core.indexing", modulecode_pandas$core$indexing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\144\145\170\151\156\147\56\160\171"
#endif
},
    {"pandas.core.interchange", modulecode_pandas$core$interchange, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.interchange.buffer", modulecode_pandas$core$interchange$buffer, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\142\165\146\146\145\162\56\160\171"
#endif
},
    {"pandas.core.interchange.column", modulecode_pandas$core$interchange$column, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\143\157\154\165\155\156\56\160\171"
#endif
},
    {"pandas.core.interchange.dataframe", modulecode_pandas$core$interchange$dataframe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\144\141\164\141\146\162\141\155\145\56\160\171"
#endif
},
    {"pandas.core.interchange.dataframe_protocol", modulecode_pandas$core$interchange$dataframe_protocol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\144\141\164\141\146\162\141\155\145\137\160\162\157\164\157\143\157\154\56\160\171"
#endif
},
    {"pandas.core.interchange.from_dataframe", modulecode_pandas$core$interchange$from_dataframe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\146\162\157\155\137\144\141\164\141\146\162\141\155\145\56\160\171"
#endif
},
    {"pandas.core.interchange.utils", modulecode_pandas$core$interchange$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\143\150\141\156\147\145\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pandas.core.internals", modulecode_pandas$core$internals, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.internals.api", modulecode_pandas$core$internals$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.internals.array_manager", modulecode_pandas$core$internals$array_manager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\141\162\162\141\171\137\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"pandas.core.internals.base", modulecode_pandas$core$internals$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.internals.blocks", modulecode_pandas$core$internals$blocks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\142\154\157\143\153\163\56\160\171"
#endif
},
    {"pandas.core.internals.concat", modulecode_pandas$core$internals$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\143\157\156\143\141\164\56\160\171"
#endif
},
    {"pandas.core.internals.construction", modulecode_pandas$core$internals$construction, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\143\157\156\163\164\162\165\143\164\151\157\156\56\160\171"
#endif
},
    {"pandas.core.internals.managers", modulecode_pandas$core$internals$managers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\155\141\156\141\147\145\162\163\56\160\171"
#endif
},
    {"pandas.core.internals.ops", modulecode_pandas$core$internals$ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\151\156\164\145\162\156\141\154\163\134\157\160\163\56\160\171"
#endif
},
    {"pandas.core.methods", modulecode_pandas$core$methods, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.methods.describe", modulecode_pandas$core$methods$describe, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\144\145\163\143\162\151\142\145\56\160\171"
#endif
},
    {"pandas.core.methods.selectn", modulecode_pandas$core$methods$selectn, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\163\145\154\145\143\164\156\56\160\171"
#endif
},
    {"pandas.core.methods.to_dict", modulecode_pandas$core$methods$to_dict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\145\164\150\157\144\163\134\164\157\137\144\151\143\164\56\160\171"
#endif
},
    {"pandas.core.missing", modulecode_pandas$core$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\155\151\163\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.nanops", modulecode_pandas$core$nanops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\156\141\156\157\160\163\56\160\171"
#endif
},
    {"pandas.core.ops", modulecode_pandas$core$ops, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.ops.array_ops", modulecode_pandas$core$ops$array_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\141\162\162\141\171\137\157\160\163\56\160\171"
#endif
},
    {"pandas.core.ops.common", modulecode_pandas$core$ops$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.ops.dispatch", modulecode_pandas$core$ops$dispatch, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\144\151\163\160\141\164\143\150\56\160\171"
#endif
},
    {"pandas.core.ops.docstrings", modulecode_pandas$core$ops$docstrings, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\144\157\143\163\164\162\151\156\147\163\56\160\171"
#endif
},
    {"pandas.core.ops.invalid", modulecode_pandas$core$ops$invalid, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\151\156\166\141\154\151\144\56\160\171"
#endif
},
    {"pandas.core.ops.mask_ops", modulecode_pandas$core$ops$mask_ops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\155\141\163\153\137\157\160\163\56\160\171"
#endif
},
    {"pandas.core.ops.missing", modulecode_pandas$core$ops$missing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\157\160\163\134\155\151\163\163\151\156\147\56\160\171"
#endif
},
    {"pandas.core.resample", modulecode_pandas$core$resample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\141\155\160\154\145\56\160\171"
#endif
},
    {"pandas.core.reshape", modulecode_pandas$core$reshape, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.reshape.api", modulecode_pandas$core$reshape$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\141\160\151\56\160\171"
#endif
},
    {"pandas.core.reshape.concat", modulecode_pandas$core$reshape$concat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\143\157\156\143\141\164\56\160\171"
#endif
},
    {"pandas.core.reshape.encoding", modulecode_pandas$core$reshape$encoding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\145\156\143\157\144\151\156\147\56\160\171"
#endif
},
    {"pandas.core.reshape.melt", modulecode_pandas$core$reshape$melt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\155\145\154\164\56\160\171"
#endif
},
    {"pandas.core.reshape.merge", modulecode_pandas$core$reshape$merge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\155\145\162\147\145\56\160\171"
#endif
},
    {"pandas.core.reshape.pivot", modulecode_pandas$core$reshape$pivot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\160\151\166\157\164\56\160\171"
#endif
},
    {"pandas.core.reshape.reshape", modulecode_pandas$core$reshape$reshape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\162\145\163\150\141\160\145\56\160\171"
#endif
},
    {"pandas.core.reshape.tile", modulecode_pandas$core$reshape$tile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\164\151\154\145\56\160\171"
#endif
},
    {"pandas.core.reshape.util", modulecode_pandas$core$reshape$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\145\163\150\141\160\145\134\165\164\151\154\56\160\171"
#endif
},
    {"pandas.core.roperator", modulecode_pandas$core$roperator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\162\157\160\145\162\141\164\157\162\56\160\171"
#endif
},
    {"pandas.core.sample", modulecode_pandas$core$sample, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\141\155\160\154\145\56\160\171"
#endif
},
    {"pandas.core.series", modulecode_pandas$core$series, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\145\162\151\145\163\56\160\171"
#endif
},
    {"pandas.core.shared_docs", modulecode_pandas$core$shared_docs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\150\141\162\145\144\137\144\157\143\163\56\160\171"
#endif
},
    {"pandas.core.sorting", modulecode_pandas$core$sorting, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\157\162\164\151\156\147\56\160\171"
#endif
},
    {"pandas.core.strings", modulecode_pandas$core$strings, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.strings.accessor", modulecode_pandas$core$strings$accessor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\141\143\143\145\163\163\157\162\56\160\171"
#endif
},
    {"pandas.core.strings.base", modulecode_pandas$core$strings$base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\142\141\163\145\56\160\171"
#endif
},
    {"pandas.core.strings.object_array", modulecode_pandas$core$strings$object_array, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\163\164\162\151\156\147\163\134\157\142\152\145\143\164\137\141\162\162\141\171\56\160\171"
#endif
},
    {"pandas.core.tools", modulecode_pandas$core$tools, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.tools.datetimes", modulecode_pandas$core$tools$datetimes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\144\141\164\145\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.tools.numeric", modulecode_pandas$core$tools$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"pandas.core.tools.timedeltas", modulecode_pandas$core$tools$timedeltas, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\164\151\155\145\144\145\154\164\141\163\56\160\171"
#endif
},
    {"pandas.core.tools.times", modulecode_pandas$core$tools$times, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\164\157\157\154\163\134\164\151\155\145\163\56\160\171"
#endif
},
    {"pandas.core.util", modulecode_pandas$core$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.util.hashing", modulecode_pandas$core$util$hashing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\165\164\151\154\134\150\141\163\150\151\156\147\56\160\171"
#endif
},
    {"pandas.core.util.numba_", modulecode_pandas$core$util$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\165\164\151\154\134\156\165\155\142\141\137\56\160\171"
#endif
},
    {"pandas.core.window", modulecode_pandas$core$window, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.core.window.common", modulecode_pandas$core$window$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.core.window.doc", modulecode_pandas$core$window$doc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\144\157\143\56\160\171"
#endif
},
    {"pandas.core.window.ewm", modulecode_pandas$core$window$ewm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\145\167\155\56\160\171"
#endif
},
    {"pandas.core.window.expanding", modulecode_pandas$core$window$expanding, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\145\170\160\141\156\144\151\156\147\56\160\171"
#endif
},
    {"pandas.core.window.numba_", modulecode_pandas$core$window$numba_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\156\165\155\142\141\137\56\160\171"
#endif
},
    {"pandas.core.window.online", modulecode_pandas$core$window$online, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\157\156\154\151\156\145\56\160\171"
#endif
},
    {"pandas.core.window.rolling", modulecode_pandas$core$window$rolling, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\143\157\162\145\134\167\151\156\144\157\167\134\162\157\154\154\151\156\147\56\160\171"
#endif
},
    {"pandas.errors", modulecode_pandas$errors, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\145\162\162\157\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io", modulecode_pandas$io, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io._util", modulecode_pandas$io$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\137\165\164\151\154\56\160\171"
#endif
},
    {"pandas.io.api", modulecode_pandas$io$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\141\160\151\56\160\171"
#endif
},
    {"pandas.io.clipboard", modulecode_pandas$io$clipboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\143\154\151\160\142\157\141\162\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.clipboards", modulecode_pandas$io$clipboards, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\143\154\151\160\142\157\141\162\144\163\56\160\171"
#endif
},
    {"pandas.io.common", modulecode_pandas$io$common, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pandas.io.excel", modulecode_pandas$io$excel, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.excel._base", modulecode_pandas$io$excel$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\142\141\163\145\56\160\171"
#endif
},
    {"pandas.io.excel._odfreader", modulecode_pandas$io$excel$_odfreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\157\144\146\162\145\141\144\145\162\56\160\171"
#endif
},
    {"pandas.io.excel._odswriter", modulecode_pandas$io$excel$_odswriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\157\144\163\167\162\151\164\145\162\56\160\171"
#endif
},
    {"pandas.io.excel._openpyxl", modulecode_pandas$io$excel$_openpyxl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\157\160\145\156\160\171\170\154\56\160\171"
#endif
},
    {"pandas.io.excel._pyxlsb", modulecode_pandas$io$excel$_pyxlsb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\160\171\170\154\163\142\56\160\171"
#endif
},
    {"pandas.io.excel._util", modulecode_pandas$io$excel$_util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\165\164\151\154\56\160\171"
#endif
},
    {"pandas.io.excel._xlrd", modulecode_pandas$io$excel$_xlrd, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\170\154\162\144\56\160\171"
#endif
},
    {"pandas.io.excel._xlsxwriter", modulecode_pandas$io$excel$_xlsxwriter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\145\170\143\145\154\134\137\170\154\163\170\167\162\151\164\145\162\56\160\171"
#endif
},
    {"pandas.io.feather_format", modulecode_pandas$io$feather_format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\145\141\164\150\145\162\137\146\157\162\155\141\164\56\160\171"
#endif
},
    {"pandas.io.formats", modulecode_pandas$io$formats, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.formats._color_data", modulecode_pandas$io$formats$_color_data, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\137\143\157\154\157\162\137\144\141\164\141\56\160\171"
#endif
},
    {"pandas.io.formats.console", modulecode_pandas$io$formats$console, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\143\157\156\163\157\154\145\56\160\171"
#endif
},
    {"pandas.io.formats.css", modulecode_pandas$io$formats$css, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\143\163\163\56\160\171"
#endif
},
    {"pandas.io.formats.csvs", modulecode_pandas$io$formats$csvs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\143\163\166\163\56\160\171"
#endif
},
    {"pandas.io.formats.excel", modulecode_pandas$io$formats$excel, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\145\170\143\145\154\56\160\171"
#endif
},
    {"pandas.io.formats.format", modulecode_pandas$io$formats$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"pandas.io.formats.html", modulecode_pandas$io$formats$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\150\164\155\154\56\160\171"
#endif
},
    {"pandas.io.formats.info", modulecode_pandas$io$formats$info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\151\156\146\157\56\160\171"
#endif
},
    {"pandas.io.formats.printing", modulecode_pandas$io$formats$printing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\160\162\151\156\164\151\156\147\56\160\171"
#endif
},
    {"pandas.io.formats.string", modulecode_pandas$io$formats$string, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\163\164\162\151\156\147\56\160\171"
#endif
},
    {"pandas.io.formats.style", modulecode_pandas$io$formats$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\163\164\171\154\145\56\160\171"
#endif
},
    {"pandas.io.formats.style_render", modulecode_pandas$io$formats$style_render, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\163\164\171\154\145\137\162\145\156\144\145\162\56\160\171"
#endif
},
    {"pandas.io.formats.xml", modulecode_pandas$io$formats$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\146\157\162\155\141\164\163\134\170\155\154\56\160\171"
#endif
},
    {"pandas.io.gbq", modulecode_pandas$io$gbq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\147\142\161\56\160\171"
#endif
},
    {"pandas.io.html", modulecode_pandas$io$html, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\150\164\155\154\56\160\171"
#endif
},
    {"pandas.io.json", modulecode_pandas$io$json, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.json._json", modulecode_pandas$io$json$_json, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\152\163\157\156\56\160\171"
#endif
},
    {"pandas.io.json._normalize", modulecode_pandas$io$json$_normalize, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\156\157\162\155\141\154\151\172\145\56\160\171"
#endif
},
    {"pandas.io.json._table_schema", modulecode_pandas$io$json$_table_schema, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\152\163\157\156\134\137\164\141\142\154\145\137\163\143\150\145\155\141\56\160\171"
#endif
},
    {"pandas.io.orc", modulecode_pandas$io$orc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\157\162\143\56\160\171"
#endif
},
    {"pandas.io.parquet", modulecode_pandas$io$parquet, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\161\165\145\164\56\160\171"
#endif
},
    {"pandas.io.parsers", modulecode_pandas$io$parsers, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.parsers.arrow_parser_wrapper", modulecode_pandas$io$parsers$arrow_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\141\162\162\157\167\137\160\141\162\163\145\162\137\167\162\141\160\160\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.base_parser", modulecode_pandas$io$parsers$base_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\142\141\163\145\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.c_parser_wrapper", modulecode_pandas$io$parsers$c_parser_wrapper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\143\137\160\141\162\163\145\162\137\167\162\141\160\160\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.python_parser", modulecode_pandas$io$parsers$python_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\160\171\164\150\157\156\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"pandas.io.parsers.readers", modulecode_pandas$io$parsers$readers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\141\162\163\145\162\163\134\162\145\141\144\145\162\163\56\160\171"
#endif
},
    {"pandas.io.pickle", modulecode_pandas$io$pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\151\143\153\154\145\56\160\171"
#endif
},
    {"pandas.io.pytables", modulecode_pandas$io$pytables, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\160\171\164\141\142\154\145\163\56\160\171"
#endif
},
    {"pandas.io.sas", modulecode_pandas$io$sas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.io.sas.sas7bdat", modulecode_pandas$io$sas$sas7bdat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\67\142\144\141\164\56\160\171"
#endif
},
    {"pandas.io.sas.sas_constants", modulecode_pandas$io$sas$sas_constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\137\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"pandas.io.sas.sas_xport", modulecode_pandas$io$sas$sas_xport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\137\170\160\157\162\164\56\160\171"
#endif
},
    {"pandas.io.sas.sasreader", modulecode_pandas$io$sas$sasreader, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\141\163\134\163\141\163\162\145\141\144\145\162\56\160\171"
#endif
},
    {"pandas.io.spss", modulecode_pandas$io$spss, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\160\163\163\56\160\171"
#endif
},
    {"pandas.io.sql", modulecode_pandas$io$sql, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\161\154\56\160\171"
#endif
},
    {"pandas.io.stata", modulecode_pandas$io$stata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\163\164\141\164\141\56\160\171"
#endif
},
    {"pandas.io.xml", modulecode_pandas$io$xml, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\151\157\134\170\155\154\56\160\171"
#endif
},
    {"pandas.plotting", modulecode_pandas$plotting, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.plotting._core", modulecode_pandas$plotting$_core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\143\157\162\145\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib", modulecode_pandas$plotting$_matplotlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.boxplot", modulecode_pandas$plotting$_matplotlib$boxplot, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\142\157\170\160\154\157\164\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.converter", modulecode_pandas$plotting$_matplotlib$converter, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\143\157\156\166\145\162\164\145\162\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.core", modulecode_pandas$plotting$_matplotlib$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\143\157\162\145\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.groupby", modulecode_pandas$plotting$_matplotlib$groupby, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\147\162\157\165\160\142\171\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.hist", modulecode_pandas$plotting$_matplotlib$hist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\150\151\163\164\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.misc", modulecode_pandas$plotting$_matplotlib$misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\155\151\163\143\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.style", modulecode_pandas$plotting$_matplotlib$style, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\163\164\171\154\145\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.timeseries", modulecode_pandas$plotting$_matplotlib$timeseries, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\164\151\155\145\163\145\162\151\145\163\56\160\171"
#endif
},
    {"pandas.plotting._matplotlib.tools", modulecode_pandas$plotting$_matplotlib$tools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\141\164\160\154\157\164\154\151\142\134\164\157\157\154\163\56\160\171"
#endif
},
    {"pandas.plotting._misc", modulecode_pandas$plotting$_misc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\160\154\157\164\164\151\156\147\134\137\155\151\163\143\56\160\171"
#endif
},
    {"pandas.tseries", modulecode_pandas$tseries, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.tseries.api", modulecode_pandas$tseries$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\141\160\151\56\160\171"
#endif
},
    {"pandas.tseries.frequencies", modulecode_pandas$tseries$frequencies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\146\162\145\161\165\145\156\143\151\145\163\56\160\171"
#endif
},
    {"pandas.tseries.offsets", modulecode_pandas$tseries$offsets, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\164\163\145\162\151\145\163\134\157\146\146\163\145\164\163\56\160\171"
#endif
},
    {"pandas.util", modulecode_pandas$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pandas.util._decorators", modulecode_pandas$util$_decorators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\144\145\143\157\162\141\164\157\162\163\56\160\171"
#endif
},
    {"pandas.util._exceptions", modulecode_pandas$util$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pandas.util._print_versions", modulecode_pandas$util$_print_versions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\160\162\151\156\164\137\166\145\162\163\151\157\156\163\56\160\171"
#endif
},
    {"pandas.util._validators", modulecode_pandas$util$_validators, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\137\166\141\154\151\144\141\164\157\162\163\56\160\171"
#endif
},
    {"pandas.util.version", modulecode_pandas$util$version, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\141\156\144\141\163\134\165\164\151\154\134\166\145\162\163\151\157\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources-postLoad", modulecode_pkg_resources$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\55\160\157\163\164\114\157\141\144\56\160\171"
#endif
},
    {"problemlist", modulecode_problemlist, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\160\162\157\142\154\145\155\154\151\163\164\56\160\171"
#endif
},
    {"problemlist_problem_info", modulecode_problemlist_problem_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\160\162\157\142\154\145\155\154\151\163\164\137\160\162\157\142\154\145\155\137\151\156\146\157\56\160\171"
#endif
},
    {"problemlist_status", modulecode_problemlist_status, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\160\162\157\142\154\145\155\154\151\163\164\137\163\164\141\164\165\163\56\160\171"
#endif
},
    {"pytz", modulecode_pytz, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pytz.exceptions", modulecode_pytz$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pytz.lazy", modulecode_pytz$lazy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\154\141\172\171\56\160\171"
#endif
},
    {"pytz.tzfile", modulecode_pytz$tzfile, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\164\172\146\151\154\145\56\160\171"
#endif
},
    {"pytz.tzinfo", modulecode_pytz$tzinfo, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\164\172\134\164\172\151\156\146\157\56\160\171"
#endif
},
    {"requests", modulecode_requests, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\137\137\166\145\162\163\151\157\156\137\137\56\160\171"
#endif
},
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\137\151\156\164\145\162\156\141\154\137\165\164\151\154\163\56\160\171"
#endif
},
    {"requests.adapters", modulecode_requests$adapters, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\141\144\141\160\164\145\162\163\56\160\171"
#endif
},
    {"requests.api", modulecode_requests$api, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\141\160\151\56\160\171"
#endif
},
    {"requests.auth", modulecode_requests$auth, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\141\165\164\150\56\160\171"
#endif
},
    {"requests.certs", modulecode_requests$certs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\143\145\162\164\163\56\160\171"
#endif
},
    {"requests.compat", modulecode_requests$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\143\157\155\160\141\164\56\160\171"
#endif
},
    {"requests.cookies", modulecode_requests$cookies, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\143\157\157\153\151\145\163\56\160\171"
#endif
},
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"requests.hooks", modulecode_requests$hooks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\150\157\157\153\163\56\160\171"
#endif
},
    {"requests.models", modulecode_requests$models, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\155\157\144\145\154\163\56\160\171"
#endif
},
    {"requests.packages", modulecode_requests$packages, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\160\141\143\153\141\147\145\163\56\160\171"
#endif
},
    {"requests.sessions", modulecode_requests$sessions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\163\145\163\163\151\157\156\163\56\160\171"
#endif
},
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\163\164\141\164\165\163\137\143\157\144\145\163\56\160\171"
#endif
},
    {"requests.structures", modulecode_requests$structures, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"requests.utils", modulecode_requests$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\162\145\161\165\145\163\164\163\134\165\164\151\154\163\56\160\171"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\151\170\56\160\171"
#endif
},
    {"soupsieve", modulecode_soupsieve, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"soupsieve.__meta__", modulecode_soupsieve$__meta__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\137\137\155\145\164\141\137\137\56\160\171"
#endif
},
    {"soupsieve.css_match", modulecode_soupsieve$css_match, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\143\163\163\137\155\141\164\143\150\56\160\171"
#endif
},
    {"soupsieve.css_parser", modulecode_soupsieve$css_parser, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\143\163\163\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"soupsieve.css_types", modulecode_soupsieve$css_types, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\143\163\163\137\164\171\160\145\163\56\160\171"
#endif
},
    {"soupsieve.pretty", modulecode_soupsieve$pretty, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\160\162\145\164\164\171\56\160\171"
#endif
},
    {"soupsieve.util", modulecode_soupsieve$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\163\157\165\160\163\151\145\166\145\134\165\164\151\154\56\160\171"
#endif
},
    {"submit", modulecode_submit, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\104\72\134\160\162\145\143\145\144\165\162\145\50\160\171\164\150\157\156\51\134\150\162\142\165\163\164\157\152\134\163\165\142\155\151\164\56\160\171"
#endif
},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"urllib3._base_connection", modulecode_urllib3$_base_connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\142\141\163\145\137\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\143\157\154\154\145\143\164\151\157\156\163\56\160\171"
#endif
},
    {"urllib3._request_methods", modulecode_urllib3$_request_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\162\145\161\165\145\163\164\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"urllib3._version", modulecode_urllib3$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\156\145\143\164\151\157\156\160\157\157\154\56\160\171"
#endif
},
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\164\162\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\164\162\151\142\134\160\171\157\160\145\156\163\163\154\56\160\171"
#endif
},
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\143\157\156\164\162\151\142\134\163\157\143\153\163\56\160\171"
#endif
},
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\146\151\145\154\144\163\56\160\171"
#endif
},
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\146\151\154\145\160\157\163\164\56\160\171"
#endif
},
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\160\157\157\154\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"urllib3.response", modulecode_urllib3$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\162\145\163\160\157\156\163\145\56\160\171"
#endif
},
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\143\157\156\156\145\143\164\151\157\156\56\160\171"
#endif
},
    {"urllib3.util.proxy", modulecode_urllib3$util$proxy, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\160\162\157\170\171\56\160\171"
#endif
},
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\162\145\161\165\145\163\164\56\160\171"
#endif
},
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\162\145\163\160\157\156\163\145\56\160\171"
#endif
},
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\162\145\164\162\171\56\160\171"
#endif
},
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\163\163\154\137\56\160\171"
#endif
},
    {"urllib3.util.ssl_match_hostname", modulecode_urllib3$util$ssl_match_hostname, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\163\163\154\137\155\141\164\143\150\137\150\157\163\164\156\141\155\145\56\160\171"
#endif
},
    {"urllib3.util.ssltransport", modulecode_urllib3$util$ssltransport, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\163\163\154\164\162\141\156\163\160\157\162\164\56\160\171"
#endif
},
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\164\151\155\145\157\165\164\56\160\171"
#endif
},
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\165\162\154\56\160\171"
#endif
},
    {"urllib3.util.util", modulecode_urllib3$util$util, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\165\164\151\154\56\160\171"
#endif
},
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\165\162\154\154\151\142\63\134\165\164\151\154\134\167\141\151\164\56\160\171"
#endif
},
    {"zstandard", modulecode_zstandard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\172\163\164\141\156\144\141\162\144\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"zstandard.backend_cffi", modulecode_zstandard$backend_cffi, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\172\163\164\141\156\144\141\162\144\134\142\141\143\153\145\156\144\137\143\146\146\151\56\160\171"
#endif
},
    {"numpy.testing", NULL, 0, 3930, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\164\145\163\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources", NULL, 1, 159316, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor", NULL, 2, 158, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.appdirs", NULL, 3, 29368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\141\160\160\144\151\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources", NULL, 4, 792, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._adapters", NULL, 5, 10709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\141\144\141\160\164\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._common", NULL, 6, 4236, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._compat", NULL, 7, 5521, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._itertools", NULL, 8, 1354, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\151\164\145\162\164\157\157\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources._legacy", NULL, 9, 6452, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\137\154\145\147\141\143\171\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources.abc", NULL, 10, 7453, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\141\142\143\56\160\171"
#endif
},
    {"pkg_resources._vendor.importlib_resources.readers", NULL, 11, 8327, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\151\155\160\157\162\164\154\151\142\137\162\145\163\157\165\162\143\145\163\134\162\145\141\144\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco", NULL, 12, 165, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.context", NULL, 13, 9388, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\143\157\156\164\145\170\164\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.functools", NULL, 14, 20251, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\146\165\156\143\164\157\157\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.jaraco.text", NULL, 15, 26568, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\152\141\162\141\143\157\134\164\145\170\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools", NULL, 16, 259, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools.more", NULL, 17, 167920, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\155\157\162\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.more_itertools.recipes", NULL, 18, 26911, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\155\157\162\145\137\151\164\145\162\164\157\157\154\163\134\162\145\143\151\160\145\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging", NULL, 19, 530, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.__about__", NULL, 20, 609, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\141\142\157\165\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._manylinux", NULL, 21, 13196, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\155\141\156\171\154\151\156\165\170\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._musllinux", NULL, 22, 7964, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\155\165\163\154\154\151\156\165\170\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._structures", NULL, 23, 3652, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.markers", NULL, 24, 16501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\155\141\162\153\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.requirements", NULL, 25, 7616, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\162\145\161\165\151\162\145\155\145\156\164\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 26, 34330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\163\160\145\143\151\146\151\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.tags", NULL, 27, 21315, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\164\141\147\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.utils", NULL, 28, 6650, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\165\164\151\154\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.version", NULL, 29, 21842, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing", NULL, 30, 8303, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.actions", NULL, 31, 8429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\141\143\164\151\157\156\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.common", NULL, 32, 14751, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\143\157\155\155\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.core", NULL, 33, 277603, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\143\157\162\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.diagram", NULL, 34, 27966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\144\151\141\147\162\141\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.exceptions", NULL, 35, 12893, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.helpers", NULL, 36, 53594, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.results", NULL, 37, 36277, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\162\145\163\165\154\164\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.testing", NULL, 38, 19473, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\164\145\163\164\151\156\147\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.unicode", NULL, 39, 15331, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\165\156\151\143\157\144\145\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing.util", NULL, 40, 14230, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\134\165\164\151\154\56\160\171"
#endif
},
    {"pkg_resources.extern", NULL, 41, 4277, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\107\72\134\160\171\164\150\157\156\63\56\61\61\134\114\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\145\170\164\145\162\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, (PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob(NULL);

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
        destination->get_code = NULL;
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

