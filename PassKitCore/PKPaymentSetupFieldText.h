//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSString;

@interface PKPaymentSetupFieldText : PKPaymentSetupField
{
    _Bool _secureText;
    _Bool _secureVisibleText;
    _Bool _numeric;
    _Bool _luhnCheck;
    unsigned long long _minLength;
    unsigned long long _maxLength;
    NSString *_displayFormatPlaceholder;
}

@property(copy, nonatomic) NSString *displayFormatPlaceholder; // @synthesize displayFormatPlaceholder=_displayFormatPlaceholder;
@property(nonatomic, getter=useLuhnCheck) _Bool luhnCheck; // @synthesize luhnCheck=_luhnCheck;
@property(nonatomic, getter=isNumeric) _Bool numeric; // @synthesize numeric=_numeric;
@property(nonatomic, getter=isSecureVisibleText) _Bool secureVisibleText; // @synthesize secureVisibleText=_secureVisibleText;
@property(nonatomic, getter=isSecureText) _Bool secureText; // @synthesize secureText=_secureText;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)arg1;
- (id)displayFormatPaddingPrefix;
- (void)updateDisplayFormat:(id)arg1;
- (id)displayFormatPaddingCharacters;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (_Bool)hasDisplayFormat;
- (_Bool)submissionStringMeetsAllRequirements;
- (id)submissionString;
- (id)displayString;
- (void)setCurrentValue:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end

