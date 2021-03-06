#include "performance.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;
using mei::MeiNamespace;
using mei::AttributeNotFoundException;

mei::AvFile::AvFile() :
    MeiElement("avFile"),
    m_Common(this),
    m_Declaring(this),
    m_Internetmedia(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_Typed(this)
{
}
REGISTER_DEFINITION(mei::AvFile, "avFile");
mei::AvFile::~AvFile() {}
mei::AvFile::AvFile(const AvFile& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Internetmedia(this),
    m_Facsimile(this),
    m_Pointing(this),
    m_Typed(this)
{
}

/* include <avFile> */

mei::Clip::Clip() :
    MeiElement("clip"),
    m_Common(this),
    m_Declaring(this),
    m_Startid(this)
{
}
REGISTER_DEFINITION(mei::Clip, "clip");
mei::Clip::~Clip() {}
mei::Clip::Clip(const Clip& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Startid(this)
{
}

MeiAttribute* mei::Clip::getBegin() {
    if (!hasAttribute("begin")) {
        throw AttributeNotFoundException("begin");
    }
    return getAttribute("begin");
};

void mei::Clip::setBegin(std::string _begin) {
    MeiAttribute *a = new MeiAttribute("begin", _begin);
    addAttribute(a);
};

bool mei::Clip::hasBegin() {
    return hasAttribute("begin");
};

void mei::Clip::removeBegin() {
    removeAttribute("begin");
};
MeiAttribute* mei::Clip::getEnd() {
    if (!hasAttribute("end")) {
        throw AttributeNotFoundException("end");
    }
    return getAttribute("end");
};

void mei::Clip::setEnd(std::string _end) {
    MeiAttribute *a = new MeiAttribute("end", _end);
    addAttribute(a);
};

bool mei::Clip::hasEnd() {
    return hasAttribute("end");
};

void mei::Clip::removeEnd() {
    removeAttribute("end");
};
MeiAttribute* mei::Clip::getBetype() {
    if (!hasAttribute("betype")) {
        throw AttributeNotFoundException("betype");
    }
    return getAttribute("betype");
};

void mei::Clip::setBetype(std::string _betype) {
    MeiAttribute *a = new MeiAttribute("betype", _betype);
    addAttribute(a);
};

bool mei::Clip::hasBetype() {
    return hasAttribute("betype");
};

void mei::Clip::removeBetype() {
    removeAttribute("betype");
};
/* include <clip> */

mei::Performance::Performance() :
    MeiElement("performance"),
    m_Common(this),
    m_Declaring(this)
{
}
REGISTER_DEFINITION(mei::Performance, "performance");
mei::Performance::~Performance() {}
mei::Performance::Performance(const Performance& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this)
{
}

/* include <performance> */

mei::Recording::Recording() :
    MeiElement("recording"),
    m_Common(this),
    m_Declaring(this),
    m_Startid(this)
{
}
REGISTER_DEFINITION(mei::Recording, "recording");
mei::Recording::~Recording() {}
mei::Recording::Recording(const Recording& other) :
    MeiElement(other),
    m_Common(this),
    m_Declaring(this),
    m_Startid(this)
{
}

MeiAttribute* mei::Recording::getBegin() {
    if (!hasAttribute("begin")) {
        throw AttributeNotFoundException("begin");
    }
    return getAttribute("begin");
};

void mei::Recording::setBegin(std::string _begin) {
    MeiAttribute *a = new MeiAttribute("begin", _begin);
    addAttribute(a);
};

bool mei::Recording::hasBegin() {
    return hasAttribute("begin");
};

void mei::Recording::removeBegin() {
    removeAttribute("begin");
};
MeiAttribute* mei::Recording::getEnd() {
    if (!hasAttribute("end")) {
        throw AttributeNotFoundException("end");
    }
    return getAttribute("end");
};

void mei::Recording::setEnd(std::string _end) {
    MeiAttribute *a = new MeiAttribute("end", _end);
    addAttribute(a);
};

bool mei::Recording::hasEnd() {
    return hasAttribute("end");
};

void mei::Recording::removeEnd() {
    removeAttribute("end");
};
MeiAttribute* mei::Recording::getBetype() {
    if (!hasAttribute("betype")) {
        throw AttributeNotFoundException("betype");
    }
    return getAttribute("betype");
};

void mei::Recording::setBetype(std::string _betype) {
    MeiAttribute *a = new MeiAttribute("betype", _betype);
    addAttribute(a);
};

bool mei::Recording::hasBetype() {
    return hasAttribute("betype");
};

void mei::Recording::removeBetype() {
    removeAttribute("betype");
};
/* include <recording> */



