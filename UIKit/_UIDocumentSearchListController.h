//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIDocumentListController.h>

@class NSString, _UIDocumentPickerSearchContainerModel;

@interface _UIDocumentSearchListController : _UIDocumentListController
{
    _UIDocumentPickerSearchContainerModel *_model;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
- (void).cxx_destruct;
- (_Bool)shouldShowSearch;
@property(retain, nonatomic) NSString *queryString;
- (id)init;

@end

