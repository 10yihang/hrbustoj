/* Generated code for Python module 'contest_page_statistics'
 * created by Nuitka version 1.8
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_contest_page_statistics" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_contest_page_statistics;
PyDictObject *moduledict_contest_page_statistics;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[161];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[161];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("contest_page_statistics"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 161; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_contest_page_statistics(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 161; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_dccf14bbbcbc4d7904e83a9c60966954;
static PyCodeObject *codeobj_21c7fd523c6383411cba433317030de7;
static PyCodeObject *codeobj_962fc34450402ab9dcf848009c1557fa;
static PyCodeObject *codeobj_790363200243b337cab1493dcefca263;
static PyCodeObject *codeobj_bf469719691bebd4fddeb01316a72bd0;
static PyCodeObject *codeobj_9a2705c6a06e3d45b724a1b05c6219c6;
static PyCodeObject *codeobj_999dc71c3d03051dd7d0091604dcea44;
static PyCodeObject *codeobj_45999f759df33ccbe7297033cc4354d3;
static PyCodeObject *codeobj_0c026f53ccaaa66bf2241eb829fdd96f;
static PyCodeObject *codeobj_eb4cde2c448d6d3e97374aa2f683dcca;
static PyCodeObject *codeobj_6ab01924f76b4a96b3f1611cee6ea3f3;
static PyCodeObject *codeobj_2f5ebcba0e253eeb34d1ea2a901e31cb;
static PyCodeObject *codeobj_81ab9e025c9583609f0c56f548c6a30a;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[126]; CHECK_OBJECT(module_filename_obj);
    codeobj_dccf14bbbcbc4d7904e83a9c60966954 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], NULL, NULL, 0, 0, 0);
    codeobj_21c7fd523c6383411cba433317030de7 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], NULL, NULL, 0, 0, 0);
    codeobj_962fc34450402ab9dcf848009c1557fa = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], NULL, NULL, 0, 0, 0);
    codeobj_790363200243b337cab1493dcefca263 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], mod_consts[154], mod_consts[155], 1, 0, 0);
    codeobj_bf469719691bebd4fddeb01316a72bd0 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], mod_consts[156], mod_consts[156], 0, 0, 0);
    codeobj_9a2705c6a06e3d45b724a1b05c6219c6 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], mod_consts[155], mod_consts[155], 0, 0, 0);
    codeobj_999dc71c3d03051dd7d0091604dcea44 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[157], mod_consts[157], NULL, NULL, 0, 0, 0);
    codeobj_45999f759df33ccbe7297033cc4354d3 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[153], mod_consts[153], mod_consts[158], NULL, 1, 0, 0);
    codeobj_0c026f53ccaaa66bf2241eb829fdd96f = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[115], mod_consts[115], mod_consts[159], NULL, 1, 0, 0);
    codeobj_eb4cde2c448d6d3e97374aa2f683dcca = MAKE_CODE_OBJECT(module_filename_obj, 29, 0, mod_consts[117], mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_6ab01924f76b4a96b3f1611cee6ea3f3 = MAKE_CODE_OBJECT(module_filename_obj, 40, 0, mod_consts[121], mod_consts[121], mod_consts[156], NULL, 1, 0, 0);
    codeobj_2f5ebcba0e253eeb34d1ea2a901e31cb = MAKE_CODE_OBJECT(module_filename_obj, 37, 0, mod_consts[120], mod_consts[120], mod_consts[160], NULL, 1, 0, 0);
    codeobj_81ab9e025c9583609f0c56f548c6a30a = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[118], mod_consts[118], mod_consts[160], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__1_on_mouse_wheel();


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__2_open_problems_page();


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__3_open_status_page();


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__4_open_statistics_page();


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__5_open_ranklist_page();


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info();


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__3_lambda();


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__4_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__5_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__6_lambda(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_contest_page_statistics$$$function__1_on_mouse_wheel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_0c026f53ccaaa66bf2241eb829fdd96f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c026f53ccaaa66bf2241eb829fdd96f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c026f53ccaaa66bf2241eb829fdd96f)) {
        Py_XDECREF(cache_frame_0c026f53ccaaa66bf2241eb829fdd96f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c026f53ccaaa66bf2241eb829fdd96f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c026f53ccaaa66bf2241eb829fdd96f = MAKE_FUNCTION_FRAME(tstate, codeobj_0c026f53ccaaa66bf2241eb829fdd96f, module_contest_page_statistics, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c026f53ccaaa66bf2241eb829fdd96f->m_type_description == NULL);
    frame_0c026f53ccaaa66bf2241eb829fdd96f = cache_frame_0c026f53ccaaa66bf2241eb829fdd96f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0c026f53ccaaa66bf2241eb829fdd96f);
    assert(Py_REFCNT(frame_0c026f53ccaaa66bf2241eb829fdd96f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[2];
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_floordiv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_1 = mod_consts[4];
        tmp_mult_expr_right_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[5];
        frame_0c026f53ccaaa66bf2241eb829fdd96f->m_frame.f_lineno = 27;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c026f53ccaaa66bf2241eb829fdd96f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c026f53ccaaa66bf2241eb829fdd96f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c026f53ccaaa66bf2241eb829fdd96f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c026f53ccaaa66bf2241eb829fdd96f,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_0c026f53ccaaa66bf2241eb829fdd96f == cache_frame_0c026f53ccaaa66bf2241eb829fdd96f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c026f53ccaaa66bf2241eb829fdd96f);
        cache_frame_0c026f53ccaaa66bf2241eb829fdd96f = NULL;
    }

    assertFrameObject(frame_0c026f53ccaaa66bf2241eb829fdd96f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_contest_page_statistics$$$function__3_open_status_page(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cid = python_pars[0];
    struct Nuitka_FrameObject *frame_81ab9e025c9583609f0c56f548c6a30a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81ab9e025c9583609f0c56f548c6a30a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81ab9e025c9583609f0c56f548c6a30a)) {
        Py_XDECREF(cache_frame_81ab9e025c9583609f0c56f548c6a30a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81ab9e025c9583609f0c56f548c6a30a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81ab9e025c9583609f0c56f548c6a30a = MAKE_FUNCTION_FRAME(tstate, codeobj_81ab9e025c9583609f0c56f548c6a30a, module_contest_page_statistics, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81ab9e025c9583609f0c56f548c6a30a->m_type_description == NULL);
    frame_81ab9e025c9583609f0c56f548c6a30a = cache_frame_81ab9e025c9583609f0c56f548c6a30a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_81ab9e025c9583609f0c56f548c6a30a);
    assert(Py_REFCNT(frame_81ab9e025c9583609f0c56f548c6a30a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_add_expr_left_2 == NULL)) {
            tmp_add_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[8];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cid);
        tmp_args_element_value_2 = par_cid;
        frame_81ab9e025c9583609f0c56f548c6a30a->m_frame.f_lineno = 35;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_81ab9e025c9583609f0c56f548c6a30a->m_frame.f_lineno = 35;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81ab9e025c9583609f0c56f548c6a30a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81ab9e025c9583609f0c56f548c6a30a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81ab9e025c9583609f0c56f548c6a30a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81ab9e025c9583609f0c56f548c6a30a,
        type_description_1,
        par_cid
    );


    // Release cached frame if used for exception.
    if (frame_81ab9e025c9583609f0c56f548c6a30a == cache_frame_81ab9e025c9583609f0c56f548c6a30a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81ab9e025c9583609f0c56f548c6a30a);
        cache_frame_81ab9e025c9583609f0c56f548c6a30a = NULL;
    }

    assertFrameObject(frame_81ab9e025c9583609f0c56f548c6a30a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cid);
    Py_DECREF(par_cid);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cid);
    Py_DECREF(par_cid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_contest_page_statistics$$$function__6_get_statistics_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_url = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *var_window = Nuitka_Cell_Empty();
    PyObject *var_screen_width = NULL;
    PyObject *var_screen_height = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_scrollbar = NULL;
    PyObject *var_content_frame = NULL;
    PyObject *var_button_frame = NULL;
    PyObject *var_problems_button = NULL;
    PyObject *var_status_button = NULL;
    PyObject *var_statistics_button = NULL;
    PyObject *var_ranklist_button = NULL;
    PyObject *var_refresh_button = NULL;
    PyObject *var_response = NULL;
    PyObject *var_soup = NULL;
    PyObject *var_statistics = NULL;
    PyObject *var_header_frame = NULL;
    PyObject *var_i = NULL;
    PyObject *var_header = NULL;
    PyObject *var_label = NULL;
    PyObject *var_data = NULL;
    PyObject *var_tds = NULL;
    PyObject *var_probid = NULL;
    PyObject *var_ac = NULL;
    PyObject *var_pe = NULL;
    PyObject *var_tle = NULL;
    PyObject *var_mle = NULL;
    PyObject *var_wa = NULL;
    PyObject *var_re = NULL;
    PyObject *var_ce = NULL;
    PyObject *var_rf = NULL;
    PyObject *var_se = NULL;
    PyObject *var_total = NULL;
    PyObject *var_gcc = NULL;
    PyObject *var_gpp = NULL;
    PyObject *var_java = NULL;
    PyObject *var_row = NULL;
    PyObject *var_j = NULL;
    PyObject *var_value = NULL;
    PyObject *var_content_height = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_45999f759df33ccbe7297033cc4354d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_45999f759df33ccbe7297033cc4354d3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_45999f759df33ccbe7297033cc4354d3)) {
        Py_XDECREF(cache_frame_45999f759df33ccbe7297033cc4354d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_45999f759df33ccbe7297033cc4354d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_45999f759df33ccbe7297033cc4354d3 = MAKE_FUNCTION_FRAME(tstate, codeobj_45999f759df33ccbe7297033cc4354d3, module_contest_page_statistics, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_45999f759df33ccbe7297033cc4354d3->m_type_description == NULL);
    frame_45999f759df33ccbe7297033cc4354d3 = cache_frame_45999f759df33ccbe7297033cc4354d3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_45999f759df33ccbe7297033cc4354d3);
    assert(Py_REFCNT(frame_45999f759df33ccbe7297033cc4354d3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 46;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[11]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_window) == NULL);
        PyCell_SET(var_window, tmp_assign_source_1);

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_expression_value_1 = Nuitka_Cell_GET(var_window);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 47;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[13]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_called_instance_2 = Nuitka_Cell_GET(var_window);
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 48;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[14]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_screen_width == NULL);
        var_screen_width = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_called_instance_3 = Nuitka_Cell_GET(var_window);
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 49;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[15]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_screen_height == NULL);
        var_screen_height = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_screen_width);
        tmp_sub_expr_left_1 = var_screen_width;
        tmp_sub_expr_right_1 = mod_consts[16];
        tmp_floordiv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_floordiv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_1 = mod_consts[17];
        tmp_assign_source_4 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_left_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_floordiv_expr_left_2;
        PyObject *tmp_floordiv_expr_right_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_screen_height);
        tmp_sub_expr_left_2 = var_screen_height;
        tmp_sub_expr_right_2 = mod_consts[18];
        tmp_floordiv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_floordiv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_floordiv_expr_right_2 = mod_consts[17];
        tmp_assign_source_5 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_2, tmp_floordiv_expr_right_2);
        Py_DECREF(tmp_floordiv_expr_left_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_expression_value_2 = Nuitka_Cell_GET(var_window);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[20];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_x);
            tmp_format_value_1 = var_x;
            tmp_format_spec_1 = mod_consts[21];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_y);
            tmp_format_value_2 = var_y;
            tmp_format_spec_2 = mod_consts[21];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[21], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 53;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 53;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_called_instance_4 = Nuitka_Cell_GET(var_window);
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 54;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[23]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_called_instance_5 = Nuitka_Cell_GET(var_window);
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 56;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[24]);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_args_element_value_2 = Nuitka_Cell_GET(var_window);
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 59;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(var_window);
        tmp_kw_call_dict_value_0_1 = mod_consts[27];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[28]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 60;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scrollbar == NULL);
        var_scrollbar = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[30]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_scrollbar);
        tmp_expression_value_5 = var_scrollbar;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[31]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 61;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 61;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[32]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[33]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 64;
        tmp_call_result_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[34], 0), mod_consts[35]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_scrollbar);
        tmp_expression_value_7 = var_scrollbar;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[33]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 65;
        tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[36], 0), mod_consts[35]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_expression_value_8 = Nuitka_Cell_GET(var_window);
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[37]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 67;
        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[38], 0), mod_consts[39]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_expression_value_9 = Nuitka_Cell_GET(var_window);
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[40]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 68;
        tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[38], 0), mod_consts[39]);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 70;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_content_frame == NULL);
        var_content_frame = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[42]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_content_frame);
        tmp_kw_call_value_0_2 = var_content_frame;
        tmp_kw_call_value_1_1 = mod_consts[43];
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 73;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};
            tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_11, mod_consts[44], kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_content_frame);
        tmp_args_element_value_4 = var_content_frame;
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 77;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_button_frame == NULL);
        var_button_frame = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_13;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_button_frame);
        tmp_kw_call_arg_value_0_2 = var_button_frame;
        tmp_kw_call_dict_value_0_2 = mod_consts[47];


        tmp_kw_call_dict_value_1_2 = MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__1_lambda();

        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 79;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_13, args, kw_values, mod_consts[50]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_problems_button == NULL);
        var_problems_button = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_button_frame);
        tmp_kw_call_arg_value_0_3 = var_button_frame;
        tmp_kw_call_dict_value_0_3 = mod_consts[51];


        tmp_kw_call_dict_value_1_3 = MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__2_lambda();

        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 80;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts[50]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_status_button == NULL);
        var_status_button = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_4;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_button_frame);
        tmp_kw_call_arg_value_0_4 = var_button_frame;
        tmp_kw_call_dict_value_0_4 = mod_consts[52];


        tmp_kw_call_dict_value_1_4 = MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__3_lambda();

        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 81;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_15, args, kw_values, mod_consts[50]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_4);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_statistics_button == NULL);
        var_statistics_button = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_16;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_5;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_button_frame);
        tmp_kw_call_arg_value_0_5 = var_button_frame;
        tmp_kw_call_dict_value_0_5 = mod_consts[53];

        tmp_closure_1[0] = par_url;
        Py_INCREF(tmp_closure_1[0]);

        tmp_kw_call_dict_value_1_5 = MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__4_lambda(tmp_closure_1);

        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 82;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts[50]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_5);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ranklist_button == NULL);
        var_ranklist_button = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_17;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_kw_call_dict_value_1_6;
        struct Nuitka_CellObject *tmp_closure_2[2];
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_button_frame);
        tmp_kw_call_arg_value_0_6 = var_button_frame;
        tmp_kw_call_dict_value_0_6 = mod_consts[54];

        tmp_closure_2[0] = par_url;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_window;
        Py_INCREF(tmp_closure_2[1]);

        tmp_kw_call_dict_value_1_6 = MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__5_lambda(tmp_closure_2);

        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 83;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_6, tmp_kw_call_dict_value_1_6};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_17, args, kw_values, mod_consts[50]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_6);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_refresh_button == NULL);
        var_refresh_button = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        struct Nuitka_CellObject *tmp_closure_3[2];
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_called_instance_6 = Nuitka_Cell_GET(var_window);
        tmp_args_element_value_5 = mod_consts[56];

        tmp_closure_3[0] = par_url;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_window;
        Py_INCREF(tmp_closure_3[1]);

        tmp_args_element_value_6 = MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__6_lambda(tmp_closure_3);

        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_11 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_6,
                mod_consts[55],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(var_problems_button);
        tmp_expression_value_11 = var_problems_button;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[30]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 89;
        tmp_call_result_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[58]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(var_status_button);
        tmp_expression_value_12 = var_status_button;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[30]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 90;
        tmp_call_result_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[58]);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(var_statistics_button);
        tmp_expression_value_13 = var_statistics_button;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[30]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 91;
        tmp_call_result_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[58]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(var_ranklist_button);
        tmp_expression_value_14 = var_ranklist_button;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[30]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 92;
        tmp_call_result_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[58]);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(var_refresh_button);
        tmp_expression_value_15 = var_refresh_button;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[30]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 93;
        tmp_call_result_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[58]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(var_problems_button);
        tmp_expression_value_16 = var_problems_button;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[33]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 96;
        tmp_call_result_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(var_status_button);
        tmp_expression_value_17 = var_status_button;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[33]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 97;
        tmp_call_result_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(var_statistics_button);
        tmp_expression_value_18 = var_statistics_button;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[33]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 98;
        tmp_call_result_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(var_ranklist_button);
        tmp_expression_value_19 = var_ranklist_button;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[33]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 99;
        tmp_call_result_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_21;
        CHECK_OBJECT(var_refresh_button);
        tmp_expression_value_20 = var_refresh_button;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[33]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 100;
        tmp_call_result_21 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[64], 0), mod_consts[60]);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(var_button_frame);
        tmp_expression_value_21 = var_button_frame;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[33]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 102;
        tmp_call_result_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[66]);
        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_dict_value_0_7;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[68]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_url));
        tmp_kw_call_arg_value_0_7 = Nuitka_Cell_GET(par_url);
        tmp_kw_call_dict_value_0_7 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_kw_call_dict_value_0_7 == NULL)) {
            tmp_kw_call_dict_value_0_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_kw_call_dict_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 104;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 104;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_29, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_29);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_response == NULL);
        var_response = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_response);
        tmp_expression_value_23 = var_response;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[72]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[73];
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_soup == NULL);
        var_soup = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_args_values_1;
        CHECK_OBJECT(var_soup);
        tmp_expression_value_24 = var_soup;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[74]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[75], "il");
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 107;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_31, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[76]);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_statistics == NULL);
        var_statistics = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_content_frame);
        tmp_args_element_value_9 = var_content_frame;
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 109;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_9);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header_frame == NULL);
        var_header_frame = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_arg_element_1;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = LIST_COPY(mod_consts[78]);
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 111;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_19;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_20 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 111;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 111;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_23 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 111;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
                    exception_lineno = 111;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[79];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 111;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_24;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_header;
            var_header = tmp_assign_source_25;
            Py_INCREF(var_header);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_34;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_kw_call_dict_value_1_7;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_header_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 112;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_arg_value_0_8 = var_header_frame;
        CHECK_OBJECT(var_header);
        tmp_kw_call_dict_value_0_8 = var_header;
        tmp_kw_call_dict_value_1_7 = mod_consts[82];
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 112;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_7};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_34, args, kw_values, mod_consts[83]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_label;
            var_label = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_23;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        CHECK_OBJECT(var_label);
        tmp_expression_value_25 = var_label;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[33]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_value_0_3 = mod_consts[84];
        CHECK_OBJECT(var_i);
        tmp_kw_call_value_1_2 = var_i;
        tmp_kw_call_value_2_1 = mod_consts[85];
        tmp_kw_call_value_3_1 = mod_consts[85];
        tmp_kw_call_value_4_1 = mod_consts[86];
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 113;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_call_result_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_35, kw_values, mod_consts[87]);
        }

        Py_DECREF(tmp_called_value_35);
        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_23);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 111;
        type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_24;
        if (var_header_frame == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 114;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = var_header_frame;
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[33]);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 114;
        tmp_call_result_24 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_36, &PyTuple_GET_ITEM(mod_consts[88], 0), mod_consts[66]);
        Py_DECREF(tmp_called_value_36);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_LIST_EMPTY(0);
        assert(var_data == NULL);
        var_data = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[90]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_statistics);
        tmp_args_element_value_11 = var_statistics;
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 117;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 117;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_28;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_29 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 117;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_30 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_30;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_statistics);
        tmp_expression_value_27 = var_statistics;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_called_instance_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_1);
        if (tmp_called_instance_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 118;
        tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_7,
            mod_consts[74],
            PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_tds;
            var_tds = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_28 = var_tds;
        tmp_subscript_value_2 = mod_consts[92];
        tmp_called_instance_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_2, 0);
        if (tmp_called_instance_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 119;
        tmp_assign_source_32 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[93]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_probid;
            var_probid = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_29 = var_tds;
        tmp_subscript_value_3 = mod_consts[84];
        tmp_called_instance_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_3, 1);
        if (tmp_called_instance_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 120;
        tmp_assign_source_33 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[93]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_ac;
            var_ac = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_30 = var_tds;
        tmp_subscript_value_4 = mod_consts[17];
        tmp_called_instance_10 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_4, 2);
        if (tmp_called_instance_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 121;
        tmp_assign_source_34 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts[93]);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_pe;
            var_pe = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_31 = var_tds;
        tmp_subscript_value_5 = mod_consts[94];
        tmp_called_instance_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_5, 3);
        if (tmp_called_instance_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 122;
        tmp_assign_source_35 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_11, mod_consts[93]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_tle;
            var_tle = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_32 = var_tds;
        tmp_subscript_value_6 = mod_consts[95];
        tmp_called_instance_12 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_6, 4);
        if (tmp_called_instance_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 123;
        tmp_assign_source_36 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts[93]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_mle;
            var_mle = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_33 = var_tds;
        tmp_subscript_value_7 = mod_consts[85];
        tmp_called_instance_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_7, 5);
        if (tmp_called_instance_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 124;
        tmp_assign_source_37 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_13, mod_consts[93]);
        Py_DECREF(tmp_called_instance_13);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_wa;
            var_wa = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_34 = var_tds;
        tmp_subscript_value_8 = mod_consts[96];
        tmp_called_instance_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_8, 6);
        if (tmp_called_instance_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 125;
        tmp_assign_source_38 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, mod_consts[93]);
        Py_DECREF(tmp_called_instance_14);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_re;
            var_re = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_35 = var_tds;
        tmp_subscript_value_9 = mod_consts[97];
        tmp_called_instance_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_9, 7);
        if (tmp_called_instance_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 126;
        tmp_assign_source_39 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_15, mod_consts[93]);
        Py_DECREF(tmp_called_instance_15);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_ce;
            var_ce = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_36 = var_tds;
        tmp_subscript_value_10 = mod_consts[98];
        tmp_called_instance_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_36, tmp_subscript_value_10, 8);
        if (tmp_called_instance_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 127;
        tmp_assign_source_40 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_16, mod_consts[93]);
        Py_DECREF(tmp_called_instance_16);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_re;
            assert(old != NULL);
            var_re = tmp_assign_source_40;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_37 = var_tds;
        tmp_subscript_value_11 = mod_consts[99];
        tmp_called_instance_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_11, 9);
        if (tmp_called_instance_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 128;
        tmp_assign_source_41 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_17, mod_consts[93]);
        Py_DECREF(tmp_called_instance_17);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_rf;
            var_rf = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_38 = var_tds;
        tmp_subscript_value_12 = mod_consts[100];
        tmp_called_instance_18 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_12, 10);
        if (tmp_called_instance_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 129;
        tmp_assign_source_42 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_18, mod_consts[93]);
        Py_DECREF(tmp_called_instance_18);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_se;
            var_se = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_13;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_39 = var_tds;
        tmp_subscript_value_13 = mod_consts[101];
        tmp_called_instance_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_39, tmp_subscript_value_13, 11);
        if (tmp_called_instance_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 130;
        tmp_assign_source_43 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_19, mod_consts[93]);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_total;
            var_total = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_14;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_40 = var_tds;
        tmp_subscript_value_14 = mod_consts[102];
        tmp_called_instance_20 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_40, tmp_subscript_value_14, 12);
        if (tmp_called_instance_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 131;
        tmp_assign_source_44 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_20, mod_consts[93]);
        Py_DECREF(tmp_called_instance_20);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_gcc;
            var_gcc = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_15;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_41 = var_tds;
        tmp_subscript_value_15 = mod_consts[103];
        tmp_called_instance_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_15, 13);
        if (tmp_called_instance_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 132;
        tmp_assign_source_45 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_21, mod_consts[93]);
        Py_DECREF(tmp_called_instance_21);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_gpp;
            var_gpp = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_16;
        CHECK_OBJECT(var_tds);
        tmp_expression_value_42 = var_tds;
        tmp_subscript_value_16 = mod_consts[104];
        tmp_called_instance_22 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_16, 14);
        if (tmp_called_instance_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 133;
        tmp_assign_source_46 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_22, mod_consts[93]);
        Py_DECREF(tmp_called_instance_22);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_java;
            var_java = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_list_element_1;
        if (var_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 134;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_43 = var_data;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[106]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_probid);
        tmp_list_element_1 = var_probid;
        tmp_args_element_value_12 = MAKE_LIST_EMPTY(15);
        PyList_SET_ITEM0(tmp_args_element_value_12, 0, tmp_list_element_1);
        CHECK_OBJECT(var_ac);
        tmp_list_element_1 = var_ac;
        PyList_SET_ITEM0(tmp_args_element_value_12, 1, tmp_list_element_1);
        CHECK_OBJECT(var_pe);
        tmp_list_element_1 = var_pe;
        PyList_SET_ITEM0(tmp_args_element_value_12, 2, tmp_list_element_1);
        CHECK_OBJECT(var_tle);
        tmp_list_element_1 = var_tle;
        PyList_SET_ITEM0(tmp_args_element_value_12, 3, tmp_list_element_1);
        CHECK_OBJECT(var_mle);
        tmp_list_element_1 = var_mle;
        PyList_SET_ITEM0(tmp_args_element_value_12, 4, tmp_list_element_1);
        CHECK_OBJECT(var_wa);
        tmp_list_element_1 = var_wa;
        PyList_SET_ITEM0(tmp_args_element_value_12, 5, tmp_list_element_1);
        CHECK_OBJECT(var_re);
        tmp_list_element_1 = var_re;
        PyList_SET_ITEM0(tmp_args_element_value_12, 6, tmp_list_element_1);
        CHECK_OBJECT(var_ce);
        tmp_list_element_1 = var_ce;
        PyList_SET_ITEM0(tmp_args_element_value_12, 7, tmp_list_element_1);
        CHECK_OBJECT(var_re);
        tmp_list_element_1 = var_re;
        PyList_SET_ITEM0(tmp_args_element_value_12, 8, tmp_list_element_1);
        CHECK_OBJECT(var_rf);
        tmp_list_element_1 = var_rf;
        PyList_SET_ITEM0(tmp_args_element_value_12, 9, tmp_list_element_1);
        CHECK_OBJECT(var_se);
        tmp_list_element_1 = var_se;
        PyList_SET_ITEM0(tmp_args_element_value_12, 10, tmp_list_element_1);
        CHECK_OBJECT(var_total);
        tmp_list_element_1 = var_total;
        PyList_SET_ITEM0(tmp_args_element_value_12, 11, tmp_list_element_1);
        CHECK_OBJECT(var_gcc);
        tmp_list_element_1 = var_gcc;
        PyList_SET_ITEM0(tmp_args_element_value_12, 12, tmp_list_element_1);
        CHECK_OBJECT(var_gpp);
        tmp_list_element_1 = var_gpp;
        PyList_SET_ITEM0(tmp_args_element_value_12, 13, tmp_list_element_1);
        CHECK_OBJECT(var_java);
        tmp_list_element_1 = var_java;
        PyList_SET_ITEM0(tmp_args_element_value_12, 14, tmp_list_element_1);
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 134;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_25);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 117;
        type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 138;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_13 = var_data;
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 138;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_13);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_47 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_47;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_48 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_48 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 138;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_3__iter_value;
        tmp_assign_source_49 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_50 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_50 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 138;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_51 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 138;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
                    exception_lineno = 138;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[79];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 138;
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_52 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_52;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_53 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_53;
            Py_INCREF(var_row);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_row);
        tmp_args_element_value_14 = var_row;
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 139;
        tmp_iter_arg_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_14);
        if (tmp_iter_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_54 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_55 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_55 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
                exception_lineno = 139;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_iter_arg_7 = tmp_for_loop_4__iter_value;
        tmp_assign_source_56 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_57 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_57 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 139;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_58 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_58 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 139;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
                    exception_lineno = 139;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[79];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            exception_lineno = 139;
            goto try_except_handler_11;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_10;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_59 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_59;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_60 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_60;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_dict_value_0_9;
        PyObject *tmp_kw_call_dict_value_1_8;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[80]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_header_frame == NULL) {
            Py_DECREF(tmp_called_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 140;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_kw_call_arg_value_0_9 = var_header_frame;
        CHECK_OBJECT(var_value);
        tmp_kw_call_dict_value_0_9 = var_value;
        tmp_kw_call_dict_value_1_8 = mod_consts[107];
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 140;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_9, tmp_kw_call_dict_value_1_8};
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_42, args, kw_values, mod_consts[83]);
        }

        Py_DECREF(tmp_called_value_42);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_label;
            var_label = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_26;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        CHECK_OBJECT(var_label);
        tmp_expression_value_45 = var_label;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[33]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_i == NULL) {
            Py_DECREF(tmp_called_value_43);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 141;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_add_expr_left_1 = var_i;
        tmp_add_expr_right_1 = mod_consts[17];
        tmp_kw_call_value_0_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 141;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_j);
        tmp_kw_call_value_1_3 = var_j;
        tmp_kw_call_value_2_2 = mod_consts[85];
        tmp_kw_call_value_3_2 = mod_consts[85];
        tmp_kw_call_value_4_2 = mod_consts[109];
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 141;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2};

            tmp_call_result_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_43, kw_values, mod_consts[87]);
        }

        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_26);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 139;
        type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_6;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 138;
        type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_27;
        CHECK_OBJECT(var_content_frame);
        tmp_called_instance_23 = var_content_frame;
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 143;
        tmp_call_result_27 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_23, mod_consts[110]);
        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_instance_24;
        CHECK_OBJECT(var_content_frame);
        tmp_called_instance_24 = var_content_frame;
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 144;
        tmp_assign_source_62 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_24, mod_consts[111]);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_content_height == NULL);
        var_content_height = tmp_assign_source_62;
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_28;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[30]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[92];
        tmp_kw_call_value_0_5 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_kw_call_value_0_5, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[92];
        PyTuple_SET_ITEM0(tmp_kw_call_value_0_5, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[92];
        PyTuple_SET_ITEM0(tmp_kw_call_value_0_5, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_content_height);
        tmp_tuple_element_2 = var_content_height;
        PyTuple_SET_ITEM0(tmp_kw_call_value_0_5, 3, tmp_tuple_element_2);
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 145;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

            tmp_call_result_28 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_44, kw_values, mod_consts[112]);
        }

        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[113]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[114];
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 146;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_45, call_args);
        }

        Py_DECREF(tmp_called_value_45);
        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_call_result_30;
        CHECK_OBJECT(Nuitka_Cell_GET(var_window));
        tmp_called_instance_25 = Nuitka_Cell_GET(var_window);
        frame_45999f759df33ccbe7297033cc4354d3->m_frame.f_lineno = 148;
        tmp_call_result_30 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_25, mod_consts[116]);
        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ccooooooooooooNooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_45999f759df33ccbe7297033cc4354d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_45999f759df33ccbe7297033cc4354d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45999f759df33ccbe7297033cc4354d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_45999f759df33ccbe7297033cc4354d3,
        type_description_1,
        par_url,
        var_window,
        var_screen_width,
        var_screen_height,
        var_x,
        var_y,
        var_scrollbar,
        var_content_frame,
        var_button_frame,
        var_problems_button,
        var_status_button,
        var_statistics_button,
        var_ranklist_button,
        var_refresh_button,
        NULL,
        var_response,
        var_soup,
        var_statistics,
        var_header_frame,
        var_i,
        var_header,
        var_label,
        var_data,
        var_tds,
        var_probid,
        var_ac,
        var_pe,
        var_tle,
        var_mle,
        var_wa,
        var_re,
        var_ce,
        var_rf,
        var_se,
        var_total,
        var_gcc,
        var_gpp,
        var_java,
        var_row,
        var_j,
        var_value,
        var_content_height
    );


    // Release cached frame if used for exception.
    if (frame_45999f759df33ccbe7297033cc4354d3 == cache_frame_45999f759df33ccbe7297033cc4354d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_45999f759df33ccbe7297033cc4354d3);
        cache_frame_45999f759df33ccbe7297033cc4354d3 = NULL;
    }

    assertFrameObject(frame_45999f759df33ccbe7297033cc4354d3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    CHECK_OBJECT(var_screen_width);
    Py_DECREF(var_screen_width);
    var_screen_width = NULL;
    CHECK_OBJECT(var_screen_height);
    Py_DECREF(var_screen_height);
    var_screen_height = NULL;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
    CHECK_OBJECT(var_scrollbar);
    Py_DECREF(var_scrollbar);
    var_scrollbar = NULL;
    CHECK_OBJECT(var_content_frame);
    Py_DECREF(var_content_frame);
    var_content_frame = NULL;
    CHECK_OBJECT(var_button_frame);
    Py_DECREF(var_button_frame);
    var_button_frame = NULL;
    CHECK_OBJECT(var_problems_button);
    Py_DECREF(var_problems_button);
    var_problems_button = NULL;
    CHECK_OBJECT(var_status_button);
    Py_DECREF(var_status_button);
    var_status_button = NULL;
    CHECK_OBJECT(var_statistics_button);
    Py_DECREF(var_statistics_button);
    var_statistics_button = NULL;
    CHECK_OBJECT(var_ranklist_button);
    Py_DECREF(var_ranklist_button);
    var_ranklist_button = NULL;
    CHECK_OBJECT(var_refresh_button);
    Py_DECREF(var_refresh_button);
    var_refresh_button = NULL;
    CHECK_OBJECT(var_response);
    Py_DECREF(var_response);
    var_response = NULL;
    CHECK_OBJECT(var_soup);
    Py_DECREF(var_soup);
    var_soup = NULL;
    CHECK_OBJECT(var_statistics);
    Py_DECREF(var_statistics);
    var_statistics = NULL;
    Py_XDECREF(var_header_frame);
    var_header_frame = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_tds);
    var_tds = NULL;
    Py_XDECREF(var_probid);
    var_probid = NULL;
    Py_XDECREF(var_ac);
    var_ac = NULL;
    Py_XDECREF(var_pe);
    var_pe = NULL;
    Py_XDECREF(var_tle);
    var_tle = NULL;
    Py_XDECREF(var_mle);
    var_mle = NULL;
    Py_XDECREF(var_wa);
    var_wa = NULL;
    Py_XDECREF(var_re);
    var_re = NULL;
    Py_XDECREF(var_ce);
    var_ce = NULL;
    Py_XDECREF(var_rf);
    var_rf = NULL;
    Py_XDECREF(var_se);
    var_se = NULL;
    Py_XDECREF(var_total);
    var_total = NULL;
    Py_XDECREF(var_gcc);
    var_gcc = NULL;
    Py_XDECREF(var_gpp);
    var_gpp = NULL;
    Py_XDECREF(var_java);
    var_java = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    CHECK_OBJECT(var_content_height);
    Py_DECREF(var_content_height);
    var_content_height = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_screen_width);
    var_screen_width = NULL;
    Py_XDECREF(var_screen_height);
    var_screen_height = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_scrollbar);
    var_scrollbar = NULL;
    Py_XDECREF(var_content_frame);
    var_content_frame = NULL;
    Py_XDECREF(var_button_frame);
    var_button_frame = NULL;
    Py_XDECREF(var_problems_button);
    var_problems_button = NULL;
    Py_XDECREF(var_status_button);
    var_status_button = NULL;
    Py_XDECREF(var_statistics_button);
    var_statistics_button = NULL;
    Py_XDECREF(var_ranklist_button);
    var_ranklist_button = NULL;
    Py_XDECREF(var_refresh_button);
    var_refresh_button = NULL;
    Py_XDECREF(var_response);
    var_response = NULL;
    Py_XDECREF(var_soup);
    var_soup = NULL;
    Py_XDECREF(var_statistics);
    var_statistics = NULL;
    Py_XDECREF(var_header_frame);
    var_header_frame = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_tds);
    var_tds = NULL;
    Py_XDECREF(var_probid);
    var_probid = NULL;
    Py_XDECREF(var_ac);
    var_ac = NULL;
    Py_XDECREF(var_pe);
    var_pe = NULL;
    Py_XDECREF(var_tle);
    var_tle = NULL;
    Py_XDECREF(var_mle);
    var_mle = NULL;
    Py_XDECREF(var_wa);
    var_wa = NULL;
    Py_XDECREF(var_re);
    var_re = NULL;
    Py_XDECREF(var_ce);
    var_ce = NULL;
    Py_XDECREF(var_rf);
    var_rf = NULL;
    Py_XDECREF(var_se);
    var_se = NULL;
    Py_XDECREF(var_total);
    var_total = NULL;
    Py_XDECREF(var_gcc);
    var_gcc = NULL;
    Py_XDECREF(var_gpp);
    var_gpp = NULL;
    Py_XDECREF(var_java);
    var_java = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_content_height);
    var_content_height = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_dccf14bbbcbc4d7904e83a9c60966954;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dccf14bbbcbc4d7904e83a9c60966954 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dccf14bbbcbc4d7904e83a9c60966954)) {
        Py_XDECREF(cache_frame_dccf14bbbcbc4d7904e83a9c60966954);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dccf14bbbcbc4d7904e83a9c60966954 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dccf14bbbcbc4d7904e83a9c60966954 = MAKE_FUNCTION_FRAME(tstate, codeobj_dccf14bbbcbc4d7904e83a9c60966954, module_contest_page_statistics, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dccf14bbbcbc4d7904e83a9c60966954->m_type_description == NULL);
    frame_dccf14bbbcbc4d7904e83a9c60966954 = cache_frame_dccf14bbbcbc4d7904e83a9c60966954;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dccf14bbbcbc4d7904e83a9c60966954);
    assert(Py_REFCNT(frame_dccf14bbbcbc4d7904e83a9c60966954) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        frame_dccf14bbbcbc4d7904e83a9c60966954->m_frame.f_lineno = 79;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dccf14bbbcbc4d7904e83a9c60966954, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dccf14bbbcbc4d7904e83a9c60966954->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dccf14bbbcbc4d7904e83a9c60966954, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dccf14bbbcbc4d7904e83a9c60966954,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_dccf14bbbcbc4d7904e83a9c60966954 == cache_frame_dccf14bbbcbc4d7904e83a9c60966954) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dccf14bbbcbc4d7904e83a9c60966954);
        cache_frame_dccf14bbbcbc4d7904e83a9c60966954 = NULL;
    }

    assertFrameObject(frame_dccf14bbbcbc4d7904e83a9c60966954);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_21c7fd523c6383411cba433317030de7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_21c7fd523c6383411cba433317030de7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21c7fd523c6383411cba433317030de7)) {
        Py_XDECREF(cache_frame_21c7fd523c6383411cba433317030de7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21c7fd523c6383411cba433317030de7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21c7fd523c6383411cba433317030de7 = MAKE_FUNCTION_FRAME(tstate, codeobj_21c7fd523c6383411cba433317030de7, module_contest_page_statistics, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21c7fd523c6383411cba433317030de7->m_type_description == NULL);
    frame_21c7fd523c6383411cba433317030de7 = cache_frame_21c7fd523c6383411cba433317030de7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_21c7fd523c6383411cba433317030de7);
    assert(Py_REFCNT(frame_21c7fd523c6383411cba433317030de7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_21c7fd523c6383411cba433317030de7->m_frame.f_lineno = 80;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21c7fd523c6383411cba433317030de7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21c7fd523c6383411cba433317030de7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21c7fd523c6383411cba433317030de7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21c7fd523c6383411cba433317030de7,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_21c7fd523c6383411cba433317030de7 == cache_frame_21c7fd523c6383411cba433317030de7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21c7fd523c6383411cba433317030de7);
        cache_frame_21c7fd523c6383411cba433317030de7 = NULL;
    }

    assertFrameObject(frame_21c7fd523c6383411cba433317030de7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_962fc34450402ab9dcf848009c1557fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_962fc34450402ab9dcf848009c1557fa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_962fc34450402ab9dcf848009c1557fa)) {
        Py_XDECREF(cache_frame_962fc34450402ab9dcf848009c1557fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_962fc34450402ab9dcf848009c1557fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_962fc34450402ab9dcf848009c1557fa = MAKE_FUNCTION_FRAME(tstate, codeobj_962fc34450402ab9dcf848009c1557fa, module_contest_page_statistics, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_962fc34450402ab9dcf848009c1557fa->m_type_description == NULL);
    frame_962fc34450402ab9dcf848009c1557fa = cache_frame_962fc34450402ab9dcf848009c1557fa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_962fc34450402ab9dcf848009c1557fa);
    assert(Py_REFCNT(frame_962fc34450402ab9dcf848009c1557fa) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_962fc34450402ab9dcf848009c1557fa->m_frame.f_lineno = 81;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_962fc34450402ab9dcf848009c1557fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_962fc34450402ab9dcf848009c1557fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_962fc34450402ab9dcf848009c1557fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_962fc34450402ab9dcf848009c1557fa,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_962fc34450402ab9dcf848009c1557fa == cache_frame_962fc34450402ab9dcf848009c1557fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_962fc34450402ab9dcf848009c1557fa);
        cache_frame_962fc34450402ab9dcf848009c1557fa = NULL;
    }

    assertFrameObject(frame_962fc34450402ab9dcf848009c1557fa);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_bf469719691bebd4fddeb01316a72bd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bf469719691bebd4fddeb01316a72bd0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf469719691bebd4fddeb01316a72bd0)) {
        Py_XDECREF(cache_frame_bf469719691bebd4fddeb01316a72bd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf469719691bebd4fddeb01316a72bd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf469719691bebd4fddeb01316a72bd0 = MAKE_FUNCTION_FRAME(tstate, codeobj_bf469719691bebd4fddeb01316a72bd0, module_contest_page_statistics, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf469719691bebd4fddeb01316a72bd0->m_type_description == NULL);
    frame_bf469719691bebd4fddeb01316a72bd0 = cache_frame_bf469719691bebd4fddeb01316a72bd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bf469719691bebd4fddeb01316a72bd0);
    assert(Py_REFCNT(frame_bf469719691bebd4fddeb01316a72bd0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 82;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_bf469719691bebd4fddeb01316a72bd0->m_frame.f_lineno = 82;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf469719691bebd4fddeb01316a72bd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf469719691bebd4fddeb01316a72bd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf469719691bebd4fddeb01316a72bd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf469719691bebd4fddeb01316a72bd0,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_bf469719691bebd4fddeb01316a72bd0 == cache_frame_bf469719691bebd4fddeb01316a72bd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf469719691bebd4fddeb01316a72bd0);
        cache_frame_bf469719691bebd4fddeb01316a72bd0 = NULL;
    }

    assertFrameObject(frame_bf469719691bebd4fddeb01316a72bd0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9a2705c6a06e3d45b724a1b05c6219c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9a2705c6a06e3d45b724a1b05c6219c6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9a2705c6a06e3d45b724a1b05c6219c6)) {
        Py_XDECREF(cache_frame_9a2705c6a06e3d45b724a1b05c6219c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a2705c6a06e3d45b724a1b05c6219c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a2705c6a06e3d45b724a1b05c6219c6 = MAKE_FUNCTION_FRAME(tstate, codeobj_9a2705c6a06e3d45b724a1b05c6219c6, module_contest_page_statistics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a2705c6a06e3d45b724a1b05c6219c6->m_type_description == NULL);
    frame_9a2705c6a06e3d45b724a1b05c6219c6 = cache_frame_9a2705c6a06e3d45b724a1b05c6219c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9a2705c6a06e3d45b724a1b05c6219c6);
    assert(Py_REFCNT(frame_9a2705c6a06e3d45b724a1b05c6219c6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 83;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_9a2705c6a06e3d45b724a1b05c6219c6->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a2705c6a06e3d45b724a1b05c6219c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a2705c6a06e3d45b724a1b05c6219c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a2705c6a06e3d45b724a1b05c6219c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a2705c6a06e3d45b724a1b05c6219c6,
        type_description_1,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_9a2705c6a06e3d45b724a1b05c6219c6 == cache_frame_9a2705c6a06e3d45b724a1b05c6219c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a2705c6a06e3d45b724a1b05c6219c6);
        cache_frame_9a2705c6a06e3d45b724a1b05c6219c6 = NULL;
    }

    assertFrameObject(frame_9a2705c6a06e3d45b724a1b05c6219c6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_790363200243b337cab1493dcefca263;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_790363200243b337cab1493dcefca263 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_790363200243b337cab1493dcefca263)) {
        Py_XDECREF(cache_frame_790363200243b337cab1493dcefca263);

#if _DEBUG_REFCOUNTS
        if (cache_frame_790363200243b337cab1493dcefca263 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_790363200243b337cab1493dcefca263 = MAKE_FUNCTION_FRAME(tstate, codeobj_790363200243b337cab1493dcefca263, module_contest_page_statistics, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_790363200243b337cab1493dcefca263->m_type_description == NULL);
    frame_790363200243b337cab1493dcefca263 = cache_frame_790363200243b337cab1493dcefca263;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_790363200243b337cab1493dcefca263);
    assert(Py_REFCNT(frame_790363200243b337cab1493dcefca263) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 84;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 84;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_790363200243b337cab1493dcefca263->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_790363200243b337cab1493dcefca263, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_790363200243b337cab1493dcefca263->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_790363200243b337cab1493dcefca263, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_790363200243b337cab1493dcefca263,
        type_description_1,
        par_event,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_790363200243b337cab1493dcefca263 == cache_frame_790363200243b337cab1493dcefca263) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_790363200243b337cab1493dcefca263);
        cache_frame_790363200243b337cab1493dcefca263 = NULL;
    }

    assertFrameObject(frame_790363200243b337cab1493dcefca263);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__1_on_mouse_wheel() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_contest_page_statistics$$$function__1_on_mouse_wheel,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0c026f53ccaaa66bf2241eb829fdd96f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__2_open_problems_page() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eb4cde2c448d6d3e97374aa2f683dcca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__3_open_status_page() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_contest_page_statistics$$$function__3_open_status_page,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81ab9e025c9583609f0c56f548c6a30a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__4_open_statistics_page() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f5ebcba0e253eeb34d1ea2a901e31cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__5_open_ranklist_page() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6ab01924f76b4a96b3f1611cee6ea3f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_contest_page_statistics$$$function__6_get_statistics_info,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_45999f759df33ccbe7297033cc4354d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__1_lambda,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_dccf14bbbcbc4d7904e83a9c60966954,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__2_lambda,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_21c7fd523c6383411cba433317030de7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__3_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__3_lambda,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_962fc34450402ab9dcf848009c1557fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__4_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__4_lambda,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_bf469719691bebd4fddeb01316a72bd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__5_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__5_lambda,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_9a2705c6a06e3d45b724a1b05c6219c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info$$$function__6_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__6_lambda,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_790363200243b337cab1493dcefca263,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_contest_page_statistics,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_contest_page_statistics[] = {
    impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__1_lambda,
    impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__2_lambda,
    impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__3_lambda,
    impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__4_lambda,
    impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__5_lambda,
    impl_contest_page_statistics$$$function__6_get_statistics_info$$$function__6_lambda,
    impl_contest_page_statistics$$$function__1_on_mouse_wheel,
    NULL,
    impl_contest_page_statistics$$$function__3_open_status_page,
    NULL,
    NULL,
    impl_contest_page_statistics$$$function__6_get_statistics_info,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_contest_page_statistics;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_contest_page_statistics) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_contest_page_statistics[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_contest_page_statistics,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_contest_page_statistics(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("contest_page_statistics");

    // Store the module for future use.
    module_contest_page_statistics = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("contest_page_statistics: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("contest_page_statistics: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initcontest_page_statistics\n");

    moduledict_contest_page_statistics = MODULE_DICT(module_contest_page_statistics);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_contest_page_statistics,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_contest_page_statistics,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[21]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_contest_page_statistics,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_contest_page_statistics,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_contest_page_statistics,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_contest_page_statistics);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_contest_page_statistics, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_contest_page_statistics, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_contest_page_statistics, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_contest_page_statistics);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_999dc71c3d03051dd7d0091604dcea44;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_2);
    }
    frame_999dc71c3d03051dd7d0091604dcea44 = MAKE_MODULE_FRAME(codeobj_999dc71c3d03051dd7d0091604dcea44, module_contest_page_statistics);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_999dc71c3d03051dd7d0091604dcea44);
    assert(Py_REFCNT(frame_999dc71c3d03051dd7d0091604dcea44) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[126];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[129], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[130], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[132];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[133];
        tmp_level_value_1 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_contest_page_statistics,
                mod_consts[67],
                mod_consts[92]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[132];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[70];
        tmp_level_value_2 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 10;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_contest_page_statistics,
                mod_consts[69],
                mod_consts[92]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[134];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[135];
        tmp_level_value_3 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 11;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_contest_page_statistics,
                mod_consts[136],
                mod_consts[92]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[136]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[137];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 12;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[138];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[139];
        tmp_level_value_5 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 13;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_contest_page_statistics,
                mod_consts[140],
                mod_consts[92]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[140]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[141];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 14;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[143];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 15;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[144];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 16;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[145];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = Py_None;
        tmp_level_value_9 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 17;
        tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[146];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[147];
        tmp_level_value_10 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 18;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_contest_page_statistics,
                mod_consts[71],
                mod_consts[92]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[148];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 19;
        tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_14);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[148];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_12 = (PyObject *)moduledict_contest_page_statistics;
        tmp_fromlist_value_12 = mod_consts[149];
        tmp_level_value_12 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 20;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_contest_page_statistics, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[148];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_contest_page_statistics;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[150];
        tmp_level_value_13 = mod_consts[92];
        frame_999dc71c3d03051dd7d0091604dcea44->m_frame.f_lineno = 21;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_contest_page_statistics,
                mod_consts[151],
                mod_consts[92]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[151]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_15);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_999dc71c3d03051dd7d0091604dcea44, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_999dc71c3d03051dd7d0091604dcea44->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_999dc71c3d03051dd7d0091604dcea44, exception_lineno);
    }



    assertFrameObject(frame_999dc71c3d03051dd7d0091604dcea44);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_contest_page_statistics$$$function__1_on_mouse_wheel();

        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_contest_page_statistics$$$function__2_open_problems_page();

        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_contest_page_statistics$$$function__3_open_status_page();

        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_contest_page_statistics$$$function__4_open_statistics_page();

        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_contest_page_statistics$$$function__5_open_ranklist_page();

        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_contest_page_statistics$$$function__6_get_statistics_info();

        UPDATE_STRING_DICT1(moduledict_contest_page_statistics, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_22);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("contest_page_statistics", false);

    Py_INCREF(module_contest_page_statistics);
    return module_contest_page_statistics;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_contest_page_statistics, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("contest_page_statistics", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
