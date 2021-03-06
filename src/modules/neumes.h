/*
    Copyright (c) 2011 Andrew Hankinson, Alastair Porter, Jamie Klassen, Mahtab Ghamsari-Esfahani, Gregory Burlet
    
    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:
    
    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef NEUMES_H_
#define NEUMES_H_

#include "meielement.h"
#include "meinamespace.h"
#include "exceptions.h"
/* #include_block */

#include "meicommon.h"
#include "sharedmixins.h"
#include "facsimilemixins.h"
#include "neumesmixins.h"
#include "analysismixins.h"
#include "linkalignmixins.h"


namespace mei {
/** \brief 
 */
class MEI_EXPORT Ineume : public MeiElement {
    public:
        Ineume();
        Ineume(const Ineume& other);
        virtual ~Ineume();

/* include <ineume> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        IneumeLogMixIn    m_IneumeLog;
        ColorMixIn    m_Color;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;

    private:
        REGISTER_DECLARATION(Ineume);
};

/** \brief 
 */
class MEI_EXPORT Syllable : public MeiElement {
    public:
        Syllable();
        Syllable(const Syllable& other);
        virtual ~Syllable();

/* include <syllable> */

        CommonMixIn    m_Common;

    private:
        REGISTER_DECLARATION(Syllable);
};

/** \brief 
 */
class MEI_EXPORT Uneume : public MeiElement {
    public:
        Uneume();
        Uneume(const Uneume& other);
        virtual ~Uneume();

/* include <uneume> */

        CommonMixIn    m_Common;
        FacsimileMixIn    m_Facsimile;
        TypedMixIn    m_Typed;
        UneumeLogMixIn    m_UneumeLog;
        TimestampMusicalMixIn    m_TimestampMusical;
        TimestampPerformedMixIn    m_TimestampPerformed;
        StaffidentMixIn    m_Staffident;
        LayeridentMixIn    m_Layerident;
        SyltextMixIn    m_Syltext;
        AltsymMixIn    m_Altsym;
        ColorMixIn    m_Color;
        RelativesizeMixIn    m_Relativesize;
        VisualoffsetHoMixIn    m_VisualoffsetHo;
        XyMixIn    m_Xy;
        VisibilityMixIn    m_Visibility;
        CommonAnlMixIn    m_CommonAnl;
        AlignmentMixIn    m_Alignment;
        HarmonicfunctionMixIn    m_Harmonicfunction;
        MelodicfunctionMixIn    m_Melodicfunction;
        IntervallicdescMixIn    m_Intervallicdesc;
        IntervalharmonicMixIn    m_Intervalharmonic;
        SolfaMixIn    m_Solfa;

    private:
        REGISTER_DECLARATION(Uneume);
};
}
#endif  // NEUMES_H_
