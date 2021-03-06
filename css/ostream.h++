/**
 * The MIT License (MIT)
 *
 * Copyright © 2019 Ruben Van Boxem
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 **/

#ifndef SKUI_CSS_OSTREAM_H
#define SKUI_CSS_OSTREAM_H

#include "css/color.h++"
#include "css/length.h++"
#include "css/property.h++"
#include "css/timing_function.h++"

#include "css/property/animation.h++"

#include <iosfwd>

namespace skui::css
{
  std::ostream& operator<<(std::ostream& os, const inherit_t& inherit);
  std::ostream& operator<<(std::ostream& os, const initial_t& initial);

  std::ostream& operator<<(std::ostream& os, const color& color);

  std::ostream& operator<<(std::ostream& os, const unit unit);
  std::ostream& operator<<(std::ostream& os, const length& length);

  std::ostream& operator<<(std::ostream& os, const steps& steps);
  std::ostream& operator<<(std::ostream& os, const cubic_bezier& cubic_bezier);
  std::ostream& operator<<(std::ostream& os, const timing_function& timing_function);

  std::ostream& operator<<(std::ostream& os, const animation_direction&);
  std::ostream& operator<<(std::ostream& os, const fill_mode&);
  std::ostream& operator<<(std::ostream& os, const play_state&);
  std::ostream& operator<<(std::ostream& os, const timing_function&);
  std::ostream& operator<<(std::ostream& os, const infinite_t&);
  std::ostream& operator<<(std::ostream& os, const animation& animation);
}

#endif
