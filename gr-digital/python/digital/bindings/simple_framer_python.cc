/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(simple_framer.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(61652087ff74cf54a99f8f906e2eb281)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/simple_framer.h>
// pydoc.h is automatically generated in the build directory
#include <simple_framer_pydoc.h>

void bind_simple_framer(py::module& m)
{

    using simple_framer = ::gr::digital::simple_framer;


    py::class_<simple_framer, gr::block, gr::basic_block, std::shared_ptr<simple_framer>>(
        m, "simple_framer", D(simple_framer))

        .def(py::init(&simple_framer::make),
             py::arg("payload_bytesize"),
             D(simple_framer, make))


        ;
}