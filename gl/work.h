// Copyright 2015 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#ifdef os_linux
#include <GLES2/gl2.h>
#endif
#ifdef os_ios
#include <OpenGLES/ES2/glext.h>
#endif
#ifdef os_osx
#include <OpenGL/gl3.h>
#endif

#include <stdint.h>
#include <stdlib.h>

typedef enum {
	glfnUNDEFINED,

	glfnActiveTexture,
	glfnAttachShader,
	glfnBindAttribLocation,
	glfnBindBuffer,
	glfnBindFramebuffer,
	glfnBindRenderbuffer,
	glfnBindTexture,
	glfnBlendColor,
	glfnBlendEquation,
	glfnBlendEquationSeparate,
	glfnBlendFunc,
	glfnBlendFuncSeparate,
	glfnBufferData,
	glfnBufferSubData,
	glfnCheckFramebufferStatus,
	glfnClear,
	glfnClearColor,
	glfnClearDepthf,
	glfnClearStencil,
	glfnColorMask,
	glfnCompileShader,
	glfnCompressedTexImage2D,
	glfnCompressedTexSubImage2D,
	glfnCopyTexImage2D,
	glfnCopyTexSubImage2D,
	glfnCreateProgram,
	glfnCreateShader,
	glfnCullFace,
	glfnDeleteBuffer,
	glfnDeleteFramebuffer,
	glfnDeleteProgram,
	glfnDeleteRenderbuffer,
	glfnDeleteShader,
	glfnDeleteTexture,
	glfnDepthFunc,
	glfnDepthRangef,
	glfnDepthMask,
	glfnDetachShader,
	glfnDisable,
	glfnDisableVertexAttribArray,
	glfnDrawArrays,
	glfnDrawElements,
	glfnEnable,
	glfnEnableVertexAttribArray,
	glfnFinish,
	glfnFlush,
	glfnFramebufferRenderbuffer,
	glfnFramebufferTexture2D,
	glfnFrontFace,
	glfnGenBuffer,
	glfnGenFramebuffer,
	glfnGenRenderbuffer,
	glfnGenTexture,
	glfnGenerateMipmap,
	glfnGetActiveAttrib,
	glfnGetActiveUniform,
	glfnGetAttachedShaders,
	glfnGetAttribLocation,
	glfnGetBooleanv,
	glfnGetBufferParameteri,
	glfnGetError,
	glfnGetFloatv,
	glfnGetFramebufferAttachmentParameteriv,
	glfnGetIntegerv,
	glfnGetProgramInfoLog,
	glfnGetProgramiv,
	glfnGetRenderbufferParameteriv,
	glfnGetShaderInfoLog,
	glfnGetShaderPrecisionFormat,
	glfnGetShaderSource,
	glfnGetShaderiv,
	glfnGetString,
	glfnGetTexParameterfv,
	glfnGetTexParameteriv,
	glfnGetUniformLocation,
	glfnGetUniformfv,
	glfnGetUniformiv,
	glfnGetVertexAttribfv,
	glfnGetVertexAttribiv,
	glfnHint,
	glfnIsBuffer,
	glfnIsEnabled,
	glfnIsFramebuffer,
	glfnIsProgram,
	glfnIsRenderbuffer,
	glfnIsShader,
	glfnIsTexture,
	glfnLineWidth,
	glfnLinkProgram,
	glfnPixelStorei,
	glfnPolygonOffset,
	glfnReadPixels,
	glfnReleaseShaderCompiler,
	glfnRenderbufferStorage,
	glfnSampleCoverage,
	glfnScissor,
	glfnShaderSource,
	glfnStencilFunc,
	glfnStencilFuncSeparate,
	glfnStencilMask,
	glfnStencilMaskSeparate,
	glfnStencilOp,
	glfnStencilOpSeparate,
	glfnTexImage2D,
	glfnTexParameterf,
	glfnTexParameterfv,
	glfnTexParameteri,
	glfnTexParameteriv,
	glfnTexSubImage2D,
	glfnUniform1f,
	glfnUniform1fv,
	glfnUniform1i,
	glfnUniform1iv,
	glfnUniform2f,
	glfnUniform2fv,
	glfnUniform2i,
	glfnUniform2iv,
	glfnUniform3f,
	glfnUniform3fv,
	glfnUniform3i,
	glfnUniform3iv,
	glfnUniform4f,
	glfnUniform4fv,
	glfnUniform4i,
	glfnUniform4iv,
	glfnUniformMatrix2fv,
	glfnUniformMatrix3fv,
	glfnUniformMatrix4fv,
	glfnUseProgram,
	glfnValidateProgram,
	glfnVertexAttrib1f,
	glfnVertexAttrib1fv,
	glfnVertexAttrib2f,
	glfnVertexAttrib2fv,
	glfnVertexAttrib3f,
	glfnVertexAttrib3fv,
	glfnVertexAttrib4f,
	glfnVertexAttrib4fv,
	glfnVertexAttribPointer,
	glfnViewport,
} glfn;

struct fnargs {
	glfn fn;

	uintptr_t a0;
	uintptr_t a1;
	uintptr_t a2;
	uintptr_t a3;
	uintptr_t a4;
	uintptr_t a5;
	uintptr_t a6;
	uintptr_t a7;
};

extern uintptr_t ret;

extern uintptr_t processFn(struct fnargs* args, char* parg);
