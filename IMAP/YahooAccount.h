//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/IMAPAccount.h>

#import <IMAP/MFOAuth2TokenAuthProtocol-Protocol.h>

@class NSString;

@interface YahooAccount : IMAPAccount <MFOAuth2TokenAuthProtocol>
{
}

+ (_Bool)usernameIsEmailAddress;
+ (unsigned int)deliveryAccountPortNumber;
+ (_Bool)deliveryAccountUsesSSL;
+ (id)deliveryAccountHostname;
+ (_Bool)primaryDeliveryAccountIsDynamic;
+ (_Bool)getConfigurationFromServerForEmail:(id)arg1;
+ (id)emailAddressWithUsername:(id)arg1;
+ (_Bool)isPredefinedAccountType;
+ (id)hostname;
+ (_Bool)usesSSL;
+ (_Bool)isSSLEditable;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (id)accountTypeIdentifier;
+ (id)authSchemesForAccountClass;
- (id)displayUsername;
- (id)_deliveryAccountCreateIfNeeded:(_Bool)arg1;
- (unsigned long long)minUID;
- (_Bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)saveSentFolder;
- (id)iconString;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;
- (id)URLForMessage:(id)arg1;
- (id)transferDisabledMailboxUids;
- (id)emailAddresses;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (unsigned long long)credentialAccessibility;
- (id)preferredAuthScheme;
- (_Bool)shouldDisplayHostnameInErrorMessages;
- (id)statisticsKind;
- (id)hostname;
- (unsigned int)portNumber;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
