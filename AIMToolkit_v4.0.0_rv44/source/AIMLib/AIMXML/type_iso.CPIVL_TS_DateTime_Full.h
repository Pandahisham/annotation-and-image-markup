/*
*  2007 � 2013 Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CPIVL_TS_DateTime_Full
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CPIVL_TS_DateTime_Full

#include "type_iso.CQSET_TS_DateTime_Full.h"


namespace AIMXML
{

namespace iso
{	

class CPIVL_TS_DateTime_Full : public ::AIMXML::iso::CQSET_TS_DateTime_Full
{
public:
	AIMXML_EXPORT CPIVL_TS_DateTime_Full(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CPIVL_TS_DateTime_Full(CPIVL_TS_DateTime_Full const& init);
	void operator=(CPIVL_TS_DateTime_Full const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CPIVL_TS_DateTime_Full); }
	MemberAttribute<string_type,_altova_mi_iso_altova_CPIVL_TS_DateTime_Full_altova_alignment, 0, 15> alignment;	// alignment CCalendarCycle

	MemberAttribute<bool,_altova_mi_iso_altova_CPIVL_TS_DateTime_Full_altova_institutionSpecified, 0, 0> institutionSpecified;	// institutionSpecified Cboolean
	MemberElement<iso::CIVL_TS_DateTime_Full, _altova_mi_iso_altova_CPIVL_TS_DateTime_Full_altova_phase> phase;
	struct phase { typedef Iterator<iso::CIVL_TS_DateTime_Full> iterator; };
	MemberElement<iso::CPQ, _altova_mi_iso_altova_CPIVL_TS_DateTime_Full_altova_period> period;
	struct period { typedef Iterator<iso::CPQ> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CPIVL_TS_DateTime_Full
