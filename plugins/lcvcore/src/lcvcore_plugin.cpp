/****************************************************************************
**
** Copyright (C) 2014 Dinu SV.
** (contact: mail@dinusv.com)
** This file is part of Live CV application.
**
** GNU General Public License Usage
** 
** This file may be used under the terms of the GNU General Public License 
** version 3.0 as published by the Free Software Foundation and appearing 
** in the file LICENSE.GPL included in the packaging of this file.  Please 
** review the following information to ensure the GNU General Public License 
** version 3.0 requirements will be met: http://www.gnu.org/copyleft/gpl.html.
**
****************************************************************************/

#include "lcvcore_plugin.hpp"
#include "qmat.h"
#include "qmataccess.h"
#include "qmatview.h"
#include "qimread.h"
#include "qmatempty.h"
#include "qmatroi.h"
#include "qmatread.h"
#include "qmat2darray.h"
#include "qcamcapture.h"
#include "qvideocapture.h"
#include "qmatdraw.h"
#include "qmatbuffer.h"
#include "qalphamerge.h"
#include "qabsdiff.h"
#include "qdrawhistogram.h"
#include "qmatlist.h"

#include <qqml.h>

void LcvcorePlugin::registerTypes(const char *uri){
    // @uri modules.lcvcore
    qmlRegisterType<QMat>(          uri, 1, 0, "Mat");
    qmlRegisterType<QMatAccess>(    uri, 1, 0, "MatAccess");
    qmlRegisterType<QMatView>(      uri, 1, 0, "MatView");
    qmlRegisterType<QImRead>(       uri, 1, 0, "ImRead");
    qmlRegisterType<QMatEmpty>(     uri, 1, 0, "MatEmpty");
    qmlRegisterType<QMatRoi>(       uri, 1, 0, "MatRoi");
    qmlRegisterType<QMatRead>(      uri, 1, 0, "MatRead");
    qmlRegisterType<QMat2DArray>(   uri, 1, 0, "Mat2DArray");
    qmlRegisterType<QCamCapture>(   uri, 1, 0, "CamCapture");
    qmlRegisterType<QVideoCapture>( uri, 1, 0, "VideoCapture");
    qmlRegisterType<QMatDraw>(      uri, 1, 0, "MatDraw");
    qmlRegisterType<QMatBuffer>(    uri, 1, 0, "MatBuffer");
    qmlRegisterType<QAlphaMerge>(   uri, 1, 0, "AlphaMerge");
    qmlRegisterType<QAbsDiff>(      uri, 1, 0, "AbsDiff");
    qmlRegisterType<QDrawHistogram>(uri, 1, 0, "DrawHistogram");
    qmlRegisterType<QMatList>(      uri, 1, 0, "MatList");
}

