#import <Cocoa/Cocoa.h>
#import <Breakpad/Breakpad.h>

@class SUUpdater;

extern BreakpadRef gBreakpad;
void k_breakpad_init();

@interface KAppDelegate : NSObject <NSApplicationDelegate> {
  IBOutlet SUUpdater *sparkleUpdater_;
}

- (IBAction)newWindow:(id)sender;
- (IBAction)newDocument:(id)sender;  // "New tab"

- (void)openURL:(NSURL*)url;

/*-(void)openDocumentInWindow:(KBrowserWindowController*)windowController
                     sender:(id)sender;*/

@end
