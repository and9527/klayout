
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQAudioInput.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAudioInput>
#include <QAudioDevice>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAudioInput

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAudioInput::staticMetaObject);
}


// QAudioDevice QAudioInput::device()


static void _init_f_device_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAudioDevice > ();
}

static void _call_f_device_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAudioDevice > ((QAudioDevice)((QAudioInput *)cls)->device ());
}


// void QAudioInput::deviceChanged()


static void _init_f_deviceChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_deviceChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->deviceChanged ();
}


// bool QAudioInput::isMuted()


static void _init_f_isMuted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isMuted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAudioInput *)cls)->isMuted ());
}


// void QAudioInput::mutedChanged(bool muted)


static void _init_f_mutedChanged_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("muted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_mutedChanged_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->mutedChanged (arg1);
}


// void QAudioInput::setDevice(const QAudioDevice &device)


static void _init_f_setDevice_2484 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<const QAudioDevice & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDevice_2484 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDevice &arg1 = gsi::arg_reader<const QAudioDevice & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->setDevice (arg1);
}


// void QAudioInput::setMuted(bool muted)


static void _init_f_setMuted_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("muted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMuted_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->setMuted (arg1);
}


// void QAudioInput::setVolume(float volume)


static void _init_f_setVolume_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("volume");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setVolume_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->setVolume (arg1);
}


// float QAudioInput::volume()


static void _init_f_volume_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<float > ();
}

static void _call_f_volume_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<float > ((float)((QAudioInput *)cls)->volume ());
}


// void QAudioInput::volumeChanged(float volume)


static void _init_f_volumeChanged_970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("volume");
  decl->add_arg<float > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_volumeChanged_970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  float arg1 = gsi::arg_reader<float >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput *)cls)->volumeChanged (arg1);
}


// static QString QAudioInput::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QAudioInput::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAudioInput () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("device", "@brief Method QAudioDevice QAudioInput::device()\n", true, &_init_f_device_c0, &_call_f_device_c0);
  methods += new qt_gsi::GenericMethod ("deviceChanged", "@brief Method void QAudioInput::deviceChanged()\n", false, &_init_f_deviceChanged_0, &_call_f_deviceChanged_0);
  methods += new qt_gsi::GenericMethod ("isMuted?", "@brief Method bool QAudioInput::isMuted()\n", true, &_init_f_isMuted_c0, &_call_f_isMuted_c0);
  methods += new qt_gsi::GenericMethod ("mutedChanged", "@brief Method void QAudioInput::mutedChanged(bool muted)\n", false, &_init_f_mutedChanged_864, &_call_f_mutedChanged_864);
  methods += new qt_gsi::GenericMethod ("setDevice", "@brief Method void QAudioInput::setDevice(const QAudioDevice &device)\n", false, &_init_f_setDevice_2484, &_call_f_setDevice_2484);
  methods += new qt_gsi::GenericMethod ("setMuted", "@brief Method void QAudioInput::setMuted(bool muted)\n", false, &_init_f_setMuted_864, &_call_f_setMuted_864);
  methods += new qt_gsi::GenericMethod ("setVolume|volume=", "@brief Method void QAudioInput::setVolume(float volume)\n", false, &_init_f_setVolume_970, &_call_f_setVolume_970);
  methods += new qt_gsi::GenericMethod (":volume", "@brief Method float QAudioInput::volume()\n", true, &_init_f_volume_c0, &_call_f_volume_c0);
  methods += new qt_gsi::GenericMethod ("volumeChanged", "@brief Method void QAudioInput::volumeChanged(float volume)\n", false, &_init_f_volumeChanged_970, &_call_f_volumeChanged_970);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAudioInput::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAudioInput> decl_QAudioInput (qtdecl_QObject (), "QtMultimedia", "QAudioInput_Native",
  methods_QAudioInput (),
  "@hide\n@alias QAudioInput");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAudioInput> &qtdecl_QAudioInput () { return decl_QAudioInput; }

}


class QAudioInput_Adaptor : public QAudioInput, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAudioInput_Adaptor();

  //  [adaptor ctor] QAudioInput::QAudioInput(QObject *parent)
  QAudioInput_Adaptor() : QAudioInput()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioInput::QAudioInput(QObject *parent)
  QAudioInput_Adaptor(QObject *parent) : QAudioInput(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioInput::QAudioInput(const QAudioDevice &deviceInfo, QObject *parent)
  QAudioInput_Adaptor(const QAudioDevice &deviceInfo) : QAudioInput(deviceInfo)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAudioInput::QAudioInput(const QAudioDevice &deviceInfo, QObject *parent)
  QAudioInput_Adaptor(const QAudioDevice &deviceInfo, QObject *parent) : QAudioInput(deviceInfo, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAudioInput::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAudioInput_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAudioInput::isSignalConnected(signal);
  }

  //  [expose] int QAudioInput::receivers(const char *signal)
  int fp_QAudioInput_receivers_c1731 (const char *signal) const {
    return QAudioInput::receivers(signal);
  }

  //  [expose] QObject *QAudioInput::sender()
  QObject * fp_QAudioInput_sender_c0 () const {
    return QAudioInput::sender();
  }

  //  [expose] int QAudioInput::senderSignalIndex()
  int fp_QAudioInput_senderSignalIndex_c0 () const {
    return QAudioInput::senderSignalIndex();
  }

  //  [adaptor impl] bool QAudioInput::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QAudioInput::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAudioInput_Adaptor, bool, QEvent *>(&QAudioInput_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QAudioInput::event(_event);
    }
  }

  //  [adaptor impl] bool QAudioInput::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QAudioInput::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAudioInput_Adaptor, bool, QObject *, QEvent *>(&QAudioInput_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QAudioInput::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] void QAudioInput::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QAudioInput::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAudioInput_Adaptor, QChildEvent *>(&QAudioInput_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QAudioInput::childEvent(event);
    }
  }

  //  [adaptor impl] void QAudioInput::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QAudioInput::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAudioInput_Adaptor, QEvent *>(&QAudioInput_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QAudioInput::customEvent(event);
    }
  }

  //  [adaptor impl] void QAudioInput::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAudioInput::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAudioInput_Adaptor, const QMetaMethod &>(&QAudioInput_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAudioInput::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAudioInput::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QAudioInput::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAudioInput_Adaptor, QTimerEvent *>(&QAudioInput_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QAudioInput::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAudioInput_Adaptor::~QAudioInput_Adaptor() { }

//  Constructor QAudioInput::QAudioInput(QObject *parent) (adaptor class)

static void _init_ctor_QAudioInput_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QAudioInput_Adaptor> ();
}

static void _call_ctor_QAudioInput_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QAudioInput_Adaptor *> (new QAudioInput_Adaptor (arg1));
}


//  Constructor QAudioInput::QAudioInput(const QAudioDevice &deviceInfo, QObject *parent) (adaptor class)

static void _init_ctor_QAudioInput_Adaptor_3678 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("deviceInfo");
  decl->add_arg<const QAudioDevice & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QAudioInput_Adaptor> ();
}

static void _call_ctor_QAudioInput_Adaptor_3678 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QAudioDevice &arg1 = gsi::arg_reader<const QAudioDevice & >() (args, heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QAudioInput_Adaptor *> (new QAudioInput_Adaptor (arg1, arg2));
}


// void QAudioInput::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAudioInput::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QAudioInput::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAudioInput::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAudioInput_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAudioInput::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAudioInput_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAudioInput::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QAudioInput_Adaptor *)cls)->fp_QAudioInput_isSignalConnected_c2394 (arg1));
}


// exposed int QAudioInput::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QAudioInput_Adaptor *)cls)->fp_QAudioInput_receivers_c1731 (arg1));
}


// exposed QObject *QAudioInput::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAudioInput_Adaptor *)cls)->fp_QAudioInput_sender_c0 ());
}


// exposed int QAudioInput::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAudioInput_Adaptor *)cls)->fp_QAudioInput_senderSignalIndex_c0 ());
}


// void QAudioInput::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAudioInput_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAudioInput_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAudioInput> &qtdecl_QAudioInput ();

static gsi::Methods methods_QAudioInput_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioInput::QAudioInput(QObject *parent)\nThis method creates an object of class QAudioInput.", &_init_ctor_QAudioInput_Adaptor_1302, &_call_ctor_QAudioInput_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAudioInput::QAudioInput(const QAudioDevice &deviceInfo, QObject *parent)\nThis method creates an object of class QAudioInput.", &_init_ctor_QAudioInput_Adaptor_3678, &_call_ctor_QAudioInput_Adaptor_3678);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAudioInput::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAudioInput::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAudioInput::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAudioInput::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAudioInput::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAudioInput::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAudioInput::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAudioInput::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAudioInput::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAudioInput::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAudioInput_Adaptor> decl_QAudioInput_Adaptor (qtdecl_QAudioInput (), "QtMultimedia", "QAudioInput",
  methods_QAudioInput_Adaptor (),
  "@qt\n@brief Binding of QAudioInput");

}
