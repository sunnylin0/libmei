#include "linkalign.h"
using namespace std;

Timeline::Timeline() : m_Common(this){
    m_Base.setName("timeline");
};
//REGISTER_DEFINITION(Timeline, "timeline");

string Timeline::getAvrefValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("avref")) {
        throw AttributeNotFoundException("avref");
    }
    return m_Base.getAttributeValue("avref");
};
            
MeiAttribute* Timeline::getAvref() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("avref")) {
        throw AttributeNotFoundException("avref");
    }
    return m_Base.getAttribute("avref");
};
            
void Timeline::setAvref(string _avref) {
    if(!m_Base.hasAttribute("avref")) {
        MeiAttribute * a = new MeiAttribute("avref", _avref);
        m_Base.addAttribute(a);
    }
};
            
bool Timeline::hasAvref() {
    return m_Base.hasAttribute("avref");
};
            
string Timeline::getOriginValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("origin")) {
        throw AttributeNotFoundException("origin");
    }
    return m_Base.getAttributeValue("origin");
};
            
MeiAttribute* Timeline::getOrigin() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("origin")) {
        throw AttributeNotFoundException("origin");
    }
    return m_Base.getAttribute("origin");
};
            
void Timeline::setOrigin(string _origin) {
    if(!m_Base.hasAttribute("origin")) {
        MeiAttribute * a = new MeiAttribute("origin", _origin);
        m_Base.addAttribute(a);
    }
};
            
bool Timeline::hasOrigin() {
    return m_Base.hasAttribute("origin");
};
            
When::When() : m_Common(this), m_Datapointing(this){
    m_Base.setName("when");
};
//REGISTER_DEFINITION(When, "when");

string When::getAbsoluteValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("absolute")) {
        throw AttributeNotFoundException("absolute");
    }
    return m_Base.getAttributeValue("absolute");
};
            
MeiAttribute* When::getAbsolute() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("absolute")) {
        throw AttributeNotFoundException("absolute");
    }
    return m_Base.getAttribute("absolute");
};
            
void When::setAbsolute(string _absolute) {
    if(!m_Base.hasAttribute("absolute")) {
        MeiAttribute * a = new MeiAttribute("absolute", _absolute);
        m_Base.addAttribute(a);
    }
};
            
bool When::hasAbsolute() {
    return m_Base.hasAttribute("absolute");
};
            
string When::getIntervalValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("interval")) {
        throw AttributeNotFoundException("interval");
    }
    return m_Base.getAttributeValue("interval");
};
            
MeiAttribute* When::getInterval() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("interval")) {
        throw AttributeNotFoundException("interval");
    }
    return m_Base.getAttribute("interval");
};
            
void When::setInterval(string _interval) {
    if(!m_Base.hasAttribute("interval")) {
        MeiAttribute * a = new MeiAttribute("interval", _interval);
        m_Base.addAttribute(a);
    }
};
            
bool When::hasInterval() {
    return m_Base.hasAttribute("interval");
};
            
string When::getInttypeValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("inttype")) {
        throw AttributeNotFoundException("inttype");
    }
    return m_Base.getAttributeValue("inttype");
};
            
MeiAttribute* When::getInttype() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("inttype")) {
        throw AttributeNotFoundException("inttype");
    }
    return m_Base.getAttribute("inttype");
};
            
void When::setInttype(string _inttype) {
    if(!m_Base.hasAttribute("inttype")) {
        MeiAttribute * a = new MeiAttribute("inttype", _inttype);
        m_Base.addAttribute(a);
    }
};
            
bool When::hasInttype() {
    return m_Base.hasAttribute("inttype");
};
            
string When::getSinceValue() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("since")) {
        throw AttributeNotFoundException("since");
    }
    return m_Base.getAttributeValue("since");
};
            
MeiAttribute* When::getSince() throw(AttributeNotFoundException) {
    if (!m_Base.hasAttribute("since")) {
        throw AttributeNotFoundException("since");
    }
    return m_Base.getAttribute("since");
};
            
void When::setSince(string _since) {
    if(!m_Base.hasAttribute("since")) {
        MeiAttribute * a = new MeiAttribute("since", _since);
        m_Base.addAttribute(a);
    }
};
            
bool When::hasSince() {
    return m_Base.hasAttribute("since");
};
            