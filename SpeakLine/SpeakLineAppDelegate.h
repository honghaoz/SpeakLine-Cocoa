//
//  SpeakLineAppDelegate.h
//  SpeakLine
//
//  Created by Zhang Honghao on 2/2/14.
//  Copyright (c) 2014 org-honghao. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SpeakLineAppDelegate : NSObject <NSApplicationDelegate> {
    NSSpeechSynthesizer *_speechSynth;
}

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (weak) IBOutlet NSPopUpButton *voiceSelectionButton;
@property (weak) IBOutlet NSButton *premiumCheck;

//@property (weak) IBOutlet NSTextField *textField;
@property (weak) IBOutlet NSTextField *numbers;
@property (unsafe_unretained) IBOutlet NSTextView *textView;

- (IBAction)checkPremium:(id)sender;

- (IBAction)saveAction:(id)sender;

- (IBAction)selectVoice:(id)sender;

- (IBAction)sayIt:(id)sender;

- (IBAction)stopIt:(id)sender;

- (IBAction)countIt:(id)sender;
@end
