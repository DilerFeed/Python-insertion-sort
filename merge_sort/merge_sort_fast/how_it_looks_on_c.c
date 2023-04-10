/*
This is a file generated by Cython. You see line numbers in Python as 05: or +05:.
Where there is this +, then the code has been converted to C.
I have revealed this conversion to you, so you can see how Cython works.
*/

+01: import random
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_random, 0, -1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_random, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
/* … */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
+02: import time
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_time, 0, -1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_time, __pyx_t_1) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
+03: import numpy
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_numpy, 0, -1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_numpy, __pyx_t_1) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
 04: import cython
 05: from cpython cimport array
+06: import array
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_array, 0, -1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_array, __pyx_t_1) < 0) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
 07: 
 08: 
 09: # Сортування злиттям
 10: @cython.cdivision(True)
 11: @cython.boundscheck(False)
 12: @cython.wraparound(False)
 13: @cython.nonecheck(False)
+14: def merge_sort(A:int) -> int:
/* Python wrapper */
static PyObject *__pyx_pw_16merge_sort_light_1merge_sort(PyObject *__pyx_self, PyObject *__pyx_v_A); /*proto*/
static PyMethodDef __pyx_mdef_16merge_sort_light_1merge_sort = {"merge_sort", (PyCFunction)__pyx_pw_16merge_sort_light_1merge_sort, METH_O, 0};
static PyObject *__pyx_pw_16merge_sort_light_1merge_sort(PyObject *__pyx_self, PyObject *__pyx_v_A) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("merge_sort (wrapper)", 0);
  __pyx_r = __pyx_pf_16merge_sort_light_merge_sort(__pyx_self, ((PyObject *)__pyx_v_A));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_16merge_sort_light_merge_sort(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_A) {
  PyObject *__pyx_v_L = NULL;
  PyObject *__pyx_v_R = NULL;
  int __pyx_v_n;
  int __pyx_v_m;
  int __pyx_v_k;
  PyObject *__pyx_v_C = 0;
  Py_ssize_t __pyx_v_i;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("merge_sort", 0);
/* … */
  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_AddTraceback("merge_sort_light.merge_sort", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_L);
  __Pyx_XDECREF(__pyx_v_R);
  __Pyx_XDECREF(__pyx_v_C);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
/* … */
  __pyx_tuple__2 = PyTuple_Pack(8, __pyx_n_s_A, __pyx_n_s_L, __pyx_n_s_R, __pyx_n_s_n, __pyx_n_s_m, __pyx_n_s_k, __pyx_n_s_C, __pyx_n_s_i); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);
/* … */
  __pyx_t_1 = PyCFunction_NewEx(&__pyx_mdef_16merge_sort_light_1merge_sort, NULL, __pyx_n_s_merge_sort_light); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_merge_sort, __pyx_t_1) < 0) __PYX_ERR(0, 14, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_codeobj__3 = (PyObject*)__Pyx_PyCode_New(1, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__2, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_merge_sort_light_pyx, __pyx_n_s_merge_sort, 14, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__3)) __PYX_ERR(0, 14, __pyx_L1_error)
 15:     # У випадку, коли масиви = 0 або 1, повертаємо їх без сортування
+16:     if len(A) == 1 or len(A) == 0:
  __pyx_t_2 = PyObject_Length(__pyx_v_A); if (unlikely(__pyx_t_2 == ((Py_ssize_t)-1))) __PYX_ERR(0, 16, __pyx_L1_error)
  __pyx_t_3 = ((__pyx_t_2 == 1) != 0);
  if (!__pyx_t_3) {
  } else {
    __pyx_t_1 = __pyx_t_3;
    goto __pyx_L4_bool_binop_done;
  }
  __pyx_t_2 = PyObject_Length(__pyx_v_A); if (unlikely(__pyx_t_2 == ((Py_ssize_t)-1))) __PYX_ERR(0, 16, __pyx_L1_error)
  __pyx_t_3 = ((__pyx_t_2 == 0) != 0);
  __pyx_t_1 = __pyx_t_3;
  __pyx_L4_bool_binop_done:;
  if (__pyx_t_1) {
/* … */
  }
+17:         return A
    __Pyx_XDECREF(__pyx_r);
    __Pyx_INCREF(__pyx_v_A);
    __pyx_r = __pyx_v_A;
    goto __pyx_L0;
 18:     # Рекурсивно викликаємо функцію для лівої та правої частини
+19:     L = merge_sort(A[:len(A) // 2])
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_merge_sort); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = PyObject_Length(__pyx_v_A); if (unlikely(__pyx_t_2 == ((Py_ssize_t)-1))) __PYX_ERR(0, 19, __pyx_L1_error)
  __pyx_t_6 = __Pyx_PyObject_GetSlice(__pyx_v_A, 0, (__pyx_t_2 / 2), NULL, NULL, NULL, 0, 1, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_7 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 19, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_L = __pyx_t_4;
  __pyx_t_4 = 0;
+20:     R = merge_sort(A[len(A) // 2:])
  __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_merge_sort); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __pyx_t_2 = PyObject_Length(__pyx_v_A); if (unlikely(__pyx_t_2 == ((Py_ssize_t)-1))) __PYX_ERR(0, 20, __pyx_L1_error)
  __pyx_t_6 = __Pyx_PyObject_GetSlice(__pyx_v_A, (__pyx_t_2 / 2), 0, NULL, NULL, NULL, 1, 0, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_6);
  __pyx_t_7 = NULL;
  if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
    if (likely(__pyx_t_7)) {
      PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
      __Pyx_INCREF(__pyx_t_7);
      __Pyx_INCREF(function);
      __Pyx_DECREF_SET(__pyx_t_5, function);
    }
  }
  __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
  __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 20, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_v_R = __pyx_t_4;
  __pyx_t_4 = 0;
+21:     cdef int n = 0
  __pyx_v_n = 0;
+22:     cdef int m = 0
  __pyx_v_m = 0;
+23:     cdef int k = 0
  __pyx_v_k = 0;
 24:     # Копіюємо частини в один масив
+25:     C:int = [0] * (len(L) + len(R))
  __pyx_t_2 = PyObject_Length(__pyx_v_L); if (unlikely(__pyx_t_2 == ((Py_ssize_t)-1))) __PYX_ERR(0, 25, __pyx_L1_error)
  __pyx_t_8 = PyObject_Length(__pyx_v_R); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 25, __pyx_L1_error)
  __pyx_t_4 = PyList_New(1 * (((__pyx_t_2 + __pyx_t_8)<0) ? 0:(__pyx_t_2 + __pyx_t_8))); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 25, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  { Py_ssize_t __pyx_temp;
    for (__pyx_temp=0; __pyx_temp < (__pyx_t_2 + __pyx_t_8); __pyx_temp++) {
      __Pyx_INCREF(__pyx_int_0);
      __Pyx_GIVEREF(__pyx_int_0);
      PyList_SET_ITEM(__pyx_t_4, __pyx_temp, __pyx_int_0);
    }
  }
  __pyx_v_C = __pyx_t_4;
  __pyx_t_4 = 0;
 26:     # Сортуємо ліву та праву частини
+27:     while n < len(L) and m < len(R):
  while (1) {
    __pyx_t_8 = PyObject_Length(__pyx_v_L); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 27, __pyx_L1_error)
    __pyx_t_3 = ((__pyx_v_n < __pyx_t_8) != 0);
    if (__pyx_t_3) {
    } else {
      __pyx_t_1 = __pyx_t_3;
      goto __pyx_L8_bool_binop_done;
    }
    __pyx_t_8 = PyObject_Length(__pyx_v_R); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 27, __pyx_L1_error)
    __pyx_t_3 = ((__pyx_v_m < __pyx_t_8) != 0);
    __pyx_t_1 = __pyx_t_3;
    __pyx_L8_bool_binop_done:;
    if (!__pyx_t_1) break;
+28:         if L[n] <= R[m]:
    __pyx_t_4 = __Pyx_GetItemInt(__pyx_v_L, __pyx_v_n, int, 1, __Pyx_PyInt_From_int, 0, 0, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 28, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_GetItemInt(__pyx_v_R, __pyx_v_m, int, 1, __Pyx_PyInt_From_int, 0, 0, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 28, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_6 = PyObject_RichCompare(__pyx_t_4, __pyx_t_5, Py_LE); __Pyx_XGOTREF(__pyx_t_6); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 28, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_1 = __Pyx_PyObject_IsTrue(__pyx_t_6); if (unlikely(__pyx_t_1 < 0)) __PYX_ERR(0, 28, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (__pyx_t_1) {
/* … */
      goto __pyx_L10;
    }
+29:             C[k] = L[n]
      __pyx_t_6 = __Pyx_GetItemInt(__pyx_v_L, __pyx_v_n, int, 1, __Pyx_PyInt_From_int, 0, 0, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 29, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      if (unlikely(__Pyx_SetItemInt(__pyx_v_C, __pyx_v_k, __pyx_t_6, int, 1, __Pyx_PyInt_From_int, 0, 0, 0) < 0)) __PYX_ERR(0, 29, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
+30:             n += 1
      __pyx_v_n = (__pyx_v_n + 1);
 31:         else:
+32:             C[k] = R[m]
    /*else*/ {
      __pyx_t_6 = __Pyx_GetItemInt(__pyx_v_R, __pyx_v_m, int, 1, __Pyx_PyInt_From_int, 0, 0, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 32, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      if (unlikely(__Pyx_SetItemInt(__pyx_v_C, __pyx_v_k, __pyx_t_6, int, 1, __Pyx_PyInt_From_int, 0, 0, 0) < 0)) __PYX_ERR(0, 32, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
+33:             m += 1
      __pyx_v_m = (__pyx_v_m + 1);
    }
    __pyx_L10:;
+34:         k += 1
    __pyx_v_k = (__pyx_v_k + 1);
  }
 35:     # Обʼєднуємо дві відсортовані частини у масиві-копії
+36:     while n < len(L):
  while (1) {
    __pyx_t_8 = PyObject_Length(__pyx_v_L); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 36, __pyx_L1_error)
    __pyx_t_1 = ((__pyx_v_n < __pyx_t_8) != 0);
    if (!__pyx_t_1) break;
+37:         C[k] = L[n]
    __pyx_t_6 = __Pyx_GetItemInt(__pyx_v_L, __pyx_v_n, int, 1, __Pyx_PyInt_From_int, 0, 0, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (unlikely(__Pyx_SetItemInt(__pyx_v_C, __pyx_v_k, __pyx_t_6, int, 1, __Pyx_PyInt_From_int, 0, 0, 0) < 0)) __PYX_ERR(0, 37, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
+38:         n += 1
    __pyx_v_n = (__pyx_v_n + 1);
+39:         k += 1
    __pyx_v_k = (__pyx_v_k + 1);
  }
+40:     while m < len(R):
  while (1) {
    __pyx_t_8 = PyObject_Length(__pyx_v_R); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 40, __pyx_L1_error)
    __pyx_t_1 = ((__pyx_v_m < __pyx_t_8) != 0);
    if (!__pyx_t_1) break;
+41:         C[k] = R[m]
    __pyx_t_6 = __Pyx_GetItemInt(__pyx_v_R, __pyx_v_m, int, 1, __Pyx_PyInt_From_int, 0, 0, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (unlikely(__Pyx_SetItemInt(__pyx_v_C, __pyx_v_k, __pyx_t_6, int, 1, __Pyx_PyInt_From_int, 0, 0, 0) < 0)) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
+42:         m += 1
    __pyx_v_m = (__pyx_v_m + 1);
+43:         k += 1
    __pyx_v_k = (__pyx_v_k + 1);
  }
 44:     # Копіюємо відсортований масив-копію до оригінальної частини
+45:     for i in range(len(A)):
  __pyx_t_8 = PyObject_Length(__pyx_v_A); if (unlikely(__pyx_t_8 == ((Py_ssize_t)-1))) __PYX_ERR(0, 45, __pyx_L1_error)
  __pyx_t_2 = __pyx_t_8;
  for (__pyx_t_9 = 0; __pyx_t_9 < __pyx_t_2; __pyx_t_9+=1) {
    __pyx_v_i = __pyx_t_9;
+46:         A[i] = C[i]
    __pyx_t_6 = __Pyx_GetItemInt(__pyx_v_C, __pyx_v_i, Py_ssize_t, 1, PyInt_FromSsize_t, 0, 0, 0); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 46, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_6);
    if (unlikely(__Pyx_SetItemInt(__pyx_v_A, __pyx_v_i, __pyx_t_6, Py_ssize_t, 1, PyInt_FromSsize_t, 0, 0, 0) < 0)) __PYX_ERR(0, 46, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
  }
 47:     # Повертаємо відсортовану частину
+48:     return A
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_A);
  __pyx_r = __pyx_v_A;
  goto __pyx_L0;
 49: 
 50: @cython.cdivision(True)
 51: @cython.boundscheck(False)
 52: @cython.wraparound(False)
 53: @cython.nonecheck(False)
+54: def get_array(N:int) -> int:
/* Python wrapper */
static PyObject *__pyx_pw_16merge_sort_light_3get_array(PyObject *__pyx_self, PyObject *__pyx_v_N); /*proto*/
static PyMethodDef __pyx_mdef_16merge_sort_light_3get_array = {"get_array", (PyCFunction)__pyx_pw_16merge_sort_light_3get_array, METH_O, 0};
static PyObject *__pyx_pw_16merge_sort_light_3get_array(PyObject *__pyx_self, PyObject *__pyx_v_N) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_array (wrapper)", 0);
  __pyx_r = __pyx_pf_16merge_sort_light_2get_array(__pyx_self, ((PyObject *)__pyx_v_N));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_16merge_sort_light_2get_array(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_N) {
  long __pyx_v_type;
  PyObject *__pyx_v_our_array = 0;
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("get_array", 0);
/* … */
  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_6);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_AddTraceback("merge_sort_light.get_array", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_our_array);
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
/* … */
  __pyx_tuple__4 = PyTuple_Pack(4, __pyx_n_s_N, __pyx_n_s_type, __pyx_n_s_our_array, __pyx_n_s_i); if (unlikely(!__pyx_tuple__4)) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__4);
  __Pyx_GIVEREF(__pyx_tuple__4);
/* … */
  __pyx_t_1 = PyCFunction_NewEx(&__pyx_mdef_16merge_sort_light_3get_array, NULL, __pyx_n_s_merge_sort_light); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_array, __pyx_t_1) < 0) __PYX_ERR(0, 54, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
 55:     # Заповнюємо масив для сортування
+56:     type = 1
  __pyx_v_type = 1;
+57:     our_array:int = []
  __pyx_t_1 = PyList_New(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 57, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_our_array = __pyx_t_1;
  __pyx_t_1 = 0;
 58:     # Випадково
+59:     if type == 1:
  switch (__pyx_v_type) {
    case 1:
/* … */
    break;
    case 2:
+60:         for i in range(N):
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_N); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 60, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
      __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2); __pyx_t_3 = 0;
      __pyx_t_4 = NULL;
    } else {
      __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 60, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_4 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 60, __pyx_L1_error)
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    for (;;) {
      if (likely(!__pyx_t_4)) {
        if (likely(PyList_CheckExact(__pyx_t_2))) {
          if (__pyx_t_3 >= PyList_GET_SIZE(__pyx_t_2)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 60, __pyx_L1_error)
          #else
          __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 60, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          #endif
        } else {
          if (__pyx_t_3 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 60, __pyx_L1_error)
          #else
          __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 60, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          #endif
        }
      } else {
        __pyx_t_1 = __pyx_t_4(__pyx_t_2);
        if (unlikely(!__pyx_t_1)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 60, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_1);
      }
      __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_1);
      __pyx_t_1 = 0;
/* … */
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
+61:             our_array.append(random.randint(0,(N**2)))
      __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_random); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 61, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_randint); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 61, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_6);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      __pyx_t_5 = PyNumber_Power(__pyx_v_N, __pyx_int_2, Py_None); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 61, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_7 = NULL;
      __pyx_t_8 = 0;
      if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
          PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
          __Pyx_INCREF(__pyx_t_7);
          __Pyx_INCREF(function);
          __Pyx_DECREF_SET(__pyx_t_6, function);
          __pyx_t_8 = 1;
        }
      }
      #if CYTHON_FAST_PYCALL
      if (PyFunction_Check(__pyx_t_6)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_int_0, __pyx_t_5};
        __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 61, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      } else
      #endif
      #if CYTHON_FAST_PYCCALL
      if (__Pyx_PyFastCFunction_Check(__pyx_t_6)) {
        PyObject *__pyx_temp[3] = {__pyx_t_7, __pyx_int_0, __pyx_t_5};
        __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_6, __pyx_temp+1-__pyx_t_8, 2+__pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 61, __pyx_L1_error)
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      } else
      #endif
      {
        __pyx_t_9 = PyTuple_New(2+__pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 61, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
        if (__pyx_t_7) {
          __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_7); __pyx_t_7 = NULL;
        }
        __Pyx_INCREF(__pyx_int_0);
        __Pyx_GIVEREF(__pyx_int_0);
        PyTuple_SET_ITEM(__pyx_t_9, 0+__pyx_t_8, __pyx_int_0);
        __Pyx_GIVEREF(__pyx_t_5);
        PyTuple_SET_ITEM(__pyx_t_9, 1+__pyx_t_8, __pyx_t_5);
        __pyx_t_5 = 0;
        __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_9, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 61, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      }
      __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
      __pyx_t_10 = __Pyx_PyObject_Append(__pyx_v_our_array, __pyx_t_1); if (unlikely(__pyx_t_10 == ((int)-1))) __PYX_ERR(0, 61, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
 62:     # Відсортований
+63:     elif type == 2:
    break;
    case 3:
+64:         for i in range(N):
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_N); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 64, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (likely(PyList_CheckExact(__pyx_t_2)) || PyTuple_CheckExact(__pyx_t_2)) {
      __pyx_t_1 = __pyx_t_2; __Pyx_INCREF(__pyx_t_1); __pyx_t_3 = 0;
      __pyx_t_4 = NULL;
    } else {
      __pyx_t_3 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 64, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_4 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 64, __pyx_L1_error)
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    for (;;) {
      if (likely(!__pyx_t_4)) {
        if (likely(PyList_CheckExact(__pyx_t_1))) {
          if (__pyx_t_3 >= PyList_GET_SIZE(__pyx_t_1)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_2 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_3); __Pyx_INCREF(__pyx_t_2); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 64, __pyx_L1_error)
          #else
          __pyx_t_2 = PySequence_ITEM(__pyx_t_1, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 64, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_2);
          #endif
        } else {
          if (__pyx_t_3 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_2 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_3); __Pyx_INCREF(__pyx_t_2); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 64, __pyx_L1_error)
          #else
          __pyx_t_2 = PySequence_ITEM(__pyx_t_1, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 64, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_2);
          #endif
        }
      } else {
        __pyx_t_2 = __pyx_t_4(__pyx_t_1);
        if (unlikely(!__pyx_t_2)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 64, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_2);
      }
      __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_2);
      __pyx_t_2 = 0;
/* … */
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
+65:             our_array.append(int(i))
      __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_v_i); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 65, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_10 = __Pyx_PyObject_Append(__pyx_v_our_array, __pyx_t_2); if (unlikely(__pyx_t_10 == ((int)-1))) __PYX_ERR(0, 65, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
 66:     # Відсортований у зворотньому порядку
+67:     elif type == 3:
    break;
    default: break;
  }
+68:         for i in range(N):
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_N); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 68, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
      __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2); __pyx_t_3 = 0;
      __pyx_t_4 = NULL;
    } else {
      __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 68, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __pyx_t_4 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 68, __pyx_L1_error)
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    for (;;) {
      if (likely(!__pyx_t_4)) {
        if (likely(PyList_CheckExact(__pyx_t_2))) {
          if (__pyx_t_3 >= PyList_GET_SIZE(__pyx_t_2)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 68, __pyx_L1_error)
          #else
          __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 68, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          #endif
        } else {
          if (__pyx_t_3 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 68, __pyx_L1_error)
          #else
          __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 68, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          #endif
        }
      } else {
        __pyx_t_1 = __pyx_t_4(__pyx_t_2);
        if (unlikely(!__pyx_t_1)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 68, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_1);
      }
      __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_1);
      __pyx_t_1 = 0;
/* … */
    }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
+69:             our_array.append(int(i))
      __pyx_t_1 = __Pyx_PyNumber_Int(__pyx_v_i); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 69, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_10 = __Pyx_PyObject_Append(__pyx_v_our_array, __pyx_t_1); if (unlikely(__pyx_t_10 == ((int)-1))) __PYX_ERR(0, 69, __pyx_L1_error)
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
+70:         our_array = our_array[::-1]
    __pyx_t_2 = __Pyx_PyObject_GetItem(__pyx_v_our_array, __pyx_slice_); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 70, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF_SET(__pyx_v_our_array, __pyx_t_2);
    __pyx_t_2 = 0;
/* … */
  __pyx_slice_ = PySlice_New(Py_None, Py_None, __pyx_int_neg_1); if (unlikely(!__pyx_slice_)) __PYX_ERR(0, 70, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_slice_);
  __Pyx_GIVEREF(__pyx_slice_);
+71:     return our_array
  __Pyx_XDECREF(__pyx_r);
  __Pyx_INCREF(__pyx_v_our_array);
  __pyx_r = __pyx_v_our_array;
  goto __pyx_L0;
