
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQSysInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSysInfo>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSysInfo

//  Constructor QSysInfo::QSysInfo()


static void _init_ctor_QSysInfo_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSysInfo> ();
}

static void _call_ctor_QSysInfo_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSysInfo *> (new QSysInfo ());
}


// static QByteArray QSysInfo::bootUniqueId()


static void _init_f_bootUniqueId_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_bootUniqueId_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)QSysInfo::bootUniqueId ());
}


// static QString QSysInfo::buildAbi()


static void _init_f_buildAbi_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_buildAbi_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QSysInfo::buildAbi ());
}


// static QString QSysInfo::buildCpuArchitecture()


static void _init_f_buildCpuArchitecture_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_buildCpuArchitecture_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QSysInfo::buildCpuArchitecture ());
}


// static QString QSysInfo::currentCpuArchitecture()


static void _init_f_currentCpuArchitecture_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_currentCpuArchitecture_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QSysInfo::currentCpuArchitecture ());
}


// static QString QSysInfo::kernelType()


static void _init_f_kernelType_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_kernelType_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QSysInfo::kernelType ());
}


// static QString QSysInfo::kernelVersion()


static void _init_f_kernelVersion_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_kernelVersion_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QSysInfo::kernelVersion ());
}


// static QString QSysInfo::machineHostName()


static void _init_f_machineHostName_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_machineHostName_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QSysInfo::machineHostName ());
}


// static QByteArray QSysInfo::machineUniqueId()


static void _init_f_machineUniqueId_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_machineUniqueId_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)QSysInfo::machineUniqueId ());
}


// static QString QSysInfo::prettyProductName()


static void _init_f_prettyProductName_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_prettyProductName_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QSysInfo::prettyProductName ());
}


// static QString QSysInfo::productType()


static void _init_f_productType_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_productType_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QSysInfo::productType ());
}


// static QString QSysInfo::productVersion()


static void _init_f_productVersion_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_productVersion_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)QSysInfo::productVersion ());
}



namespace gsi
{

static gsi::Methods methods_QSysInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSysInfo::QSysInfo()\nThis method creates an object of class QSysInfo.", &_init_ctor_QSysInfo_0, &_call_ctor_QSysInfo_0);
  methods += new qt_gsi::GenericStaticMethod ("bootUniqueId", "@brief Static method QByteArray QSysInfo::bootUniqueId()\nThis method is static and can be called without an instance.", &_init_f_bootUniqueId_0, &_call_f_bootUniqueId_0);
  methods += new qt_gsi::GenericStaticMethod ("buildAbi", "@brief Static method QString QSysInfo::buildAbi()\nThis method is static and can be called without an instance.", &_init_f_buildAbi_0, &_call_f_buildAbi_0);
  methods += new qt_gsi::GenericStaticMethod ("buildCpuArchitecture", "@brief Static method QString QSysInfo::buildCpuArchitecture()\nThis method is static and can be called without an instance.", &_init_f_buildCpuArchitecture_0, &_call_f_buildCpuArchitecture_0);
  methods += new qt_gsi::GenericStaticMethod ("currentCpuArchitecture", "@brief Static method QString QSysInfo::currentCpuArchitecture()\nThis method is static and can be called without an instance.", &_init_f_currentCpuArchitecture_0, &_call_f_currentCpuArchitecture_0);
  methods += new qt_gsi::GenericStaticMethod ("kernelType", "@brief Static method QString QSysInfo::kernelType()\nThis method is static and can be called without an instance.", &_init_f_kernelType_0, &_call_f_kernelType_0);
  methods += new qt_gsi::GenericStaticMethod ("kernelVersion", "@brief Static method QString QSysInfo::kernelVersion()\nThis method is static and can be called without an instance.", &_init_f_kernelVersion_0, &_call_f_kernelVersion_0);
  methods += new qt_gsi::GenericStaticMethod ("machineHostName", "@brief Static method QString QSysInfo::machineHostName()\nThis method is static and can be called without an instance.", &_init_f_machineHostName_0, &_call_f_machineHostName_0);
  methods += new qt_gsi::GenericStaticMethod ("machineUniqueId", "@brief Static method QByteArray QSysInfo::machineUniqueId()\nThis method is static and can be called without an instance.", &_init_f_machineUniqueId_0, &_call_f_machineUniqueId_0);
  methods += new qt_gsi::GenericStaticMethod ("prettyProductName", "@brief Static method QString QSysInfo::prettyProductName()\nThis method is static and can be called without an instance.", &_init_f_prettyProductName_0, &_call_f_prettyProductName_0);
  methods += new qt_gsi::GenericStaticMethod ("productType", "@brief Static method QString QSysInfo::productType()\nThis method is static and can be called without an instance.", &_init_f_productType_0, &_call_f_productType_0);
  methods += new qt_gsi::GenericStaticMethod ("productVersion", "@brief Static method QString QSysInfo::productVersion()\nThis method is static and can be called without an instance.", &_init_f_productVersion_0, &_call_f_productVersion_0);
  return methods;
}

gsi::Class<QSysInfo> decl_QSysInfo ("QtCore", "QSysInfo",
  methods_QSysInfo (),
  "@qt\n@brief Binding of QSysInfo");


GSI_QTCORE_PUBLIC gsi::Class<QSysInfo> &qtdecl_QSysInfo () { return decl_QSysInfo; }

}
