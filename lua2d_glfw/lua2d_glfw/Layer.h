/*
 Copyright (c) 2015 chenbingfeng (iichenbf#gmail.com)

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#ifndef __Lua2d__Layer__
#define __Lua2d__Layer__

#include <vector>
#include <memory>


#include "utils.h"
#include "Node.h"
#include "Sprite.h"
#include "ImageSprite.h"
#include "Renderer.h"

NS_L2D_BEGIN

class Layer;
class Sprite;
class Renderer;
class ImageSprite;
typedef std::shared_ptr<Layer> SPLayer;
typedef std::shared_ptr<Sprite> SPSprite;
typedef std::shared_ptr<Renderer> SPRenderer;
typedef std::shared_ptr<ImageSprite> SPImageSprite;

class Layer :public Node
{
public:
    static SPLayer create();

    void resume();
    void pause();
    void addSprite(SPSprite sprite);
    void draw(SPRenderer renderer);

private:
    Layer();
    std::vector<SPSprite> _sprites;
};

NS_L2D_END
#endif /* defined(__Lua2d__Layer__) */