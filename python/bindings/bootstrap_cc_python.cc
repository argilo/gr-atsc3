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
/* BINDTOOL_HEADER_FILE(bootstrap_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(13be8b9a7164cb30f64337f2bce1dfc0)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <atsc3/bootstrap_cc.h>
// pydoc.h is automatically generated in the build directory
#include <bootstrap_cc_pydoc.h>

void bind_bootstrap_cc(py::module& m)
{

    using bootstrap_cc    = ::gr::atsc3::bootstrap_cc;


    py::class_<bootstrap_cc, gr::block, gr::basic_block,
        std::shared_ptr<bootstrap_cc>>(m, "bootstrap_cc", D(bootstrap_cc))

        .def(py::init(&bootstrap_cc::make),
           py::arg("fftsize"),
           py::arg("numpayloadsyms"),
           py::arg("numpreamblesyms"),
           py::arg("guardinterval"),
           py::arg("pilotpattern"),
           py::arg("frameinterval"),
           py::arg("l1bmode"),
           py::arg("showlevels"),
           D(bootstrap_cc,make)
        )
        



        ;




}








