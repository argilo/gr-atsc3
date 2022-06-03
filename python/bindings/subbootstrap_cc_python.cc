/*
 * Copyright 2022 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(subbootstrap_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b5660e2eb8eeb3b3c87f72bca5a87dd9)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <atsc3/subbootstrap_cc.h>
// pydoc.h is automatically generated in the build directory
#include <subbootstrap_cc_pydoc.h>

void bind_subbootstrap_cc(py::module& m)
{

    using subbootstrap_cc    = ::gr::atsc3::subbootstrap_cc;


    py::class_<subbootstrap_cc, gr::block, gr::basic_block,
        std::shared_ptr<subbootstrap_cc>>(m, "subbootstrap_cc", D(subbootstrap_cc))

        .def(py::init(&subbootstrap_cc::make),
           py::arg("fftsize"),
           py::arg("numpayloadsyms"),
           py::arg("numpreamblesyms"),
           py::arg("guardinterval"),
           py::arg("pilotpattern"),
           py::arg("fftsize2nd"),
           py::arg("numpayloadsyms2nd"),
           py::arg("guardinterval2nd"),
           py::arg("pilotpattern2nd"),
           py::arg("frameinterval"),
           py::arg("l1bmode"),
           py::arg("outputmode"),
           py::arg("showlevels"),
           py::arg("vclip"),
           D(subbootstrap_cc,make)
        )
        



        ;




}








