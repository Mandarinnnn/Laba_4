#ifndef SHADOWMAPFBO_H
#define SHADOWMAPFBO_H

#include <GL/glew.h>
//Класс ShadowMapFBO предоставляет простой интерфейс для FBO, который будет использован для наложения теней
//Внутри у него 2 указателя к OpenGL.
class ShadowMapFBO
{
public:
    ShadowMapFBO();

    ~ShadowMapFBO();

    bool Init(unsigned int WindowWidth, unsigned int WindowHeight);

    void BindForWriting();

    void BindForReading(GLenum TextureUnit);

private:
    GLuint m_fbo;//'m_fbo' представляет текущий FBO
    GLuint m_shadowMap;//Атрибут 'm_shadowMap' так же указатель на текстуру, которая будет использована для прикрепления к DEPTH_ATTACHMENT
};

#endif
