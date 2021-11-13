/*
 * Copyright 2021 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(pilotgenerator_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(542dfe51438011100eddaa278f8db804)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <atsc3/pilotgenerator_cc.h>
// pydoc.h is automatically generated in the build directory
#include <pilotgenerator_cc_pydoc.h>

void bind_pilotgenerator_cc(py::module& m)
{

    using pilotgenerator_cc    = ::gr::atsc3::pilotgenerator_cc;


    py::class_<pilotgenerator_cc, gr::block, gr::basic_block,
        std::shared_ptr<pilotgenerator_cc>>(m, "pilotgenerator_cc", D(pilotgenerator_cc))

        .def(py::init(&pilotgenerator_cc::make),
           py::arg("framesize"),
           py::arg("rate"),
           py::arg("constellation"),
           py::arg("fftsize"),
           py::arg("numpayloadsyms"),
           py::arg("numpreamblesyms"),
           py::arg("plpsize"),
           py::arg("guardinterval"),
           py::arg("pilotpattern"),
           py::arg("pilotboost"),
           py::arg("firstsbs"),
           py::arg("l1bmode"),
           py::arg("l1dmode"),
           D(pilotgenerator_cc,make)
        )
        



        ;




}







