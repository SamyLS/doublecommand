#import <PreferencePanes/PreferencePanes.h>

#import "KeyCaptureWindow.h"


@class RemapListController;
@class ProfileController;

@interface PreferencePaneController : NSPreferencePane <KeyCapturePanelDelegate>
{
  ProfileController* profileController;
  
  IBOutlet RemapListController* listController;
  IBOutlet KeyCaptureWindow* captureWindow;
  IBOutlet NSTextField* statusLabel;
  IBOutlet NSButton* activateButton;
  IBOutlet NSButton* deactivateButton;
  IBOutlet NSButton* deleteButton;
  IBOutlet NSButton* clearButton;
}

@property(readwrite,retain) RemapListController* listController; 
@property(readwrite,retain) KeyCaptureWindow* captureWindow;
@property(readwrite,retain) NSTextField* statusLabel;
@property(readwrite,retain) NSButton* activateButton;
@property(readwrite,retain) NSButton* deactivateButton;
@property(readwrite,retain) NSButton* deleteButton;
@property(readwrite,retain) NSButton* clearButton;

-(IBAction)activateDoubleCommandButtonClicked:(NSButton*)sender;
-(IBAction)deactivateDoubleCommandButtonClicked:(NSButton*)sender;

-(IBAction)addNewEntryButtonClicked:(NSButton*)sender;
-(IBAction)deleteEntryButtonClicked:(NSButton*)sender;
-(IBAction)clearRemapListButtonClicked:(NSButton*)sender;
-(IBAction)saveProfileClicked:(NSMenuItem*)sender;
-(IBAction)loadProfileClicked:(NSMenuItem*)sender;

@end
