//========================================================================================
//  
//  $File: $
//  
//  Owner: mustafa_oksuz
//  
//  $Author: $
//  
//  $DateTime: $
//  
//  $Revision: $
//  
//  $Change: $
//  
//  Copyright 1997-2012 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================


#ifndef __myinfoplistID_h__
#define __myinfoplistID_h__

#include "SDKDef.h"

// Company:
#define kmyinfoplistCompanyKey	kSDKDefPlugInCompanyKey		// Company name used internally for menu paths and the like. Must be globally unique, only A-Z, 0-9, space and "_".
#define kmyinfoplistCompanyValue	kSDKDefPlugInCompanyValue	// Company name displayed externally.

// Plug-in:
#define kmyinfoplistPluginName	"MyInfoPlist"			// Name of this plug-in.
#define kmyinfoplistPrefixNumber	0xe9448 		// Unique prefix number for this plug-in(*Must* be obtained from Adobe Developer Support).
#define kmyinfoplistVersion		kSDKDefPluginVersionString						// Version of this plug-in (for the About Box).
#define kmyinfoplistAuthor		"mustafa_oksuz"					// Author of this plug-in (for the About Box).

// Plug-in Prefix: (please change kmyinfoplistPrefixNumber above to modify the prefix.)
#define kmyinfoplistPrefix		RezLong(kmyinfoplistPrefixNumber)				// The unique numeric prefix for all object model IDs for this plug-in.
#define kmyinfoplistStringPrefix	SDK_DEF_STRINGIZE(kmyinfoplistPrefixNumber)	// The string equivalent of the unique prefix number for  this plug-in.

// Missing plug-in: (see ExtraPluginInfo resource)
#define kmyinfoplistMissingPluginURLValue		kSDKDefPartnersStandardValue_enUS // URL displayed in Missing Plug-in dialog
#define kmyinfoplistMissingPluginAlertValue	kSDKDefMissingPluginAlertValue // Message displayed in Missing Plug-in dialog - provide a string that instructs user how to solve their missing plug-in problem

// PluginID:
DECLARE_PMID(kPlugInIDSpace, kmyinfoplistPluginID, kmyinfoplistPrefix + 0)

// ClassIDs:
DECLARE_PMID(kClassIDSpace, kmyinfoplistActionComponentBoss, kmyinfoplistPrefix + 0)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 3)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 4)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 5)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 6)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 7)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 8)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 9)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 10)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 11)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 12)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 13)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 14)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 15)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 16)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 17)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 18)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 19)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 20)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 21)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 22)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 23)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 24)
//DECLARE_PMID(kClassIDSpace, kmyinfoplistBoss, kmyinfoplistPrefix + 25)


// InterfaceIDs:
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 0)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 1)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 2)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 3)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 4)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 5)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 6)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 7)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 8)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 9)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 10)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 11)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 12)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 13)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 14)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 15)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 16)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 17)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 18)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 19)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 20)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 21)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 22)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 23)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 24)
//DECLARE_PMID(kInterfaceIDSpace, IID_IMYINFOPLISTINTERFACE, kmyinfoplistPrefix + 25)


// ImplementationIDs:
DECLARE_PMID(kImplementationIDSpace, kmyinfoplistActionComponentImpl, kmyinfoplistPrefix + 0 )
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 1)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 2)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 3)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 4)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 5)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 6)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 7)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 8)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 9)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 10)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 11)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 12)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 13)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 14)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 15)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 16)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 17)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 18)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 19)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 20)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 21)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 22)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 23)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 24)
//DECLARE_PMID(kImplementationIDSpace, kmyinfoplistImpl, kmyinfoplistPrefix + 25)


// ActionIDs:
DECLARE_PMID(kActionIDSpace, kmyinfoplistAboutActionID, kmyinfoplistPrefix + 0)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 5)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 6)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 7)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 8)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 9)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 10)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 11)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 12)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 13)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 14)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 15)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 16)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 17)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 18)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 19)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 20)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 21)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 22)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 23)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 24)
//DECLARE_PMID(kActionIDSpace, kmyinfoplistActionID, kmyinfoplistPrefix + 25)


// WidgetIDs:
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 2)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 3)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 4)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 5)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 6)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 7)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 8)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 9)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 10)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 11)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 12)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 13)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 14)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 15)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 16)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 17)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 18)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 19)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 20)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 21)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 22)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 23)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 24)
//DECLARE_PMID(kWidgetIDSpace, kmyinfoplistWidgetID, kmyinfoplistPrefix + 25)


// "About Plug-ins" sub-menu:
#define kmyinfoplistAboutMenuKey			kmyinfoplistStringPrefix "kmyinfoplistAboutMenuKey"
#define kmyinfoplistAboutMenuPath		kSDKDefStandardAboutMenuPath kmyinfoplistCompanyKey

// "Plug-ins" sub-menu:
#define kmyinfoplistPluginsMenuKey 		kmyinfoplistStringPrefix "kmyinfoplistPluginsMenuKey"
#define kmyinfoplistPluginsMenuPath		kSDKDefPlugInsStandardMenuPath kmyinfoplistCompanyKey kSDKDefDelimitMenuPath kmyinfoplistPluginsMenuKey

// Menu item keys:

// Other StringKeys:
#define kmyinfoplistAboutBoxStringKey	kmyinfoplistStringPrefix "kmyinfoplistAboutBoxStringKey"
#define kmyinfoplistTargetMenuPath kmyinfoplistPluginsMenuPath

// Menu item positions:


// Initial data format version numbers
#define kmyinfoplistFirstMajorFormatNumber  RezLong(1)
#define kmyinfoplistFirstMinorFormatNumber  RezLong(0)

// Data format version numbers for the PluginVersion resource 
#define kmyinfoplistCurrentMajorFormatNumber kmyinfoplistFirstMajorFormatNumber
#define kmyinfoplistCurrentMinorFormatNumber kmyinfoplistFirstMinorFormatNumber

#endif // __myinfoplistID_h__
