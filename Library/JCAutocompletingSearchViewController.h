#import <UIKit/UIKit.h>
#import "JCAutocompletingSearchViewControllerDelegate.h"

@interface JCAutocompletingSearchViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate>

@property (weak, nonatomic) NSObject<JCAutocompletingSearchViewControllerDelegate>* delegate;
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (weak, nonatomic) IBOutlet UITableView *resultsTableView;
@property (strong, nonatomic) NSArray* results;
@property (weak, nonatomic) IBOutlet UIView *fakeBorder;

+ (JCAutocompletingSearchViewController*) autocompletingSearchViewController;

- (IBAction)cancelClicked:(id)sender;

- (void) resetSelection;
- (void) setSearchBarTextAndPerformSearch:(NSString*)query;
- (NSDictionary*) resultForRowAtIndex:(NSUInteger)resultIndex;

@end
