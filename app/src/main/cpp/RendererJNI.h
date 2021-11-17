#include <jni.h>

//
// Created by wegatron on 11/17/21.
//

#ifndef OPENGLES_DEMO_RENDERERJNI_H
#define OPENGLES_DEMO_RENDERERJNI_H

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_com_zsw_opengles_1demo_RendererJNI_glesInit(JNIEnv * env, jobject thiz);

JNIEXPORT void JNICALL Java_com_zsw_opengles_1demo_RendererJNI_glesRender(JNIEnv * env, jobject thiz);

JNIEXPORT void JNICALL Java_com_zsw_opengles_1demo_RendererJNI_glesResize(JNIEnv * env, jobject thiz,
        jint width, jint height);

JNIEXPORT void JNICALL Java_com_zsw_opengles_1demo_RendererJNI_readShaderFile(JNIEnv * env,
jobject thiz, jobject asset_mgr);

#ifdef __cplusplus
}
#endif

#endif //OPENGLES_DEMO_RENDERERJNI_H
