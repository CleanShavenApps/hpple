//
//  XPathQuery.h
//  FuelFinder
//
//  Created by Matt Gallagher on 4/08/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

typedef enum : NSInteger {
	TFHppleFetchRawContentNever,
	TFHppleFetchRawContentTopLevelNodesOnly,
	TFHppleFetchRawContentTopLevelAndChildNodes,		// Excludes grandchildren
	TFHppleFetchRawContentAllNodes
} TFHppleFetchRawContent;

NSArray *PerformHTMLXPathQuery(NSData *document, NSString *query, TFHppleFetchRawContent wantsRawContent);
NSArray *PerformXMLXPathQuery(NSData *document, NSString *query, TFHppleFetchRawContent wantsRawContent);
