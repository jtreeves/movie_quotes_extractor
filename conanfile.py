from conans import CMake, ConanFile

class MovieQuotesExtractorConan(ConanFile):
    name = "MovieQuotesExtractor"
    version = "0.1"
    license = "MIT"
    author = "Jackson Reeves"
    url = "https://github.com/jtreeves/movie_quotes_extractor"
    description = "Allows users to extract a list of all quotes from a movie's script"
    topics = ("movies", "quotes", "web scraping")
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False], "fPIC": [True, False]}
    default_options = {"shared": False, "fPIC": True}
    generators = "cmake"
    exports_sources = "src/*"

    def build(self):
        cmake = CMake(self)
        cmake.configure(source_folder="src")
        cmake.build()

    def package(self):
        self.copy("*.h", dst="include", src="src")
        self.copy("*.a", dst="lib", keep_path=False)

    def package_info(self):
        self.cpp_info.libs = ["MovieQuotesExtractor"]
