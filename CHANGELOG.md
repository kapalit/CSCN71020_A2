# Changelog

All notable changes to this project will be documented in this file.

## [1.1.0] - 2026-01-05

### Added
- Comprehensive README.md with detailed project documentation
- Cross-platform Makefile for building outside Visual Studio
- Proper code documentation and comments
- Enhanced user feedback messages
- Input validation error messages
- Exit confirmation message

### Fixed
- Changed `void main()` to `int main()` for standard compliance
- Improved perimeter calculation (simplified from `*length + *length + *width + *width` to `2 * (*length + *width)`)
- Fixed typo in menu option ("Rectange" → "Rectangle")
- Enhanced error handling with descriptive messages
- Added range information in input prompts

### Changed
- Improved code structure and readability
- Better function organization with grouped declarations in header
- Enhanced user experience with clearer prompts and feedback
- More descriptive error messages for validation failures

### Technical Improvements
- Added proper header documentation
- Consistent code formatting and indentation
- Better variable naming and organization
- Improved comments and documentation

## [1.0.0] - Original

### Added
- Basic rectangle calculator functionality
- Interactive menu system
- Length and width validation
- Perimeter and area calculations
- Comprehensive unit test suite
- Visual Studio project structure
