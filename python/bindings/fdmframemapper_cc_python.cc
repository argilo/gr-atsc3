/*
 * Copyright 2023 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(fdmframemapper_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(8a30938a74fe95cc1afae8934b4c3dd0)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <atsc3/fdmframemapper_cc.h>
// pydoc.h is automatically generated in the build directory
#include <fdmframemapper_cc_pydoc.h>

void bind_fdmframemapper_cc(py::module& m)
{

    using fdmframemapper_cc    = ::gr::atsc3::fdmframemapper_cc;


    py::class_<fdmframemapper_cc, gr::block, gr::basic_block,
        std::shared_ptr<fdmframemapper_cc>>(m, "fdmframemapper_cc", D(fdmframemapper_cc))

        .def(py::init(&fdmframemapper_cc::make),
           py::arg("framesize1st"),
           py::arg("rate1st"),
           py::arg("fecmode1st"),
           py::arg("constellation1st"),
           py::arg("timode1st"),
           py::arg("tiblocks1st"),
           py::arg("tifecblocksmax1st"),
           py::arg("tifecblocks1st"),
           py::arg("framesize2nd"),
           py::arg("rate2nd"),
           py::arg("fecmode2nd"),
           py::arg("constellation2nd"),
           py::arg("timode2nd"),
           py::arg("tiblocks2nd"),
           py::arg("tifecblocksmax2nd"),
           py::arg("tifecblocks2nd"),
           py::arg("plpsplit"),
           py::arg("fftsize"),
           py::arg("numpayloadsyms"),
           py::arg("numpreamblesyms"),
           py::arg("guardinterval"),
           py::arg("pilotpattern"),
           py::arg("pilotboost"),
           py::arg("firstsbs"),
           py::arg("fimode"),
           py::arg("cred"),
           py::arg("flmode"),
           py::arg("flen"),
           py::arg("paprmode"),
           py::arg("l1bmode"),
           py::arg("l1dmode"),
           D(fdmframemapper_cc,make)
        )
        



        ;




}








