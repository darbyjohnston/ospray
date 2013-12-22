#include "testrenderer.h"

namespace ospray {
  extern "C" void ispc__TestRenderer_renderFrame(void *fb, int frameID);

  void TestRenderer::renderFrame(FrameBuffer *fb,
                                 Model *world)
  {
    Assert(fb && "null frame buffer handle");
    ispc__TestRenderer_renderFrame(fb->inISPC(),frameID++);
  }

  extern "C" Renderer *ospray_create_renderer__test_screen()
  {
    return new TestRenderer;
  }
};
