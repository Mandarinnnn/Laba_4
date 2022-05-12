#ifndef SHADOWMAPFBO_H
#define SHADOWMAPFBO_H

#include <GL/glew.h>
//����� ShadowMapFBO ������������� ������� ��������� ��� FBO, ������� ����� ����������� ��� ��������� �����
//������ � ���� 2 ��������� � OpenGL.
class ShadowMapFBO
{
public:
    ShadowMapFBO();

    ~ShadowMapFBO();

    bool Init(unsigned int WindowWidth, unsigned int WindowHeight);

    void BindForWriting();

    void BindForReading(GLenum TextureUnit);

private:
    GLuint m_fbo;//'m_fbo' ������������ ������� FBO
    GLuint m_shadowMap;//������� 'm_shadowMap' ��� �� ��������� �� ��������, ������� ����� ������������ ��� ������������ � DEPTH_ATTACHMENT
};

#endif
