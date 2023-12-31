import http.server
import socketserver
import os

PORT = 8000
DIRECTORY = 'mypage'

Handler = http.server.SimpleHTTPRequestHandler

with socketserver.TCPServer(("", PORT)), Handler) as httpd:
    print(f"Serving at port{PORT}")
    http.server_forever()