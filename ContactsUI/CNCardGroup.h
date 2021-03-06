//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsUI/NSCopying-Protocol.h>

@class CNContact, NSArray, NSMutableArray, NSString;

@interface CNCardGroup : NSObject <NSCopying>
{
    NSMutableArray *_items;
    NSMutableArray *_actions;
    NSArray *_actionItems;
    _Bool _useSplitActions;
    _Bool _addSpacerFromPreviousGroup;
    CNContact *_contact;
    NSString *_title;
}

+ (id)groupForContact:(id)arg1;
@property(nonatomic) _Bool addSpacerFromPreviousGroup; // @synthesize addSpacerFromPreviousGroup=_addSpacerFromPreviousGroup;
@property(nonatomic) _Bool useSplitActions; // @synthesize useSplitActions=_useSplitActions;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (id)_loadActionItems;
- (id)description;
- (void)removeActionWithTitle:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)addAction:(id)arg1 withTitle:(id)arg2 color:(id)arg3 transportType:(long long)arg4;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(_Bool)arg4;
- (void)addAction:(id)arg1 withTitle:(id)arg2;
@property(readonly, nonatomic) NSArray *actionItems;
@property(readonly, nonatomic) NSArray *editingItems;
@property(readonly, nonatomic) NSArray *displayItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContact:(id)arg1;

@end

