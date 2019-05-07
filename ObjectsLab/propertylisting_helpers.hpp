#ifndef PROPERTYLISTING_HELPERS_HPP
#define PROPERTYLISTING_HELPERS_HPP

#include <string>
#include <vector>
#include "propertylisting.hpp"

void print_prompt();

void print_listings(const std::vector<PropertyListing>& listings);//changing this helper function

void print_averages(const std::vector<PropertyListing>& listings);

void print_maxes(const std::vector<PropertyListing>& listings);//changing this helper function

void add_listing(const std::string& address, int price,//changing this helper function
                 int sqft, std::vector<PropertyListing>& listings);

#endif // PROPERTYLISTING_HELPERS_HPP
